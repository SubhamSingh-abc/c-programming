//reading linked list
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data ;
    struct Node* next ;
} ;
int main () {
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    head -> data = 100 ;
    head -> next = second ;
    second -> data = 101 ; 
    second -> next = NULL ;
    struct Node* temp = head ;
    while(temp != NULL){
        printf("%d ",temp -> data);
        temp = temp -> next ;
    }
    free(second);
    free(head);
    return 0;
}




/*#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data ;
    struct Node* next ;
} ; 
int main () {
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    head -> data = 100 ;
    head -> next = second ;
    second -> data = 200 ;
    second -> next = NULL ;
    struct Node* temp = head ;
    while(temp != NULL){
        printf("%d ",temp -> data);
        temp = temp -> next ;
    }
    free(second);
    free(head);
    return 0;
}*/