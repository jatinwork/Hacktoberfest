#include<stdio.h>
void pattern(int);
int main(){
  int n[3];
  scanf("%d %d %d",&n[0],&n[1],&n[2]);
  if(n[0]==n[1]||n[1]==n[2]||n[2]==n[0])
  {
      printf("Yes");
  }
  else 
  printf("No");
}
