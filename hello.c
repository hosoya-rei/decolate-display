#include "logic.h"

int main(void) {
  for (int i = 10; i > 0; i--) {
    printf("\r%d ", i);
    fflush(stdout);
    sleep(1000);
  }
  printf("\rFIRE!\n");
  printf("経過時間:%lf秒\n", (double)clock() / CLOCKS_PER_SEC);
 
 return 0; 
}
