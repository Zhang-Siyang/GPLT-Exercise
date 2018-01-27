#include <stdio.h>

int getSum(int begin, int end);

int main(){
    int begin, end, sum, flag = 0 ; // 100 <= begine <= end <= 100

    scanf("%d%d", &begin, &end);

    sum = getSum(begin, end);

    while(begin <= end){
        printf("%5d", begin++);
        if(++flag % 5 == 0) //Warp every five output
            putchar('\n');
    }

    if(flag % 5 != 0)
        putchar('\n');
    printf("Sum = %d", sum);

    return 0;
}

int getSum(int begin, int end){
    return (end - begin + 1) * (end + begin) / 2.0;
}

/*------
root#./a.out
0 5
    0    1    2    3    4
    5
Sum = 15
root#./a.out
-3 8
   -3   -2   -1    0    1
    2    3    4    5    6
    7    8
Sum = 30
------*/
