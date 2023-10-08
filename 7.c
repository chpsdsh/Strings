#include <stdio.h>
#include <string.h>
#include <malloc.h>


void min(int *arr,int n){
    int mn = 9999999;
    for(int i = 0; i < n; i++)
        if (mn>*(arr+i))
            mn = *(arr+i);
    printf("%d",mn);
}


void razvorot(char *str){
    int nac = 0, kon,n = 0;
    int *dliny =malloc(sizeof(int));;
    for(int i = 1; i < strlen(str); i++){
        if(str[i] == ' ') {
            kon = i;
            dliny[n]=kon-nac-1;
            nac = i;
            n++;
            realloc(dliny,n*sizeof(int));
        }
    }
    min(dliny,n);
    free(dliny);
}


int main(){
    char str1[256], str2[256]= " ";
    gets(str1);
    strcat(str2,str1);
    str2[strlen(str2)] = ' ';
    str2[strlen(str2)+1] = '\0';
    razvorot(str2);
    return 0;
}
