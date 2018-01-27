#include <stdio.h>
int main(){
    int in;
    int num[10] = {0};
    while(( in = getchar() ) != EOF){
        if(in >= '0' && in <= '9'){
            num[in - '0']++;
        }
        else{
            break;
        }
    }
    for(int i = 0;i < 10;i++){
        if(num[i] != 0){
            printf("%d:%d\n", i, num[i]);
        }
    }
    return 0;
}
