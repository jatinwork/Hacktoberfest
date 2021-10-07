#include<stdio.h>
int fibo(int);
int main(){
int n;
scanf("%d",&n);
printf("The Number is %d",fibo(n));
return 0;}

int fibo(int n){
    if(n==2)
    return(1);
    if(n==1)
    return(0);

    return(fibo(n-1)+fibo(n-2));
}