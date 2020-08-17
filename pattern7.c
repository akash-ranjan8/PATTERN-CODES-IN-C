/*
ABCDE
FGHI
JKL
MN
O
*/
#include<stdio.h>
int main()
{ int n,i,j;
  char ch='A';
  printf("enter the size of pattern\n");
  scanf("%d",&n);
  for(i=1;i<=n;++i)
  { printf("\n");
    for(j=i;j<=n;++j)
    { 
      printf("%c",ch);
      ++ch;
    }
  }
  return 0;
}
