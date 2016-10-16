#include <cs50.h>
#include <stdio.h>

int main(void)
 {
  printf("Количество времени проведённое в душе в минутах: ");
  int t = GetInt();
  printf("Вы израсходовали %i бутылочек\n", t*12);
 }