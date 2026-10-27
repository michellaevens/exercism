#include <stddef.h>
#include "hello_world.h"

const char *hello(void)
{    
   static char* s = "Hello, World!";
   return s;
}
