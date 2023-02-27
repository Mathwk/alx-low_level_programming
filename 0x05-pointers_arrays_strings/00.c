#include <stdio.h>

void main()
{
	/*
	 * char *z ="Mathewos Kebede";
	int i;
        
        for (i = 0; z[i] != '\0';)
                i++;
	printf("%d, \n", i);
	*/

	/*
	 int i, j;
	 char str[]="mathewos kebede";

        for (i = 0; str[i] != '\0';)
                i++;
	printf("%d, \n",i);
        for (j = 0; j < i; j++)
                printf("%c",str[j]);
	*/


	char *s ="fdfd";
        int i, j, c;


        for (i = 0; s[i] != '\0';)
                i++;
        c = i;

        for (j = 0; j < i; j++)
        {
                c--;
		printf("%d, %d, %d\n",i ,j ,c);
        }}
