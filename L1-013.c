#include <stdio.h>

int getFactorialSum(int st, int en);
int getFactorial(int n);

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", getFactorialSum(1, n));
    return 0;
}

int getFactorialSum(int st, int en){
    if(en < st||st < 1)
        return -1;
    int sum = 0;
    int fac = getFactorial(st);
    sum = sum + fac;
    for(st++; st <= en; st++){
        fac = fac * st;
        sum = sum + fac;
    }
    return sum;
}

int getFactorial(int n){
    if(n < 1)
        return -1;
    int s = 1;
    for(;n > 1;n--){
        s = s * n;
    }
    return s;
}
