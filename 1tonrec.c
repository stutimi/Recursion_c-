#include<stdio.h>
int num(int n){
    if(n==0) return 1;
    printf("%d\n",n);
    return num(n-1);
}
int main(){
int n;
scanf("%d",&n);
num(n);
return 0;
}