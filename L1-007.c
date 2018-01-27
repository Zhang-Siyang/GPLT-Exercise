#include <stdio.h>

int main(){
    char flag = 0, pin[11][5] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu", "fu"};
    int get = EOF;
    while(1){
        get = getchar();    //I don't know why `scanf("%s", %get);` return -208, -206, etc.

        if(get == EOF || get == '\n'){  //if in the end, exit
            break;
        } else {

            if(flag){       //are we need put a space?
                putchar(' ');
            } else {
                flag = 1;
                if(get == '-'){ //the '-' appears only at beginning of the number
                    printf("%s", pin[10]);
                    continue;
                }
            }

            printf("%s", pin[get - '0']);   //okey, put pinyin for every digit
        }
    }
    return 0;
}

/*------
get -600
put 'fu liu ling ling'
------*/
