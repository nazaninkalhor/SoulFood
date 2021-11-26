d#include <stdio.h>
#include <string.h>
int main()
{
    char* first = new char[250];
    char* second = new char[250];
    printf("Please enter your first string:");
    scanf("%s", first);
    printf("Please enter your second string:");
    scanf("%s", second);
    int comparison = strcmp(first, second);
    if(printf("%d",comparison) == 0)
        printf("Your second string exists in first string");
    
    return 0;
}
