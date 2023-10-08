#include <stdio.h>
#include <string.h>
#include <malloc.h>


void sravnenie(char **arr, int n){
    for(int i = 1; i < n; i++){
        if(strcmp(arr[0],arr[i])!=0){
            int cnt = 0;
            for(int j = 0; j < strlen(arr[i])-1; j++){
                for(int k = j+1; k < strlen(arr[i]); k++)
                    if (arr[i][k]==arr[i][j])
                        cnt++;
            }
            if (cnt==0)
                printf("%s\n",arr[i]);

        }
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
    sravnenie(dliny,n);

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