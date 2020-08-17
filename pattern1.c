/*
*****
****
***
**
*
*/
#include<stdio.h>
int main()
{ int n,i,j;
  printf("enter the size of the pattern\n");
  scanf("%d",&n);
  for(i=1;i<=n;++i)
  { printf("\n");
    for(j=i;j<=n;++j)
    { printf("*");
    }
  }
  return 0;
}
