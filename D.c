#include<stdio.h>
int main () 
{
 int a, b;
 long long int k, j, all,jml;
 scanf("%d", &a);
 for (b=1;b<=a;b++) 
 {
 all = 1;
 jml = 0;
 scanf("%lld", &k); 
 j = 2;
 while (j>1)
  {
 if (k%j == 0)
 {
 k = k/j;
 jml++;
 }
 else
 {
 all = all * (1+jml); 
 j++;
 if(j*j>k)
 {
    j = k;
 }
 jml = 0;
 }
 }
 printf("Case #%d: %lld\n", b, all);
 }
 return 0;
}
