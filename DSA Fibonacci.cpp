//Q.3. Fibonacci
#include<stdio.h>
int fibo(int n)
{
	if(n==0||n==1)
	return n;
	else
	return fibo(n-1)+fibo(n-2);
}
int main()
{
	int i, num;
	printf("Enter the number of series you want: ");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("%d ", fibo(i));
	}
	
}