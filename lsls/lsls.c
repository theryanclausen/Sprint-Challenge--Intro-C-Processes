#include <stdio.h>
#include <dirent.h>

/**
 * Main
 */
int main(int argc, char **argv)
{
  DIR *dir;
  struct dirent *sd;

  // Parse command line
  char *input = ".";
  if (argc > 1)
  {
    input = argv[1];
  }

  // Open directory
  dir = opendir(input);

  // Repeatly read and print entries
  while((sd = readdir(dir)) != NULL)
  {
    printf("%s\n", sd->d_name);
  }

  // Close directory
  closedir(dir);
  return 0;
}