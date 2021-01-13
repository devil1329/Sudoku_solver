#pragma once
#include<iostream>
bool issafe(int a[][9], int r, int c, int n)
{
	if (a[r][c] != 0)
		return false;
	int gridx = (c / 3) * 3;
	int gridy = (r / 3) * 3;
	bool status = true;
	for (int i = 0; i < 9; i++)
	{
		if (a[r][i] == n) {
			status = false;
			break;
		}
		if (a[i][c] == n) {
			status = false;
			break;
		}
		if (a[gridy + i / 3][gridx + i % 3] == n) {
			status = false;
			break;
		}
	}
	return status;
}
bool unassignedposition(int a[][9], int& row, int& col)
{
	for (row = 0; row < 9; row++)
	{
		for (col = 0; col < 9; col++)
		{	
			if (a[row][col]==0)
				return true;
		}
	}
	return false;
}
bool sudokusolver(int a[][9])
{
	int row, col;
	if (!unassignedposition(a, row, col))
		return true;
	for (int i = 1; i < 10; i++)
	{
		if (issafe(a, row, col, i))
		{
			a[row][col] = i;
			if (sudokusolver(a))
				return true;
			a[row][col] = 0;
		}
	}
	return false;
}
void print_sudoku(int a[][9])
{
	std::cout << "-----------------------" << endl;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			std::cout << a[i][j] << " ";
			if ((j + 1) % 3 == 0)
				std::cout << "| ";
		}
		if ((i + 1) % 3 == 0 && (i + 1) != 9)
			std::cout << endl << "-----------------------";
		std::cout << endl;
	}
	std::cout << "-----------------------" << endl;
}