#include <stdio.h>
struct employee {
    char name[100];
    int age ;
    float salary ;
} ;
int main (){
    FILE *fp = fopen("bfile4.bin","rb");
    if(fp==NULL){
        printf("Failed to open file.\n");
    }
    struct employee e ;
    printf("File opened successfully.\n");
    fread(&e , sizeof(struct employee) , 1 , fp);
    printf("Name : %s\n",e.name);
    printf("Age : %d\n",e.age);
    printf("Salary : %.3f\n",e.salary);
    fclose(fp);
    return 0;
}