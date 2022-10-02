/* 1
#include<stdio.h>
int sumnatural(int n)
{
    int a;
    if(n>0){
    a=n+sumnatural(n-1);
    return a;
    }
}

 int main()
{
    int n,s;
    printf("enter a numbers");
    scanf("%d",&n);
    s=sumnatural(n);
    printf("\n sum is %d",s);
    return 0;
}*/
/* 2
#include<stdio.h>
int sumodd(int );
int main()
{
    int n,s;
    printf("enter a numbers");
    scanf("%d",&n);
    s=sumodd(n);
    printf("first sum of odd natural numbers %d",s);
    return 0;
}
int sumodd(int n)
{
    int a;
    if(n>0)
{
    {
}    a=2*n-1+sumodd(n-1);
    return a;}
}*/
/* 3
#include<stdio.h>
int sumeven(int);
int main()
{
    int n,s;
    printf("enter a numbers");
    scanf("%d",&n);
    s=sumeven(n);
    printf("sum is %d",s);
    return 0;
}
int sumeven(int n)
{
    int a;
    if(n==0)
        return 0;
    a=2*n+sumeven(n-1);
    return a;
}*/
/* 4
#include<stdio.h>
int sumsquare(int);
int main()
{
    int n,s;
    printf("enter a numbers");
    scanf("%d",&n);
    s=sumsquare(n);
    printf("sum od square %d",s);
    return 0;
}
int sumsquare(int n)
{
    int a;
    if(n==1)
        return 1;
    a=n*n+sumsquare(n-1);
    return a;
}*/
/* 5
#include<stdio.h>
int sumdigit(int);
int main()
{
    int n,s;
    printf("enter a numbers");
    scanf("%d",&n);
    s=sumdigit(n);
    printf("sum of digit %d",s);
    return 0;
}
int sumdigit(int n)
{
    int a;
    if(n==0)
        return 0;

    a=n%10+sumdigit(n/10);
    return a;
}*/
/* 6
#include<stdio.h>
int fact(int n)
{
   int a;
   if(n==0)
        return 1;
   a=n*fact(n-1);
   return a;
}
int main()
{
    int n,s;
    printf("enter a numbers");
    scanf("%d",&n);
    s=fact(n);
    printf("factorial is %d",s);
    return 0;
}*/
/* 7
#include<stdio.h>
int hcf(int , int);
int main()
{
    int a,b,s;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    s=hcf(a,b);
    printf("hcf is %d",s);
    return 0;
}
int hcf(int a , int b)
{
    if(a%b==0)
        return b;
    if(b%a==0)
        return a;
    if(a>b)
        return hcf(a%b,b);
    else
        return hcf(a,b%a);
}*/
/* 8
#include<stdio.h>
int fibonacci(int);
int main()
{
    int n,s,i;
    printf("enter a numbers");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
    s=fibonacci(i);
    printf("%d  ",s);
    }
    printf("\n\n************************");
    return 0;
}
int fibonacci(int n)
{
    if(n==0 || n==1)
        return n;
    return fibonacci(n-1)+fibonacci(n-2);
}*/
/* 9
#include<stdio.h>
int count(int);
int main()
{
    int n,s;
    printf("enter a numbers");
    scanf("%d",&n);
    s=count(n);
    printf("%d",s);
    return 0;
}
int count(int n)
{
    if(n<10)
        return 1;
    return 1+count(n/10);
}*/

#include<stdio.h>
int power(int , int);
int main()
{
    int a,b,s;
    printf("enter a numbers");
    scanf("%d",&a);
    printf("\n##############################################");
    printf("\n enter power of numbers");
    scanf("%d",&b);
    s=power(a,b);
    printf("%d",s);
    return 0;
}
int power(int a , int b)
{
    if(b==0)
        return 1;
    return a*power(a,b-1);
}
