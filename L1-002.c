#include <stdio.h>

int get_lines(int sum);
int putALotChar(int n, char ch);

int main(){
    int num, numOfChar; /*num ~ number of char, numOfChar ~ number of char for every line*/
    char ch;    /*what should be show as char*/
    scanf("%d %c", &num, &ch);
    int const line = get_lines(num);    /*a haif of height*/
    int const totalLines = line * 2 + 1;    /*height of funnel*/

    for(int level = 0; level < totalLines; level++){
        if(level < line){
            numOfChar = totalLines - (level * 2);
            putALotChar(level, ' ');
            putALotChar(numOfChar, ch);
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
    /*return half of the height of the funnel*/
    sum = sum - 1;
    int line = 0;
    for(int num_of_char = 6; (sum - num_of_char) >= 0; num_of_char += 4){
        sum = sum - num_of_char;
        line++;
    }
    return line;
}

int putALotChar(int n, char ch){
    /*just like it's name, put a lot char*/
    for(; n > 0; n--)
        putchar(ch);
    return n;
}


/*------
输入样例：
19 *
输出样例：
*****
 ***
  *
 ***
*****
2
------*/
