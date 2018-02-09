 #include "holberton.h"


/**
 * len - get the length of the string
 * @s: string
 *
 * Return: the length
 */
int len(char *s)
{
	if (*s == '\0')
		return (0);
	return (len(s + 1) + 1);
}
/**
 * palindrom - comparing the charachters
 * @s: string
 * @y: index beginning of the string
 * @x: the end of the string
 *
 * Return: 1 if they are equal 0 if not
 */
int palindrom(char *s, int y, int x)
{
	if (s[y])
	{
		if (s[y] == s[x])
			return (palindrom(s, y + 1, x - 1));
		else
			return (0);
	}
	return (1);
}
/**
 * is_palindrome - checks is it a palindrom
 * @s: string
 *
 * Return: 1 if true 0 if false
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (palindrom(s, 0, len(s) - 1));
}
