//A payroll system maintains employee salary records. Implement a solution to accept salary of 10
//employees in an array, compute total salary and average salary, then display the result#include <stdio.h>
#include <stdio.h>
int main (){
    int sum = 0 , sal[10] ;
    float avg ;
    for(int i = 0 ; i<10 ; i+=1){
        printf("Enter the salary of employee %d : ",i+1);
        scanf("%d",&sal[i]);
        sum+=sal[i];
    }
    avg = (sum)/10;

    printf("Total salary of the employees : %d\n",sum);
    printf("Average salary of the employees : %.3f",avg);
    return 0;
}