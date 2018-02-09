#include <stdio.h>

int main(){
    int hpA, hpB, hanA, hanB, huaA, huaB;
    int sum, hpAs, hpBs, n, flag;
    scanf("%d%d", &hpA, &hpB);
    hpAs = hpA;
    hpBs = hpB;
    for(scanf("%d", &n); hpA >= 0 && hpB >= 0;){
        flag = 0;
        scanf("%d%d%d%d", &hanA, &huaA, &hanB, &huaB);
        sum = hanA + hanB;
        if(huaA == sum)
            flag += 1;
        if(huaB == sum)
            flag += 2;
        if(flag == 1||flag == 2){
            if(flag == 1)
                hpA--;
            else
                hpB--;
        }
    }
    if(hpA < 0)
        printf("A\n%d", hpBs - hpB);
    else
        printf("B\n%d", hpAs - hpA);
    return 0;
}
