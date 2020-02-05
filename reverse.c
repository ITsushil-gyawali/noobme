#include <stdio.h>
main(void)
{ 
int a,tem,n,rev=0;
printf("enter the number\n: ");
scanf("%d",&n);
tem=n;
while(n>0)
a=n%10;
rev=rev*10+a;
n=n\10;
}
printf("the reverse of the no is %d\n",rev);
}
