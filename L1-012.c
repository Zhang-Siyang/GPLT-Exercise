#include <stdio.h>

int main(){
    int temp;
    scanf("%d", &temp);
    printf("2^%d = %d", temp, 1 << temp);
    return 0;
}
