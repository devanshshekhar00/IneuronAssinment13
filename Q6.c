#include <stdio.h>
int factorial(int);
int main() {
   
    int k;printf("Enter number\t");
    scanf("%d",&k);
    printf("%d",factorial(k));

    return 0;
}
int factorial(int k)
{
  
   
   if(k == 1) return 1;
   return k*factorial(k-1);
   
    
    
    
}
