#include <stdio.h>
int main (){
    int a , Num ;
    printf("Enter number: ");
    scanf("%d",&a);
    if(a%2==0){
        printf("Number is even\n");
        Num = a*a;
        printf("Number after square : %d",Num);
    }
    else if (a%2==1){
        printf("Number is odd\n");
        Num = a*a*a;
        printf("Number after cube : %d",Num);
    }
    return 0;
}