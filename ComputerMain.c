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
	printf("a+b+c 형식으로 입력해주십시오. 지원 연산 기호는 +,-,*,/,^입니다.\n");
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
			printf("Error:지원되지 않는 연산 부호");
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
			printf("Error:지원되지 않는 연산 부호");
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
			printf("Error:지원되지 않는 연산 부호");
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
			printf("Error:지원되지 않는 연산 부호");
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
			printf("Error:지원되지 않는 연산 부호");
		}
	default:
		printf("지원되지 않는 연산 부호");
	}
	printf("%g %c %g %c %g = %g", num1, op1, num2, op2, num3, result);
	Sleep(5000);
	system("cls");
	return;
}
void secure()
{
	system("cls");
	printf("비밀번호 분실 위험으로 인하여, 보안 질문에 응하여 주십시오.\n");
	printf("영문으로 입력하십시오.");
	printf("살고 있는 도시는?\n");
	scanf("%s", whatcity);
	printf("이주가고 싶은 국가를 입력하십시오.\n만약 없다면 현재 거주중인 국가를 입력하십시오.\n");
	scanf("%s", whatcountry);
	system("cls");
	desktop();
}


int main()
{
	char redopassword = '0';
	while (redopassword != '1')
	{
		printf("환영합니다.\n");
		printf("사용자의 영어(혹은 한글) 이름을 입력하십시오.\n");
		scanf("%s", username);
		printf("비밀번호를 설정하시려면 설정할 비밀번호를 입력하십시오.\n");
		printf("비밀번호 입력:");
		scanf("%s", password);
		printf("\n비밀번호를 %s로 설정하시겠습니까? (예:1,아니오=0)", password);
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

	while (a != 5) //숫자는 시스템 종료에서*중요*
	{
		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("■환영합니다                                   %8s님.■\n", username);
		printf("■무엇을 사용하시나요?                                    ■\n");
		time_t seconds = time(NULL);
		struct tm* now = localtime(&seconds);
		printf("■현재 시간:[%04d/%02d/%02d] %02d:%02d:%02d(현지시간 기준)          ■\n", 1900 + now->tm_year,
			now->tm_mon + 1, now->tm_mday, now->tm_hour,
			now->tm_min, now->tm_sec);
		printf("■1.계산기                                                ■\n");
		printf("■2.시계                                                  ■\n");
		printf("■3.일차방정식 계산기                                     ■\n");
		printf("■4.이차방정식 계산기                                     ■\n");
		printf("■5.시스템 종료                                           ■\n");
		printf("■                                                        ■\n");
		printf("■                 ■            ■                       ■\n");
		printf("■                     ■     ■                          ■\n");
		printf("■                     ■     ■                          ■\n");
		printf("■                         ■                             ■\n");
		printf("■                 ■■■■■■■■                       ■\n");
		printf("■               ■                ■                     ■\n");
		printf("■                                                        ■\n");
		printf("■                                                        ■\n");
		printf("■■■■■                                                ■\n");
		printf("■       ■■■                                           ■\n");
		printf("■              ■■■■                                  ■\n");
		printf("■                      ■■■                ■■■■■■■\n");
		printf("■                            ■■■■■■■■            ■\n");
		printf("■■■■■■■■■■■■■■■                            ■\n");
		printf("■                                                        ■\n");
		printf("■                                                        ■\n");
		printf("■                                                        ■\n");
		printf("■                                                        ■\n");
		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
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
	printf("시스템 종료를 위하여 암호를 입력하십시오");
	scanf(" %s", checkpw);
	if (strcmp(checkpw, password) == 0) exit(1);
	else
	{
		printf("잘못된 비밀번호 입니다");
		char a[1000];
		printf("비밀번호를 잊으셨나요? (예:1, 아니오:0)");
		scanf(" %c", &a);
		if (a[0] == '1')
		{
			printf("비밀번호를 잊었을 시 살고 있는 도시 또는\n이주(또는 현재 거주중인)가고 싶은 국가를 입력하시오");
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
	printf("좌변의 x항의 계수를 입력하시오 : ");
	scanf("%f", &a);
	printf("좌변의 상수항을 입력하시오 :");
	scanf("%f", &b);
	printf("우변의 x항의 계수는 입력하시오 :");
	scanf("%f", &c);
	printf("우변의 상수항을 입력하시오 :");
	scanf("%f", &d);
	if (a - c == 0 && d - b == 0) printf("x의 값은 무수히 많다.");
	else if (a - c == 0 && d - b != 0) printf("x의 값은 없다.");
	else {
		x = (d - b) / (a - c);
		printf("x의 값은 %g\n", x);
	}
	Sleep(5000);
	system("cls");
	return;
}
void echaequation()
{
	float a, b, c, d, e, f;
	float discriminant, root1, root2;
	printf("좌변의 x²항의 계수를 입력하시오: ");
	scanf("%f", &a);
	printf("좌변의 x항의 계수를 입력하시오: ");
	scanf("%f", &b);
	printf("좌변의 상수항을 입력하시오: ");
	scanf("%f", &c);
	printf("우변의 x²항의 계수를 입력하시오: ");
	scanf("%f", &d);
	printf("우변의 x항의 계수를 입력하시오: ");
	scanf("%f", &e);
	printf("우변의 상수항을 입력하시오: ");
	scanf("%f", &f);
	
	discriminant = (d - a) * (d - a) - 4 * (e - b) * (f - c);
	if (a == d && b == e&&c!=f) {
		printf("해는 없다");
	}
	else if (a == d && b == e && c == f)
	{
		printf("해가 무수히 많다");
	}
	else if(discriminant > 0) {
		root1 = ((a - d) + sqrt(discriminant)) / (2 * (e - b));
		root2 = ((a - d) - sqrt(discriminant)) / (2 * (e - b));
		printf("방정식의 해는 두 개입니다.\n");
		printf("x₁ = %g\n", root1);
		printf("x₂ = %g\n", root2);
	}
	else if (discriminant == 0) {
		root1 = (a - d) / (2 * (e - b));
		printf("방정식의 해는 하나입니다.\n");
		printf("x = %f\n", root1);
	}
	else
		printf("방정식에 실근이 존재하지 않습니다.\n");
	Sleep(5000);
}