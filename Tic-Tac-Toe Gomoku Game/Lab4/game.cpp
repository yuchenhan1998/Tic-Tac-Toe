#include "stdafx.h"
#include "game.h"
using namespace std;

// Constructor of TicTacToe Game
TicTacToe::TicTacToe()
{
	Dimension = number_of_Tgameboard;
	gameboard = new string *[Dimension];
	for (unsigned int i = start; i < Dimension; i++)
	{
		gameboard[i] = new string[Dimension];
	}
	for (unsigned int i = start; i < Dimension; i++)
	{
		for (unsigned int j = start; j < Dimension; j++)
		{
			gameboard[i][j] = "";
		}
	}
	gamepiece1 = "X";
	gamepiece2 = "O";
	longest = (gamepiece1.length() < gamepiece2.length()) ? gamepiece1.length() : gamepiece2.length();
	count = (Dimension - boundary)*(Dimension - boundary);
	print();
}

// Destructor of TicTacToe Game
TicTacToe::~TicTacToe()
{
	for (unsigned int i = start; i < Dimension; i++)
	{
		delete []gameboard[i];
	}
	delete gameboard;
}

// Constructor of Gomoku Game
Gomoku::Gomoku()
{
	Dimension = game_board_dimension;
	gameboard = new string *[Dimension];
	for (unsigned int i = start; i < Dimension; i++)
	{
		gameboard[i] = new string[Dimension];
	}
	for (unsigned int i = start; i < Dimension; i++)
		for (unsigned int j = start; j < Dimension; j++)
		{
			gameboard[i][j] = "";
		}
	gamepiece1 = "B";
	gamepiece2 = "W";
	longest = (gamepiece1.length() < gamepiece2.length()) ? gamepiece1.length() : gamepiece2.length();
	count = (Dimension - boundary)*(Dimension - boundary);
	print();
}

Gomoku::Gomoku(int a)
{
	if (a >= least_size)
	{
		cout << "Successfully Construct" << endl;
		if (a <= connect_piece)
		{
			connect_piece = a;
		}
		Dimension = a + boundary;
		gameboard = new string *[Dimension];
		for (unsigned int i = start; i < Dimension; i++)
		{
			gameboard[i] = new string[Dimension];
		}
		for (unsigned int i = start; i < Dimension; i++)
		{
			for (unsigned int j = start; j < Dimension; j++)
			{
				gameboard[i][j] = "";
			}
		}
		gamepiece1 = "B";
		gamepiece2 = "W";
		longest = (gamepiece1.length() < gamepiece2.length()) ? gamepiece1.length() : gamepiece2.length();
		count = (Dimension - boundary)*(Dimension - boundary);
		print();
	}
	else 
	{
		cout << "Invalid input argument. Please re-enter." << endl;
		invalidArg = true;
	}
}

Gomoku::Gomoku(int a, int b)
{
	if ((a >= least_size && (b >= least_size)) && (a >= b))
	{
		cout << "Successfully Construct" << endl;
		if (a <= connect_piece) {
			connect_piece = a;
		}
		Dimension = a + boundary;
		connect_piece = b;
		gameboard = new string *[Dimension];
		for (unsigned int i = start;i < Dimension;i++)
		{
			gameboard[i] = new string[Dimension];
		}
		for (unsigned int i = start; i < Dimension; i++)
		{
			for (unsigned int j = start; j < Dimension; j++)
			{
				gameboard[i][j] = "";
			}
		}
		gamepiece1 = "B";
		gamepiece2 = "W";
		longest = (gamepiece1.length() < gamepiece2.length()) ? gamepiece1.length() : gamepiece2.length();
		count = (Dimension - boundary)*(Dimension - boundary);
		print();
	}
	else
	{
		cout << "Invalid input argument. Please re-enter." << endl;
		invalidArg = true;
	}
}

// Destructor of Gomoku Game
Gomoku::~Gomoku()
{
	for (unsigned int i = start; i < Dimension; i++)
	{
		delete[]gameboard[i];
	}
	delete gameboard;
}

