#include <stdio.h>
#include <stdlib.h>
typedef struct{
    long long id;
    int kaoshi;
}PAT;
int main(){
    int s;
    PAT * pe;
    scanf("%d", &s);
    pe = (PAT *)malloc(s * sizeof(PAT));
    long long swap;
    int shiji, kaoshi;
    for(int i = 0;i < s;i++){
        scanf("%lld%d%d", &swap, &shiji, &kaoshi);
	pe[shiji - 1].id = swap;
	pe[shiji - 1].kaoshi = kaoshi;
    }
    int num;
    scanf("%d", &num);
    for(int i = 0;i < num;i++){
        scanf("%d", &shiji);
        printf("%lld %d\n", pe[shiji - 1].id, pe[shiji - 1].kaoshi);
    }
    free(pe);
    return 0;
}
