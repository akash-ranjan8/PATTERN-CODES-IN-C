/*
11111
2222
333
44
5
*/
#include<stdio.h>
int main()
{ int n,i,j;
  printf("enter the size of pattern\n");
  scanf("%d",&n);
  for(i=1;i<=n;++i)
  { printf("\n");
    for(j=i;j<=n;++j)
    { printf("%d",i);
    }
  }
  return 0;
}
