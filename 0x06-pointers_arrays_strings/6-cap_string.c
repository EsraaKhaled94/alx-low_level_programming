/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to be modified
 *
 * This function capitalizes the first letter of each word in
 * the input string. Words are separated by spaces, tabulation, new line,
 * comma, semicolon, period, exclamation mark, question mark, double quotes,
 * parentheses, curly braces, and other similar characters.
 *
 * Return: A pointer to the modified string with all words capitalized.
 */
char *cap_string(char *str)
{
	int i = 0;;

	while (str[i] != '\0')
	{
		if ( str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');	
		}

		i++;
	}

	return (str);
}
