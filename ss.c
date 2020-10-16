#include <stdio.h>
#include <string.h>

int main()
{
    char a[56];
    char str[] = "Geeks-for-Geeks";

    // Returns first token
    char *token = strtok(str, "-");

    // Keep printing tokens while one of the
    // delimiters present in str[].
    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, "-");
        a=token[0];
    printf("%d",a);
    }



    return 0;
}
