#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node*left;
    struct node*right;
};

/**************/

struct node * MakeNode(int x)
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=x;
    p->left=NULL;
    p->right=NULL;
    return p;
}

/***************/

struct node*BSTInsertion(struct node*root,int x)
{
    struct node*p,*q;
    p=root;
    q=NULL;
    while(p!=NULL)
    {
        q=p;
        if(x<p->data)
        {
            p=p->left;
        }
        else{
            p=p->right;
        }
    }
    if(x<q->data)
    {
        q->left=MakeNode(x);
    }
    else{
        q->right=MakeNode(x);
    }
    return root;
}

/**************/

void InOrderTraversal(struct node*T)
{
    if(T!=NULL)
    {
        InOrderTraversal(T->left);
        printf("%d  " , T->data);
        InOrderTraversal(T->right);

    }
}

/**************/
int Minimum(struct node* root)
{
    struct node*p;
    p=root;
    while(p->left!=NULL)
    {
        p=p->left;
    }
    return (p->data);

}
/**********************/
int Maximum(struct node* root)
{
    struct node*p;
    p=root;
    while(p->right!=NULL)
    {
        p=p->right;
    }
    return (p->data);

}


/*************/

int main()
{
    struct node*root;
    root=NULL;
    root=MakeNode(105);
    root=BSTInsertion(root ,40);
    root=BSTInsertion(root ,45);
    root=BSTInsertion(root ,50);
    root=BSTInsertion(root ,100);
    root=BSTInsertion(root ,120);
    root=BSTInsertion(root ,160);
    root=BSTInsertion(root ,170);

    InOrderTraversal(root);
   
    printf("\n\n");
    printf("%d ",Minimum(root));
    printf("%d ",Maximum(root));
        return 0;
}