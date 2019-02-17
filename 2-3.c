//一个文件中包含两个函数
#include <stdio.h>
void butler(void);//ANSI/ISO C
int main(void)
{
	printf("I will summon the butler function.\n");
	getchar();
	butler();
	getchar();
	printf("Yes.Bring me some tea and writable DVDs.\n");
	getchar();
	return 0;
}
void butler(void)/*start*/
{
	printf("You rang.Sir?\n");
}
