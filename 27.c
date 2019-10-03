#include <stdio.h>

int main() 
{
  int x,y,z;
  printf("Input Number 1 = ");
  scanf("%d",&x);
  printf("Input Number 2 = ");
  scanf("%d",&y);
  printf("Input Number 3 = ");
  scanf("%d",&z); 
  if(x==y & y==z)
  {
    printf("All Same");
  }
  else if(x!=y & y!=z)
  {
    printf("All Different");
  }
  else 
  {
    printf("Neither");
  }
  return 0;
}