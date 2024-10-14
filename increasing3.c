#include<stdio.h>
void decreasing(int n){
    if(n==0) return;
    printf("%d\n",n);
    return decreasing(n-1);
}
int main(){
    int n;
    printf("Enter a  num \n");
    scanf("%d",&n);
    decreasing(n);
  
    return 0;
}