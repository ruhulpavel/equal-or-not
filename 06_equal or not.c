#include <stdio.h>
int main()
{
	int firstNumber, secondNumber;
	printf("Enter the first number:");
	scanf("%d", &firstNumber);
	printf("Enter the second number:");
	scanf("%d", &secondNumber);
	if(firstNumber==secondNumber)
	{
		printf("Both are equal");
	}
	else{
		printf("Both are not equal");
	}
	return 0;
}
