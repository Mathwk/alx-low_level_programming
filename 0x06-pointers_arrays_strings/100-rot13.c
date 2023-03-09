#inolude "main.h"
/**
 * rot13 - encodes astring into rot13
 * @s: string to be encoded
 * Return: string
 */
char *rot13(char *s)
{
	int i, j;
	char *s1, *s2;

	s1 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	s2 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == s1[j])
				s[i] = s2[j];
		}
	}
	return (s);
}
