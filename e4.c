#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num, heads = 0, tails = 0;
	char arr[8];
	printf("Who are you?/n");
	scanf("%s",arr);
	printf("Hello, %s!\n",arr);

	printf("Tossing a coin...");
	for(int i = 0; i < 3; i++)
	{
		num = rand();
		if(num % 2 == 0)
		{
			printf("Round %d: Heads\n",i);
			heads++;
		}else{
			printf("Round %d: Tails\n",i);
			tails++;
		}
	}
	printf("Heads: %d, Tails: %d\n",heads,tails);

	return 0;
}
