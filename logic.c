#include "logic.h"

int sleep(unsigned long x) {
  clock_t start = clock(), end;
  do {
	if ((end = clock()) == (clock_t)-1) {
	    return 0;
	}
  }while (1000.0 * (end - start) / CLOCKS_PER_SEC < x);
 return 1;
}
