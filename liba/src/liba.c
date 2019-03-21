#include <stdio.h>

#include "liba/liba.h"

void liba_hello() {
  fprintf(stdout, "%s\n", "hello from liba");
}

/* Add as required in https://doc.cc.in2p3.fr/developpements:formation:git */
void liba_byebye() {
  fprintf(stdout, "%s\n"," I just add this test function...");
  fprintf(stdout, "%s\n"," I just add this test function...");
}


/* EOF */
