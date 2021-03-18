//Author: Rudraksh Vasudev
//Date Of Creation:18/03/2021
//Date Of Updation:18/03/2021
//Purpose Of The Program:To Check Whether Entered Alphabet Is Vowl or Consonant
#include <stdio.h>
int main()		//Main Function Body 
{
    char c;		//Data and Variable Declaration
    int lowercaseVowel, uppercaseVowel;		//Data and Variable Declaration
    printf("Enter an alphabet: ");		//Print Function Calling
    scanf("%c", &c);		//Input Function

    // evaluates to 1 if variable c is a lowercase vowel
    lowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // evaluates to 1 if variable c is a uppercase vowel
    uppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // evaluates to 1 (true) if c is a vowel
    if (lowercaseVowel || uppercaseVowel)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}
