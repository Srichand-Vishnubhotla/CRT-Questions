#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *left;
    int data;
    struct node *right;
};

struct node * createnode(int d )
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=d;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
int height(struct node *root)
{
    int lh,rh;
    if(root==NULL)
    {
        return 0;
    }
    else
    {
        lh=height(root->left);

        rh=height(root->right);
        
        if(lh>rh)
        {
            return 1+lh;
        }
        else
        {
            return 1+rh;
        }
    }
}

int size(struct node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    else
    {
        return(1+size(root->left))+size(root->right);
    }
}

int compare(struct node *root1,struct node *root2)
{
    if((root1==NULL)&&(root2==NULL))
    {
        return 1;
    }
    if((root1==NULL)||(root2==NULL))
    {
        return 0;
    }
    if(root1->data!=root2->data)
    {
        return 0;
    }

    return compare(root1->left,root2->left)&&compare(root1->right,root2->right);
}
void inorder(struct node *root)
{
    if(root)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
void postorder(struct node *root)
{
    if(root)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
        
    }
}
void preorder(struct node *root)
{
    if(root)
    {   
        printf("%d ",root->data);
        preorder(root->left);
        postorder(root->right);
        
        
    }
}

void main()
{
    struct node *root1;
    struct node *root2;
    root1=createnode(1);
    root1->left=createnode(2);
    root1->right=createnode(3);
    root1->left->left=createnode(4);
    root1->left->right=createnode(5);
    root1->right->left=createnode(6);
    root1->right->right=createnode(7);
    
    root2=createnode(1);
    root2->left=createnode(2);
    root2->right=createnode(3);
    root2->left->left=createnode(4);
    root2->left->right=createnode(5);
    root2->right->left=createnode(6);
    root2->right->right=createnode(7);
    inorder(root1);
    printf("\n");
    preorder(root1);
    printf("\n");
    postorder(root1);
    printf("\n");
    int h=height(root1);
    printf("The height of the tree is %d ",h);
    printf("\n");
    printf("The size of the tree is %d",size(root1));
    int cmp=compare(root1,root2);
    printf("\n");
    if(cmp==1)
    {
        printf("Equal");
    }
    else
    {
        printf("Not equal");
    }
}