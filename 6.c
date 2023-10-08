#include <stdio.h>
#include <string.h>

void razvorot(char *str){
    int nac, kon = strlen(str);
    for(int i = strlen(str); i >= 0; i--){
        if(str[i] == ' ') {
            nac = i;
            for (int j = nac+1; j < kon; j++)
                printf("%c", str[j]);
            printf(" ");
            kon = nac;
        }
    }
}

int main(){
    char str1[256],str2[256]=" ";
    gets(str1);
    strcat(str2,str1);
    razvorot(str2);

    return 0;
}