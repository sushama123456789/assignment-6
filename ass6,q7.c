#include<stdio.h>
int main(){
int n,flag=0,k=1;
printf("enter a number");
scanf("%d",&n);
if(n==0){
    printf(" number has digit %d\n",k);
}
for(int i=1;n>0;i++)
{
  if(n%10)
  {
   flag++;
  }
  else
  {
    flag++;
  }
  n=n/10;

}
//if(n==0){
 //   printf(" number has digit %d\n",k);
//}
if(flag>0){
printf(" no. of digit in a given number is %d\n",flag);
}

return 0;
}
