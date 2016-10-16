#include <cs50.h>
#include <stdio.h>

int main (void)
 {
    int h = 0;
     
      do {
        printf("Введите высоту полупирамиды: \n");
        h = GetInt();
         }
      while (h < 0 || h > 23);
     
     
     for (int q=1; q<=h; q++)
     {
      for (int s=1; s<=h-q; s++)
      {
      printf (" ");
      }
      for (int hash=1; hash<=(q+1); hash++)
      {
       printf ("#");
      }
       printf("\n");
     }
     
 }