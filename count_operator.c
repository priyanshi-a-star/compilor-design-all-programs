#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    FILE * fPtr;
    int count = 0, i ;
    char ch;

   char symbol[10] = {'+', '-', '*', '/', '=' };

    fPtr = fopen("filed1.txt","r");
    if(fPtr == NULL)
    {
        printf("Unable to open file.\n");
        printf("Please check whether file exists and you have privilege.\n");
        exit(EXIT_FAILURE);
    }
    printf("File opened successfully. reading file contents characters.\n\n");
    // do
    // {
    //     ch = fgetc(fPtr);
    //     putchar(ch);
    // }while(ch != EOF);
    while ((ch = fgetc(fPtr)) != EOF)
    {
        // count++;
        // printf("%c", ch);
        for(i=0; i<6; i++)
        {
            if (symbol[i] == ch)
            count++;
            else 
            continue;
        }
    }
    
    fclose(fPtr);
    printf("\nTotal number of operators:  %d",count);
    return 0;
}
