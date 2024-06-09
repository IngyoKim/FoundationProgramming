#include <stdio.h>
#include <math.h>
#include <string.h>

/*
// 1. ���� ������ ������ �Է��Ͽ�, ������������ �����ϴ� ���α׷��� �ۼ��϶�.
int main()
{
	int arr[100], b, tmp;
	printf("Enter the number of integer >> ");
	scanf_s("%d", &b);
	printf("Enter Integers >> ");
	for (int i = 0; i < b; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	for (int i = 0; i < b; i++)
	{
		for (int j = 0; j < b-1; j++)
		{
			if (arr[j + 1] < arr[j])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	printf("After Sorting>> ");
	for (int i = 0; i < b; i++)
	{
		printf("%d ", arr[i]);
	}
}
*/

/*
// 2. ���� n �� �Է��Ͽ� n!(factorial of n)�� ����ϰ�, ��°��� ���ڸ����� ����ϴ� ���α׷��� �ۼ��϶�. 0�� �Է��ϸ� ���α׷��� �����ϵ��� �϶�.
int main()
{
	while (1)
	{
		int n, fac = 1, cnt = 0, i = 0;
		printf("Enter an integer >> ");
		scanf_s("%d", &n);
		if (n == 0)
		{
			break;
		}
		for (int i = 1; i <= n; i++)
		{
			fac *= i;
		}
		while (1)
		{
			if (fac > pow(10, i))
			{
				i++;
			}
			else
			{
				break;
			}
		}
		printf("Factorial: %d, digits: %d\n\n", fac, i);
	}
}
*/

/*
// 3. ���� n1�� n2�� �Է��Ͽ�, n1�� n2�� ������� ��� ����ϴ� ���α׷��� �ۼ��϶�. �� ���� ��� 0�̸� ���α׷� ����.
int main()
{
	while (1)
	{
		int n1, n2, min;
		printf("Enter two integers >> ");
		scanf_s("%d %d", &n1, &n2);
		if (n1 == 0 && n2 == 0)
		{
			break;
		}
		if (n1 > n2)
		{
			min = n2;
		}
		else
		{
			min = n1;
		}
		printf("Common Divisions : ");
		for (int i = 1; i <= min; i++)
		{
			if (n1 % i == 0 && n2 % i == 0)
			{
				printf("%d ", i);
			}
		}
		printf("\n\n");
	}
}
*/

/*
// 4. ������ ���ڸ� �Է����� �޾�, �ٸ� ������ ���ڷ� �ٲپ� ����ϴ� ���α׷��� �ۼ��϶�. �Է� ������ 0�̸� ���α׷��� �����϶�
int main()
{
	while (1)
	{
		int a, bvalue = 0, c, i = 0, value = 0, x = 0;
		char input[100];
		int arr[100];
		printf("Enter binary-from, number, binary-to >> ");
		scanf_s("%d", &a);
		scanf_s("%s", input, 100);
		scanf_s("%d", &c);
		if (a == 0)
		{
			break;
		}
		// ���Էµ� ���� a�������� 10�������� ��ȯ
		int length = strlen(input);
		for (int i = 0; i < length; i++) 
		{
			int digit;
			if (input[i] >= '0' && input[i] <= '9') 
			{
				digit = input[i] - '0';
			}
			else if (input[i] >= 'a' && input[i] <= 'f') 
			{
				digit = input[i] - 'a' + 10;
			}
			value = value * a + digit;
		}
		i = 0;
		while (1)
		{
			if (value == 0)
			{
				x--;
				break;
			}
			arr[x] = value % c;
			x++;
			value /= c;
		}
		printf("result>> ");
		for (int j = x; j >= 0; j--)
		{
			if (arr[j] > 10)
			{
				printf("%c", 87 + arr[j]);
			}
			else
			{
				printf("%d", arr[j]);
			}
		}
		printf("\n\n");
	}
}
*/

/*
// 5. ������ ���������� �� ������ �Է����� �޾� ����� ����ϴ� ���α׷��� �ۼ��϶�.enterŰ�� �Է��ϸ� ���α׷��� �����϶�.
int main()
{
	while (1)
	{
		int a, sum;
		char b;
		printf("Enter the expression>> ");
		scanf_s("%d", &a);
		if (a == 0)
		{
			break;
		}
		sum = a;
		while (1)
		{
			scanf_s("%c", &b, 2);
			while (b == ' ')
			{
				scanf_s("%c", &b, 2);
			}
			if (b == '\n')
			{
				break;
			}
			scanf_s("%d", &a);
			if (b == '+')
			{
				sum += a;
			}
			else if (b == '-')
			{
				sum -= a;
			}
		}
		printf("%d\n\n", sum);
	}
}
*/

/*
// 6. ����� ���ڸ� �̿��Ͽ� �����ϴ� ���α׷��� �ۼ��϶�. ���α׷� �̸��� sortint.c�� �ϰ�, �Է� �����͸� data.txt ���� �о��.
int main()
{
	int i = 0, tmp;
	int arr[1000] = { 0 };
	FILE* inFile = fopen("data1.txt", "r");
	printf("Before >> ");
	while (1)
	{
		fscanf_s(inFile, "%d", &arr[i]);
		if (arr[i] == '\0')
		{
			break;
		}
		printf("%d ", arr[i]);
		i++;
	}
	printf("\nAfter >> ");
	for (int j = 0; j < i; j++)
	{
		for (int k = 0; k < i-1; k++)
		{
			if (arr[k] > arr[k + 1])
			{
				tmp = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = tmp;
			}
		}
	}
	for (int j = 0; j < i; j++)
	{
		printf("%d ", arr[j]);
	}
}
*/

/*
// 7. 10������ �Է��Ͽ� ������ ������ �ٲٴ� ���α׷��� �ۼ��϶�. �Է� ���� 0�̸� ���α׷��� �����϶�. 
// 16���������� �ϰ� 10�̻��� ���ڴ� a,b,c,d,e,f�� ǥ���϶�.
int main()
{
	int a, b, i, x = 0;
	int arr[100]; // 100 = 1*8^2 + 4*8^1 + 0
	printf("Enter number and binary >> ");
	scanf_s("%d %d", &a, &b);
	for (int i = 0; i < 100; i++)
	{
		arr[x] = a % b;
		a /= b;
		x++;
		if (a < b)
		{
			arr[x] = a;
			break;
		}
	}
	for (int i = x; i >= 0 ; i--)
	{
		printf("%d", arr[i]);
	}
}
*/

/*
// 8. ������ ���ڸ� �Է����� �޾�, 10������ ���ڷ� �ٲپ� ����ϴ� ���α׷��� �ۼ��϶�. �Է� ������ 0�̸� ���α׷��� �����϶�.
int main()
{
	while (1)
	{
		int a, b, i = 0, value = 0;
		int arr[100];
		printf("Enter binary and number>> ");
		scanf_s("%d %d", &a, &b);
		if (a == 0)
		{
			break;
		}
		while (1)
		{
			if (b >= pow(10, i))
			{
				i++;
			}
			else
			{
				i--;
				break;
			}
		}
		for (int j = i; j >= 0; j--)
		{
			arr[i - j] = b / pow(10, j);
			b -= arr[i - j] * pow(10, j);
		}
		for (int j = i; j >= 0; j--)
		{
			value += arr[i - j] * pow(a, j);
		}
		printf("result >> %d\n\n", value);
	}
}
*/