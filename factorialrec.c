#include<stdio.h>
int factorial(int n){
    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact = fact*i;  
          
    }
    return fact;  
}
int main(){
    int n;
    printf("Enter a  num \n");
    scanf("%d",&n);
    int fact = factorial(n);
    printf("%d",fact);
    return 0;
}