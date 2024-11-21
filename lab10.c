#include <stdio.h>
int my_strlen(const char *str)
{
	int length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	return length;
}
int main()
{
	const char *text = "Hello";
	printf("Довжина рядка: %d\n", my_strlen(text));
}












#include <stdio.h>
#include <stdlib.h>
int* toPoint(int x, int y)
{
	int* point = (int*)malloc(2 * sizeof(int));
	if (point == NULL)
	{
		printf("Помилка виділення пам'яті!\n");
		return NULL;
	}
	point[0] = x;
	point[1] = y;
	return point;
}
int main()
{
	int x = 5, y = 10;
	int* point = toPoint(x, y);
	if (point != NULL)
	{
		printf("Координати точки: (%d, %d)\n", point[0], point[1]);
	    printf("Вказівник на точку: %p\n", (void*)point);
		free(point);
		printf("Пам'ять успішно звільнена.\n");
	}
}













#include <stdio.h>
#include <stdlib.h>
double add(double a, double b)
{
	return a + b;
}
double subtract(double a, double b)
{
	return a - b;
}
double multiply(double a, double b)
{
	return a * b;
}
double divide(double a, double b)
{
	if (b == 0)
	{
		printf("Помилка: ділення на нуль!\n");
		return 0;
	}
	return a / b;
}
int main()
{
	double (*operations[])(double, double) = {add, subtract, multiply, divide};
	char input[50];
	double operand1, operand2;
	char operator;
	printf("Введіть вираз (наприклад, 1.28+3.14): ");
	if (fgets(input, sizeof(input), stdin) == NULL)
	{
		printf("Помилка вводу!\n");
		return 1;
	}
	if (sscanf(input, "%lf%c%lf", &operand1, &operator, &operand2) != 3)
	{
		printf("Неправильний формат вводу!\n");
		return 1;
	}
	double result;
	switch (operator)
	{
	case '+':
		result = operations[0](operand1, operand2);
		break;
	case '-':
		result = operations[1](operand1, operand2);
		break;
	case '*':
		result = operations[2](operand1, operand2);
		break;
	case '/':
		result = operations[3](operand1, operand2);
		break;
	default:
		printf("Невідомий оператор: %c\n", operator);
		return 1;
	}
	printf("Результат: %.2lf\n", result);
}





