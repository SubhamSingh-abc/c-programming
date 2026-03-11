//Deleting first node : 
#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* next;
};
int main(){
    struct node* head = malloc(sizeof(struct node));
    struct node* second = malloc(sizeof(struct node));
    head->data = 100;
    head->next = second;
    second->data = 200;
    second->next = NULL;
    struct node* newnode = malloc(sizeof(struct node));
    newnode->data = 300;
    newnode->next = NULL;
    struct node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
    temp = head;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
    temp = head;
    head = head->next;
    free(temp);
    temp = head;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    temp = head;
    while(temp != NULL){
        struct node* next = temp->next;
        free(temp);
        temp = next;
    }
    return 0;
}




// #include <stdio.h>
// #include <stdlib.h>
// struct node{
//     int data;
//     struct node* next;
// };
// int main (){
//     struct node* head = malloc(sizeof(struct node));
//     struct node* second = malloc(sizeof(struct node));
//     head->data=100;
//     head->next=second;
//     second->data=200;
//     second->next=NULL;
//     struct node* newnode = malloc(sizeof(struct node));
//     newnode->data=300;
//     newnode->next=NULL;
//     struct node* temp = head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=newnode;
//     temp=head;
//     while(temp!=NULL){
//         printf("%d ",temp->data);
//         temp=temp->next;
//     }
//     printf("\n");
//     temp=head;
//     head=head->next;
//     free(temp);
//     temp=head;
//     while(temp!=NULL){
//         printf("%d ",temp->data);
//         temp=temp->next;
//     }
//     temp=head;
//     while(temp!=NULL){
//         struct node* next = temp->next;
//         free(temp);
//         temp=next;
//     }
//     return 0;
// }