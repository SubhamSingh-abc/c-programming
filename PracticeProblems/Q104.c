/*A blogging app tracks word counts for SEO optimization. 
Implement a solution to count spaces and words in a string*/
#include <stdio.h>
#include <string.h>
int main (){
    char str[100] , ch ;
    int space = 0 , words = 1 ;
    printf("Enter string : ");
    fgets(str , sizeof(str) , stdin);
    str[strcspn(str,"\n")]='\0';
    for(int i = 0 ; str[i]!='\0' ; i+=1){
        ch = str[i];
        if(ch==' '){
            words+=1;
            space+=1;
        }
    }
    printf("Number of words in the string : %d\n",words);
    printf("Number of spaces in the string : %d\n",space);
    return 0;
}

/*#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    int words = 0, spaces = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // remove newline
    for (int i = 0; str[i] != '\0'; i++) {
        // Count spaces
        if (str[i] == ' ') {
            spaces++;
        }
        // Count words: a word starts if current char is not space
        // and either it’s the first char or previous char is a space
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' ')) {
            words++;
        }
    }
    printf("Number of spaces: %d\n", spaces);
    printf("Number of words: %d\n", words);
    return 0;
}
*/