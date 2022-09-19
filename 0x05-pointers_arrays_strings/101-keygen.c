#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
/**
* main - generates a random password
* Return: always returns 0
*/
int main(void)
{
  int i = 0, randomizer = 0;
  char numbers[] = "0123456789";
  char letter[] = "abcdefghijklmnopqrstuvwxyz";
  char LETTER[] = "ABCDEFFGHIJKLMNOPQRSTUVWXYZ";
  char symbols[] = "!@#$%^&*?";
  srand((unsigned int)(time(NULL)));
  char password[10];
  
  randomizer = rand() % 4;
  while (i < 10)
  {
    if (randomizer == 1)
    {
      password[i] = numbrers[rand() % 10];
      randomizer = rand() % 4;
    }
     else if (randomizer == 2) {
            password[i] = symbols[rand() % 8];
            randomizer = rand() % 4;
            printf("%c", password[i]);
            }
        else if (randomizer == 3) {
            password[i] = LETTER[rand() % 26];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
        else {
            password[i] = letter[rand() % 26];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
    i++;
  }
  return (0);
}
