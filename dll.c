#include<stdio.h>
#include<stdlib.h>  

struct node{
    int element;
    struct node *next;
    struct node *prev;
};

void insert(struct node **,int x, int key);
void delete(struct node *,int key);
void display(struct node *);

int main(){
    struct node *p;
    struct node *head=p;
    struct node *t1=p;
    head->element = 5;

    head->next=NULL;
    head->prev=NULL;
    insert(&head,5,5);
    display(head);
    insert(&head,5,5);
    insert(&head,5,5);
    printf("%d",head->element);
    //insert(&head,6,5);
    //insert(&head,10,4);
    //insert(&head,15,10);
    //insert(&head,5,4);
    display(head);
}

void insert(struct node **p,int x, int key){
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    while((*p)->element != key && (*p)->next != NULL){
        if((*p) == NULL){
            (*p)->element = temp->element;
            (*p)->next = temp;
            temp->next = NULL;
            temp->prev = (*p);
            break;
        }
        else if((*p)->next == NULL){
            (*p)->next = temp;
            temp->next = NULL;
            temp->prev = (*p);
            break;
        }
        else if((*p)->element == key){
            (*p)->prev->next = temp;
            temp->prev = (*p)->prev;
            (*p)->prev = temp;
            temp->next = (*p);
            break;
        }
        else
        {
            printf("\n error \n this line should never come\n");
        }
        (*p)=(*p)->next;
    }
}

void display(struct node *p){
    while(p->next != NULL){
        printf("%d \t",p->element);
        p=p->next;
    }
    printf("\n");
}
