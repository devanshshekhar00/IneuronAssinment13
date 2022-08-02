#include <stdio.h>
int sum(int);
int main() {
   
    int k;printf("Enter number\t");
    scanf("%d",&k);
    printf("%d",sum(k*2));

    return 0;
}
int sum(int k)
{
  
   
   if(k%2==0)
   {
       
       if(k == 2) return k ;
       else return k + sum(k-2);
   }
   else 
   {
       k -= 1;
       if(k == 2) return k ;
       else return k + sum(k-2);
   }
   
    
    
    
}
