#include<stdio.h>
#include<stdlib.h>
//#include<termios.h>//mac ����. ������� conio.h ������
#include<conio.h>
#include<string.h>//strcmp ���ڿ�

/*int getch(void) //mac ����
{
int ch;
struct termios old;
struct termios new;
tcgetattr(0, &old);
new = old;
new.c_lflag &= ~(ICANON | ECHO);
new.c_cc[VMIN] = 1;
new.c_cc[VTIME] = 0;
tcsetattr(0, TCSAFLUSH, &new);
ch = getchar();
tcsetattr(0, TCSAFLUSH, &old);
return ch;
}*/

int PrintMenu(void)//����ȭ��
{
	int nInput = 0;

	system("cls");//������ "cls"
				  //�޴�
	printf("\n \t\t\t\t\t\t\t\t\t\t ���� ���� �ý���");
	puts("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf(" [1] �����Է� \n\n\n [2] ���� ���\n\n\n [3] ���� ���� ȸ��\n\n\n [4] ���α׷� ����\n\n : ");
	//�Է� ����
	scanf_s("%d", &nInput);
	return nInput;


}

int GetAge(void)//�޴� 1-1 �г⼱��
{
	int nAge = 0;
	printf("[1] 1�г� [2] 2�г� [3] 3�г� [4] 4�г� \n :");
	scanf_s("%d", &nAge);

	return nAge;
}

int GetSemester(void)//�б⼱��
{
	int nSemester = 0;
	printf("[1] 1�б� [2] 2�б�\n :");
	scanf_s("%d", &nSemester);

	return nSemester;

}

int GetSubject(void)
{
	int Sugang = 0, i = 0, j = 0, nsubject=0 ;
	double hak[100][1] = { 0 };
	double hak_sum1 = 0.00;
	double hak_sum2 = 0.00;
	double Grade[100][1] = { 0 };
	double Class[100][1] = { 0 };
	
	
	printf("������û �����(�����Է�) :[ ]\b\b");
	scanf("%d", &Sugang);

	for (i = 0; i < Sugang; i++)
	{
		for (j = 0; j < 1; j++)
		{
			printf("[%d]��° �����Դϴ�.\n\n", i + 1);

			printf("������� �Է��ϼ���(Ex.C��� / C++ /Java) : ");
			fflush(stdin);
			scanf("%s", Class[i][j + 1]);

			printf("������ �Է��ϼ���(3����/2����/1���� �������Է�) : ");
			fflush(stdin);
			scanf("%lf", &hak[i][j]);

			hak_sum1 += (hak[i][j]);

			printf("������ �Է��ϼ���(A+ ~ F): ");
			fflush(stdin);
			scanf("%s", Grade[i][j + 2]);


			/*if (strcmp(Grade[i][j + 2], "f") == 0)
			{
				hak_sum2 += 0;
			}

			else if (strcmp(Grade[i][j + 2], "F") == 0)
			{
				hak_sum2 += 0;
			}

			else
			{
				hak_sum2 += (hak[i][j]);
			}*/

			printf("\n\n");


		}
	}
	return nsubject;
	
}





int main(void)
{
	int nMenu = 0, nAge = 0, nSemester = 0, nsubject=0;

	while ((nMenu = PrintMenu()) != 4)
	{
		switch (nMenu)
		{
		case 1: {
			nAge = GetAge();

			switch (nAge) {
			case 1://1�г�
				nSemester = GetSemester();
				nsubject = GetSubject();
				break;

			case 2://2����
				nSemester = GetSemester();
				nsubject = GetSubject();
				break;

			case 3:
				nSemester = GetSemester();
				nsubject = GetSubject();

				break;

			case 4:
				nSemester = GetSemester();
				nsubject = GetSubject();
				break;

			default:
				puts(" 1~4 ������ ���ڸ� �Է��ϼ���");
				continue;
			}
		

		}

				break;

		case 2:
			puts("��������");
			break;

		case 3:
			puts("������ ������");
			break;

		default: //???
			puts("\n\n\n   1~4 ������ ���� �Է��ϼ��� ");


		}
		_getch();
	}
	return 0;
}


