#include <stdio.h>  //首次写出的代码, 以四个测试超时三个通过一个告败, 稍后上传更优代码

int main(){
	char in[10000];
	char ignore, get;
	int position;

    for(position = 0; (get = getchar()) != '\n'; position++){
        in[position] = get;
    }
    in[position] = '\0';

    printf("#Got:%s#", in);

	while((ignore = getchar()) != '\n'){
		position = 0;
		while(in[position] != '\0'){
			if(in[position] == ignore)
				in[position] = '\007';
            position++;
        }
	}
	printf("%s", in);
	return 0;
}

/*------
输入样例：
I love GPLT!  It's a fun game!
aeiou
输出样例：
I lv GPLT!  It's  fn gm!
------*/
