#include <stdio.h>

int main()
{
	char c;
	int isLowerVowel, isUpperVowel;

	printf("Enter an alphabet: ");
	scanf(" %c", &c);

	isLowerVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
	isUpperVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

	if (isLowerVowel || isUpperVowel)
	{
		printf("%c is a vowel", c);
	}
	else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		printf("%c is a consonant", c);
	}
	else
	{
		printf("\nnot an alphabet\n");
	}

	return 0;
}