// NULL head + newnode
#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* next;
};
int main () {
    struct node* head = NULL;
    struct node* newnode = malloc(sizeof(struct node));
    newnode->data = 500;
    newnode->next = NULL;
    if(head == NULL){
        head = newnode;
    } else {
        struct node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newnode;
    }
    struct node* temp = head;
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