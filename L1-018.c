#include <stdio.h>

void printNo(char h, char m);
void dang(char n);

int main(){
    char h, m, a, b, c, d;
    scanf("%c%c:%c%c", &a, &b, &c, &d);
    h = (a - '0') * 10 + (b - '0');
    m = (c - '0') * 10 + (d - '0');
    /* in c "12:01" > "12:00" */
    /* int time = h * 100 + h? */
    if(h>=0 && h <= 11){/* 也许可以用一个符号函数混合 switch 来搞 */
        printNo(h, m);
    } else if(h == 12 && m == 0){
        printNo(h, m);
    } else if(m == 0){
        dang(h - 12);
    } else {
        dang(h - 12 + 1);
    }
    return 0;
}

void dang(char n){
    for(; n > 0; n--)
        printf("Dang");
    return;
}

void printNo(char h, char m){
    printf("Only %02d:%02d.  Too early to Dang.", h, m);
    return;
}
