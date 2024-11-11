#include <stdio.h>
#define CODELEN 11
int main(void)
{
	char code[80];
	int spos;//マスク開始位置
	int epos;//マスク終了位置
	int i;//ループカンター
	int okflag = 0;
	while (okflag == 0) {
		printf("会員コード（%d桁）", CODELEN);
		//SDLをする
		scanf("%s", code);
		i = 0;
		//数える
		while (code[i] != '\0') {
			i++;//33		
		}
		if (i != CODELEN) {
			printf("会員コードが%d桁ではありません¥n，CODELEN");
			continue;
		}
		printf("マスク開始位置終了位置：");
		scanf_s("%d%d", &spos, &epos);
		if (spos <1 || spos >CODELEN) {
			printf("マスク開始位置の指定が正しくありません¥");
			continue;
		}
		if (epos<spos || epos>CODELEN) {//34
			printf("マスク終了位置の指定が正しくありません¥）");
			continue;
		}
		//35
		//修正
		okflag = 1;
	}
	printf("マスク後会員コード");
	for (i = 0; i < CODELEN; i++) {
		if (i >= spos - 1 && i <= epos - 1)//36
			printf("*");
		else
			printf("%c", code[i]);

	}
	printf("\n");
	return 0;
}