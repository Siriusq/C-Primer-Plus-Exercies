#include <stdio.h>
int main(void)
{
	int x;
	printf("Enter your number:\n");
	scanf("%d",&x);
	getchar();
	printf("dec=%d;octal=%o;hex=%x\n",x,x,x);
	printf("dec=%d;octal=%#o;hex=%#x\n",x,x,x);
	return 0;
}
