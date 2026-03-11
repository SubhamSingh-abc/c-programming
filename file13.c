#include <stdio.h>
int main (){
    FILE *fp = fopen("file11++.txt","r");
    if(fp==NULL){
        printf("Error occured while opening this file.\n");
        return 1; 
    }
    printf("File opened successfully.\nData stored in file are as follows(note data is stored in structured or format form) :\n");
    int roll , marks ;
    while(fscanf(fp,"%d %d",&roll,&marks)==2){
        printf("Roll number : %d\t\tMarks : %d\n",roll,marks);
    }
    fclose(fp);
    printf("File closed successfully.\n");
    return 0;
}









// #include <stdio.h>
// int main (){
//     FILE *fp = fopen("file11++.txt","r");
//     if(fp==NULL){
//         printf("Error occured while opening this file.\n");
//         return 1;
//     }
//     printf("File opened successfully.\n");
//     int roll , marks ;
//     while(fscanf(fp, "%d %d",&roll,&marks)==2){
//         printf("Roll number : %d\t\tMarks : %d\n",roll,marks);
//     }
//     fclose(fp);
//     return 0;
// }