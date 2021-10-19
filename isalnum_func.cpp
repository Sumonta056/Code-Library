int isalnum ( int c );
Check if character is alphanumeric
Checks whether c is either a decimal digit or an uppercase or lowercase letter.
can be use for special character (!isalnum())

/* isalnum example */
#include <stdio.h>
#include <ctype.h>
int main ()
{
  int i;
  char str[]="c3po...";
  i=0;
  while (isalnum(str[i])) i++;
  printf ("The first %d characters are alphanumeric.\n",i);
  return 0;
}