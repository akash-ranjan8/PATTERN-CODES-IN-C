/*
AAAAA
BBBB
CCC
DD
E
*/
#include<stdio.h>
int main()
{ int n,i,j;
  char ch='A';
  int c=0;
  printf("enter the size of pattern\n");
  scanf("%d",&n);
  for(i=1;i<=n;++i)
  { printf("\n");
    for(j=i;j<=n;++j)
    { 
      printf("%c",ch+i-1);
    }
  }
  return 0;
}
