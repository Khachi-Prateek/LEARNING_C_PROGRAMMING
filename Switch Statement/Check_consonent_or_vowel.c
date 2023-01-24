#include <stdio.h>
int main()
{
    char in;
    printf("Enter a character : ");
    scanf("%c", &in);
    if (in >= 'a' && in <= 'z' || in >= 'A' && in <= 'Z')
    {
        if (in == 'a' || in == 'e' || in == 'i' || in == 'o' || in == 'u' || in == 'A' || in == 'E' || in == 'I' || in == 'O' || in == 'U')
        {
            printf("Entered character is a vowel");
        }
        else
        {
            printf("Enter character is a consonent");
        }
    }
    else
    {
        printf("Enter an alphabet");
    }
}