// Override of the virtual print() method in the base class
void TicTacToe::print()
{
	cout << *this << endl;
}

// Override of the virtual print() method in the base class
void Gomoku::print()
{
	cout << *this << endl;
}

// An insertion operator (operator<<) for TicTacToe that takes a reference to an ostream and a reference to a const object of
// the derived class as parameters, and uses the maximum display string length stored by the base class to adjust the widths;
// then return the ostream reference that was passed in
ostream & operator<< (ostream &out, const TicTacToe &obj)
{
	for (int i = obj.Dimension-1; i >= start; i--)
	{
		out <<left<< i << setw(2 * obj.longest);
		for (unsigned int j = start; j < obj.Dimension; j++)
		{
			if ((obj.gameboard[i][j] == obj.gamepiece1) || (obj.gameboard[i][j] == obj.gamepiece2))
			{
				out <<left<< setw(2 * obj.longest) << obj.gameboard[i][j];
			}
			else if (obj.gameboard[i][j] == "")
			{
				out <<right<< setw(2 * obj.longest) << " ";
			}
		
		}
		for (unsigned int j = start; j < obj.longest; j++)
		{
			out << endl;
		}
	}
	for (unsigned int i = start; i < obj.Dimension; i++)
	{
		out <<right<< setw(2 * obj.longest) << i;
	}
	return out;
}

// An insertion operator (operator<<) for Gomoku that takes a reference to an ostream and a reference to a const object of
// the derived class as parameters, and uses the maximum display string length stored by the base class to adjust the widths;
// then return the ostream reference that was passed in
ostream & operator<< (ostream &out, const Gomoku &obj)
{

	for (unsigned int i = obj.Dimension - 2; i > start; i--)
	{
		if (i >= single_min && i <= single_max) {
			out << left << i << setw(2 * obj.longest) << "  ";
		}
		else {
			out << left << i << setw(2 * obj.longest - 2);
			out << " ";
		}
		for (unsigned int j = start + 1; j < obj.Dimension - 1; j++)
		{
			if ((obj.gameboard[i][j] == obj.gamepiece1) || (obj.gameboard[i][j] == obj.gamepiece2))
			{
				out << left << setw(2 * obj.longest) << obj.gameboard[i][j] << " ";
			}
			else if (obj.gameboard[i][j] == "")
			{
				out << right << setw(2 * obj.longest) << "   ";
			}
		}
		for (unsigned int j = start;j < obj.longest; j++)
		{
			out << endl;
		}
	}
	out << left << setw(2 * obj.longest) << "X" << " ";
	for (unsigned int i = start + 1; i < obj.Dimension - 1; i++)
	{
		out << left << setw(2 * obj.longest) << i << " ";
	}
	return out;
}

// A public non-static prompt() method in the game class that takes references to two unsigned integers. Prompt the user to
// type a line that either is "quit" to end the game or a string representing a valid coordinate of a square on the board as
// a comma-separated pair of unsigned decimal integers
int GameBase::prompt(unsigned int &a,unsigned int &b)
{
	string str = "";
	bool judge = false;
	do
	{
		cout << "Please enter quit or the valid coordinate in the form: x,y" << endl;
		cin >> str;
		// check if the players want to quit
		if (str == "quit")
		{
			qt = true;
			return quit;
		}
		// replace comma with space
		for (size_t i = start; i < str.size(); i++)
		{
			if (str[i] == ',')
				str[i] = ' ';
		}
		istringstream s(str);
		if (s >> a)
		{
			if (s >> b)
				if (((a <= Dimension - boundary) && (a > start)) && ((b > start) && (b <= Dimension - boundary)))
					if (gameboard[b][a] == "")
					{
						judge = true;
					}
					else
					{
						cout << "The position has been taken. You should enter a valid position for your move." << endl;
					}
				else
					cout << "The input coordinate is out of range. Please re-enter." << endl;

		}
	} while (judge == false);
	return normal;
}

