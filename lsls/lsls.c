#include <stdio.h>
#include <dirent.h>

/**
 * Main
 */
int main(int argc, char **argv)
{
  // Parse command line
  char *input = "howdy";
  if (argc > 1)
  {
    input = argv[1];
  }
  printf("%s\n", input);
  // Open directory

  // Repeatly read and print entries

  // Close directory

  return 0;
}