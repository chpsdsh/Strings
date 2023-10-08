#include <stdio.h>
#include <string.h>
#include <malloc.h>


void sort(char **arr,int n){
    for(int j = 0; j < n-1; j++)
        for(int i = 0; i < n-1; i++)
            if (strlen(arr[i]) > strlen(arr[i+1])) {
                char *tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
            }
}


char *podstr(char *str, int nac, int kon){
    char res[256]="";
    for(int i = nac+1; i < kon; i++){
        res[strlen(res)] = str[i];
        res[strlen(res)+1] = '\0';
    }
    return strdup(res);
}


void delenie(char *str){
    int nac = 0, kon, n = 0;
    char **dliny = (char**)malloc(sizeof(char));
    for(int i = 1; i < strlen(str); i++){
        if(str[i] == ' ') {
            dliny[n]=(char*) malloc(sizeof(char));
            kon = i;
            strcpy(dliny[n] , podstr(str,nac, kon));
            nac = i;
            n++;
            realloc(*dliny,n*sizeof(char));
        }
    }
    sort(dliny,n);
    for(int i = 0; i < n; i++)
        printf("%s\n",dliny[i]);
    free(dliny);
}


int main(){
    char str1[256], str2[256]= " ";
    gets(str1);
    strcat(str2,str1);
    str2[strlen(str2)] = ' ';
    str2[strlen(str2)+1] = '\0';
    delenie(str2);
    return 0;
}