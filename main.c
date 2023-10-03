#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int x;
  printf("input a year :");
  scanf("%i", &x);
  
  if( (x%4 == 0 && x%100 != 0) || (x%400 == 0))
  {
      printf("%i is leap year.\n", x);   
  }
  else
  {
      printf("%i is not leap year.\n", x);   
  }
  
  system("PAUSE");	
  return 0;
}
