/*Your First calloc() Task
Program Requirements:
Ask the user: “How many students?”
Allocate memory using calloc() for storing marks
Take input marks from the user
Calculate and print:
Highest mark
Lowest mark
Free the memory using free()*/

// type *ptr = (type*) calloc(number_of_elements, sizeof(type));

#include <stdio.h>
#include <stdlib.h>
int main (){
    int *arr ;
    int n , max , min ;
    printf("Enter number of students : ");
    scanf("%d",&n);
    arr = (int*) calloc(n, sizeof(int));
    if(arr == NULL){
        printf("Memory not allocated !! ");
    }
    for(int i = 0 ; i<n ; i+=1){
        printf("Enter marks of student %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    max = min = arr[0] ;
    for(int i = 0 ; i<n ; i+=1){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    for(int i = 0 ; i<n ; i+=1){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    printf("Highest element is : %d\n",max);
    printf("Lowest element is : %d\n",min);
    free(arr);
    return 0;
}