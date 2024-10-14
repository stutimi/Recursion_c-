#include<stdio.h>
void greeting(int n){
    if(n==0) return;
    printf("STUTI MISHRA\n");
    return greeting(n-1);
}
int main(){
    int n;
    printf("Enter a  num \n");
    scanf("%d",&n);
    greeting(n);
  
    return 0;
}