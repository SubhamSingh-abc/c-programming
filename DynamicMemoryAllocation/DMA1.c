/*1️. Asks the user:
“How many numbers do you want to enter?”
2️. Allocates memory dynamically using malloc() for that many integers
3️. Inputs the numbers from the user and stores them in the allocated memory
4️. Calculates and prints:
Sum of all numbers
Average of the numbers
5️. Frees the allocated memory using free()*/

// type *ptr = (type*) malloc(number_of_elements * sizeof(type));

#include <stdio.h>
#include <stdlib.h>
int main (){
    int *num ;
    int n , sum=0 ;
    float avg ;
    printf("Enter total numbers : ");
    scanf("%d",&n);
    num = (int*) malloc(n * sizeof(int)) ;
    if(num == NULL ){
        printf("Memory not allocated\n");
        return 1;
    }
    for(int i = 0 ; i<n ; i+=1){
        printf("Enter number %d : ",i+1);
        scanf("%d",&num[i]);
    }
    printf("Numbers which you entered : \n");
    for(int i = 0 ; i<n ; i+=1){
        printf("%d\n",num[i]);
    }
    for(int i = 0 ; i<n ; i+=1){
        sum+=num[i];
    }
    printf("Sum of the numbers are : %d\n",sum);
    avg = (float)sum / n ;
    printf("Average of numbers is : %.2f",avg);
    free(num);
    return 0;
}