//#include<stdio.h>
// int main (){
//     char abc[]="Subham";
//     printf("%s",abc);
//     return 0;
// }
// #include<stdio.h>
// int main (){
//     char abc[]={'S','u','b','h','a','m','\0'};
//     printf("%s",abc);
//     return 0;
// }
// #include<stdio.h>
// int main (){
//     char abc[100];
//     printf("Enter string : ");
//     fgets(abc , sizeof(abc) , stdin);
//     printf("%s",abc);
//     return 0;
// }
// #include<stdio.h>
// #include<string.h>
// int main (){
//     char abc[100];
//     printf("Enter string : ");
//     fgets(abc , sizeof(abc) , stdin);
//     int len = strlen(abc);
//     printf("Lenght of the string is : %d",len);
//     return 0;
// }
// #include<stdio.h>
// #include<string.h>
// int main (){
//     char abc[100];
//     char def[100];
//     printf("Enter string 1 : ");
//     fgets(abc , sizeof(abc) , stdin);
//     abc[strcspn(abc,"\n")]='\0';
//     printf("Enter string 2 : ");
//     fgets(def , sizeof(def) , stdin);
//     def[strcspn(def,"\n")]='\0';
//     strcpy(abc,def);
//     printf("%s",abc);
//     return 0;
// }
// #include<stdio.h>
// #include<string.h>
// int main (){
//     char abc[100];
//     char def[100];
//     printf("Enter string 1 : ");
//     fgets(abc , sizeof(abc) , stdin);
//     abc[strcspn(abc,"\n")]='\0';
//     printf("Enter string 2 : ");
//     fgets(def , sizeof(def) , stdin);
//     def[strcspn(def,"\n")]='\0';
//     strcat(abc,def);
//     printf("%s",abc);
//     return 0;
// }
// #include<stdio.h>
// #include<string.h>
// int main (){
//     char abc[100];
//     char def[100];
//     printf("Enter string 1 : ");
//     fgets(abc , sizeof(abc) , stdin);
//     abc[strcspn(abc,"\n")]='\0';
//     printf("Enter string 2 : ");
//     fgets(def , sizeof(def) , stdin);
//     def[strcspn(def,"\n")]='\0';
//     strcat(abc," ");
//     strcat(abc,def);
//     printf("%s",abc);
//     return 0;
// }
// #include<stdio.h>
// #include<string.h>
// int main (){
//     char abc[100];
//     char def[100];
//     printf("Enter string 1 : ");
//     fgets(abc , sizeof(abc) , stdin);
//     abc[strcspn(abc,"\n")]='\0';
//     printf("Enter string 2 : ");
//     fgets(def , sizeof(def) , stdin);
//     def[strcspn(def,"\n")]='\0';
//     int result = strcmp(abc,def);
//     if(result==0){
//         printf("Both strings are equal");
//     }
//     else if (result>0){
//         printf("One string is greater than other");
//     }
//     else{
//         printf("One string is smaller than other");
//     }
//     return 0;
// }
// #include<stdio.h>
// #include<string.h>
// int main (){
//     char abc[100];
//     char d;
//     printf("Enter string 1 : ");
//     fgets(abc , sizeof(abc) , stdin);
//     abc[strcspn(abc,"\n")]='\0';
//     printf("Enter the character which u want to search : ");
//     scanf(" %c",&d);
//     char *first = strchr(abc,d);
//     char *last = strrchr(abc,d);
//     if(first){
//         printf("First occurence of %c is at the position : %ld\n",d,first-abc);
//     }
//     else{
//         printf("No occurence found");
//     }
//     if(last){
//         printf("Last occurence of %c is at the position : %ld",d,last-abc);
//     }
//     return 0;
// }
// #include<stdio.h>
// #include<string.h>
// int main (){
//     char abc[200];
//     char def[200];
//     printf("Enter string 1 : ");
//     fgets(abc , sizeof(abc) , stdin);
//     abc[strcspn(abc,"\n")]='\0';
//     printf("Enter string 2 : ");
//     fgets(def , sizeof(def) , stdin);
//     def[strcspn(def,"\n")]='\0';
//     char *found = strstr(abc,def);
//     if(found){
//         printf("The position (%s) in the string is at : %ld",def,found-abc);
//     }
//     else{
//         printf("No occurrence of (%s) found",def);
//     }
//     return 0;
// }
// #include<stdio.h>
// #include<string.h>
// int main (){
//     char abc[100];
//     printf("Enter string 1 : ");
//     fgets(abc , sizeof(abc) , stdin);
//     abc[strcspn(abc,"\n")]='\0';
//     strrev(abc);
//     printf("%s",abc);
//     return 0;                
// }
// #include<stdio.h>                
// #include<string.h>                
// int main (){
//     char abc[100];
//     char rev[100];
//     printf("Enter string 1 : ");
//     fgets(abc , sizeof(abc) , stdin);
//     abc[strcspn(abc,"\n")]='\0';
//     strcpy(rev,abc);
//     strrev(rev);
//     if(strcmp(rev,abc)==0){
//         printf("Given word is a palindrome");
//     }
//     else{
//         printf("Given word is not palindrome");
//     }
//     return 0;
// }