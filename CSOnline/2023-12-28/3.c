#include <stdio.h>
int main(void)
{
    char source[100];
    char target[100];
    printf("Please input a source text file's name:\n");
    scanf("%s", source);
    printf("Please input a destination text file's name:\n");
    scanf("%s", target);
    FILE *sourceFile = fopen(source, "r");
    FILE *targetFile = fopen(target, "a");
    char ch;
    while ((ch = fgetc(sourceFile)) != EOF)
    {
        fputc(ch, targetFile);
    }
    fclose(sourceFile);
    fclose(targetFile);
    printf("\nHere is the destination text file's content:\n\n");
    targetFile = fopen(target, "r");
    while ((ch = fgetc(targetFile)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(targetFile);
    printf("\n\nHere is the source text file's content:\n\n");
    sourceFile = fopen(source, "r");
    while ((ch = fgetc(sourceFile)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(sourceFile);
    printf("\n\nHere is the new destination text file's content:\n\n");
    targetFile = fopen(target, "r");
    while ((ch = fgetc(targetFile)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(targetFile);
    return 0;
}
