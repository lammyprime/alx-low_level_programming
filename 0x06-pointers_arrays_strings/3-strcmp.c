#include "main.h"

/**
 * _strcmp - Compares pointers to two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 *
 * Return: If str1 < str2, the negative difference
 *         If str1 == str2, 0.
 *         If str1 > str2, the positive difference
 */
int _strcmp(char *s1, char *s2)
{
int i;
 int flag = 0;
 for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
if (s1[i] != s2[i])
  {flag = 1;
    break;
  }
 if (flag == 1)
return (s1[i] - s2[i]);
}
