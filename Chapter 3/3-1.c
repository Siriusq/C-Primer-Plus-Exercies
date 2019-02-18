//You weight in gold
#include <stdio.h>
int main(void)
{
	float weight;
	float value;
	printf("Are you worth your weight in gold?\n");
	getchar();
	printf("Let's check it out.\n");
	printf("Please enter your in kilogram:\n");
	scanf("%f",&weight);
	value=weight*35.2739*1321.36*6.95;//千克体重*千克转盎司*盎司转美元*美元转人民币
	printf("You weight in gold is worth RMB %.2f.\n",value);
	printf("You are easily worth that!If gold prices drop,\n");
	printf("eat more to maintain your value!\n");
	return 0;
}

