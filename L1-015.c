#include <stdio.h>
int main(){
    int total = 0, ch = ' ';
    int y;
    scanf("%d %c", &total, &ch);
    if(total&1 == 1)
        y = total/2 + 1;
    else
        y = total/2;
    for(int i = 0; i< y; i++){
        for(int m = 0; m< total; m++){
            putchar(ch);
        }
        putchar('\n');
    }
    return 0;
}
