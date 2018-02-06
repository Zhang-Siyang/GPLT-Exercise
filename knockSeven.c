#include <stdio.h>

#define SEVEN 7

int have(int n);

int main(){
    char theOne[21], oth[21];
    char drunkard[1000] = {0};
    int t, p, v, l; /*t~total; p~postion; v~value; l~liveNumber*/

    scanf("%d%d%d", &t, &p, &v);
    l = t;

    for(int i = 0; i < t; i++)
        drunkard[i] = 1;

    p--;
    while(l>1){
        if(drunkard[p] == 0){
            p = (p + 1) % t;
            continue;
        } else if( (v % SEVEN == 0) || have(v) ){
            drunkard[p] = 0;
            l--;
        } else {
            ;
        }
        p = (p + 1) % t;
        v++;
    }

    for(;drunkard[p] == 0;p = (p + 1) % t)
        ;

    for(int i = 0; i < t; i++){
        if(i == p)
            scanf("%s", theOne);
        else
            scanf("%s", oth);
    }

    printf("%s", theOne);

    return 0;
}

int have(int n){
    if(n < 0)
        return have(-n);
    else if( n % 10 == SEVEN)
        return 1;
    else if(n >= 10)
        return have(n / 10);
    else
        return 0;
}
