#include "main.h"
/**
 * is_palindrome - checks if str is palindrome
 * @s: string to check
 * Return: 1 if palindrome 0if not
 */
int _strlen_recursion(char *s);
int compare_str(int l, int r, char *s);

int is_palindrome(char *s)
{
	return (compare_str(0, _strlen_recursion(s) - 1, s));
}

/**
 * _strlen_recursion - prints the length of a string
 * @s: string
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (_strlen_recursion(s) + 1);
}

/**
 * compare_str - compare the string from left and right
 * @l: index starting from left
 * @r: index starting from right
 * @s: string to be checked
 * Return: 1 if palindrome 0 if not
 */
int compare_str(int l, int r, char *s)
{
	if (l >= r)
		return (1);
	if (s[l] != s[r])
		return (0);
	return (compare_str(l + 1, r - 1, s));
}
