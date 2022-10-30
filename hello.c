#include "logic.h"

int main(void) {
  int com, you;
  printf("ジャンケンゲーム");
  srand((unsigned int)time(NULL));
  while (1) {
    com = rand() %3 +1;
    printf("あなたの手を入力(1=グー, 2=パー, 3=チョキ, 0=終了):"); scanf("%d", &you);
    if (you == 0) {
	break;
    }else if (you != 1 && you != 2 && you != 3) {
	continue;
    }else {
	printf("コンピュータの手:%d\n", com);
	if ((you == 1 && com == 3) || (you == 2 && com == 1) || (you == 3 && com == 2)) { //youの勝ちパターン
		printf("あなたの勝ち\n");
	}else if ((com == 1 && you == 3) || (com == 2 && you == 1) || (com == 3 && you == 2)) { //comの勝ちパターン
		printf("コンピュータの勝ち\n");
	}else {
		printf("あいこ\n");
		continue;
	}
    }
  }
return 0; 
}
