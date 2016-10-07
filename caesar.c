#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <cs50.h>
#include <string.h>


int main(int argc, string argv[])
{
    if (argc!=2)
    {
        printf("Enter the key\n");
        return 1;
    }
    
    int k = atoi(argv[1]);
    
    string s = GetString();
    
    for (int i = 0, n = strlen(s); i < n; i++)
{
    if (isalpha (s[i]))
    {
     if (isupper (s[i]))
     {
        printf("%c", ((((s[i] - 'A') +k) %26) +'A'));
     }
     else
     {
        printf("%c", ((((s[i] - 'a') +k) %26) +'a'));
     }
    }
    else
    {
        printf("%c", s[i]);
    }
}
    printf("\n");
    return 0;
}