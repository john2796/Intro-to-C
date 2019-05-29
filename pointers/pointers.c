#include <stdio.h>
#include <string.h>
/*
    Example call:
    char buffer[1024];
    string_copy(buffer, "Hello!");
    printf("%s", buffer); // Prints "Hello!"
*/
// x -> that points to an array of chars
// y -> that points to character
// copies the character contents of y over to x
// pointer arithmetic is necessary here
// also make sure x points to a null terminator at it ends to terminate it properly.
void string_copy(char *x, char *y)
{
  int len = strlen(y);
  for (int i = 0; i < len; i++)
  {
    x[i] = y[i];
  }
  x[len] = '\0';
}

/*
    Searches the input string `str` for the first instance of the 
    character `c` (an unsigned char). This function returns a pointer
    that points to the first instance of the character `c` in the
    input string `str`.

    Do not use the `strchr` function from the standard library.
*/
char *find_char(char *str, int c)
{
  for (int i = 0; i < strlen(str); i++)
  {
    if (str[i] == c)
    {
      return &str[i];
    }
  }
  return NULL;
}

/*
    Searches the input string `haystack` for the first instance of
    the string `needle`. This function returns a pointer that points
    to the first instance of the string `needle` in the input
    string `haystack`. 

    Do not use the `strstr` function from the standard library.
*/
char *find_string(char *haystack, char *needle)
{
  printf("h and n %x %x\n", haystack, needle);
  // for (int i = 0; i < strlen(haystack); i++) {
  //   //
  // }
}

#ifndef TESTING
int main(void)
{
  char *found_char = find_char("hello", 'e');
  char *found_string = find_string("world", "or");

  printf("Found char: %s\n", found_char);
  printf("Found string: %s\n", found_string);

  return 0;
}
#endif