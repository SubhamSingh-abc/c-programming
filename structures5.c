#include <stdio.h>    // structure inside a structure
struct date {
    int day; 
    int month; 
    int year; 
};
struct student {
    char name[100];
    int rollno;
    struct date dob;
};
void display (struct student s){
    printf("Name of the student is : %s\n",s.name);
    printf("Roll number of the student is : %d\n",s.rollno);
    printf("DOB of the student is : %02d-%02d-%04d\n",s.dob.day,s.dob.month,s.dob.year);
}
int main () {
    struct student s1 = {"SUBHAM",236,{21,03,2006}};
    display(s1);
    return 0;
}









/*#include <stdio.h>
struct date {
int day ;
int month ;
int year ;
} ;
struct student {
    char name[100] ;
    int rollno ;
    struct date dob ; 
} ;
void display (struct student s){
    printf("Name of the student is : %s\n",s.name);
    printf("Roll number of the student is : %d\n",s.rollno);
    printf("DOB of the student is : %02d-%02d-%04d\n",s.dob.day,s.dob.month,s.dob.year);
}
int main () {
    struct student s1 = {"ABC",236,{01,01,2000}} ;
    display(s1) ;
    return 0;
}*/