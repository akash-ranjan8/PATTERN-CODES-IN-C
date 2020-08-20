/*
*********
 *******
  *****
   ***
    *
*/
#include<stdio.h>
void main()
{ int i,j,n;
  printf("enter the size of pattern\n");
  scanf("%d",&n);
  for(i=n;i>=1;--i)
  { printf("\n");
    for(j=n-i;j>=1;--j)
    { printf(" ");}
      for(j=(2*i)-1;j>=1;--j)
      { printf("*");}
     
   }
}
