//Q.2. Sum
#include<stdio.h>
int sum(int n)
{
	if(n==0)
	return 0;
	else
	return n+sum(n-1);
}
int main()
{
	int num, result;
	printf("Enter the number yo want to find thesum: ");
	scanf("%d",&num);
	result=sum(num);
	printf("The sum of %d natural number is %d",num,result);
}