#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
//--------------�M�w�q�����r���O�_���T--------------
void decide(char *ptr);
//�p��: �Ʀr    �j�g    �p�g    �Ÿ�
int    cn = 0, cB = 0, cs = 0, cm = 0;

int main()
{
	char c, r[4], a[4];
	int p, i, j, ca, cb;
	srand(time(NULL));
	printf("mode 1~4  easy to hard\n");
	scanf("%d", &p);

	/*�`��Ū����J�w�İϪ��ƾڡA����J��^����?��A
	�ĪG���ĩ�G�M�ſ�J�w�İϪ��Ҧ��ƾڡA����J��^����?��C*/
	while ((c = getchar()) != '\n');//https://www.twblogs.net/a/5e4e4ad7bd9eee101df49944

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
		decide(a);
		break;
	case 2:
		printf("-----------�¼Ʀr + �^��j�g-----------\n");
		
		do {
			cn = 0; cB = 0;
			for (i = 0; i < 4; i++) {
				int M = rand() % 2;//�ζüƿ�ܲ��ͼƦr�Τj�g
				if (M == 0) {
					a[i] = (rand() % 10 + 48);//48~57
					cn++;
				}
				else if (M == 1) {
					a[i] = (rand() % 26 + 65);//65~90
					cB++;////�P�_���h�֭Ӥj�g(��61��)
				}
			}
		} while (a[0] == a[1] || a[0] == a[2] || a[0] == a[3] ||
			a[1] == a[0] || a[1] == a[2] || a[1] == a[3] ||
			a[2] == a[0] || a[2] == a[1] || a[2] == a[3] ||
			a[3] == a[0] || a[3] == a[1] || a[3] == a[2]);
		//for (i = 0; i < 4; i++)printf("%c", a[i]);
		printf("\n��%d�ӼƦr %d�Ӥj�g \n�п�J�A������:", cn, cB);
		decide(a);
		break;
	case 3:
		printf("-----------�¼Ʀr + �^��j�p�g-----------\n");
		
		do {
			cn = 0; cB = 0; cs = 0;
			for (i = 0; i < 4; i++) {
				int M = rand() % 3;
				if (M == 0) {
					a[i] = (rand() % 10 + 48);
					cn++;
				}
				else if (M == 1) {
					a[i] = (rand() % 26 + 65);
					cB++;
				}
				else if (M == 2) {
					a[i] = (rand() % 26 + 97);//97~122
					cs++;//�P�_���h�֭Ӥp�g(��90��)
				}
			}
		} while (a[0] == a[1] || a[0] == a[2] || a[0] == a[3] ||
			a[1] == a[0] || a[1] == a[2] || a[1] == a[3] ||
			a[2] == a[0] || a[2] == a[1] || a[2] == a[3] ||
			a[3] == a[0] || a[3] == a[1] || a[3] == a[2]);
		//for (i = 0; i < 4; i++)printf("%c", a[i]);
		printf("\n��%d�ӼƦr %d�Ӥj�g %d�Ӥp�g"
			"\n�п�J�A������:", cn, cB, cs);
		decide(a);
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
void decide(char *ptr)
{
	int i, j, ca, cb;
	char r[4], c;

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
			if (ptr[i] == r[i])ca++;
			for (j = 0; j < 4; j++)
				if (ptr[i] != r[i] && ptr[i] == r[j])cb++;
		}
		printf("%da%db\n", ca, cb);

		printf("�п�J�A������:");

		/*�`��Ū����J�w�İϪ��ƾڡA����J��^����?��A
		�ĪG���ĩ�G�M�ſ�J�w�İϪ��Ҧ��ƾڡA����J��^����?��C*/
		while ((c = getchar()) != '\n');
	} while (ca != 4);
}
