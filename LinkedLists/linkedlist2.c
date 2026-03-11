//creating two nodes and linking it to form linked list
//linking the nodes 
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data ;
    struct Node* next ;
} ;
int main () {
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    head -> data = 10 ;
    head -> next = second ;
    second -> data = 100 ;
    second -> next = NULL ;
    free(second);
    free(head);
    return 0;
}


/*#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data ;
    struct Node* next ;
};
int main () {
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    head -> data = 10 ;
    head -> next = second ;
    second -> data = 20 ;
    second -> next = NULL ;
    free(second);   
    free(head);
    return 0;
}*/