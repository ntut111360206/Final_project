#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
//璸计: 计    糶    糶    才腹
int    cn = 0, cB = 0, cs = 0, cm = 0;

int main()
{
	char c;
	int p;
	srand(time(NULL));
	printf("mode 1~4  easy to hard\n");
	scanf("%d", &p);

	/*碻吏弄块絯侥跋计沮笿ó才ゎ
	狦单睲块絯侥跋┮Τ计沮笿ó才ゎ*/
	while ((c = getchar()) != '\n');//https://www.twblogs.net/a/5e4e4ad7bd9eee101df49944
	//printf("mode=%d",p);
	//匡拒家Α( 1:计 2:计 + 璣ゅ糶 3:计 + 璣ゅ糶 4:ASCII絏33~126(10秈) )
	switch (p)
	{
	case 1:
		printf("-----------计-----------\n");
		//尿禲睹计ㄓじぃ狡
		
		break;
	case 2:
		printf("-----------计 + 璣ゅ糶-----------\n");
		
		
		break;
	case 3:
		printf("-----------计 + 璣ゅ糶-----------\n");
		
	
		break;
	case 4:
		printf("-----------计 + 璣ゅ糶 + ┣才腹-----------\n");
		
		
		break;	
	default:
		printf("error error!!!");//ぃ璶睹ゴ...
		break;
	}
	system("pause");
	return 0;
}

