#include <stdio.h> 
int main(void)
{
  for (int i = 1; i <= 1; i++) {
    for (int j = 20; j <= 25; j++) {
      printf("%i - %i = %i\n",i,j,j-i);
    }
    printf("\n");
  }
  return 0;
}

