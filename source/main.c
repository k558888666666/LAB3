#include <stdio.h>
#include <stdlib.h>

int Odd(int U);
int Even(int U);
int TotalSum(int U);

int main(void)
{
	int n, Sum;
	char AddChoice;

	printf("1+2+....+n=?�п�Jn=");
	scanf_s("%d", &n);
	getchar();
	printf("�n���_�ƩM(O)���ƩM(E)��ƩM(I)?");
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
		printf("��ܿ��~\n");
		return -1;
		
	}
	printf("�`�X��%d\n", Sum);

	system("pause");
	return 0;
}

int Odd(int U)
{
	int i, total = 0;
		for ( i = 1; i <= U; i++)
		{
			if (i % 2 == 1)
			{
				total = total + i;
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
			total = total + i;
		}
	}
	return total;
}
int TotalSum(int U)
{
	return Odd(U) + Even(U);
}