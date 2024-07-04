/**
 * string_toupper - Converts all lowercase letters of a string to uppercase
 * @str: The string to be converted
 *
 * This function iterates through each character of the input
 * string and converts all lowercase letters to uppercase letters. It does
 * not modify non-alphabetical characters or uppercase letters.
 *
 * Return: A pointer to the resulting string with all lowercase letters
 * converted to uppercase.
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		ptr++;
	}

	return (str);
}
