#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int PrintMenu(void)
{
	int nInput = 0;

	//Clear the screen before printing the menu
	system("cls");
	//Print the menu and receive user input
	printf("[1]New\t[2]Search\t[3]Print\t[4]Remove\t[0]Exit\n:");
	scanf_s("%d", &nInput);

	//Returns the menu value selected by the user
	return nInput;
}

int main(void)
{
	int nMenu = 0;

	//Menu event loop
	//Performs a function that is specified by the user's input repeatedly
	//If the user enters 0, the repeat statement ends
	while ((nMenu = PrintMenu()) != 0) {
		switch (nMenu) {
		case 1:		//New
			puts("�� �׸��� �߰��մϴ�.");
			break;
		case 2:		//Search
			puts("���� �׸񿡼� �˻��մϴ�.");
			break;
		case 3:		//Print
			puts("��ü ������ ����մϴ�.");
			break;
		case 4:		//Remove
			puts("���� �׸��� �����մϴ�.");
			break;
		default:	//???
			puts("�� �� ���� ����Դϴ�.");
		}
		_getch();
	}
	puts("Bye~~!");
	return 0;
}