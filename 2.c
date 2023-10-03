#include <stdio.h>
#include <string.h>

int main(){
    char str[80];
    int CntSym = 1, MaxProb = 0;
    gets(str);
    for(int i = 0; i < strlen(str) - 1; i++) {
        if (str[i] == str[i+1])
            CntSym++;
        else {
            if (MaxProb < CntSym)
                MaxProb = CntSym;
            CntSym = 1;
        }
    }
    printf("%d", MaxProb);
    return 0;
}