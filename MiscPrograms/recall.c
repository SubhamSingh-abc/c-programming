// Student's name (string)
// Student's age (integer)
// Student's height in meters (float)
// Take input from the user:
// Marks obtained in 3 subjects (float or double)
// Perform the following operations:
// Calculate the total marks.
// Calculate the average marks.
// Calculate the percentage (assume each subject is out of 100).
// Determine whether the student passed or failed (pass if average ≥ 40).
// Compare marks of first and second subject and print which is higher.
// Print the output in a neat format showing:
// Student's name, age, height
// Marks of each subject
// Total, average, and percentage
// Pass/Fail status
// Which subject had higher marks between first and second


// #include <stdio.h> #include <math.h/ int main()/     char name[20]/     float a , b , c , d , e , f , g , h /     printf("Enter your name : ")/     scanf("%s",name)/     printf("Enter your age : ")/     scanf("%f",&a)/     printf("Enter your height : ")/     scanf("%f",&b)/     printf("Enter your marks in first subject : ");/    scanf("%f",&c)/     printf("Enter your marks in second subject : ");/    scanf("%f",&d);
// printf("Enter your marks in third subject : ");
// scanf("%f",&e);
// g=c+d+e;
// f=g/3;
// h=g/300*100/     printf("Your name is %s\n",name);
// printf("Your age is %.2f\n",a);
// printf("Your height is %.2f\n",b);/    printf("Your marks in first subject is %.2f\n",c);
// printf("Your marks in second subject is %.2f\n",d);/    printf("Your marks in third subject is %.2f\n",e);
// printf("Your total marks is %.2f\n",g);
// printf("Your average marks is %.2f\n",f);
// printf("Your percentage is %.2f\n",h);
// h>40?printf("PASS\n"):printf("FAIL\n");
// c>d?printf("Subject 1 has more marks than Subject 2"):printf("Subject 2 has more marks than Subject 1");
// return 0;
//



//  Question:
// Write a program that asks the user for their age and gender. Then, print messages according to the following rules:
// If the age is between 18 and 30 inclusive and the gender is 'M', print:
// "You are a young male."
// If the age is between 18 and 30 inclusive and the gender is not 'M', print:
// "You are a young female."
// If the age is not between 18 and 30, print:
// "You are not in the young age group."
// Input:
// Age (integer)
// Gender (character, 'M' or 'F')
 



// #include <stdio.h>
// int main (){
//     int a ;
//     char b ;
//     printf("Enter your age : ");
//     scanf("%d",&a);
//     printf("Enter M for male and F for female\n");
//     printf("Enter your gender : ");
//     scanf(" %c",&b);
//     if(18<=a && a<=30 && b=='M' || b=='m'){
//         printf("You are a young male");
//     }
//     else if (18<=a && a<=30 && b!='M'){
//         printf("You are a young female");
//     }
//     else{
//         printf("You are not in young age group");
//     }
//     return 0;
// }



// Write a program that asks the user for their marks in Mathematics. Then, classify the result as follows:
// If marks are greater than or equal to 90, print:
// "Grade A"
// Else, if marks are greater than or equal to 75, print:
// "Grade B"
// Else, if marks are greater than or equal to 50, then:
// If marks are even, print: "Grade C with even marks"
// Else, print: "Grade C with odd marks"
// Else, print: "Fail"
// Input:
// Marks (integer between 0 and 100)



// #include <stdio.h>
// int main (){
//     int a ;
//     printf("Enter your marks obtained in mathematics : ");
//     scanf("%d",&a);
//     if(a>=90){
//         printf("GRADE A");
//     }
//     else if(a>=75 && a<89){
//         printf("GRADE B");
//     }
//     else if(a>=50){
//         if(a%2==0){
//             printf("GRADE C , EVEN %d",a);
//         }
//         else{
//             printf("GRADE C , ODD %d",a);
//         }
//     }
//     else if(a<=49){
//         printf("FAIL");
//     }
//     return 0;
// }