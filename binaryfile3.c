#include <stdio.h>
struct employee {
    char name[100];
    int age ;
    float salary ;
} ;
int main (){
    struct employee e = {"XYZ",20,234.2346} ;
    FILE *fp = fopen("bfile4.bin","wb");
    if(fp==NULL){
        printf("Failed to open this file.\n");
        return 1;
    }
    printf("File opened successfully.\n");
    fwrite(&e , sizeof(struct employee) , 1 , fp);
    printf("File closed successfully.\n");
    fclose(fp);
    return 0;
}








// #include <stdio.h>
// struct student {
//     char name[100] ;
//     int rollno ;
//     float marks ;
// } ;
// int main (){
//     FILE *fp = fopen("bfile3.bin","wb");
//     if(fp==NULL){
//         printf("Failed to open this file.\n");
//         return 1;
//     }
//     struct student s = {"Subham",1,100.345};
//     fwrite(&s , sizeof(struct student), 1 , fp);
//     fclose(fp);
//     return 0;
// }