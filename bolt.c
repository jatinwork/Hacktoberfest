#include<stdio.h>
//void pattern(int);
int main(){
  int k=0;
  scanf("%d",&k);
  //input is taken from user
  for(int j=0;j<k;j++){
  {float k1,k2,k3,v;
  scanf("%f %f %f %f",&k1,&k2,&k3,&v);
  float n=k1*k2*k3*v;
  float u=100.0/n;
  if(u<9.58)
  printf("Yes\n");
  else
  printf("No\n");}
}
}
