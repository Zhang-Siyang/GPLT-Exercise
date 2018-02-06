#include <stdio.h>

int main(){
    int getFactorial(int n);

    int n;
    int s = 0;
    scanf("%d", &n);
    for(; n > 0; n--){
        s = s + getFactorial(n);
    }
    printf("%d", s);
    return 0;
}

int getFactorial(int n){
    int s = 1;
    for(;n > 1;n--){
        s = s * n;
    }
    return s;
}
