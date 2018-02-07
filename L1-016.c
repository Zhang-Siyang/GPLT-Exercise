#include <stdio.h>

char getVer(char in[]);

int main(){
    char in[19], flag = 0;
    int num;
    for(scanf("%d", &num); num > 0; num--){
        scanf("%s", in);
        if(in[17] != getVer(in)){
            printf("%s\n", in);
            flag++;
        }
    }
    if(flag == 0)
        printf("All passed");
    return 0;
}

char getVer(char in[]){
    char wei[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    char m[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
    int sum = 0;
    for(char i = 0; i < 17; i++){
        sum = sum + (in[i] - '0') * wei[i];
    }
    return m[sum % 11];
}
