/*
 ============================================================================
ファイル名:c04-2.c
作 成 日:4/29/2017
作 成 者:加賀屋　ジャンメデル
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a;
	printf("10 進入力:");
	scanf("%d", &a); /* 変数 a に 10 進入力 */
	a = a * 2; /* 変数 a を 2 倍 */
	printf("2 倍すると%d です\n", a); /* 変数 a を 10 進出力 */
	return 0;



}