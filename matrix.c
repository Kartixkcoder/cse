#include<stdio.h>
void main(){
    int a[3][3]={1,2,3,4,5,6,7,8,9},b[3][3];
    int n=3;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            b[j][i]=a[i][j];
        }
    }



    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
}

//transpose using other matrix
#include<stdio.h>
void main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int b[3][3];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",b[i][j]);
        }
        printf("\n");
    }

}

//transpose using same matrix
#include<stdio.h>
void main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int b[3][3];
    int i,j,t=a[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<i;j++)
        {
            t=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=t;


        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }

}

//transpose of a non-square matrix
#include<stdio.h>
void main()
{
    int a[100][100],b[100][100],i,j,r,c;
    printf("enter no of rows and columns:");
    scanf("%d%d",&r,&c);
    printf("enter elements");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

}
// 90 degree rotate clockwise //
#include<stdio.h>
void main()
{
    int a[100][100],b[100][100],i,j,r,c,s,e,t=b[0][0];
    printf("enter no of rows and columns:");
    scanf("%d%d",&r,&c);
    printf("enter elements");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    for(i=0;i<c;i++)
    {
        s=0;
        e=r-1;
        while(s<e)
        {
            t=b[i][s];
            b[i][s]=b[i][e];
            b[i][e]=t;
            s++;
            e--;
        }
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

}
// rotate anticlockwise //
#include<stdio.h>
void main()
{
    int a[100][100],b[100][100],i,j,r,c,s,e,t=b[0][0];
    printf("enter no of rows and columns:");
    scanf("%d%d",&r,&c);
    printf("enter elements");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    for(j=0;j<r;j++)
    {
        s=0;
        e=c-1;
        while(s<e)
        {
            t=b[s][j];
            b[s][j]=b[e][j];
            b[e][j]=t;
            s++;
            e--;
        }
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

}
// 180 degree //
#include<stdio.h>
void main(){

int n = 3;
    int matrix[3][3] = {1,2,3,4,5,6,7,8,9};
    
    for (int i=0;i<n*n/2;i++) {
        int row1=i/n, col1=i%n;
        int row2 = (n*n-1-i)/n, col2=(n*n-1-i)%n;
        int temp = matrix[row1][col1];
        matrix[row1][col1] = matrix[row2][col2];
        matrix[row2][col2] = temp;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
/ addition of two matrices
#include<stdio.h>
void main()
{
    int a[100][100], b[100][100],i,j,n,m,p,q, c[100][100];
    printf("enter order of first matrix");
    scanf("%d%d",&n,&m);
    printf("enter order of second matrix");
    scanf("%d%d",&p,&q);
    if(n==p && m==q)
    {
        printf("enter elements of first matrix");
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
         printf("enter elements of second matrix");

        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<q;j++)
            {
                c[i][j]=a[i][j]+b[i][j];
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }

    }
    else
    {
        printf("addition not possible");
    }

}


// subtraction of two matrices
#include<stdio.h>
void main()
{
    int a[100][100], b[100][100],i,j,n,m,p,q, c[100][100];
    printf("enter order of first matrix");
    scanf("%d%d",&n,&m);
    printf("enter order of second matrix");
    scanf("%d%d",&p,&q);
    if(n==p && m==q)
    {
        printf("enter elements of first matrix");
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
         printf("enter elements of second matrix");

        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<q;j++)
            {
                if(a[i][j]> b[i][j]) c[i][j]=a[i][j]-b[i][j];
                else c[i][j]=b[i][j]-a[i][j];
                
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }

    }
    else
    {
        printf("subtraction not possible");
    }

}


// multiplication of two matrices
#include<stdio.h>
void main()
{
    int a[100][100], b[100][100],i,j,k,n,m,p,q, c[100][100];
    printf("enter order of first matrix");
    scanf("%d%d",&m,&n);
    printf("enter order of second matrix");
    scanf("%d%d",&p,&q);
    if(n==p)
    {
        printf("enter elements of first matrix");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
         printf("enter elements of second matrix");

        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<m;i++)
        {
            
            for(j=0;j<q;j++)
            {
                c[i][j]=0;
               for(k=0;k<n;k++)
               {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
                
               }
            }
        }
        for(i=0; i<m; i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }

    }
    else
    {
        printf("multiplication not possible");
    }

}