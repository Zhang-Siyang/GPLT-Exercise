#include <stdio.h>  //首次写出的代码, 以四个测试超时三个通过一个告败, 稍后上传更优代码
int main(){
	char in[10000];
	char ignore;
	int position;
	scanf("%s", in);
	while((ignore = getchar()) != '\n'){
		position = 0;
		while(in[position] != '\n')
			if(in[position] == ignore)
				in[position] = 0;
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
