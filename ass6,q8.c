#include<stdio.h>
int main(){
int n,flag=2;
printf("enter a number: ");
scanf("%d",&n);
for(int i=2;i<n;i++)
{
 if(n%i==0)
 {
   printf("not a prime number");
   break;
 }
 flag++;
if(flag==n-1){
    printf("Prime number");
}

}
return 0;
}



