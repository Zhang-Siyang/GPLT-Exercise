#include <stdio.h>

#define SEVEN 7
#define END 1000

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
//    printf("Log: Postion = %d, Live = %d, Vaule = %d.\n", p, l, v);
        if(drunkard[p] == 0){
            p = (p + 1) % t;
            continue;
//            printf("Dead.\n");
        } else if( have(v) ){
            drunkard[p] = 0;
            l--;
//            printf("Kill.\n");
        } else {
            ;
//            printf("Nothing.\n");
        }
        p = (p + 1) % t;
        v++;
    }
//    printf("End: Postion = %d, Live = %d, Vaule = %d.\n", p, l, v);
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
    if( n % SEVEN == 0)
        return 1;
    else if(n / 100 == SEVEN)   //7xx
        return 1;
    else if((n / 10) % 10 == SEVEN) //x7x
        return 1;
    else if(n % 10 == SEVEN)    //xx7
        return 1;
    else
        return 0;
}
