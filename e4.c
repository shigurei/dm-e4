#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int num, heads = 0, tails = 0;

	char arr[8];
	printf("Who are you?");
	scanf("%s",arr);
	printf("Hello, %s!\n",arr);

	printf("Tossing a coin...\n");
	for(int i = 1; i < 4; i++)
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
	if(heads > tails)
	{
		printf("%s won.\n",arr);
	}else{
		printf("%s lost.\n",arr); 
	}

	return 0;
}
