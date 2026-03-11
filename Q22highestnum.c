/*A contest judge finds the top scorer among three contestants. Implement a solution to compute the 
largest of three numbers.
*/
#include <stdio.h>
int main(){
    int score1 , score2 , score3 ;
    printf("Enter first player score : ");
    scanf("%d",&score1);
    printf("Enter second player score : ");
    scanf("%d",&score2);
    printf("Enter third person score : ");
    scanf("%d",&score3);
    if(score1>score2 && score1>score3){
        printf("Player 1 score is greatest");
    }
    else if(score2>score1 && score2>score3){
        printf("Player 2 score is greatest");
    }
    else{
        printf("Player 3 score is greatest");
    }
    return 0;
}