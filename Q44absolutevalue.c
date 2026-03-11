/*A scientific calculator computes the absolute magnitude of values irrespective of sign. 
Implement a solution to accept an integer and display its absolute value.*/
 #include <stdio.h>
 int main (){
    int a , m;
    printf("Enter integer : ");
    scanf("%d",&a);
    if(a>0){
        printf("magnitute of this interger is : %d",a);
    }
    else if(a<0){
        m = -1*a;
        printf("magnitute of this interger is : %d",m);
    }
    else {
        printf("magnitude of this interger is %d",a);
    }
    return 0;
 }