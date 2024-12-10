// B
#include<stdio.h>
void main(){
  int  sum=0,n;
 int sign=1;
    
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum+=i*i*sign;
        sign*=-1;
    }
    printf("%d",sum);
     

}
// A
#include<stdio.h>
void main(){
  int  sum=0,n;
 int sign=1;
    
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum+=i*i*sign;
        sign*=1;
    }
    printf("%d",sum);
     

}
// C
#include<stdio.h>
void main(){
  int sum=0,n;
 int sign=1;
 int f=1;
    
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        f=f*i;
        sum=sum+f;
    }
    printf("%d",sum);
     

}
// D
#include<stdio.h>
void main(){
  int sum=0,n;
 int sign=1;
 int f=1;
    
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        f=f*i;
        sum=sum+f*sign;
        sign=sign*-1;
    }
    printf("%d",sum);
     

}
// E
#include<stdio.h>
void main(){
  int sum=0,n;
 int sign=1;
 
    
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
   
        sum=sum+(2*i-1)*sign;
        sign=sign*-1;
    }
    printf("%d",sum);
     

}
// F
#include<stdio.h>
void main(){
  int sum=0,n;
 int sign=1;
 
    
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
   
        sum=sum+(2*i-1)*(2*i-1)*sign;
        sign=sign*-1;
    }
    printf("%d",sum);
     

}
// G
#include<stdio.h>
void main(){
  float sum=0;
  int n;
 int sign=1;
 float f=1;
    
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        f=f*i;
        sum=sum+i/f;
    }
    printf("%f",sum);
     

}
// H
#include<stdio.h>
void main(){
  int num=1;
  int x=3;
  float sum=1;
  int n;
 int sign=1;
 float f=1;
    
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        num=num*x;
        f=f*i;
        sum=sum+num/f;
    }
    printf("%f",sum);
     

}
// I
#include<stdio.h>
void main(){
  int num=1;
  int x=3;
  float sum=1;
  int n;
 int sign=-1;
 float f=1;
    
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        num=num*x;
        f=f*i;
        sum=sum+num/f*sign;
        sign=sign*-1;
    }
    printf("%f",sum);
     

}
// K
#include<stdio.h>
void main(){
  int num=1;
  double x;
  double sum=1;
  int n;
 int sign=-1;
 double f=1;
    
    scanf("%d%lf",&n,&x);\
    x*=22/1260;
    for(int i=1;i<=n-1;i++)
    {
        num=num*x*x;
        f=f*(2*i-1)*(2*i);
        sum=sum+(num/f)*sign;
        sign=sign*-1;
    }
    printf("%lf",sum);
     

}

