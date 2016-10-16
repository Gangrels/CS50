#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (int argc, string argv[])
{
    if (argc!=2)
    {
        printf("Repeat");
        return 1;
    }
    
    for (int i=0; i<strlen(argv[1]); i++)
    {
        if (!isalpha(argv[1][i]))
        {
            printf("Only English Characters\n");
            return 1;
        }
    }

    string Keyword = argv[1];
    int KeywordLength = strlen(Keyword);
    string s = GetString();
    int TextLength = strlen(s);
    char e;
    

    
  for (int i = 0, k = 0; i < TextLength; i++)
  {
            if (isalpha (s[i]))
            {
                if (s[i]>='A' && s[i]<='Z')
                {
                 int Key = Keyword[k % KeywordLength] - 65;
                 k+=1;
                 e = (((s[i] - 65) + Key) % 26 + 'A');
                }
                else
                {
                  if (s[i]>='a' && s[i]<='z')
                  {
                int Key = Keyword[k % KeywordLength] - 97;
                k+=1;
                e = (((s[i] - 97) + Key) % 26 + 'a');
                  }
                }   
            }
            else
            {
                e=s[i];
            }
            
            printf ("%c", e);
   }
   printf("\n");
   return 0;
}