#include <stdio.h>
int main (){
  int n;
  printf("enter the number");
  scanf ("%d", &n);
  int ans=0;
  while (n!=0){
    ans = ans + n%10;
   
      ans = ans*10;
    
    n = n/10;
    
  }
  printf("%d", ans/10);
  return 0;
}