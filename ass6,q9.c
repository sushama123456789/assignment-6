#include<stdio.h>
int main(){
int n,m ,larger;
printf("enter first  number to cal LCM :");
scanf("%d",&m);
printf("enter second number:");
scanf("%d",&n);
if(m>n){
  larger=m;
}
else{
  larger=n;
}
while(1){
    if(larger%m==0&&larger%n==0)
    {
       printf("%d\n",larger);
       break;
    }
    larger++;
}

return 0;
}
