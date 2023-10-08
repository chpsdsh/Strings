#include <stdio.h>
#include <string.h>


void check(char *str1,char *str2,char *str3, char a ,char *result){
    int cnt = 0;
    if(strchr(str1,a)!=NULL)
        cnt++;
    if(strchr(str2,a)!=NULL)
        cnt++;
    if(strchr(str3,a)!=NULL)
        cnt++;
    if(cnt == 1){
        result[strlen(result)] = a;
        result[strlen(result)+1] = '\0';
    }
}


void povtor(char *result){
    for(int  i = 0; result[i]!='\0';i++)
        if (strchr(result,result[i]) - result == i)
            printf("%c",result[i]);
}


int main(){
    char str1[80],str2[80],str3[80],str5[80];
    char result[256] = "";
    gets(str1);
    gets(str2);
    gets(str3);

    strcpy(str5,str1);
    char *str4 = strcat(str1,str2);
    strcat(str4,str3);

    for(int i = 0; i < strlen(str4);i++)
        check(str5,str2,str3,str4[i], result);

    povtor(result);

    return 0;
}
