#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
//�p��: �Ʀr    �j�g    �p�g    �Ÿ�
int    cn = 0, cB = 0, cs = 0, cm = 0;

int main()
{
	char c;
	int p;
	srand(time(NULL));
	printf("mode 1~4  easy to hard\n");
	scanf("%d", &p);

	/*�`��Ū����J�w�İϪ��ƾڡA����J��^���Ŭ���A
	�ĪG���ĩ�G�M�ſ�J�w�İϪ��Ҧ��ƾڡA����J��^���Ŭ���C*/
	while ((c = getchar()) != '\n');//https://www.twblogs.net/a/5e4e4ad7bd9eee101df49944
	//printf("mode=%d",p);
	//��ܼҦ�( 1:�¼Ʀr 2:�¼Ʀr + �^��j�g 3:�¼Ʀr + �^��j�p�g 4:ASCII�X33~126(10�i��) )
	switch (p)
	{
	case 1:
		printf("-----------�¼Ʀr-----------\n");
		//����]�üơA����X�Ӫ��r��������
		
		break;
	case 2:
		printf("-----------�¼Ʀr + �^��j�g-----------\n");
		
		
		break;
	case 3:
		printf("-----------�¼Ʀr + �^��j�p�g-----------\n");
		
	
		break;
	case 4:
		printf("-----------�¼Ʀr + �^��j�p�g + �_�ǲŸ�-----------\n");
		
		
		break;	
	default:
		printf("error error!!!");//���n�å�...
		break;
	}
	system("pause");
	return 0;
}