// A public non-static draw() method for TicTacToe that takes no parameters and has a bool return type. Return false if
// there are moves remaining in the game or if the done() method returns true; otherwise return true
bool TicTacToe::draw()
{
	if (qt)
		return true;
	else if (count == 0)
		return true;
	else
		return false;
}

// // A public non-static draw() method for Gomoku that takes no parameters and has a bool return type. Return false if
// there are moves remaining in the game or if the done() method returns true; otherwise return true
bool Gomoku::draw()
{
	if (qt)
		return true;
	else if (count == 0)
		return true;
	else
		return false;
}

// A public non-static turn() method for TicTacToe that takes no parameters. Print out a message to that effect (player X
// or player O), and alternate whose turn it is each time it is called. Repeatedly call the prompt() method to obtain a valid
// coordinate, or to determine if the user quits the game
int TicTacToe::turn()
{
	unsigned int x, y;
	prompt(y, x);
	// Quit the game
	if (qt)
	{
		return quit;
	}
	// Player1(X)'s turn when the number of moves remaining is an odd number
	if (count % 2 == 1)
	{
		gameboard[x][y] = gamepiece1;
		print();
		cout << endl;
		cout << "Player "<< gamepiece1 << ": ";
		for (unsigned int i = start+1; i < Dimension-1; i++)
			for (unsigned int j = start+1; j < Dimension-1; j++)
			{
				if (gameboard[i][j] == gamepiece1)
					cout << j << "," << i << "; ";
			}
		cout << endl;
	}
	// Player2(O)'s turn
	else
	{
		gameboard[x][y] = gamepiece2;
		print();
		cout << endl;
		cout << "Player "<< gamepiece2 << ": ";
		for (unsigned int i = start+1; i < Dimension-1; i++)
			for (unsigned int j = start+1; j < Dimension-1; j++)
			{
				if (gameboard[i][j] == gamepiece2)
					cout << j << "," << i << "; ";
			}
		cout << endl;
	}
	count--;
	return normal;
}

// A public non-static turn() method for Gomoku that takes no parameters. Print out a message to that effect (player B
// or player W), and alternate whose turn it is each time it is called. Repeatedly call the prompt() method to obtain a valid
// coordinate, or to determine if the user quits the game
int Gomoku::turn()
{
	unsigned int x, y;
	prompt(y, x);
	if (qt)
	{
		return quit;
	}
	if (Dimension % 2 == 1)
	{
		if (count % 2 == 1)
		{
			gameboard[x][y] = gamepiece1;
			print();
			cout << endl;
		}
		else
		{
			gameboard[x][y] = gamepiece2;
			print();
			cout << endl;
		}
	}
	else {
		if (count % 2 == 1)
		{
			gameboard[x][y] = gamepiece2;
			print();
			cout << endl;
		}
		else
		{
			gameboard[x][y] = gamepiece1;
			print();
			cout << endl;
		}
	}
	count--;
	return normal;

}

// A public non-static done() method for TicTacToe that takes no parameters and has a bool return type; return true if 3-Xs
// or Os are in a vertical, horizontal or diagonal line, otherwise return false
bool TicTacToe::done()
{
	// check the rows
	for (unsigned int i = start+1; i < Dimension-1; i++)
	{
		bool a, b;
		a = b = true;
		for (unsigned int j = start+1; j < Dimension-1; j++)
		{
			if (gameboard[i][j] != gamepiece1)
				a = false;
			if (gameboard[i][j] != gamepiece2)
				b = false;
			if ((a || b) == false)
				break;
		}
		if (a)
		{
			Player1win = true;
			return true;
		}
		else if (b)
		{
			Player2win = true;
			return true;
		}
	}
	// check the columns
	for (unsigned int i = start+1; i < Dimension-1; i++)
	{
		bool a, b;
		a = b = true;
		for (unsigned int j = start+1 ;j < Dimension-1; j++)
		{
			if (gameboard[j][i] != gamepiece1)
				a = false;
			if (gameboard[j][i] != gamepiece2)
				b = false;
			if ((a || b) == false)
				break;
		}
		if (a)
		{
			Player1win = true;
			return true;
		}
		else if (b)
		{
			Player2win = true;
			return true;
		}
	}
	// check the diagonals
	bool a, b, c, d;
	a = b = c = d = true;
	for (unsigned int i = start+1; i < Dimension-1; i++)
	{
		if (gameboard[i][i] != gamepiece1)
			a = false;
		if (gameboard[i][i] != gamepiece2)
			b = false;
		if ((a || b) == false)
			break;
	}
	for (unsigned int i = start+1; i < Dimension-1; i++)
	{
		if (gameboard[Dimension-1-i][i] != gamepiece1)
			d = false;
		if (gameboard[Dimension-1-i][i] != gamepiece2)
			c = false;
		if ((d || c) == false)
			break;
	}
	if (a || d)
	{
		Player1win = true;
		return true;
	}
	else if (b || c)
	{
		Player2win = true;
		return true;
	}
	else
		return false;
}

