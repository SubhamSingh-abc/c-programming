//inserting node at the end of linked list
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
int main () {
    struct Node* head = malloc(sizeof(struct Node));
    struct Node* second = malloc(sizeof(struct Node));
    head->data=200;
    head->next=second;
    second->data=250;
    second->next=NULL; 
    struct Node* newnode = malloc(sizeof(struct Node));
    newnode->data=300;
    newnode->next=NULL;
    struct Node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    free(newnode);
    free(second);
    free(head);
    return 0;
}