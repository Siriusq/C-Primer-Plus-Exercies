//输入年龄计算天数
#include <stdio.h>
int main(void)
{
	int d=0;
	int y=0;
	printf("How old are you?\n");
	scanf("%d",&y);
	getchar();
	d=y*365;
	printf("You are %d years old and %d days old.\n",y,d);
	return 0;
}
