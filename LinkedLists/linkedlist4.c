// inserting a node at the beginning
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
int main () {
    struct Node* head = malloc(sizeof(struct Node));
    struct Node* second = malloc(sizeof(struct Node));
    head->data=100;
    head->next=second;
    second->data=125;
    second->next=NULL;
    struct Node* newnode = malloc(sizeof(struct Node));
    newnode->data=150;
    newnode->next=head;
    head=newnode;
    struct Node* temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    free(second);
    free(head->next);
    free(head);
    return 0;
}



/*#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
} ;
int main () {
    struct Node* head = malloc(sizeof(struct Node));
    struct Node* second = malloc(sizeof(struct Node));
    head->data=100;
    head->next=second;
    second->data=125;
    second->next=NULL;
    struct Node* newnode = malloc(sizeof(struct Node));
    newnode->data=150;
    newnode->next=head;
    head=newnode;
    struct Node* temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    free(second);
    free(head->next);
    free(head);
    return 0;
}*/