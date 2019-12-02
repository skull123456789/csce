#include <stdio.h>
#define SIZE 20

int main()
{
	int fibonacci[SIZE];
	fibonacci[0] = 0;
	fibonacci[1] = 1;
	for (int i = 2; i < SIZE; ++i)
	{
		fibonacci[i] = fibonacci[i-2] - fibonacci[i-1]; 
	}
	while(1)
	{
		printf("Input n: ");
		int n;
		scanf("%d", &n);
		if (n<0 || n>=20)
		{
			break;
		}
		printf("fibonacci[%d] = %d\n", n, fibonacci[n]);
	}
	return 0;
	

}