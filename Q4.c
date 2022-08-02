#include <stdio.h>
int sum(int);
int main() {
   
    int k;printf("Enter number\t");
    scanf("%d",&k);
    printf("%d",sum(k));

    return 0;
}
int sum(int k)
{
  
   
   if(k==1) return 1;
   return k*k + sum(k-1);
   
    
    
    
}
