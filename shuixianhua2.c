#include<stdio.h>
int fibonacci(int n)
{
	if (n == 1 || n == 2)
		return 1;
	else
		return  fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
	int n=1 ;
	scanf_s("%d", &n);
	printf("%d\n", fibonacci(n));

	return 0;
}
