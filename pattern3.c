/*
****
****
****
****
*/
#include<stdio.h>
int main()
{ int n,i,j;
  printf("enter the size of pattern\n");
  scanf("%d",&n);
  for(i=0;i<n;++i)
  { printf("\n");
    for(j=0;j<n;++j)
    { printf("*");
    }
  }
  return 0;
}
