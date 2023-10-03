#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int x;
  printf("input seconds :");
  scanf("%i", &x);
  
  printf("%i seconds - %i:%i\n", x, x/60, x%60);
  
  system("PAUSE");	
  return 0;
}
