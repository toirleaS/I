#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <Windows.h>
#include <stdlib.h>
char password[100];
char username[8];
char whatcity[100];
char whatcountry[100];
void desktop();
void linearfunctioncalc();
void echaequation();
void secure();
void turnoff();
void calculator();
void calculator()
{
	printf("a+b+c �������� �Է����ֽʽÿ�. ���� ���� ��ȣ�� +,-,*,/,^�Դϴ�.\n");
	float num1, num2, num3, result = 0;
	char op1, op2;
	scanf("%f %c %f %c %f", &num1, &op1, &num2, &op2, &num3);
	switch (op1)
	{
	case '+':
		switch (op2)
		{
		case '+':
			result = num1 + num2 + num3;
			break;
		case'-':
			result = num1 + num2 - num3;
			break;
		case'*':
			result = num1 + num2 * num3;
			break;
		case'/':
			result = num1 + num2 / num3;
			break;
		case'^':
			result = num1 + pow(num2, num3);
			break;
		default:
			printf("Error:�������� �ʴ� ���� ��ȣ");
		}
	case '-':
		switch (op2)
		{
		case '+':
			result = num1 - num2 + num3;
			break;
		case'-':
			result = num1 - num2 - num3;
			break;
		case'*':
			result = num1 - num2 * num3;
			break;
		case'/':
			result = num1 - num2 / num3;
			break;
		case'^':
			result = num1 - pow(num2, num3);
			break;
		default:
			printf("Error:�������� �ʴ� ���� ��ȣ");
		}
	case '*':
		switch (op2)
		{
		case '+':
			result = num1 * num2 + num3;
			break;
		case'-':
			result = num1 * num2 - num3;
			break;
		case'*':
			result = num1 * num2 * num3;
			break;
		case'/':
			result = num1 * num2 / num3;
			break;
		case'^':
			result = num1 * pow(num2, num3);
			break;
		default:
			printf("Error:�������� �ʴ� ���� ��ȣ");
		}
	case '/':
		switch (op2)
		{
		case '+':
			result = num1 / num2 + num3;
			break;
		case'-':
			result = num1 / num2 - num3;
			break;
		case'*':
			result = num1 / num2 * num3;
			break;
		case'/':
			result = num1 / num2 / num3;
			break;
		case'^':
			result = num1 / pow(num2, num3);
			break;
		default:
			printf("Error:�������� �ʴ� ���� ��ȣ");
		}
	case '^':
		switch (op2)
		{
		case '+':
			result = pow(num1, num2) + num3;
			break;
		case'-':
			result = pow(num1, num2) - num3;
			break;
		case'*':
			result = pow(num1, num2) * num3;
			break;
		case'/':
			result = pow(num1, num2) / num3;
			break;
		case'^':
			result = pow(pow(num1, num2), num3);
			break;
		default:
			printf("Error:�������� �ʴ� ���� ��ȣ");
		}
	default:
		printf("�������� �ʴ� ���� ��ȣ");
	}
	printf("%g %c %g %c %g = %g", num1, op1, num2, op2, num3, result);
	Sleep(5000);
	system("cls");
	return;
}
void secure()
{
	system("cls");
	printf("��й�ȣ �н� �������� ���Ͽ�, ���� ������ ���Ͽ� �ֽʽÿ�.\n");
	printf("�������� �Է��Ͻʽÿ�.");
	printf("��� �ִ� ���ô�?\n");
	scanf("%s", whatcity);
	printf("���ְ��� ���� ������ �Է��Ͻʽÿ�.\n���� ���ٸ� ���� �������� ������ �Է��Ͻʽÿ�.\n");
	scanf("%s", whatcountry);
	system("cls");
	desktop();
}


