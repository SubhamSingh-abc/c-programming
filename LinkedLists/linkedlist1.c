//linked list 
//creating node
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data ;
    struct Node* next ;
} ;
int main () {
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head -> data = 10 ;
    head -> next = NULL ;
    free(head) ;
    head = NULL ;
    return 0;
}



/*#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data ;
    struct Node* next ;
};
int main () {
    struct Node* head ;
    head = (struct Node*)malloc(sizeof(struct Node));   
    head -> data = 10 ;
    head -> next = NULL ;
    free(head);
    head = NULL ;   
    return 0;
}*/