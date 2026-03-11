#include <stdio.h>
int main (){
    int arr[5];
    arr[0]=12;
    arr[1]=43;
    arr[2]=56;
    arr[3]=43;
    arr[4]=2;
    for(int i = 0 ; i<5 ; i+=1){
        printf("%d\n",arr[i]);
    }
    return 0;
}




// #include <stdio.h>
// int main (){
//     int a[5] = { 24 , 45 , 678 , 1008 , 12};
//     for(int i = 0 ; i<5 ; i+=1){
//         printf("%d\n",a[i]); 
//     }
//     return 0;
// }