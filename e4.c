#include<stdio.h>
#include<stdlib.h>

int main()
{
  int num, heads = 0, tails = 0;
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
  if(heads > tails)
  {
    printf("You won.\n");
  }else{
    printf("You lost.\n");  
  }
  
  return 0;
}
