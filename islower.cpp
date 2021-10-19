int islower ( int c );
Check if character is lowercase letter
Checks whether c is a lowercase letter.

/* islower example */
#include <stdio.h>
#include <ctype.h>
int main ()
{
  int i=0;
  char str[]="Test String.\n";
  char c;
  while (str[i])
  {
    c=str[i];
    if (islower(c)) c=toupper(c);
    putchar (c);
    i++;
  }
  return 0;
}