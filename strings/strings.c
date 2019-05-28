#include <stdio.h>
#include <stdlib.h>
/* given a character array s (as a pointer), return the number of 
    characters in the string.
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
  char *sptr = s;  // sptr stores the base address of the str
  char *rptr = rv; // rptr stores the base address of the reverse

  int i = -1;
  // storing the ending address of str in sptr
  while (*sptr)
  {
    sptr++;
    i++; // i is the index of the end location
  }
  // storing the stirng str in rev in reverse order
  while (i >= 0)
  {
    // first decrementing then using as it stores
    // the location after the end location due to above while loop
    sptr--;
    *rptr = *sptr; // storing the value in sptr in rptr
    i--;           // decrementing the index
  }
  // string should always end with '\0' so explicitly
  // putting it at the end of the string
  *rptr = '\0';
  rptr = rv; //restoring the base address of the reverse string
  // storing the reversed string in the original string
  while (*rptr)
  {
    *sptr = *rptr;
    sptr++;
    rptr++;
  }
  return 0;
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
