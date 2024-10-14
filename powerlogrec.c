#include<stdio.h>
int powerlog(int a, int b){
    if(b==0) return  1;
    int x = powerlog(a,a/2);
    if(b%2==0) return x*x;
else return x*x*a;
}

int main(){
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    int p = powerlog(a,b);
    printf("%d raised to the power %d is %d",a,b,p);
    return 0;
}