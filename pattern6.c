/*
12345
2345
345
45
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
    { printf("%d",j);
    }
  }
  return 0;
}
