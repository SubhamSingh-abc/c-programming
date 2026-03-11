#include <stdio.h>
int main (){
    int num[5] , max1 , max2;
    for(int a = 0 ; a<5 ; a+=1){
        printf("Enter number %d : ",a+1);
        scanf("%d",&num[a]);
    }
    if(num[0]>num[1]){
        max1=num[0];
        max2=num[1];
    }
    else if(num[1]>num[0]){
        max1=num[1];
        max2=num[0];
    }
    for(int a = 2 ; a<5 ; a+=1){
        if(num[a]>max1){
            max2=max1;
            max1=num[a];
        }
        else if(num[a]>max2 && num[a]!=max1){
            max2=num[a];
        }
    }
    printf("Higest number is %d\n",max1);
    printf("Second higest number is %d",max2);
    return 0;
}







// #include <stdio.h>
// int main() {
//     int n[5];
//     int max1, max2;
//     for (int i = 0; i < 5; i++) {
//         printf("Enter number %d: ",i+1);
//         scanf("%d", &n[i]);
//     }
//     if (n[0] > n[1]) {
//         max1 = n[0];
//         max2 = n[1];
//     } else {
//         max1 = n[1];
//         max2 = n[0];
//     }
//     for (int i = 2; i < 5; i++) {
//         if (n[i] > max1) {
//             max2 = max1;
//             max1 = n[i];
//         } else if (n[i]>max2 && n[i]!=max1) {
//             max2 = n[i];
//         }
//     }
//     printf("Highest number is : %d\n", max1);
//     printf("Second highest number is : %d\n", max2);
//     return 0;
// }
