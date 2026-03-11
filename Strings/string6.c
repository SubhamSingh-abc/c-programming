#include <stdio.h>
#include <string.h>
int main (){
    char str1[100] , str2[100] ;
    printf("Enter string 1 : ");
    fgets(str1 , sizeof(str1) , stdin);
    str1[strcspn(str1,"\n")]='\0';
    printf("Enter string 2 : ");
    fgets(str2 , sizeof(str2) , stdin);
    str2[strcspn(str2,"\n")]='\0';
    int result = strcmp(str1,str2);
    if(result==0){
        printf("Both strings are equal");
    }
    else if(result>0){
        printf("String 1 is greater than string 2");
    }
    else{
        printf("String 2 is greater than string 2");
    }
    return 0;
}



// #include <stdio.h>             //string comparison
// #include <string.h>
// int main (){
//     char abc[100];
//     char def[100];
//     printf("Enter statement 1 : ");
//     fgets(abc , sizeof(abc) , stdin);
//     abc[strcspn(abc,"\n")]='\0';
//     printf("Enter statement 2 : ");
//     fgets(def , sizeof(def) , stdin);
//     def[strcspn(def,"\n")]='\0';
//     int result = strcmp(abc,def);
//     if(result == 0){
//     printf("Both strings are equal\n");
//     }
//     else if(result > 0){
//     printf("String 1 comes after String 2 in dictionary order\n");
//     }
//     else{
//     printf("String 1 comes before String 2 in dictionary order\n");
//    }
// }