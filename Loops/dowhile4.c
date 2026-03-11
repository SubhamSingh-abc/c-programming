#include <stdio.h>                    //Reverse a number (e.g., 123 → 321) using do-while.  
int main (){
    int a=123;
    do{
        a+=1;
        if(a==200){
            continue;
        }
        printf("%d\n",a);
    }
    while(a<321);
    return 0;
}