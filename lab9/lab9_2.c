#include <stdio.h>
#include <string.h>
int main(void)
{
    char string[100];
    printf("Введіть речення із 7+ слів на англ. мові: ");
    fgets(string, sizeof(string), stdin);
    int words_num = 0;
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == ' ' || string[i] == '\n')
            words_num++;
    }
    if (words_num < 7)
    {
        printf("треба більше 7 слів");
        return 0;
    }

    char *word = strtok(string, " \n");
    while (word != NULL)
    {
        for (int i = strlen(word) - 1; i >= 0; --i)
        {
            printf("%c", word[i]);
        }
        printf("\n");
        word = strtok(NULL, " \n");
    }
}