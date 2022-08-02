#include <stdio.h>
int fibbonaci(int);
int main() {
   
    int k;printf("Enter number \t");
    scanf("%d",&k);
    printf("%d",fibbonaci(k));

    return 0;
}
int fibbonaci(int k)
{
    if(k==1 || k==0 ) return k;
    return fibbonaci(k-1) + fibbonaci(k-2);
    
}
