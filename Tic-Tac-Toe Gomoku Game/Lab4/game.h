#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>
#include <iterator>
#include <sstream>
#include <algorithm>
#include <iomanip>
#include <memory>
using namespace std;

enum lab4
{
	start = 0, boundary = 2, least_size = 3, single_min = 1, single_max = 9
};

enum returnvalue
{
	success = 0, firstargument = 1, normal_argument_numbers = 2, possible_arg_number = 3, other_possible_arg_number = 4,
	ainumbers, fail = 99, quit = 100, normal = 9, nowinner = 50, invalid_arg_number = 999, invalid_input = 1000
};

// The base class which contains protected member variables that are common to multiple games
class GameBase
{
public:
	virtual void print() { }; // A pure virtual print() method that takes no parameters and has a void return type
	virtual bool done() { return false; };
	virtual bool draw() { return false; };
	int prompt(unsigned int &, unsigned int &);
	virtual int turn() { return fail; };
	int play();
	static GameBase* init(int a, char** b); // A static method that takes an integer and an array of pointers to char 
protected:
	unsigned int Dimension;
	string ** gameboard;
	size_t longest; // An int storing the longest display string length of any piece on the board
	bool qt = false;
	int count;
	bool Player1win = false;
	bool Player2win = false;
	string gamepiece1;
	string gamepiece2;
	bool invalidArg = false;
private:
};

// A class derived from the base class through public inheritance that implements the TicTacToe game
class TicTacToe: public GameBase
{
public:
	virtual void print();
	virtual bool done();
	virtual bool draw();
	virtual int turn();
	friend ostream & operator<< (ostream &, const TicTacToe &);
	TicTacToe();
	~TicTacToe();
protected:
private:
	const int number_of_Tgameboard = 5;
};

// A class derived from the base class through public inheritance that implements the Gomoku game
class Gomoku: public GameBase
{
public:
	virtual void print();
	virtual bool done();
	virtual bool draw();
	virtual int turn();
	friend ostream & operator<< (ostream &, const Gomoku &);
	Gomoku();
	~Gomoku();
	Gomoku(int);
	Gomoku(int, int);
private:
	int game_board_dimension = 21;
	int connect_piece = 5;
};

ostream & operator<< (ostream &, const TicTacToe &);

ostream & operator<< (ostream &, const Gomoku &);