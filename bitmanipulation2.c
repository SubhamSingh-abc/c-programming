#include <stdio.h>       // revealing binary form of a number by bit manipulation 
int main () {
    int n ; 
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Binary form : ");
    for(int i = 31 ; i >= 0 ; i--){
        printf("%d",(n >> i) & 1);
    }
    printf("\n");
    return 0;
}


/*
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Binary form: ");
    for (int i = 31; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
    printf("\n");
    return 0;
}
*/