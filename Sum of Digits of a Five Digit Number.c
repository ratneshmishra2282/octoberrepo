//https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

    
    

int main() {
	
    int n,sum=0,c;
    scanf("%d", &n);
    
    while(n>0){
        c=n%10;
        sum=sum+c;
        n=n/10;
    }
    
   printf("%d",sum);
   return 0;


    
}



