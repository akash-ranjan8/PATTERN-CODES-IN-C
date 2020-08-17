/*
*
**
***
****
*****
*/
#include<stdio.h>
int main()
{ int n,i,j;
  printf("enter the size of pattern\n");
  scanf("%d",&n);
  for(i=1;i<=n;++i)
  { printf("\n");
    for(j=1;j<=i;++j)
    { printf("*");
    }
  }
  return 0;
}
