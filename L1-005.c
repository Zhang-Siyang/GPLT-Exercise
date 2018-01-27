#include <stdio.h>
#include <stdlib.h>
typedef struct{
    long long id;
    short shiji;
    short kaoshi;
}PAT;
int main(){
    int s;
    PAT * pe;
    scanf("%d", &s);
    pe = (PAT *)malloc(s * sizeof(PAT));
    for(int i = 0;i < s;i++){
        scanf("%lld%d%d", &pe[i].id, &pe[i].shiji, &pe[i].kaoshi);
    }
    int num, shiji;
    scanf("%d", &num);
    for(int i = 0;i < num;i++){
        scanf("%d", &shiji);
        for(int i = 0; i < s; i++){
            if(pe[i].shiji == shiji){
                printf("%lld %d\n", pe[i].id, pe[i].kaoshi);
                break;
            }
        }
    }
    free(pe);
    return 0;
}
