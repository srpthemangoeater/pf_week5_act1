#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int isPrime(int);
int main()
{
	int x;
	scanf("%d", &x);
	if (isPrime(x) == 1)
		printf("Prime Number");
	else
		printf("Not Prime Number");
	return 0;
}
int isPrime(int a)
{
	for (int i = 2;  i < a;i++)
		if (a % i == 0)
			return 0;
	return 1;
}