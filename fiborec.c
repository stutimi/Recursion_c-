#include<stdio.h>
int fibo(int n){
if(n==1 || n==2) return 1;
int fibo1 = fibo(n-1);
int fibo2 = fibo(n-2);
int fibo = fibo1 + fibo2;
return fibo;
}
int main(){
    int n;
    printf("Enter  n ");
    scanf("%d",&n);
    printf("%d",fibo(n));
return 0;
}