#include <stdio.h>
#include <string.h>


int main(){
    int choise;
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

    for(int k = 0;k < 10; k++){
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
                return 0;
            }
        }
    }
    puts("LOSS");
    return 0;

}