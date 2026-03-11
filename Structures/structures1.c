#include <stdio.h>
struct student {
    char name[100];
    int rollno;
    float marks;
};
int main (){
    struct student f1 ;
    printf("Enter the name of the student : ");
    scanf("%s",f1.name);
    printf("Enter the roll number of the student : ");
    scanf("%d",&f1.rollno);
    printf("Enter the marks of the student : ");
    scanf("%f",&f1.marks);
    printf("Details of the student is as follows : \n");
    printf("Name of the student is %s\n",f1.name);
    printf("Roll number  of the student is %d\n",f1.rollno);
    printf("Marks of the student is %.2f\n",f1.marks);
    return 0;
}








/*#include <stdio.h>
struct student {
    char name[100] ;
    int rollno ;
    float marks ;
};
int main (){
    struct student s1 ;
    printf("Enter the name of the student : ");
    scanf("%s",s1.name);
    printf("Enter the roll number of the student : ");
    scanf("%d",&s1.rollno);
    printf("Enter the marks of the student : ");
    scanf("%f",&s1.marks);
    printf("Student detail is as follows :\n");
    printf("Name of the student is %s\n",s1.name);
    printf("Roll number of the student is %d\n",s1.rollno);
    printf("Name of the student is %.2f\n",s1.marks);
    return 0;
}*/