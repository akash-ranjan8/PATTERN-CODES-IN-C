/*
*****
*   *
*   *
*   *
*****
*/
#include<stdio.h>
int main()
{ int i,j,n;
  printf("enter the size of pattern\n");
  scanf("%d",&n);
  for(i=1;i<=n;++i)
  { printf("\n");
    for(j=1;j<=n;++j)
    { if(i==1 || i==n || j==1 || j==n)
      { printf("*");
      }
      else
      { printf(" ");
      }
    }
  }
  return 0;
}

  