// A public non-static done() method for Gomoku that takes no parameters and has a bool return type; return true if n-Bs
// or Ws are in a vertical, horizontal or diagonal line, otherwise return false
bool Gomoku::done()
{
	// check from top to bottom
	for (unsigned int i = start+1; i < Dimension-1; i++)
	{
		for (unsigned int j = start+1; j < Dimension-connect_piece; j++)
		{
			bool a, b;
			a = b = false;
			// check if Player1(B) wins
			if (gameboard[i][j] == gamepiece1)
			{
				a = true;
				for (int k = start+1; k < connect_piece; k++)
				{
					if (gameboard[i][j + k] != gamepiece1)
						a = false;
				}
				if (a)
				{
					Player1win = true;
					return true;
				}
			}
			// check if Player2(W) wins
			else if (gameboard[i][j] == gamepiece2)
			{
				b = true;
				for (int k = start+1; k < connect_piece; k++)
				{
					if (gameboard[i][j + k] != gamepiece2)
						b = false;
				}
				if(b)
				{
					Player2win = true;
					return true;
				}
			}
			else {
				continue;
			}
		}
	}
	// check from left to right
	for (unsigned int i = start+1; i < Dimension-connect_piece; i++)
	{
		for (unsigned int j = start+1; j < Dimension-1; j++)
		{
			bool a, b;
			a = b = false;
			// check if Player1(B) wins
			if (gameboard[i][j] == gamepiece1)
			{
				a = true;
				for (int k = start+1; k < connect_piece; k++)
				{
					if (gameboard[i+k][j] != gamepiece1)
						a = false;
				}
				if (a)
				{
					Player1win = true;
					return true;
				}
			
			}
			// check if Player2(W) wins
			else if (gameboard[i][j] == gamepiece2)
			{
				b = true;
				for (int k = start+1; k < connect_piece; k++)
				{
					if (gameboard[i+k][j] != gamepiece2)
						b = false;
				}
				if (b)
				{
					Player2win = true;
					return true;
				}
			}
			else {
				continue;
			}
		}
	}
	// check from right-bottom to left-top
	for (unsigned int i = start+connect_piece; i < Dimension-1; i++)
	{
		for (unsigned int j = start+connect_piece; j < Dimension-1; j++)
		{
			bool a, b;
			a = b = false;
			// check if Player1(B) wins
			if (gameboard[i][j] == gamepiece1)
			{
				a = true;
				for (int k = start+1; k < connect_piece; k++)
				{
					if (gameboard[i-k][j-k] != gamepiece1)
						a = false;
				}
				if (a)
				{
					Player1win = true;
					return true;
				}
			}
			// check if Player2(W) wins
			else if (gameboard[i][j] == gamepiece2)
			{
				b = true;
				for (int k = start+1; k < connect_piece; k++)
				{
					if (gameboard[i-k][j-k] != gamepiece2)
						b = false;
				}
				if (b)
				{
					Player2win = true;
					return true;
				}
			}
			else {
				continue;
			}
		}
	}
	// check from top-right to bottom-left
	for (unsigned int i = start+connect_piece; i < Dimension-1; i++)
	{
		for (unsigned int j = start+1; j < Dimension-connect_piece; j++)
		{
			bool a, b;
			a = b = false;
			// check if Player1(B) wins
			if (gameboard[i][j] == gamepiece1)
			{
				a = true;
				for (int k = start+1; k < connect_piece; k++)
				{
					if (gameboard[i - k][j + k] != gamepiece1)
						a = false;
				}
				if (a)
				{
					Player1win = true;
					return true;
				}

			}
			// check if Player2(W) wins
			else if (gameboard[i][j] == gamepiece2)
			{
				b = true;
				for (int k = start+1; k < connect_piece; k++)
				{
					if (gameboard[i - k][j + k] != gamepiece2)
						b = false;
				}
				if (b)
				{
					Player2win = true;
					return true;
				}
			}
			else {
				continue;
			}
		}
	}
	return false;
}

