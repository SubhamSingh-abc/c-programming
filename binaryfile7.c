#include <stdio.h>
int main() {
    int num1 = 1000;
    FILE *fp = fopen("bfile1.bin", "ab+"); 
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    fwrite(&num1, sizeof(num1), 1, fp);
    rewind(fp);
    int num;
    printf("All numbers in the file:\n");
    while (fread(&num, sizeof(num), 1, fp) == 1) {
        printf("%d\n", num);
    }
    fclose(fp);
    return 0;
}