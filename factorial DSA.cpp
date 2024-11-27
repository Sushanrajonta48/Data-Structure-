//Q.1. Factorial
#include<stdio.h>
long fact(int n)
{
	if(n==0)
	return 1;
	else
	return n*fact(n-1);
}
int main()
{
	long num, result;
	printf("Enter the number yo want to find the factorial: ");
	scanf("%d",&num);
	result=fact(num);
	printf("The factorial of %d is %d",num,result);
}