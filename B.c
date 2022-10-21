#include<stdio.h>
int main(void)
{
 char fib[20][1000];
 int b,a,f,e;
 scanf("%d",&f);
 for(b=1;b<=f;b++)
 {    
  scanf("%d %s %s",&e,&fib[0],&fib[1]);
  for(a=2;a<=e;a++){
  strcpy(fib[a],fib[a-1]);
  strcat(fib[a],fib[a-2]);
  }
    printf("Case #%d: %s\n",b,fib[e]);
 }
}
