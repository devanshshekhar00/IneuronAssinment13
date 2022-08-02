#include <stdio.h>
int HCF(int,int);
int main() {
   
    int k,j;printf("Enter number 1\t");
    scanf("%d",&k);printf("Enter number 2\t");scanf("%d",&j);
    printf("%d",HCF(k,j));

    return 0;
}
int HCF(int k,int j)
{
    if(k % j == 0) return j;
    return HCF(j, k % j);
}

