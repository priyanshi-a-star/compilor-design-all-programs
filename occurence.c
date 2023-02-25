#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size

int main()
{
    char str[MAX_SIZE];
    char toSearch;
    int i, count;

    /* Input string and search character from user */
    printf("Enter any string: ");
    gets(str);
    printf("Enter any character to search: ");
    toSearch = getchar();

    count = 0;
    i=0;
    while(str[i] != '\0')
    {
        /*
         * If character is found in string then
         * increment count variable
         */
        if(str[i] == toSearch)
        {
            count++;
        }

        i++;
    }

    printf("Total occurrence of '%c' = %d", toSearch, count);

    return 0;
}