GameBase* GameBase::init(int argv, char** argc)
{
	if ((argv != normal_argument_numbers) && (argv != possible_arg_number) && (argv != other_possible_arg_number))
	{
		cout << "Your number of arguments is not correct. Please enter exactly 2 arguments and the second should be TicTacToe or Gomoku." << endl
			<< "Or, if you input 3 arguments, the third should the size of the gameboard of Gomoku." << endl
			<< "If you input 4 arguments, the third should be the size of Gomoku board and the fourth should be the number of connecting pieces to win" << endl;
		throw NULL;
		return NULL;
	}
	string mask = argc[firstargument];
	if (mask == "TicTacToe")
	{
		cout << "Successfully Construct" << endl;
		TicTacToe *Ticgame = new TicTacToe;
		return Ticgame;
	}
	else if (mask == "Gomoku")
	{	
		if (argv == normal_argument_numbers)
		{
			Gomoku *Gogame = new Gomoku;
			return Gogame;
		}
		else if (argv == possible_arg_number)
		{
			int m = atoi(argc[normal_argument_numbers]);
			Gomoku *Gogame = new Gomoku(m);
			return Gogame;
		}
		else if (argv == other_possible_arg_number)
		{
			int m = atoi(argc[normal_argument_numbers]);
			int n = atoi(argc[possible_arg_number]);
			Gomoku *Gogame= new Gomoku(m, n);
			return Gogame;
		}
		else
		{
			return NULL;
		}
	}
	else
	{
		cout << "Your number of arguments is not correct. Please enter exactly 2 arguments and the second should be TicTacToe or Gomoku." << endl
			<< "Or, if you input 3 arguments, the third should the size of the gameboard of Gomoku." << endl
			<< "If you input 4 arguments, the third should be the size of Gomoku board and the fourth should be the number of connecting pieces to win" << endl;
		throw invalid_arg_number;
		return NULL;
	}
}

// A public non-static play() method that takes no parameters
// Print the game board and then repeatedly calls the turn() method and then the done() and draw() methods until either:
// (1) the done() method returns true in which case the program should print out a message indicating 'X' or 'O' won the game
// and then return a success code (with value 0);
// (2) the draw() method returns true in which case the program should print out a message indicating how many turns were played
// and saying that no winning moves remain (the game is a draw) and then return a unique non-zero failure code
// (3) the user quits, in which case the program prints out a message indicating how many turns were played
int GameBase::play()
{
	// Return quit (inferring an invalid input argument) whenever (Player1win==Player2win==true)
	if (invalidArg == true)
	{
		return invalid_input;
	}
	else
	{
		do
		{
			turn();
			done();
			draw();
		} while ((draw() == false) && (done() == false));
		if (done())
		{
			if (Player1win)
				cout << "Player " << gamepiece1 << " has won the game! Congratulations!" << endl;
			else
				cout << "Player " << gamepiece2 << " has won the game! Congratulations!" << endl;
			return success;
		}
		if (qt)
		{
			cout << ((Dimension - boundary)*(Dimension - boundary) - count) << " turn(s) has/have been played. The player quits the game." << endl;
			return quit;
		}
		cout << ((Dimension - boundary)*(Dimension - boundary) - count) << " turn(s) has/have been played. There is no winner." << endl;
		return nowinner;
	}
}