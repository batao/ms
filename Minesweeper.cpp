// ConsoleApplication13.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include "time.h"
#include "stdlib.h"

#define MS_MAX 30
#define B_MAX 100

int _tmain(int argc, _TCHAR* argv[])
{
	srand((unsigned)time(NULL));
	int ms[MS_MAX][MS_MAX] = {};

	for (int i = 0; i < MS_MAX; i++){
		for (int j = 0; j < MS_MAX; j++){
			printf("%2d", ms[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 0; i < B_MAX;){
		int ri = rand() % MS_MAX;
		int rj = rand() % MS_MAX;
		if (ms[ri][rj] != 9){
			ms[ri][rj] = 9;
			i++;
		}
	}
	for (int i = 0; i < MS_MAX; i++){
		for (int j = 0; j < MS_MAX; j++){
			if (ms[i][j] != 9){
				if (i - 1 >= 0){
					if (ms[i - 1][j - 1] == 9){
						ms[i][j]++;
					}
				}
			}
			if (j - 1 >= 0){
				if (ms[i][j - 1] == 9){
					ms[i][j]++;
				}
			}
			if (j + 1 < MS_MAX){
				if (ms[i + 1][j - 1] == 9){
					ms[i][j]++;
				}
			}
			if (i - 1 >= 0){
				if (ms[i - 1][j] == 9){
					ms[i][j]++;
				}
			}
			if (i + 1 < MS_MAX){
				if (ms[i - 1][j + 1] == 9){
					ms[i][j]++;
				}
			}
			if (i - 1 >= 0){
				if (j + 1 < MS_MAX){
					if (ms[i - 1][j + 1] == 9){
						ms[i][j]++;
					}
				}
			}
			if (j + 1 < MS_MAX){
				if (ms[i][j + 1] == 9){
					ms[i][j]++;
				}
			}
			if (i + 1 < MS_MAX){
				if (j + 1 < MS_MAX){
					if (ms[i + 1][j + 1] == 9){
						ms[i][j]++;
					}
				}
			}
		}
	}

	for (int i = 0; i < MS_MAX; i++){
		for (int j = 0; j < MS_MAX; j++){
			printf("%2d", ms[i][j]);
		}
		printf("\n");
	}
	return 0;
}

