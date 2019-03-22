#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/stat.h>
#include <string.h>

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
  if (dir == NULL)
  {
    perror("Check your path");
    exit(1);
  }

  // Repeatly read and print entries
  while ((sd = readdir(dir)) != NULL)
  {
    struct stat st;
    char path[5000];

    long int size = st.st_size;
    char* file_name = sd->d_name;

    snprintf(path, sizeof(path), "%s/%s", input, file_name);

    stat(path, &st);
    
    
    if (st.st_mode & S_IFDIR)
    {
      printf("<DIR> \t %s\n", file_name);
    }
    else
    {
      printf("%ld \t %s\n", size, file_name);
    }
  }

  // Close directory
  closedir(dir);
  return 0;
}