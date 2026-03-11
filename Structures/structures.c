// #include <stdio.h>
// struct date {
//     int day ;
//     int month ;
//     int year ;
// } ;
// struct profile {
//     char name[100] ;
//     int age ;
//     struct date dob ;
// } ;
// void display (struct profile p){
//     printf("Name of the person : %s\n",p.name);
//     printf("Age of the person : %d\n",p.age);
//     printf("DOB of the person : %02d-%02d-%04d\n",p.dob.day,p.dob.month,p.dob.year);
// }
// int main (){
//     struct profile p1 = {"ABC",25,{1,1,2000}} ;
//     display(p1) ;
//     return 0;
// }









// #include <stdio.h>
//     struct student {
//     char name[100] ;
//     int rollno ;
//     float marks ;
// } ;
// void modify (struct student *s){
//     s-> rollno += 10 ;
//     s-> marks -= 20 ;
// }
// int main () {
//     struct student s1 = {"SUBHAM",100,200} ;
//     printf("Name before modification : %s\n",s1.name) ;
//     printf("Roll number before modification : %d\n",s1.rollno) ;
//     printf("Marks before modification : %f\n",s1.marks) ;
//     modify(&s1) ;
//     printf("Name after modification : %s\n",s1.name) ;
//     printf("Roll number after modification : %d\n",s1.rollno) ;
//     printf("Marks after modification : %f\n",s1.marks) ;
// }











// #include <stdio.h>
//     struct student {
//     char name[100] ;
//     int rollno ;
//     float marks ;
// } ;
// void display (struct student s){
//     printf("Name : %s\n",s.name);
//     printf("Roll number : %d\n",s.rollno);
//     printf("Marks : %.3f\n",s.marks);
// }
// int main () {
//     struct student s1 = {"ABC",12,100.3452} ;
//     display(s1) ;
//     return 0;
// }









// #include <stdio.h>
// struct student {
//     char name[100] ;
//     int rollno ;
//     float marks ;
// } ;
// int main () {
//     struct student s[3] ;
//     printf("Enter details of students :\n");
//     for(int i = 0 ; i<3 ; i+=1){
//         printf("Enter name of student %d : ",i+1);
//         scanf("%s",s[i].name);
//         printf("Enter roll number of student %d : ",i+1);
//         scanf("%d",&s[i].rollno);
//         printf("Enter marks of student %d : ",i+1);
//         scanf("%f",&s[i].marks);
//     }
//     for(int i = 0 ; i<3 ; i+=1){
//         printf("Name of student %d is %s\n",i+1,s[i].name);
//         printf("Name of student %d is %d\n",i+1,s[i].rollno);
//         printf("Name of student %d is %.3f\n",i+1,s[i].marks);
//     }
//     return 0;
// }







// #include <stdio.h>
// struct student {
//     char name[100] ;
//     int rollno ;
//     float marks ;
// } ;
// int main () {
//     struct student s1 ;
//     printf("Enter the name of the student : ");
//     scanf("%s",s1.name);
//     printf("Enter the roll number of the student : ");
//     scanf("%d",&s1.rollno);
//     printf("Enter the marks of the student : ");
//     scanf("%f",&s1.marks);
//     printf("Name of the student is : %s\n",s1.name);
//     printf("Roll number of the student is : %d\n",s1.rollno);
//     printf("Mark of the student is : %.3f\n",s1.marks);
//     return 0;
// }