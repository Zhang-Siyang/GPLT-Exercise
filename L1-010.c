#include <stdio.h>
int main(){
    int box[3] = {0}, tem, max_pos;

    for(int i = 0; i < 3; i++){ //get all of there number
        scanf("%d", &tem);
        box[i] = tem;
    }

    for(int i = 0; i < 2; i++){
        max_pos = i;    //assume the box[i] is the maximum number

        for(int m = i + 1; m < 3; m++){ //find bigger
            if(box[m] < box[max_pos])
                max_pos = m;
        }

        if(max_pos != i){   //if there has a bigger, swap them
            tem = box[i];
            box[i] = box[max_pos];
            box[max_pos] = tem;
        }
    }

    for(int i = 0; i < 3; i++){ //out the number list
        printf("%d", box[i]);
        if(i != 2)
            printf("->");
    }

    return 0;
}
