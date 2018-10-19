#include <stdio.h>
#include <stdlib.h>

int Odd(int U);
int Even(int U);
int TotalSum(int U);

int main(void)
{
	int n, Sum;
	char AddChoice;

	printf("1+2+....+n=?請輸入n=");
	scanf_s("%d", &n);
	fflush(stdin);
	printf("要做奇數和(O)偶數和(E)整數和(I)?");
	scanf_s("%c", &AddChoice);

	switch (AddChoice)
	{
	case 'O':
		Sum = Odd(n);
		break;
	case 'E':
		Sum = Odd(n);
		break;
	case 'I':
		Sum = Odd(n);
		break;
	default:
		printf("選擇錯誤\n");
		return -1;

	}
	printf("總合為%d\n", Sum);

	system("pause");
	return 0;
}

int Odd(int U)
{
	int i, total = 0;
	for (i = 1; i <= U; i++)
	{
		if (i % 2 == 1)
		{
			total = total + 1;
		}
	}
	return total;
}
int Even(int U)
{
	int i, total = 0;
	for (i = 1; i <= U; i++)
	{
		if (i % 2 == 0)
		{
			total = total + 1;
		}
	}
	return total;
}
int TotalSum(int U)
{
	return Odd(U) + Even(U);
}