#include <stdio.h>
#include <string.h>
#include <malloc.h>


int povtor(char *result){
    int cnt = 0;
    for(int  i = 0; result[i]!='\0';i++)
        if (strchr(result,result[i]) - result == i)
            cnt++;
    return cnt;
}


int *game(char *chislo, char *answer) {
    int *bikkor = (int*)malloc(sizeof(int)*2);
    bikkor[0] = 0;
    bikkor[1] = 0;
    for(int i = 0; i < strlen(chislo); i++){
        if (strchr(chislo,answer[i]) - chislo == i)
            bikkor[0] += 1;
        else if (strchr(chislo,answer[i])!= NULL)
            bikkor[1] += 1;
    }
    return bikkor;
}


int main(){

    char chislo[256],answer[256];
    gets(chislo);
    if (strlen(chislo) != 4 || povtor(chislo) != 4)
        return 0;
    for (int i = 0; i < 25; i++)
        printf("\n");
    for(int i = 0;i < 10;i++){
        gets(answer);

        if(game(chislo, answer)[0]==4){
            printf("WIN");
            return 0;
        }
        else{
            printf("bikov %d korov %d\n", game(chislo,answer)[0],game(chislo,answer)[1]);
        }

    }
    puts("loss");
    return 0;
}