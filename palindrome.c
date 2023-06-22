#include <stdio.h>
#include <string.h>
int main()
{ 
    char str[50];
    int len;
    int flag = 0;
    printf("Enter a string:");
    scanf("%s",&str);
    len = strlen(str);
    for(int index = 0 ; index < len / 2 ; index ++ ) {
        if( str[index] != str[ len - index -1] ){
            flag = 1;
        }
    }
    if( flag == 1 ){
        printf("The entered string is not a plaindrome");
    }
    else{
        printf("The entered string is a palindrome");
    }
    return 0;
}   