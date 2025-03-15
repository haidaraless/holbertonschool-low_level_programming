#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * is_number - checks if a string is a valid number.
 * @str: string to checked
 *
 * Return: 1 if the string is a valid number, 0 otherwise.
 */
int is_number(char *str)
{
	int i = 0;

	if (str[0] == '\0')
		return (0);

	while (str[i] != '\0')
	{
		if (!isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/**
 * multiply_large_numbers - multiplies two large numbers.
 * @num1: first number as a string.
 * @num2: second number as a string.
 *
 * Return: a pointer to the result string.
 */
char *multiply_large_numbers(char *num1, char *num2)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int len_result = len1 + len2;
	char *result = (char *)malloc(len_result + 1);
	int i, j, carry, mul;

	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 0; i < len_result; i++)
		result[i] = '0';
	result[len_result] = '\0';

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			mul = (num1[i] - '0') * (num2[j] - '0') + (result[i + j + 1] - '0') + carry;
			carry = mul / 10;
			result[i + j + 1] = (mul % 10) + '0';
		}
		result[i + j + 1] += carry;
	}

	i = 0;
	while (result[i] == '0' && i < len_result - 1)
		i++;

	char *final_result = result + i;

	return (final_result);
}

/**
 * main - multiplies two positive numbers.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;
	char *result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = argv[1];
	num2 = argv[2];

	if (!is_number(num1) || !is_number(num2))
	{
		printf("Error\n");
		exit(98);
	}

	result = multiply_large_numbers(num1, num2);

	printf("%s\n", result);

	free(result - (result - argv[1]));

	return (0);
}
