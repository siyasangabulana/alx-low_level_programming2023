#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 15

int main(void)
{
char password[PASSWORD_LENGTH + 1];
const char valid_chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
int i;
srand(time(NULL));
for (i = 0; i < PASSWORD_LENGTH; i++)
{
int index = rand() % (sizeof(valid_chars) - 1);
password[i] = valid_chars[index];
}
password[PASSWORD_LENGTH] = '\0';
printf("Tada! Congrats\n");
printf("%s\n", password);
return (0);
}
