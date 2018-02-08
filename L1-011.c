#include <stdio.h>

int main(){
	char in[10001];
	char ignore, get;
	int position;

    for(position = 0; (get = getchar()) != '\n'; position++){
        in[position] = get;
    }
    in[position] = '\0';

	while((ignore = getchar()) != '\n'){
		position = 0;
		while(in[position] != '\0'){
			if(in[position] == ignore)
				in[position] = '\007';
            position++;
        }
	}

    for(position = 0; in[position] != '\0'; position++){
        if(in[position] != '\007')
            putchar(in[position]);
    }

	return 0;
}

/*------
输入样例：
I love GPLT!  It's a fun game!
aeiou
输出样例：
I lv GPLT!  It's  fn gm!
------*/
