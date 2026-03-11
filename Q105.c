// Q105. A grading system stores marks of multiple students in arrays. Implement a solution to accept marks in
// 5 subjects for 3 students, then display:
// • marks in 2nd subject of 1st student, and
// • marks in 5th subject of 3rd student
#include <stdio.h>
int main (){
    int marks[3][5];
    for(int i = 0 ; i<3 ; i+=1){
        printf("Enter marks of student %d as per the subjects\n",i+1);
        for(int j = 0 ; j<5 ; j+=1){
            printf("Enter marks of subject %d : ",j+1);
            scanf("%d",&marks[i][j]);
        }
    }
    printf("Marks of 1st student in 2nd subject is : %d\n",marks[0][1]);
    printf("Marks of 3rd student in 5th subject is : %d",marks[2][4]);
    return 0;
}