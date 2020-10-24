/*
3
44
555
6666
555
44
3
*/
#include<stdio.h>
int main()
{ int n,s,i,j,count=0;
  printf("Enter the two no.\n");
  scanf("%d%d",&n,&s);
  for(i=s;count<4;++count)
  { for(j=0;j<count+1;++j)
    { printf("%d",i);
    }
    printf("\n");
    i=i+1;
  }
  for(i=s+n-2;count>0;--count)
  { for(j=0;j<count-1;++j)
    { printf("%d",i);
    } 
    printf("\n");
    i=i-1;
  }
  return 0;
}
