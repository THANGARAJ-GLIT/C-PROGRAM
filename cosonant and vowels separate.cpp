#include <stdio.h>
int main()
{
    char ch;
    ch = getchar();
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("%d is Vowel\n", ch);
    }
    else
    {
        printf("%d is consonant\n", ch);
    }
    return 0;
}
