#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
//�p��: �Ʀr    �j�g    �p�g    �Ÿ�
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
		do{
			cn = 0;
			for (i = 0; i < 4; i++) {
				a[i] = rand() % 10 + 48;//48~57
				cn++;//�P�_���h�֭ӼƦr(��38��)
			}
		} while (a[0] == a[1] || a[0] == a[2] || a[0] == a[3] ||
			a[1] == a[0] || a[1] == a[2] || a[1] == a[3] ||
			a[2] == a[0] || a[2] == a[1] || a[2] == a[3] ||
			a[3] == a[0] || a[3] == a[1] || a[3] == a[2]);
		//for (i = 0; i < 4; i++)printf("%c", a[i]);
		printf("\n��%d�ӼƦr\n�п�J�A������:", cn);
		//--------------����q�쥿�T���׬���--------------
	do {
		//--------------�k�s--------------
		ca = 0; cb = 0;
		for (i = 0; i < 4; i++)r[i] = '0';

		//--------------�����J�A���ܿ�J���C�Ӧr�������ۦP--------------
		do {
			for (i = 0; i < 4; i++) {
				scanf("%c", &r[i]);
			}
		} while (r[0] == r[1] || r[0] == r[2] || r[0] == r[3] ||
			r[1] == r[0] || r[1] == r[2] || r[1] == r[3] ||
			r[2] == r[0] || r[2] == r[1] || r[2] == r[3] ||
			r[3] == r[0] || r[3] == r[1] || r[3] == r[2]);

		//--------------�p��q���r�����X��a�B�X��b--------------
		for (i = 0; i < 4; i++) {
			if (a[i] == r[i])ca++;
			for (j = 0; j < 4; j++)
				if (a[i] != r[i] && a[i] == r[j])cb++;
		}
		printf("%da%db\n", ca, cb);

		printf("�п�J�A������:");

		/*�`��Ū����J�w�İϪ��ƾڡA����J��^����?��A
		�ĪG���ĩ�G�M�ſ�J�w�İϪ��Ҧ��ƾڡA����J��^����?��C*/
		while ((c = getchar()) != '\n');
	} while (ca != 4);
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
