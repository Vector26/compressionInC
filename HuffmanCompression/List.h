#include <stdio.h>
#include <stdlib.h>
struct list{
    int freq;
    unsigned char key;
    struct list *next;
    struct tree *node;
};
struct list *current=NULL;
struct list *head=NULL;


struct list* getMinLink()
{
    struct list *temp=head;
    struct list *minLink=(struct list *)malloc(sizeof(struct list));
    int minFreq=temp->freq;
    while(temp!=NULL)
    {
        if(temp->freq<minFreq)
        {
            minFreq=temp->freq;
            minLink=temp;
        }
        //printf("%d  :%c\n",temp->freq,temp->key);
        temp=temp->next;
    }
    return minLink;
};
struct list* valueAt(int n)
{   struct list *temp=head;
    int c=0;
    while(temp!=NULL && c!=n){
        //printf("%d  :%c\n",temp->freq,temp->key);
        c++;
        temp=temp->next;
    }
    return(temp);
}

void display()
{   struct list *temp=head;
    while(temp!=NULL)
    {
        printf("%d  :%c\n",temp->freq,temp->key);
        temp=temp->next;
    }
    //return(temp);
}

void createNode(struct list *m,int freq,unsigned char key)
{
    m->freq=freq;
    m->key=key;
    m->next=NULL;
    m->node=NULL;
}


void Rem(int n)
{
struct list *temp=valueAt(n-1);
struct list *temp2=temp->next->next;
free(temp->next);
temp->next=temp2;
}

void Add(int freq,unsigned char key)
{
    if(current==NULL)
        {
        current=(struct list *)malloc(sizeof(struct list));
        createNode(current,freq,key);
        head=current;
        }
    else
        {
        struct list *current2=(struct list *)malloc(sizeof(struct list));
        current->next=current2;
        createNode(current2,freq,key);
        current=current2;
        }
}
