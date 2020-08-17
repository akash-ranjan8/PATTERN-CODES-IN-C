
#include<stdio.h>
int main()
{ int n,i,j;
  int c=0;
  printf("enter the size of pattern\n");
  scanf("%d",&n);
  for(i=1;i<=n;++i)
  { printf("\n");
    for(j=i;j<=n;++j)
    { ++c;
      printf("%d\t",c);
      
    }
  }
  return 0;
}
