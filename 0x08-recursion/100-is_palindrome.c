#include <stdio.h>
#include <string.h>

int is_palindrome(char *s);

int main(void)
{
    int r;

    r = is_palindrome("level");
    printf("%d\n", r);
    r = is_palindrome("redder");
    printf("%d\n", r);
    r = is_palindrome("test");
    printf("%d\n", r);
    r = is_palindrome("step on no pets");
    printf("%d\n", r);
    return 0;
}

int is_palindrome(char *s)
{
    int length = strlen(s);
    int i;

    for (i = 0; i < length / 2; i++)
    {
        if (s[i] != s[length - i - 1])
            return 0;
    }

    return 1;
}
