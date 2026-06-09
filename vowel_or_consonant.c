#include 
int main()
{
char c;
int isLowerVowel, isUpperVowel;
printf("Enter an alphabet: ");
scanf("%c",&c);

//To find the corrector is lowercase vowel
isLowerVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
//To find the character is Upper case vowel
isUpperVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
// compare to charector is Lowercase Vowel or Upper case Vowel

if (isLowerVowel || isUpperVowel)
printf("%c is a vowel", c);
//to check character is alphabet or not

elseif((c >= 'a' && c= 'A' && c <= 'Z'))
prinf("\n not a alphabet\n");

else
printf("%c is a consonant", c);

return 0;
}