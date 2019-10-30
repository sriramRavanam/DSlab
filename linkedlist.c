#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node{
    char *name;
    struct node *next;
};

void insert(struct node *,char *);
void delete(struct node *,char *);
void display(struct node *);

int main(){
    struct node *ptr = (struct node *)malloc(3*sizeof(struct node));
    struct node *head = ptr;
    struct node *t1 = ptr;
    
    t1->name = "Akanksha";
    t1->next = t1+1;
    t1 = t1->next;
    
    t1->name = "John Wick";
    t1->next = t1+1;
    t1 = t1->next;

    t1->name = "Sriram";
    t1->next = NULL;
    

    //initial display
    display(head);
    printf("\n");

    //insert and display
    insert(head,"AAkash");
    display(head);

    //deleting first element
    delete(head,"Akanksha");
    display(head);
//start
    //char *n1;
     //       scanf("%s",n1);
     //       insert(t1,n1);
/*    int choice;
    while(1){
        printf("enter choice...\n1.Insert\n2.delete\n3.exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            char *n1;
            scanf("%s",n1);
            insert(t1,n1);
            display(t1);
            break;
        
        case 2:
            char *n1;
            scanf("%s",n1);
            delete(t1,n1);
            display(t1);
            break;
        case 3:
            exit(1);    
        
        default:
            printf("invalid condition\n");
        }
    }*/
}

void insert(struct node *ptr,char *n){
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->name = n;
    if(strcmp((ptr->name),(temp->name))>=0){
        printf("hi\n");
        temp->next = ptr;
        ptr = temp;
    }
    else
    {
        
    
    
        while(strcmp((temp->name),(ptr->next->name))>0){
            ptr=ptr->next;
        }
            temp->next = ptr->next;
            ptr->next = temp;
    }

    //temp->next = ptr->next;
    //ptr->next = temp;
}
void display(struct node *ptr){
    while(ptr != NULL){
        
        printf("%s \n",(ptr->name));
        ptr = ptr->next;
    }
    printf("\n");
}

void delete(struct node *ptr,char *n){
    if(strcmp(ptr->name,n)==0){
        //printf("hi\n");
        ptr=ptr->next;
    }
    else{  
        while(strcmp(ptr->next->name,n)!=0){
            ptr=ptr->next;
        }
        ptr->next = ptr->next->next;
    }
}
