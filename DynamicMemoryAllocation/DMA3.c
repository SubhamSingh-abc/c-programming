/*Write a C program that:
Asks the user: “How many students’ marks do you want to enter initially?”
Allocates memory dynamically using calloc() for that many integers.
Inputs marks from the user.
Asks the user if they want to add more students. If yes, uses realloc() to expand the memory and inputs additional marks.
Calculates and prints the highest and lowest marks.
Frees the allocated memory at the end.*/

// ptr = (type*) realloc(ptr, new_number_of_elements * sizeof(type));

#include <stdio.h>
#include <stdlib.h>
int main (){
    int *marks ;
    int n , max , min , choice , extra = 0 ; 
    printf("Enter the number of students marks you want to save : ");
    scanf("%d",&n);
    marks = (int*) calloc(n , sizeof(int));
    if(marks == NULL){
        printf("Memory allocation failed !!\n");
        return 1;
    }
    for(int i = 0 ; i<n ; i+=1){
        printf("Enter student %d marks : ",i+1);
        scanf("%d",&marks[i]);
    }
    printf("Do you want to add marks of more students [if yes Enter 1 else 0]: ");
    scanf("%d",&choice);
    if(choice == 1){
        printf("Number of extra student you want to add : ");
        scanf("%d",&extra);
    }
    int total = n + extra ;
    marks = (int*)realloc(marks , total * sizeof(int));
    if(marks == NULL){
        printf("Memory allocation failed !!\n");
        return 1;
    }
    for(int i = n ; i<total ; i+=1){
        printf("Enter marks of student %d : ",i+1);
        scanf("%d",&marks[i]);
    }
    n = total ;
    max = min = marks[0];
    for(int i = 0 ; i<n ; i+=1){
        if(marks[i]>max){
            max = marks[i];
        }
        if(marks[i]<min){
            min = marks[i];
        }
    }
    printf("Max mark is : %d\n",max);
    printf("Min mark is : %d\n",min);
    free(marks);
    return 0;
}