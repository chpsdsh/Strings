#include <stdio.h>
#include <string.h>


int proverka(char *str){
    int flag = 1;
    char keywords[][14]={"False", "await","else","import",	"pass","None","break","except",	"in","raise", "True",	"class","finally",	"is",	"return" ,"and", "continue", "for",	"lambda","try","as","def", "from", "nonlocal",	"while","assert","del","global","not",	"with","async","elif",	"if",	"or",	"yield"};
    if((int)str[0]>=(int)'0' && (int)str[0]<=(int)'9')
        flag = 0;
    else{
        for(int i = 1; i < strlen(str); i++){
            if(((int)str[i]>=(int)'0' && (int)str[i]<=(int)'9')||((int)str[i]>=(int)'A' && (int)str[i]<=(int)'Z')||((int)str[i]>=(int)'a' && (int)str[i]<=(int)'z')||(str[i]=='_'))
                flag = 1;
            else
                return 0;
        }
    }
    if(flag == 1){
        for(int i = 0; i < 34;i++)
            if(strcmp(str,keywords[i])==0)
                return 0;
    }
    return flag;
}


int main(){
    char str1[256];
    gets(str1);
    if(proverka(str1)==1)
        printf("Mozhet");
    else
        printf("Ne mozhet");
    return 0;
}