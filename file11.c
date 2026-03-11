#include <stdio.h>
int main (){
    FILE *fp = fopen("file1+.txt","r");
    if(fp==NULL){
        return 1;
    }
    int ch ;
    while((ch=fgetc(fp))!=EOF){
        putchar(ch);
    }
    fclose(fp);
    return 0;
}







// #include <stdio.h>
// int main (){
//     FILE *fp = fopen("file1+.txt","r");
//     if(fp==NULL){
//         return 1;
//     }
//     int ch ;
//     while ((ch=fgetc(fp))!=EOF){
//         putchar(ch);
//     }
//     fclose(fp);
//     return 0;
// }