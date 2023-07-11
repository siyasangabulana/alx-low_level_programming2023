#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *word_len - locate the index
 *@str: search the string
 *Return: index marking the end of the initial word
 */

int word_len(char *str)
{
int index = 0, len = 0;
while (*(str + index) && *(str + index ) !=' ')
{
len++;
index++;
}
return (len);
}

/**
 *word_len - counts the number of words within string
 *@str: search the string
 *Return: nuber  of words within str
 */

int count_words(char *str)
{
int index = 0, words = 0, len = 0;
for (index = 0; *(str + index); index++)
len++;
for (index = 0; index < len; index++)
{
if (*(str + index) != ' ')
{
words++;
index += word_len(str + index);
}
}
return (words);
}

/**
 *strtow - split a string into words
 *@str: String to split
 *Return: A pointer to an array
 */

char **strtow(char *str)
{
char *token;
char **array = NULL;
int i = 0;
if (str == NULL || *str == '\0')
return NULL;
token = strtok(str, " ");
while (token != NULL)
{
array = realloc(array, sizeof(char *) * (i + 1));
array[i] = token;
i++;
token = strtok(NULL, " ");
}
array[i] = NULL;
return (array);
}
