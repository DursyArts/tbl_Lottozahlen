#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <math.h>
#include "Header.h"
int rows, columns, i;
bool debug;

void _debug(bool debug) {
	if (debug == true) {
		printf("rows:%i\ncolumns:%i\ni:%i", rows, columns, i);
	}
}

int table(int rows, int columns){
	for (int row = 0; row < rows; row++) {
		printf_s("row%i>", row);
		
		for (int col = 0; col < columns; col++) {
			printf_s("%3d|",i++);
		}
		printf_s("\n");
	}
	printf_s("     ");
	for (int col = 0; col < columns; col++) {
		printf_s("----");
		
	}
	printf_s("\ncol> ");
	for (int col = 0; col < columns; col++) {
		printf_s("%3d|", col);
	}
	
	return 0;
}

int main() {
	table(9,9);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240); //todo: zeiger um eine Zeile und spalte auszuwählen via GetAsyncKeyState;
	//for (int i = 0; i < 256; i++) {
	//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
	//	printf_s("Text Color in use=%3d\n", i);
	//}


	_debug(false);
	return 0;
}