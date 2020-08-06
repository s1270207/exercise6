#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int i = 0,j = 0,k = 0;
  int n = 0;
  char name[10];
  printf("Who are you?\n");
  printf("> ");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
  printf("Tossing a coin...\n");
  srand((unsigned int)time(NULL));
  for(i = 0;i < 3;i++){
    n = rand()%2;
    if(n == 0){
      printf("Round %d: Heads\n",i+1);
      j++;
    }
    else{
      printf("Round %d: Tails\n",i+1);
      k++;
    }
  }
  printf("Heads: %d, Tails; %d\n",j,k);
  if(j > k) printf("%s won!\n",name);
  else printf("%s lost!\n",name);
  return 0;
}
