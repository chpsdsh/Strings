#include <stdio.h>
#include <string.h>


int proverka(char *str){
    int sm1 = 0,sm2 = 0;
    if(strlen(str)%2 == 0){
        for(int i = 0;i<strlen(str)/2;i++){
            sm1 += (int)str[i];
            sm2 += (int)str[strlen(str)-i-1];

        }
    }
    if(sm1==sm2 && sm1!=0)
        return 1;
    else
        return 0;
}


int main(){
    int i=1;
    while(i>=1){
        char str1[256];
        gets(str1);
        if (proverka(str1)==1){
            printf("%d",i);
            return 0;
        }
        i++;
    }
    return 0;
}