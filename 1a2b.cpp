#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
//計數: 數字    大寫    小寫    符號
int    cn = 0, cB = 0, cs = 0, cm = 0;

int main()
{
	int i, j, ca, cb;
	char r[4], a[4];
	char c;
	int p;
	srand(time(NULL));
	printf("mode 1~4  easy to hard\n");
	scanf("%d", &p);

	/*循環讀取輸入緩衝區的數據，直到遇到回車符為止，
	效果等效於：清空輸入緩衝區的所有數據，直到遇到回車符為止。*/
	while ((c = getchar()) != '\n');//https://www.twblogs.net/a/5e4e4ad7bd9eee101df49944
	//printf("mode=%d",p);
	//選擇模式( 1:純數字 2:純數字 + 英文大寫 3:純數字 + 英文大小寫 4:ASCII碼33~126(10進位) )
	switch (p)
	{
	case 1:
		printf("-----------純數字-----------\n");
		//持續跑亂數，直到出來的字元不重複
		do{
			cn = 0;
			for (i = 0; i < 4; i++) {
				a[i] = rand() % 10 + 48;//48~57
				cn++;//判斷有多少個數字(第38行)
			}
		} while (a[0] == a[1] || a[0] == a[2] || a[0] == a[3] ||
			a[1] == a[0] || a[1] == a[2] || a[1] == a[3] ||
			a[2] == a[0] || a[2] == a[1] || a[2] == a[3] ||
			a[3] == a[0] || a[3] == a[1] || a[3] == a[2]);
		//for (i = 0; i < 4; i++)printf("%c", a[i]);
		printf("\n有%d個數字\n請輸入你的答案:", cn);
		//--------------持續猜到正確答案為止--------------
	do {
		//--------------歸零--------------
		ca = 0; cb = 0;
		for (i = 0; i < 4; i++)r[i] = '0';

		//--------------持續輸入，直至輸入的每個字元互不相同--------------
		do {
			for (i = 0; i < 4; i++) {
				scanf("%c", &r[i]);
			}
		} while (r[0] == r[1] || r[0] == r[2] || r[0] == r[3] ||
			r[1] == r[0] || r[1] == r[2] || r[1] == r[3] ||
			r[2] == r[0] || r[2] == r[1] || r[2] == r[3] ||
			r[3] == r[0] || r[3] == r[1] || r[3] == r[2]);

		//--------------計算猜的字元有幾個a、幾個b--------------
		for (i = 0; i < 4; i++) {
			if (a[i] == r[i])ca++;
			for (j = 0; j < 4; j++)
				if (a[i] != r[i] && a[i] == r[j])cb++;
		}
		printf("%da%db\n", ca, cb);

		printf("請輸入你的答案:");

		/*循環讀取輸入緩衝區的數據，直到遇到回車符?止，
		效果等效於：清空輸入緩衝區的所有數據，直到遇到回車符?止。*/
		while ((c = getchar()) != '\n');
	} while (ca != 4);
		break;
	case 2:
		printf("-----------純數字 + 英文大寫-----------\n");
		
		
		break;
	case 3:
		printf("-----------純數字 + 英文大小寫-----------\n");
		
	
		break;
	case 4:
		printf("-----------純數字 + 英文大小寫 + 奇怪符號-----------\n");
		
		
		break;	
	default:
		printf("error error!!!");//不要亂打...
		break;
	}
	system("pause");
	return 0;
}
