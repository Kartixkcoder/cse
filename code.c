


#include<stdio.h>
void main(){
int n;
scanf("%d",&n);
   for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n-i;j++)
    {
        printf(" ");}
    for(int k=1;k<=i;k++){
            printf("%d",i);

    }
    printf("\n");

}
}*/
#include<stdio.h>
void main()
{   int t;
    int n,k;
    scanf("%d",&t);
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int i=n-k;
    int j=n-1;
    while(i<j)
    {
        int t=a[i];
        a[i]=a[j];
        a[j]=t;

    }
    int i=0;
    int j=n-k-1;
    while(i<j)
    {
        t=a[i};
        a[i]=a[j];
        a[j]=t;
        i++;
        j--;


}
for(int i=0;i<n;i++)
{
    printf("%d",a[i]);
}









//