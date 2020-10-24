/*
1       1
 2     2
  3   3
   4 4
    5
   44
  3  3
 2    2
1      1
*/
#include<stdio.h>
int main()
{ int n,t,i,j;
  printf("enter the no. of testcases\n");
  scanf("%d",&t);
  while(t--)
  { printf("enter the size of pattern\n");
    scanf("%d",&n);
    //printing the upperpart of the pattern
    for(i=1;i<=n;++i)
    { printf("\n");
      for(j=1;j<i;++j)
      { printf(" ");
      }
      printf("%d",i);
      for(j=1;j<=((n-i)*2-1);++j)
      { printf(" ");
      }
      if(i!=n)
      { printf("%d",i);
      }
     }
     //printing the lower part of the pattern
     for(i=n-1;i>=1;--i)
     { printf("\n");
       for(j=1;j<i;++j)
       { printf(" ");
       }
       printf("%d",i);
       for(j=1;j<((n-i)*2-1);++j)
       { printf(" ");
       }
       printf("%d",i);
     }
    }
    return 0;
}
  
