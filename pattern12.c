/*
*   *
 * * 
  *  
 * * 
*   *
*/
#include<stdio.h>
int main()
{ int n,i,j,t;
  printf("Enter the no. of testcases\n");
  scanf("%d",&t);
  while(t--)
  { printf("enter the size of pattern\n");
    scanf("%d",&n);
    for(i=0;i<n;++i)
    { printf("\n");
      for(j=0;j<n;++j)
      { if(i==j || (i+j)==(n-1))
        { printf("*");
        }
        else
        { printf(" ");
        }
      }
    }
   }
   return 0;
}

