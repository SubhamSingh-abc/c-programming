#include <stdio.h>     // passing a structure to function
struct employee {
    char name[100] ;
    int age ;
    float salary ;
};
void display (struct employee e){
    printf("Detail of the employee is as follows :\n");
    printf("Name of the employee : %s\n",e.name);
    printf("Age of the employee : %d\n",e.age);
    printf("Salary of the employee : %.3f\n",e.salary);
}
int main () {
    struct employee e1 = {"ABC",25,3001.0132} ;
    struct employee e2 = {"XYZ",55,5001.0635} ;
    display(e1) ;
    display(e2) ;
    return 0;
}








/*#include <stdio.h>
struct student {
    char name[100];
    int rollno ;
    float marks ;
} ;
void display (struct student f){
    printf("Name of student is : %s\n",f.name);
    printf("Roll number of student is : %d\n",f.rollno);
    printf("Marks of student is : %.3f\n",f.marks);
}
int main (){
    struct student f1 = {"Subham" , 236 , 95.5000};
    display(f1) ;
    return 0;
}*/