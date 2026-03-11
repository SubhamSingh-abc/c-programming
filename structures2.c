#include <stdio.h>
struct student {
    char name[100] ;
    int rollno ;
    float marks ;
} ;
int main () {
    struct student s[3] ;
    for(int i = 0 ; i<3 ; i+=1){
        printf("Enter the detail of student %d\n",i+1);
        printf("Enter the name of student %d : ",i+1);
        scanf("%s",s[i].name);
        printf("Enter the roll number of student %d : ",i+1);
        scanf("%d",&s[i].rollno);
        printf("Enter the marks of student %d : ",i+1);
        scanf("%f",&s[i].marks);
    }
    printf("Details of students are as follows :\n");
    for(int i = 0 ; i<3 ; i+=1){
        printf("Name of student %d is %s\n",i+1,s[i].name);
        printf("Roll number of student %d is %d\n",i+1,s[i].rollno);
        printf("Marks of student %d is %.3f\n",i+1,s[i].marks);
    }
    return 0;
}