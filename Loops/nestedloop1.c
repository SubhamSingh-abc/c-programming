// #include <stdio.h>
// int main (){
//     for(int a = 1 ; a<=5 ; a+=1){
//         for(int b = 1 ; b<=2 ; b+=1){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }


 #include <stdio.h>      //Print a 3×3 square of stars ⭐
 int main (){
     for(int a = 1 ; a<=3 ; a+=1){
         for(int b = 1 ; b<=3 ; b+=1){
             printf("*",b);
         }
         printf("\n");
     }
     return 0;
 }