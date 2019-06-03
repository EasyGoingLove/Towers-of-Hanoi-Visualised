#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>


int cord_xy_5[2] = { 9,6 };
int cord_xy_4[2] = { 8,7 };
int cord_xy_3[2] = { 7,8 };
int cord_xy_2[2] = { 6,9 };
int cord_xy_1[2] = { 5,10 };


char Ring_5[1] = "=";
char Ring_4[3] = "===";
char Ring_3[5] = "=====";
char Ring_2[7] = "=======";
char Ring_1[9] = "=========";

int n;

void Pick_Number_of_Disks()
{
	while (1)

	{
		printf("How many rings do you want to use ? : || 1 < n > 6 ||");
		scanf("%d", &n);
		if (n > 0 && n < 6)
		{
			return 0;

		}
	}system("cls");
}
void Position()
{
	HANDLE Colm = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD Colm_a = { 7, 3 };
	SetConsoleCursorPosition(Colm, Colm_a);
	printf("%s", "Colm-A");
	COORD Colm_b = { 22, 3 };
	SetConsoleCursorPosition(Colm, Colm_b);
	printf("%s", "Colm-B");
	COORD Colm_c = { 37, 3 };
	SetConsoleCursorPosition(Colm, Colm_c);
	printf("%s", "Colm-C");
	COORD Bottom = { 5, 11 };
	SetConsoleCursorPosition(Colm, Bottom);
	printf("%s", "_____________________________________________");



}
void Disk_Display()
{
	int i;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (n == 1)
	{
		for (i = 0; i < 2; i++)
		{
			COORD a_1 = { cord_xy_1[0], cord_xy_1[1] };
			SetConsoleCursorPosition(hConsole, a_1);
			printf("%s", Ring_1);
			Sleep(2000);
			COORD aa_1 = { cord_xy_1[0], cord_xy_1[1] };
			SetConsoleCursorPosition(hConsole, aa_1);
			printf("         ");
			if (i == 0) { cord_xy_1[0] += 30; }

		}
	}
	if (n == 2)
	{
		for (i = 0; i < 4; i++)
		{
			COORD a_1 = { cord_xy_1[0], cord_xy_1[1] };
			SetConsoleCursorPosition(hConsole, a_1);
			printf("%s", Ring_1);
			COORD a_2 = { cord_xy_2[0], cord_xy_2[1] };
			SetConsoleCursorPosition(hConsole, a_2);
			printf("%s", Ring_2);
			Sleep(2000);
			if (i == 0 || i == 2) {
				COORD aa_1 = { cord_xy_2[0], cord_xy_2[1] };
				SetConsoleCursorPosition(hConsole, aa_1);
				printf("         ");
				cord_xy_2[0] += 15;
				if (i == 0) { cord_xy_2[1] = cord_xy_1[1]; }
				else { cord_xy_2[1] = 9; }
			}
			else {
				COORD aa_1 = { cord_xy_1[0], cord_xy_1[1] };
				SetConsoleCursorPosition(hConsole, aa_1);
				printf("         "); cord_xy_1[0] += 30;
			}
		}

	}
	if (n == 3)
	{
		for (i = 0; i < 8; i++)
		{
			COORD a_1 = { cord_xy_1[0], cord_xy_1[1] };
			SetConsoleCursorPosition(hConsole, a_1);
			printf("%s", Ring_1);
			COORD a_2 = { cord_xy_2[0], cord_xy_2[1] };
			SetConsoleCursorPosition(hConsole, a_2);
			printf("%s", Ring_2);
			COORD a_3 = { cord_xy_3[0], cord_xy_3[1] };
			SetConsoleCursorPosition(hConsole, a_3);
			printf("%s", Ring_3);
			Sleep(2000);
			if (i %2==0)
			{
				COORD aa_1 = { cord_xy_3[0], cord_xy_3[1] };
				SetConsoleCursorPosition(hConsole, aa_1);
				printf("         ");
				if (i == 0) { cord_xy_3[0] += 30; cord_xy_3[1] = 10; }
				if (i == 2) { cord_xy_3[0] -= 15; cord_xy_3[1] = 9; }
				if (i == 4) { cord_xy_3[0] -= 15; cord_xy_3[1] = 10; }
				if (i == 6) { cord_xy_3[0] += 30; cord_xy_3[1] = 8; }
			}
			else if (i == 1 || i == 5)
			{
				COORD aa_1 = { cord_xy_2[0], cord_xy_2[1] };
				SetConsoleCursorPosition(hConsole, aa_1);
				printf("         ");
				if (i == 1) { cord_xy_2[0] += 15; cord_xy_2[1] = 10; }
				else { cord_xy_2[0] += 15; cord_xy_2[1] = 9; }
			}
			else
			{
				COORD aa_1 = { cord_xy_1[0], cord_xy_1[1] };
				SetConsoleCursorPosition(hConsole, aa_1);
				printf("         ");
				cord_xy_1[0] += 30;
			}
		}

	}
	if (n == 4)
	{
		for (i = 0; i < 16; i++) {
			COORD a_1 = { cord_xy_1[0], cord_xy_1[1] };
			SetConsoleCursorPosition(hConsole, a_1);
			printf("%s", Ring_1);
			COORD a_2 = { cord_xy_2[0], cord_xy_2[1] };
			SetConsoleCursorPosition(hConsole, a_2);
			printf("%s", Ring_2);
			COORD a_3 = { cord_xy_3[0], cord_xy_3[1] };
			SetConsoleCursorPosition(hConsole, a_3);
			printf("%s", Ring_3);
			COORD a_4 = { cord_xy_4[0], cord_xy_4[1] };
			SetConsoleCursorPosition(hConsole, a_4);
			printf("%s", Ring_4);
			Sleep(2000);
			if (i % 2 == 0)
			{

				COORD aa_1 = { cord_xy_4[0], cord_xy_4[1] };
				SetConsoleCursorPosition(hConsole, aa_1);
				printf("         ");
				if (i == 0) { cord_xy_4[0] += 15; cord_xy_4[1] = 10; }
				if (i == 2) { cord_xy_4[0] += 15; cord_xy_4[1] = 9; }
				if (i == 4) { cord_xy_4[0] -= 30; cord_xy_4[1] = 9; }
				if (i == 6) { cord_xy_4[0] += 15; cord_xy_4[1] = 8; }
				if (i == 8) { cord_xy_4[0] += 15; cord_xy_4[1] = 9; }
				if (i == 10) { cord_xy_4[0] -= 30; cord_xy_4[1] = 9; }
				if (i == 12) { cord_xy_4[0] += 15; cord_xy_4[1] = 10; }
				if (i == 14) { cord_xy_4[0] += 15; cord_xy_4[1] = 7; }
			}
			else if (i == 1 || i == 5 || i == 9 || i == 13)
			{
				COORD aa_1 = { cord_xy_3[0], cord_xy_3[1] };
				SetConsoleCursorPosition(hConsole, aa_1);
				printf("         ");
				if (i == 1) { cord_xy_3[0] += 30; cord_xy_3[1] = 10; }
				if (i == 5) { cord_xy_3[0] -= 15; cord_xy_3[1] = 9; }
				if (i == 9) { cord_xy_3[0] -= 15; cord_xy_3[1] = 10; }
				if (i == 13) { cord_xy_3[0] += 30; cord_xy_3[1] = 8; }
			}
			else if (i == 3 || i == 11)
			{

				COORD aa_1 = { cord_xy_2[0], cord_xy_2[1] };
				SetConsoleCursorPosition(hConsole, aa_1);
				printf("         ");
				if (i == 3) { cord_xy_2[0] += 15; cord_xy_2[1] = 10; }
				if (i == 11) { cord_xy_2[0] += 15; cord_xy_2[1] = 9; }
			}
			else if (i==7) {
				COORD aa_1 = { cord_xy_1[0], cord_xy_1[1] };
				SetConsoleCursorPosition(hConsole, aa_1);
				printf("         "); cord_xy_1[0] += 30;
			}
		}

	}
	if (n == 5)
	{
		for (i = 0; i < 32; i++) {
			COORD a_1 = { cord_xy_1[0], cord_xy_1[1] };
			SetConsoleCursorPosition(hConsole, a_1);
			printf("%s", Ring_1);
			COORD a_2 = { cord_xy_2[0], cord_xy_2[1] };
			SetConsoleCursorPosition(hConsole, a_2);
			printf("%s", Ring_2);
			COORD a_3 = { cord_xy_3[0], cord_xy_3[1] };
			SetConsoleCursorPosition(hConsole, a_3);
			printf("%s", Ring_3);
			COORD a_4 = { cord_xy_4[0], cord_xy_4[1] };
			SetConsoleCursorPosition(hConsole, a_4);
			printf("%s", Ring_4);
			COORD a_5 = { cord_xy_5[0], cord_xy_5[1] };
			SetConsoleCursorPosition(hConsole, a_5);
			printf("%s", Ring_5);
			Sleep(2000);
			if (i % 2 == 0)
			{

				COORD aa_1 = { cord_xy_5[0], cord_xy_5[1] };
				SetConsoleCursorPosition(hConsole, aa_1);
				printf("         ");
				if (i == 0) { cord_xy_5[0] += 30; cord_xy_5[1] = 10; }
				if (i == 2) { cord_xy_5[0] -= 15; cord_xy_5[1] = 9; }
				if (i == 4) { cord_xy_5[0] -= 15; cord_xy_5[1] = 8; }
				if (i == 6) { cord_xy_5[0] += 30; cord_xy_5[1] = 8; }
				if (i == 8) { cord_xy_5[0] -= 15; cord_xy_5[1] = 9; }
				if (i == 10) { cord_xy_5[0] -= 15; cord_xy_5[1] = 8; }
				if (i == 12) { cord_xy_5[0] += 30; cord_xy_5[1] = 10; }
				if (i == 14) { cord_xy_5[0] -= 15; cord_xy_5[1] = 7; }
				if (i == 16) { cord_xy_5[0] -= 15; cord_xy_5[1] = 10; }
				if (i == 18) { cord_xy_5[0] += 30; cord_xy_5[1] = 8; }
				if (i == 20) { cord_xy_5[0] -= 15; cord_xy_5[1] = 9; }
				if (i == 22) { cord_xy_5[0] -= 15; cord_xy_5[1] = 8; }
				if (i == 24) { cord_xy_5[0] += 30; cord_xy_5[1] = 8; }
				if (i == 26) { cord_xy_5[0] -= 15; cord_xy_5[1] = 9; }
				if (i == 28) { cord_xy_5[0] -= 15; cord_xy_5[1] = 10; }
				if (i == 30) { cord_xy_5[0] += 30; cord_xy_5[1] = 6; }
			}
			else if (i == 1 || i == 5 || i == 9 || i == 13 || i == 17 || i == 21 || i == 25 || i == 29)
			{
				COORD aa_1 = { cord_xy_4[0], cord_xy_4[1] };
				SetConsoleCursorPosition(hConsole, aa_1);
				printf("         ");
				if (i == 1) { cord_xy_4[0] += 15; cord_xy_4[1] = 10; }
				if (i == 5) { cord_xy_4[0] += 15; cord_xy_4[1] = 9; }
				if (i == 9) { cord_xy_4[0] -= 30; cord_xy_4[1] = 9; }
				if (i == 13) { cord_xy_4[0] += 15; cord_xy_4[1] = 8; }
				if (i == 17) { cord_xy_4[0] += 15; cord_xy_4[1] = 9; }
				if (i == 21) { cord_xy_4[0] -= 30; cord_xy_4[1] = 9; }
				if (i == 25) { cord_xy_4[0] += 15; cord_xy_4[1] = 10; }
				if (i == 29) { cord_xy_4[0] += 15; cord_xy_4[1] = 7; }
			}
			else if (i == 3 || i == 11 || i == 19 || i == 27)
			{

				COORD aa_1 = { cord_xy_3[0], cord_xy_3[1] };
				SetConsoleCursorPosition(hConsole, aa_1);
				printf("         ");
				if (i == 3) { cord_xy_3[0] += 30; cord_xy_3[1] = 10; }
				if (i == 11) { cord_xy_3[0] -= 15; cord_xy_3[1] = 9; }
				if (i == 19) { cord_xy_3[0] -= 15; cord_xy_3[1] = 10; }
				if (i == 27) { cord_xy_3[0] += 30; cord_xy_3[1] = 8; }
			}
			else if (i == 7||i == 23) {
				COORD aa_1 = { cord_xy_2[0], cord_xy_2[1] };
				SetConsoleCursorPosition(hConsole, aa_1);
				printf("         "); 
				if (i == 7) { cord_xy_2[0] += 15; cord_xy_2[1] = 10; }
				if (i == 23) { cord_xy_2[0] += 15; cord_xy_2[1] = 9; }
			}
			else if (i==15) 
			{
				COORD aa_1 = { cord_xy_1[0], cord_xy_1[1] };
				SetConsoleCursorPosition(hConsole, aa_1);
				printf("         "); cord_xy_1[0] += 30;
			}
		}


	}
}

int main()
{
	Pick_Number_of_Disks();
	Position();
	Disk_Display();
}
