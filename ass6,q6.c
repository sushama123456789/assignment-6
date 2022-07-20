#include<stdio.h>
int main(){
int n,fact=1;
printf("enter a number to cal the factorial");
scanf("%d",&n);
for(int i=n;i>0;i--)
{
  fact=fact*i;

}
printf("factorial of a number %d is %d",n,fact);
\

return 0;
}
