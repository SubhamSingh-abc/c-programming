//The school report card system stores subject marks for each student.
//Implement a solution to accept marks in 5 subjects, compute the total and percentage, and display the result.
#include <stdio.h>
int main (){
    int n = 5 ;
    int marks[5] , sum=0 ;
    float percentage ;
    printf("Enter the number of subject : ");
    scanf("%d",&n);
    for(int i = 0 ; i<n ; i+=1){
        printf("Enter marks of subject %d : ",i+1);
        scanf("%d",&marks[i]);
        sum+=marks[i];
    }
    printf("Sum of marks are : %d\n",sum);
    percentage=(sum)/500.00*100.00;
    printf("Percentage : %.2f",percentage);
    return 0;
}