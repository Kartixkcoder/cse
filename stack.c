struct Stack{
    char item[10];
    int top;
};
    struct Stack s;


void Initialize(){
    s.top=-1;
}

int isEmpty(){
    if(s.top==-1){
        return 1;
    }
    else{
        return 0;
    }
}


void push(char x){
    if(s.top==9){
        printf("Stack Overflow\n");
        exit(1);
    }
    else{
        s.top++;
        s.item[s.top]=x;
    }
}

char pop(){
    if(isEmpty()){
        printf("Stack Underflow\n");
        exit(1);
    }
    else{
        char x=s.item[s.top];
        s.top--;
        return x;
    }
}

char stacktop(){
    char x=s.item[s.top];
    return x;
}

int main(){
    Initialize();
    char s[10]="vermaji";
    int i=0;
    char x;
    //Reverse the string
    while(s[i]!='\0'){
        push(s[i]);
        i++;
    }
    i=0;
    // while(!isEmpty()){
    //     x=pop();
    //     s[i]=x;
    //     i++;
    // }
    // printf("%s",s);


    //Check for Palindrome

   while(!isEmpty()){
    if(stacktop()==s[i]){
        pop(s);
        i++;
    }
    else{
        break;
    }
   }

   if(isEmpty()){
       printf("Palindrome\n");
   }
   else{
       printf("Not Palindrome\n");
   }
    return 0;
}

// DECIMAL TO ANY BASE 
#include<stdlib.h>
#include<stdio.h>
#define MAXSIZE 50
struct stack
{
    char item[10];
    int Top;
};
struct stack s;
void initialize()
{
    s.Top=-1;
}
int IsEmpty()
{
    if(s.Top==-1) return 1;
    else return 0;
}
void Push(int x)
{
    
    if(s.Top==MAXSIZE-1)
    {
        printf("stack overflows");
        exit(1);
    }
    else{
        s.Top=s.Top+1;
        s.item[s.Top]=x;
    }
}
char Pop()
{
    int x;
    if(IsEmpty(s))
    {
        printf("stack underflow");
        exit(1);
    }
    else{
        x=s.item[s.Top];
        s.Top=s.Top-1;
        return x;

    }
}
char StackTop()
{
    char x;
    x=s.item[s.Top];
    return x;
}
 
void DecToAnyBase(int N, int b)
{
    char DAT[16]= {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    initialize(s);
    int r;
    int x;
    while(N!=0)
    {
        r=N%b;
        Push(r);
        N=N/b;
    }
    while(!IsEmpty(s))
    {
        x=Pop(s);
        printf("%c",DAT[x]);
    }
}
void main()
{
    int n,b;
    scanf("%d%d",&n,&b);
    DecToAnyBase(n,b);
}
// PARENTHESIS
#include<stdlib.h>
#include<stdio.h>
#define MAXSIZE 5
struct stack
{
    char item[10];
    int Top;
};
struct stack s;
void initialize()
{
    s.Top=-1;
}
int IsEmpty()
{
    if(s.Top==-1) return 1;
    else return 0;
}
void Push(char x)
{
    
    if(s.Top==MAXSIZE-1)
    {
        printf("stack overflows");
        exit(1);
    }
    else{
        s.Top=s.Top+1;
        s.item[s.Top]=x;
    }
}
char Pop()
{
    char x;
    if(IsEmpty(s))
    {
        printf("stack underflow");
        exit(1);
    }
    else{
        x=s.item[s.Top];
        s.Top=s.Top-1;
        return x;

    }
}
char StackTop()
{
    char x;
    x=s.item[s.Top];
    return x;
}

int ParenthesisOrder(char str[])
{
    initialize(s);
    int i=0;
    char x;
    while(str[i]!='\0')
    {
        x=str[i];
        if(x=='(')
        {
            Push(x);
        }
        else
        {
            if(!IsEmpty(s))
            {
                Pop();
            }
            else{
                return 0;
            }
        }
        i++;

    }
    if (IsEmpty(s))
    {
        return 1;

    }
    else
    {
        return 0;
    }



}
void main()
{
    char a[5]= "((())";
    int ans;
    ans= ParenthesisOrder(a);
    if(ans==0)
    {
        printf("incorrect");
    }
    else{
        printf("correct");
    }


}
