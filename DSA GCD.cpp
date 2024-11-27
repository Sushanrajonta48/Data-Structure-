//Q.5. GCD(Greatest Common Divisor)
#include<stdio.h>
int gcd(int x, int y)
{
	if(y==0)
	return x;
	else 
	return gcd(y, x%y);
}
int main()
{
	int n1,n2;
	printf("\nEnter two numbers:");
	scanf("%d%d",&n1,&n2);
	printf("\nThe GCD of %d and %d is %d",n1,n2,gcd(n1,n2));
	return 0;
}