int main()
{
	char redopassword = '0';
	while (redopassword != '1')
	{
		printf("ȯ���մϴ�.\n");
		printf("������� ����(Ȥ�� �ѱ�) �̸��� �Է��Ͻʽÿ�.\n");
		scanf("%s", username);
		printf("��й�ȣ�� �����Ͻ÷��� ������ ��й�ȣ�� �Է��Ͻʽÿ�.\n");
		printf("��й�ȣ �Է�:");
		scanf("%s", password);
		printf("\n��й�ȣ�� %s�� �����Ͻðڽ��ϱ�? (��:1,�ƴϿ�=0)", password);
		scanf(" %c", &redopassword);
		switch (redopassword)
		{
		case '0':
			system("cls");
			break;
		case '1':
			system("cls");
			secure();
			break;
		default:
			system("cls");
			redopassword = 0;
		}
	}
}
void desktop()
{
	char a = '0';

	while (a != 5) //���ڴ� �ý��� ���ῡ��*�߿�*
	{
		printf("�������������������������������\n");
		printf("��ȯ���մϴ�                                   %8s��.��\n", username);
		printf("�ṫ���� ����Ͻó���?                                    ��\n");
		time_t seconds = time(NULL);
		struct tm* now = localtime(&seconds);
		printf("������ �ð�:[%04d/%02d/%02d] %02d:%02d:%02d(�����ð� ����)          ��\n", 1900 + now->tm_year,
			now->tm_mon + 1, now->tm_mday, now->tm_hour,
			now->tm_min, now->tm_sec);
		printf("��1.����                                                ��\n");
		printf("��2.�ð�                                                  ��\n");
		printf("��3.���������� ����                                     ��\n");
		printf("��4.���������� ����                                     ��\n");
		printf("��5.�ý��� ����                                           ��\n");
		printf("��                                                        ��\n");
		printf("��                 ��            ��                       ��\n");
		printf("��                     ��     ��                          ��\n");
		printf("��                     ��     ��                          ��\n");
		printf("��                         ��                             ��\n");
		printf("��                 ���������                       ��\n");
		printf("��               ��                ��                     ��\n");
		printf("��                                                        ��\n");
		printf("��                                                        ��\n");
		printf("������                                                ��\n");
		printf("��       ����                                           ��\n");
		printf("��              �����                                  ��\n");
		printf("��                      ����                ��������\n");
		printf("��                            ���������            ��\n");
		printf("����������������                            ��\n");
		printf("��                                                        ��\n");
		printf("��                                                        ��\n");
		printf("��                                                        ��\n");
		printf("��                                                        ��\n");
		printf("�������������������������������\n");
		scanf(" %c", &a);
		switch (a)
		{
		case '1':
			system("cls");
			calculator();
			a = '-';
			break;
		case '2':
			system("cls");
			a = '-';
			break;
		case '3':
			system("cls");
			a = '-';
			linearfunctioncalc();
			break;
		case '4':
			system("cls");
			echaequation();
			a = '-';
			break;
			case '5':
				system("cls");
				turnoff();
				a = '-';
				break;
			
		default:
			system("cls");
			break;

		}

	}
}
void turnoff()
{
	char checkpw[100];
	printf("�ý��� ���Ḧ ���Ͽ� ��ȣ�� �Է��Ͻʽÿ�");
	scanf(" %s", checkpw);
	if (strcmp(checkpw, password) == 0) exit(1);
	else
	{
		printf("�߸��� ��й�ȣ �Դϴ�");
		char a[1000];
		printf("��й�ȣ�� �����̳���? (��:1, �ƴϿ�:0)");
		scanf(" %c", &a);
		if (a[0] == '1')
		{
			printf("��й�ȣ�� �ؾ��� �� ��� �ִ� ���� �Ǵ�\n����(�Ǵ� ���� ��������)���� ���� ������ �Է��Ͻÿ�");
			scanf("%s", a);
			if (strcmp(whatcity, a) == 0 || strcmp(whatcountry, a) == 0)
			{
				exit(1);
			}
			else
			{
				system("cls");
				return;
			}
		}
		else {
			system("cls");
			return;
		}
	}
}
void linearfunctioncalc()
{
	float a, b, c, d, x;
	printf("�º��� x���� ����� �Է��Ͻÿ� : ");
	scanf("%f", &a);
	printf("�º��� ������� �Է��Ͻÿ� :");
	scanf("%f", &b);
	printf("�캯�� x���� ����� �Է��Ͻÿ� :");
	scanf("%f", &c);
	printf("�캯�� ������� �Է��Ͻÿ� :");
	scanf("%f", &d);
	if (a - c == 0 && d - b == 0) printf("x�� ���� ������ ����.");
	else if (a - c == 0 && d - b != 0) printf("x�� ���� ����.");
	else {
		x = (d - b) / (a - c);
		printf("x�� ���� %g\n", x);
	}
	Sleep(5000);
	system("cls");
	return;
}
void echaequation()
{
	float a, b, c, d, e, f;
	float discriminant, root1, root2;
	printf("�º��� x������ ����� �Է��Ͻÿ�: ");
	scanf("%f", &a);
	printf("�º��� x���� ����� �Է��Ͻÿ�: ");
	scanf("%f", &b);
	printf("�º��� ������� �Է��Ͻÿ�: ");
	scanf("%f", &c);
	printf("�캯�� x������ ����� �Է��Ͻÿ�: ");
	scanf("%f", &d);
	printf("�캯�� x���� ����� �Է��Ͻÿ�: ");
	scanf("%f", &e);
	printf("�캯�� ������� �Է��Ͻÿ�: ");
	scanf("%f", &f);
	
	discriminant = (d - a) * (d - a) - 4 * (e - b) * (f - c);
	if (a == d && b == e&&c!=f) {
		printf("�ش� ����");
	}
	else if (a == d && b == e && c == f)
	{
		printf("�ذ� ������ ����");
	}
	else if(discriminant > 0) {
		root1 = ((a - d) + sqrt(discriminant)) / (2 * (e - b));
		root2 = ((a - d) - sqrt(discriminant)) / (2 * (e - b));
		printf("�������� �ش� �� ���Դϴ�.\n");
		printf("x�� = %g\n", root1);
		printf("x�� = %g\n", root2);
	}
	else if (discriminant == 0) {
		root1 = (a - d) / (2 * (e - b));
		printf("�������� �ش� �ϳ��Դϴ�.\n");
		printf("x = %f\n", root1);
	}
	else
		printf("�����Ŀ� �Ǳ��� �������� �ʽ��ϴ�.\n");
	Sleep(5000);
}