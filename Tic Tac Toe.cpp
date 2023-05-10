#include <iostream>
using namespace std;
char arr[3][3] = { '*','*','*','*','*','*','*','*','*' };
int row, column;
void board()
{
	system("cls");//Clear the screen
	cout << "\t\t\t\tT I C   T A C   T O E" << endl;
	cout << "\n\t\t\t\t   C O L U M N S" << endl;
	cout << "\t\t\t\t   0   | 1   | 2" << endl;
	cout << "\t\t\t          ---------------" << endl;
	cout << "\t\t\tR" << endl;
	cout << "\n\t\t\tO   0\t   " << arr[0][0] << "   | " << arr[0][1] << "   | " << arr[0][2] << endl;
	cout << "\t\t\t    ------------------------------" << endl;
	cout << "\t\t\tW   1\t   " << arr[1][0] << "   | " << arr[1][1] << "   | " << arr[1][2] << endl;
	cout << "\t\t\t    ------------------------------" << endl;
	cout << "\t\t\tS   2\t   " << arr[2][0] << "   | " << arr[2][1] << "   | " << arr[2][2] << endl;
}
void player1()
{
	cout << "\nPlayer 1 turn[X]:" << endl;
	cout << "Enter the row and column number:" << endl;
	cin >> row >> column;
	if (row == 0 && column == 0 && arr[0][0] == '*')
	{
		arr[0][0] = 'X';
	}
	else if (row == 0 && column == 1 && arr[0][1] == '*')
	{
		arr[0][1] = 'X';
	}
	else if (row == 0 && column == 2 && arr[0][2] == '*')
	{
		arr[0][2] = 'X';
	}
	else if (row == 1 && column == 0 && arr[1][0] == '*')
	{
		arr[1][0] = 'X';
	}
	else if (row == 1 && column == 1 && arr[1][1] == '*')
	{
		arr[1][1] = 'X';
	}
	else if (row == 1 && column == 2 && arr[1][2] == '*')
	{
		arr[1][2] = 'X';
	}
	else if (row == 2 && column == 0 && arr[2][0] == '*')
	{
		arr[2][0] = 'X';
	}
	else if (row == 2 && column == 1 && arr[2][1] == '*')
	{
		arr[2][1] = 'X';
	}
	else if (row == 2 && column == 2 && arr[2][2] == '*')
	{
		arr[2][2] = 'X';
	}
	else
	{
		cout << "Invalid row or column number,try again" << endl;
		player1();
	}
}
void player2()
{
	cout << "\nPlayer 2 turn[O]:" << endl;
	cout << "Enter the row and column number:" << endl;
	cin >> row >> column;
	if (row == 0 && column == 0 && arr[0][0] == '*')
	{
		arr[0][0] = 'O';
	}
	else if (row == 0 && column == 1 && arr[0][1] == '*')
	{
		arr[0][1] = 'O';
	}
	else if (row == 0 && column == 2 && arr[0][2] == '*')
	{
		arr[0][2] = 'O';
	}
	else if (row == 1 && column == 0 && arr[1][0] == '*')
	{
		arr[1][0] = 'O';
	}
	else if (row == 1 && column == 1 && arr[1][1] == '*')
	{
		arr[1][1] = 'O';
	}
	else if (row == 1 && column == 2 && arr[1][2] == '*')
	{
		arr[1][2] = 'O';
	}
	else if (row == 2 && column == 0 && arr[2][0] == '*')
	{
		arr[2][0] = 'O';
	}
	else if (row == 2 && column == 1 && arr[2][1] == '*')
	{
		arr[2][1] = 'O';
	}
	else if (row == 2 && column == 2 && arr[2][2] == '*')
	{
		arr[2][2] = 'O';
	}
	else
	{
		cout << "Invalid row or column number,try again" << endl;
		player2();
	}
}
char player1_win()
{
	//Rows
	if (arr[0][0] == 'X' && arr[0][1] == 'X' && arr[0][2] == 'X')
	{
		return 'X';
	}
	else if (arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'X')
	{
		return 'X';
	}
	else if (arr[2][0] == 'X' && arr[2][1] == 'X' && arr[2][2] == 'X')
	{
		return 'X';
	}
	//Columns
	else if (arr[0][0] == 'X' && arr[1][0] == 'X' && arr[2][0] == 'X')
	{
		return 'X';
	}
	else if (arr[0][1] == 'X' && arr[1][1] == 'X' && arr[2][1] == 'X')
	{
		return 'X';
	}
	else if (arr[0][2] == 'X' && arr[1][2] == 'X' && arr[2][2] == 'X')
	{
		return 'X';
	}
	//Diagonals
	else if (arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X')
	{
		return 'X';
	}
	else if (arr[0][2] == 'X' && arr[1][1] == 'X' && arr[2][0] == 'X')
	{
		return 'X';
	}
	return 'a';
}
char player2_win()
{
	//Rows
	if (arr[0][0] == 'O' && arr[0][1] == 'O' && arr[0][2] == 'O')
	{
		return 'O';
	}
	else if (arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'O')
	{
		return 'O';
	}
	else if (arr[2][0] == 'O' && arr[2][1] == 'O' && arr[2][2] == 'O')
	{
		return 'O';
	}
	//Columns
	else if (arr[0][0] == 'O' && arr[1][0] == 'O' && arr[2][0] == 'O')
	{
		return 'O';
	}
	else if (arr[0][1] == 'O' && arr[1][1] == 'O' && arr[2][1] == 'O')
	{
		return 'O';
	}
	else if (arr[0][2] == 'O' && arr[1][2] == 'O' && arr[2][2] == 'O')
	{
		return 'O';
	}
	//Diagonals
	else if (arr[0][0] == 'O' && arr[1][1] == 'O' && arr[2][2] == 'O')
	{
		return 'O';
	}
	else if (arr[0][2] == 'O' && arr[1][1] == 'O' && arr[2][0] == 'O')
	{
		return 'O';
	}
	return 'b';
}
int draw()
{
	if (arr[0][0] != '*' && arr[0][1] != '*' && arr[0][2] != '*'
		&& arr[1][0] != '*' && arr[1][1] != '*' && arr[1][2] != '*'
		&& arr[2][0] != '*' && arr[2][1] != '*' && arr[2][2] != '*')
	{
		return 0;
	}
	return 1;
}
void main()
{
	board();
	for (int i = 1; i <= 9; i++)
	{
		player1();
		board();
		if (player1_win() == 'X')
		{
			cout << "\n\t\t Congratulations!\n\t\t Player 1 with turn[X] win the game" << endl;
			break;
		}
		else if (player2_win() == 'O')
		{
			cout << "\n\t\t Congratulations!\n\t\t Player 2 with turn[O] win the game" << endl;
			break;
		}
		else if (draw() == 0)
		{
			cout << "\n\t\tGame Draw!\n\t\tNo player won the game" << endl;
			break;
		}
		player2();
		board();
		if (player1_win() == 'X')
		{
			cout << "\n\t\t Congratulations!\n\t\t Player 1 with turn[X] win the game" << endl;
			break;
		}
		else if (player2_win() == 'O')
		{
			cout << "\n\t\t Congratulations!\n\t\t Player 2 with turn[O] win the game" << endl;
			break;
		}
		else if (draw() == 0)
		{
			cout << "\n\t\tGame Draw!\n\t\tNo player won the game" << endl;
			break;
		}
	}
}