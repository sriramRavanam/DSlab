#include<stdio.h>

struct node{
    int element;
    struct node *next;
    struct node *prev;
};

void insert(struct node *,int x, int key);
void delete(struct node *,int key);
int main(){
    struct node *p;
    struct node *head=p;
    head->element = 4;
    head->next=NULL;
    head->prev=NULL;
    printf("%d\n",head->element);
    insert(head,10,4);
    insert(head,15,10);
    insert(head,5,4);
}

void insert(struct node *p,int x, int key){
    //
}