#include<stdio.h>
void increasing(int x, int n){
    if(x>n) return;
    printf("%d\n",x);
    increasing(x+1,n);
    return ;
}
int main(){
    int n;
    printf("Enter a  num \n");
    scanf("%d",&n);
    increasing(1,n);
  
    return 0;
}