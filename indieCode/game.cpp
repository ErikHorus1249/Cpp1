#include<iostream>
#include"console.h"
#include <windows.h>
using namespace std;

void gotoXY (int column, int line)
{
	COORD coord;
	coord.X = column;
	coord.Y = line;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void TextColor (int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE) , color);
}
int main(){
	
	for(int i = 1; i < 100; i++){
		int j = i%15;
		TextColor(j);
		gotoXY(10,j);
		//TextColor(15);
		cout << "hello";
		Sleep(200);
		clrscr;
		
	}

	return 0;
	
}
