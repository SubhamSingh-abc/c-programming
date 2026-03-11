#include <stdio.h>   //counting number of vowels , consonants , numbers 
#include <string.h>  //and spaces.
int main (){
    char ch , str[100];
    int vowels=0 , spaces=0 , consonants=0 , special=0 , numbers=0 ;
    printf("Enter string : ");
    fgets(str , sizeof(str) , stdin);
    str[strcspn(str,"\n")]='\0';
    for(int i = 0 ; str[i]!='\0' ; i+=1){
        ch=str[i];
        if(ch>='A' && ch<='Z'){
            ch=ch+32;
        }
        if(ch>='a' && ch<='z'){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                vowels+=1;
            }
            else{
                consonants+=1;
            }
        }
        else if(ch>='0' && ch<='9'){
            numbers+=1;
        }
        else if(ch==' '){
            spaces+=1;
        }
        else{
            special+=1;
        }
    }
    printf("Number of vowels in the string : %d\n",vowels);
    printf("Number of consonants in the string : %d\n",consonants);
    printf("Number of numbers in the string : %d\n",numbers);
    printf("Number of spaces in the string : %d\n",spaces);
    printf("Number of special in the string : %d\n",special);
    return 0;
}