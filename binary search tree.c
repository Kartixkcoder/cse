#include<stdio.h>
#include<stdlib.h>
/****************************/
struct node
{
    struct node *father;
    int data;
    struct node *left;
    struct node *right;


};
/****************************/
struct node *MakeNode(int x)
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    p->data=x;
    p->left=NULL;
    p->right=NULL;
    p->father=NULL;
    return p;

}
/**********************/

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


/****************************/
struct node *BSTInsertion(struct node *root,int x)
{
    struct node *p,*q,*r;
    r=MakeNode(x);
    if(root==NULL){
        root=r;
        return r;
    }
    else{
        p=root;
    q=NULL;
    while (p!=NULL)
    {
        q=p;
        if (x<p->data)
        {
           p=p->left;
        }
        else
          {p=p->right;}
    }
    if (x<q->data)
    {
       q->left=r;
    }
    else
     { q->right=r;}
    
    }
    r->father=q;
    return root;
}
/****************************/
void InOrderTraversal(struct node*T)
{
    if(T!=NULL)
    {
        InOrderTraversal(T->left);
        printf("%d  " , T->data);
        InOrderTraversal(T->right);

    }
}
/****************************/
struct node *Successor(T,p){
    if p==NULL{
        return NULL;
    }
    if(p->right==NULL){
        return Minimum(p->right)
    }
}
/**********************/

int  main()
{
    struct node*root;
    root=NULL;
    root=MakeNode(100);
    root=BSTInsertion(root,40);
    root=BSTInsertion(root,100);
    root=BSTInsertion(root,50);
    root=BSTInsertion(root,45);
    root=BSTInsertion(root,160);
    root=BSTInsertion(root,120);
    root=BSTInsertion(root,170);
    InOrderTraversal(root);
    printf("\n\n")
    return 0;

}