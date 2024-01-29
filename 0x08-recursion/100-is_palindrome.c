#include "main.h"

int palindrome(char *, char *, char*);
int _strlen_recursion(char *);

/**
 *is_palindrome - function to check if a string is a palindrome
 *@s: string
 *Return: 1 if string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	char *middle, *right, *left;
	int mid;

	mid = _strlen_recursion(s) / 2;
	middle = s + mid;
	left = s;
	right = s + _strlen_recursion(s) - 1;

	return (palindrome(right, left, middle));
}

/**
 *palindrome - actual implementation of palindrome checker
 *@right: pointer starting from end of string
 *@left: pointer starting from beginning of string
 *@middle: pointer to middle of string
 *Return: 1 if string is palindrome and 0 if not
 */
int palindrome(char *right, char *left, char *middle)
{
	if (left == middle)
		return (1);
	if (*left != *right)
		return (0);
	return (palindrome(right - 1, left + 1, middle));
}

/**
 *_strlen_recursion - function that returns length of string
 *@s:string
 *Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
