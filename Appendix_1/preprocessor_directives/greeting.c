#include "cn_config.h"
#include <stdio.h>

/* Use preprocessor for conditional compilation. */
#ifdef CHINA
char *greeting = "你好";
#else
char *greeting = "Hello";
#endif

int main(){
  printf("%s\n", greeting);
  return 0;
}
