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
  
   
   if(k<10) return k;
   else {
       int j = k%10;
       k = k/10;
       return j + sum(k);
   }
   
    
    
    
}
