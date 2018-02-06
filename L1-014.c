#include <stdio.h>

int main(){
    char st[25] = "This is a simple problem.";
    for(char i = 0; st[i] != '\0'; i++){
        putchar(st[i]);
    }
    return 0;
}
