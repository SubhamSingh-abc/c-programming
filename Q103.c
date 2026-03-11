/*A linguistic tool analyzes words for their vowel-to-consonant ratio.
 Implement a solution to count vowels and consonants in a string*/
 #include <stdio.h>
 #include <string.h>
 int main (){
    char str[100] , ch;
    int vowel=0 , consonants=0 ;
    printf("Enter string : ");
    fgets(str , sizeof(str) , stdin);
    str[strcspn(str,"\n")]='\0';
    for(int i = 0 ; str[i]!=0 ; i+=1){
        ch = str[i] ; 
        if(ch>='A' && ch<='Z'){
            ch = ch + 32 ;
        }
        if(ch>='a' && ch<='z'){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                vowel+=1;
            }
            else{
                consonants+=1;
            }
        }
    }
    printf("Number of vowels : %d\n",vowel);
    printf("Number of consonants : %d\n",consonants);
    return 0;
 }