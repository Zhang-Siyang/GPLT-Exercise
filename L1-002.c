#include <stdio.h>

int get_lines(int sum);
int putALotChar(int n, char ch);

int main(){
    int num, numOfChar;
    char ch;
    scanf("%d %c", &num, &ch);
    int const line = get_lines(num);

    for(int level = 0; level < (line * 2 + 1); level++){
        if(level < line){
            numOfChar = (1 + 2 * line) - (level * 2);
            putALotChar(level, ' ');
            putALotChar(numOfChar, ch);
            putchar('\n');
        } else if(level == line){
            numOfChar = 1;
            putALotChar(level, ' ');
            putchar(ch);
            putchar('\n');
        } else {
            numOfChar = (level - line) * 2 + 1;
            putALotChar(line * 2 - level, ' ');
            putALotChar(numOfChar, ch);
            putchar('\n');
        }
        num = num - numOfChar;
    }

    printf("%d", num);
    return 0;
}

int get_lines(int sum){
    /*返回上(下)部分的行数*/
    sum = sum - 1;
    int line = 0;
    for(int num_of_char = 6; (sum - num_of_char) >= 0; num_of_char += 4){
        sum = sum - num_of_char;
        line++;
    }
    return line;
}

int putALotChar(int n, char ch){
    for(; n > 0; n--)
        putchar(ch);
    return n;
}
