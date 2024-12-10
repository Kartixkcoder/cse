#include<stdlib.h>
#include<stdio.h>

void initialize(*s)
{
    s->Top=-1;
}

int IsEmpty(*s)
{
    if(s->Top==-1) return 1;
    else return 0;
}

int StackTop(*s)
{
    int x;
    x=s->item[s->Top];
    return x;
}

char StackTopc(*s)
{
    char x;
    x=s->item[s->Top];
    return x;
}

void Push(*s,int x)
{
    
    if(s->Top==MAXSIZE-1)
    {
        printf("stack overflows");
        exit(1);
    }
    else{
        s->Top=s->Top+1;
        s->item[s->Top]=x;
    }
}

void Pushc(*s,char x)
{
    
    if(s->Top==MAXSIZE-1)
    {
        printf("stack overflows");
        exit(1);
    }
    else{
        s->Top=s->Top+1;
        s->item[s->Top]=x;
    }
}

int Pop(*s)
{
    int x;
    if(IsEmpty(s))
    {
        printf("stack underflow");
        exit(1);
    }
    else{
        x=s->item[s->Top];
        s->Top=s->Top-1;
        return x;

    }
}

char Popc(*s)
{
    char x;
    if(IsEmpty(s))
    {
        printf("stack underflow");
        exit(1);
    }
    else{
        x=s->item[s->Top];
        s->Top=s->Top-1;
        return x;

    }
}

int StackTop(*s)
{
    int x;
    x=s->item[s->Top];
    return x;
}

// pow
#include<stdio.h>
 long long int Pow (int a, int n)
{
 long long int x;
if(n==0)
 return 1;
 else{
 x=Pow(a,n/2);
 if(n%2==0)
 return x*x;
 else return a*x*x;
 }
}
void main(){
    printf("%d",Pow(2,5));
}
// tri number 
#include<stdio.h>
int TriNumber(int n)
{
    if(n==0) return 0;
    else return(TriNumber(n-1)+n);
}

int CheckTriNumber(int i,int n)
{   
    if(n==0) return 1;
    if(n<0) return 0;
    else{
        CheckTriNumber(i+1,n-i);
    }
}

void main()
{
    printf("%d",CheckTriNumber(1,17));
}
// SUM OF DIGITS
#include<stdio.h>
int SumOfDigits(int n){
    if(n==0) return 0;
    else return(n%10 + SumOfDigits(n/10));
}
void main(){
    printf("%d",SumOfDigits(1017));
}
