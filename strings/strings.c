#include <stdio.h>
#include <stdlib.h>
/* 
    given a character array s (as a pointer), return the number of characters in the string.
    do not just use the `strlen` function from the standard libary.
*/
int string_length(char *s)
{
  // return length of string
  static int c = 0;
  while (s[c] != '\0')

  {
    c++;
    string_length(s + 1);
  }
  return c;
};
/*
      write a function that reverses the order of string s and outputs
      the reversed string to the input array rv. the rv array will have
      enough space for the reversed string. don't forget to terminate
      the reversed string with a null character. return the rv array.
  */
char *reverse_string(char *rv, char *s)
{
  // char *begin = s;
  // char *begin = s;
}
#ifndef testing
int main(void)
{
  char quote1[] = "don't forget to be awesome";
  char quote2[] = "a man a plan a canal panama";

  char rv[512];

  printf("the string 'don't forget to be awesome' has %d characters.\n", string_length(quote1));
  printf("the string 'a man a plan a canal panama' reversed is: '%s'\n", reverse_string(rv, quote2));

  return 0;
}
#endif
