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
    


    display(head);
    printf("\n");

    insert(head,"Priyanka");
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
    if(strcmp((ptr->name),(temp->name))>0){
        temp->next = ptr->next;
        ptr = temp;
        return;
    }
    else
    {
        /* code */
    
    
        while(strcmp((temp->name),(ptr->next->name))>0){
            ptr=ptr->next;
        }
    }

    temp->next = ptr->next;
    ptr->next = temp;
}
void display(struct node *ptr){
    while(ptr != NULL){
        
        printf("%s \n",(ptr->name));
        ptr = ptr->next;
    }
}