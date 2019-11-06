#include<stdio.h>
#include<stdlib.h>

struct node
{
    int a;
    struct node next*;
};

struct stack
{
    struct node *head;
    struct node *top;
};

void push(struct node *,int );
int pop(struct node *);

int main(){
    struct stack s;
    
}