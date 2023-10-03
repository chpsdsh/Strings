#include <stdio.h>


int main(){
    char str[80];
    int CntProb = 0, MaxProb;
    gets(str);
    for(int i = 0; str[i] != 0; i++) {
        if (str[i] == ' ')
            CntProb++;
        else {
            if (MaxProb < CntProb)
                MaxProb = CntProb;
            CntProb = 0;
        }
    }
        printf("%d", MaxProb);
        return 0;
    }