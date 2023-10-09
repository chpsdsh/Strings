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
    int k = 1,choise;
    char podskazka[256],slovo[256],otv[256];
    gets(podskazka);
    gets(slovo);
    for(int i = 0; i < strlen(slovo);i++){
        otv[i]='*';
        otv[i+1] = '\0';
    }
    for (int i = 0; i<25; i++)
        printf("\n");
    printf("%s\n",podskazka);
    printf("%s\n",otv);
    printf("0 - letter, 1 - word\n");

    while(k>0){
        char answer1[256];
        scanf_s("%d",&choise);

        if (choise == 0){
            gets(answer1);
            for(int i = 0; i < strlen(slovo);i++)
                if(slovo[i] == answer1[0])
                    otv[i] = slovo[i];
            printf("%s\n",otv);
        }
        else if (choise == 1){
            gets(answer1);
            if (strcmp(answer1,slovo)==0){
                printf("WIN");
                k=0;
            }

        }
    }

}