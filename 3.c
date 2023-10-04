#include <stdio.h>
#include <string.h>
#include <ctype.h>
void toLow(char *str){
    for(int i = 0; str[i]!='\0';i++)
        *(str+i) = tolower(*(str+i));
}


int main(){
    char str[80];
    int cnt = 0;
    gets(str);
    toLow(str);
    for(int  i = 0; str[i]!='\0';i++)
        if (strchr(str,str[i]) - str == i)
            cnt++;

    printf("%d", cnt);
    return 0;
}