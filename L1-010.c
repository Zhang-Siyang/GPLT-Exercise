#include <stdio.h>
int main(){
    int flag[7] = {0}, box[7] = {0}, tem;
    for(int i = 0; i < 3; i++){
        scanf("%d", &tem);
        if(i == 0){
            box[3] = tem;
            flag[3] = 1;
        } else if(i == 1){
            if(tem > box[3]){
                box[5] = tem;
                flag[5] = 1;
            } else {
                box[1] = tem;
                flag[1] =1;
            }
        } else {
            if(flag[1] == 1){
                if(tem > box[1]){
                    if(tem > box[3]){
                        box[5] = tem;
                        flag[5] = 1;
                    } else {
                        box[2] = tem;
                        flag[2] = 1;
                    }
                } else {
                box[0] = tem;
                flag[0] = 1;
                }
            } else {
                if(tem > box[3]){
                    if(tem > box[5]){
                        box[6] = tem;
                        flag[6] = 1;
                    } else {
                        box[4] = tem;
                        flag[4] = 1;
                    }
                } else {
                box[1] = tem;
                flag[1] = 1;
                }
            }
        }
    }
    for(int i = 0, tem = 0; i < 7;i++){
        if(flag[i] == 1){
            printf("%d", box[i]);
            tem++;
            if(tem != 3)
                printf("->");
        }
    }
    return 0;
}


/*------
root#./a.out
6 9 -1
-1->6->9
root#./a.out
6 8 2
2->6->8
root#./a.out
9 9 9
9->9->9
root#./a.out
-7 -7 -7
-7->-7->-7
------*/
