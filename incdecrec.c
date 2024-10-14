#include<stdio.h>
void decreasing(int m){
    if(m==0) return;
    printf("%d\n",m);
    return decreasing(m-1);
}
void increasing(int n){
    if(n==0) return; //base case
    increasing(n-1);// call
    printf("%d\n",n);//code 
     return;
}
int main(){
    int n; int m;
    printf("Enter a  num \n");
    scanf("%d %d",&m,&n);
    increasing(n);
  decreasing(m);
    return 0;
}