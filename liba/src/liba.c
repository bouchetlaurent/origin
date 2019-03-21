#include <stdio.h>

#include "liba/liba.h"

void liba_hello() {
  fprintf(stdout, "%s\n", "hello from liba");
}

<<<<<<< HEAD
/* Add as required in https://doc.cc.in2p3.fr/developpements:formation:git */
void liba_byebye() {
  fprintf(stdout, "%s\n"," I just add this test function...");
  fprintf(stdout, "%s\n"," I just add this test function...");
}


=======
void liba_byebye() {
  fprintf(stdout, "%s\n", "hello from liba");
}

void liba_greetings() {
  fprintf(stdout, "%s\n", "greetings from liba");
}

void liba_greetings2() {
  fprintf(stdout, "%s\n", "greetings from liba on branch");
}
>>>>>>> greetings
/* EOF */
