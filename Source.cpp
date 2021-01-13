#include<iostream>
#include<string>
#include"sudoku_solver2.h"
using namespace std;
int main()
{
	string s;
	int board[9][9];
	cout << "enter string of element of the sudoku (replace blank space with a 0)"<<endl;
	for (int i = 0; i < 9; i++) 
	{
		cout << "row " << i + 1 << " : ";
		getline(cin, s);
		for (int j = 0; j < 9; j++)
		{
			board[i][j] = (int)s[j]-48;
		}
	}
	if (sudokusolver(board) == true)
		print_sudoku(board);
	else
		cout << "sudoku can't solved";
	return 0;
}/*
530070000
600195000
098000060
800060003
400803001
700020006
060000280
000419005
000080079*/