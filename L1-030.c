#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DEBUG 1

typedef struct{
    char name[9];
}P;

int main(){
    int num, sex, pB = 0, pG = 0, changeFlag;
    char name[9];
    P * boy, * girl, * temp;
    scanf("%d\n", &num);
    if(DEBUG)
        printf("#DEBUG# Total:%d\n", num);
    boy = (P *)malloc(sizeof(P) * num / 2);
    girl = (P *)malloc(sizeof(P) * num / 2);
    for(int i = 0; i < num; i++){
        scanf("\n%c %s", &sex, name);
        if(DEBUG)
            printf("#DEBUG# Get: Sex is %c, name is %s\n", sex, name);
        if(i == 0 && sex == '0'){
            changeFlag = 1;
        }
        if(sex == '0'){
            strcpy(girl[pG].name, name);
            if(DEBUG)
                printf("#DEBUG# Save %s to %d.name\n", girl[pG].name, girl[pG]);
            pG++;
        } else {
            strcpy(boy[pB].name, name);
            if(DEBUG)
                printf("#DEBUG# Save %s to %d.name\n", boy[pB].name, boy[pB]);
            pB++;
        }
    }
    if(changeFlag == 1){
        temp = boy;
        boy = girl;
        girl = temp;
    }
    pB = 0;
    pG = num / 2;
    for(int i = 0; i < num / 2; i++){
        printf("%s %s\n", boy[pB++].name, girl[pG--].name);
    }
    free(boy);
    free(girl);
    return 0;
}
