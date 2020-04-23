#include <stdio.h>
#include <stdlib.h>
#include "head.h"

void Display(tree R)
{
    if(R!=NULL)
    {
        Display(R->l);
        printf("%d ",R->val);
        Display(R->r);
    }
}


tree add(tree R,int val)
{
    struct node* neww;
    if(R==NULL)
    {
        neww=(struct node*)malloc(sizeof(struct node));
        neww->val=val;
        neww->l=NULL;
        neww->r=NULL;
        R=neww;
    }
    else
    {
        if(val<=R->val)  R->l=add(R->l,val);
        else  R->r=add(R->r,val);
    }
    return R;
}

int main()
{
    tree R=NULL; int i,val ;

     // to fill a tree with 7 nodes for example
     for(i=1;i<=7;i++)
    {
        printf("val= ");
        scanf("%d",&val);
        R=add(R,val);
    }

    // to display the tree
    Display(R);


    return 0;
}












