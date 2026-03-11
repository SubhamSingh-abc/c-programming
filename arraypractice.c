// Input and Output:
// Write a program to accept 5 integers from the user and print them in the same order.
// #include <stdio.h>
// int main (){
//     int num[5];
//     for(int a = 0 ; a<5 ; a+=1){
//         printf("Enter number %d : ",a+1);
//         scanf("%d",&num[a]);
//     }
//     for(int a = 0 ; a<5 ; a+=1){
//         printf("%d\n",num[a]);
//     }
//     return 0;
// }



// Sum of Elements:
// Accept 10 numbers and find their total sum and average.
//  #include <stdio.h>
//  int main (){
//      int num[10] , sum = 0 ;
//      float avg;
//      for(int a = 0 ; a<10 ; a+=1){
//          printf("Enter number %d : ",a+1);
//          scanf("%d",&num[a]);
//      }
//      for(int a = 0 ; a<10 ; a+=1){
//          sum+=num[a];
//      }
//      avg=(float)sum/10;
//      printf("Sum of all 10 number is equal to : %d\n",sum);
//      printf("Avg of all 10 number is equal to : %.2f",avg);
//      return 0;
//  }



// Count Even and Odd:
// Input 7 numbers and count how many are even and how many are odd.
// #include <stdio.h>
// int main (){
//     int num[7] , sum1 = 0 , sum2 = 0 ;
//     for(int a = 0 ; a<7 ; a+=1){
//         printf("Enter number %d : ",a+1);
//         scanf("%d",&num[a]);
//     }
//     for(int a = 0 ; a<7 ; a+=1){
//         if(num[a]%2==0){
//             num[a]=1;
//             sum1+=num[a];
//         }
//         else if(num[a]%2!=0){
//             num[a]=1;
//             sum2+=num[a];
//         }
//     }
//     printf("Number of even numbers : %d\n",sum1);
//     printf("Number of odd numbers : %d",sum2);
//     return 0;
// }



// Maximum and Minimum:
// Accept 8 numbers and display the largest and smallest values.
//  #include <stdio.h>
//  int main (){
//      int num[8] , max , min;
//      for(int a = 0 ; a<8 ; a+=1){
//          printf("Enter number %d : ",a+1);
//          scanf("%d",&num[a]);
//      }
//      max=num[0];
//      for(int a = 1 ; a<8 ; a+=1){
//          if(num[a]>max){
//              max=num[a];
//          }
//      }
//      min=num[7];
//      for(int a = 1 ; a<7 ; a+=1){
//         if(num[a]<min){
//             min=num[a];
//         }
//      }
//      printf("Largest number is %d\n",max);
//      printf("Smallest number is %d",min);
//      return 0;
//  }



// Count Multiples of 3 and 5:
// Input 10 numbers and count how many are divisible by both 3 and 5.
// #include <stdio.h>
// int main (){
//     int num[10] , sum = 0 ;
//     for(int a = 0 ; a<10 ; a+=1){
//         printf("Enter number %d : ",a+1);
//         scanf("%d",&num[a]);
//     }
//     for(int a = 0 ; a<10 ; a+=1){
//         if(num[a]%3==0 && num[a]%5==0){
//             num[a]=1;
//             sum+=num[a];
//         }
//     }
//     printf("Total numbers divisible by both 3 and 5 : %d",sum);
//     return 0;
// }



// Sum of Positive and Negative Numbers Separately:
// Accept 10 integers and calculate:
// Sum of positive numbers
// Sum of negative numbers
// #include <stdio.h>
// int main (){
//     int num[10] , sum1=0 , sum2=0 ;
//     for(int a = 0 ; a<10 ; a+=1){
//         printf("Enter number %d : ",a+1);
//         scanf("%d",&num[a]);
//     }
//     for(int a = 0 ; a<10 ; a+=1){
//         if(num[a]<0){
//             sum1+=num[a];
//         }
//         else{
//             sum2+=num[a];
//         }
//     }
//     printf("Sum of positive numbers is %d\n",sum2);
//     printf("Sum of negative numbers is %d",sum1);
//     return 0;
// }



// Second Largest Number:
// Input 5 integers and find the second largest number (without sorting).
 #include <stdio.h>
 int main() {
     int num[5], max1, max2;
     for (int a = 0; a < 5; a++) {
         printf("Enter number %d : ", a + 1);
         scanf("%d", &num[a]);
     }
     if (num[0] > num[1]) {
         max1 = num[0];
         max2 = num[1];
     } else {
         max1 = num[1];
         max2 = num[0];
     }
     for (int a = 2; a < 5; a++) {
         if (num[a] > max1) {
             max2 = max1;
             max1 = num[a];
         } else if (num[a] > max2 && num[a] != max1) {
             max2 = num[a];
         }
     }
     printf("Highest number is : %d\n", max1);
     printf("Second highest number is : %d", max2);
     return 0;
 }
