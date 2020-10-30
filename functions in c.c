//https://www.hackerrank.com/challenges/functions-in-c/problem
#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)`  here.

*
int max_of_four(int a,int b,int c,int d)
{
   return (int m1=a>b?a:b)>(int m2=c>d?c:d)?m1:m2;

}

int main() 
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
}
