#include <stdio.h>

int main(){
    char num[51], i = 0, hc = 0, len = 0;
    float beishu = 1;
    scanf("%s", &num);
    for(i = 0; num[i] != '\0'; i++){
        if(num[i] == '2')
            hc++;
    }
    len = i;
    if(len == 0)
        return 1;
    if(num[0] == '-'){
        beishu *= 1.5;
        len--;
    }
    if( (1&num[i - 1]) == 0)
        beishu *= 2;
    printf("%.2f%%", beishu * 100 * hc / len);
    return 0;
}
