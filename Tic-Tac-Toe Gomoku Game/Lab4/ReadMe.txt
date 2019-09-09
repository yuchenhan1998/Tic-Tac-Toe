Cases:
in1:game.exe
out1:Your number of arguments is not correct. Please enter exactly 2 arguments and the second should be TicTacToe or Gomoku.
Or, if you input 3 arguments, the third should the size of the gameboard of Gomoku.
If you input 4 arguments, the third should be the size of Gomoku board and the fourth should be the number of connecting pieces to win

in2:game.exe TicTacToe
out2:Successfully Construct
4
3
2
1
0
 0 1 2 3 4
 Please enter quit or the valid coordinate in the form: x,y
 10,1
 The input coordinate is out of range. Please re-enter.
 Please enter quit or the valid coordinate in the form: x,y
 1,1
4
3
2
1  X
0
 0 1 2 3 4

 Player X: 1,1;
 Please enter quit or the valid coordinate in the form: x,y
 1,1
 The position has been taken. You should enter a valid position for your move.
 Please enter quit or the valid coordinate in the form: x,y
 quit
 1 turn(s) has/have been played. The player quits the game.

 in3:
 1,1 -> 2,1 -> 1,2 -> 3,1 -> 1,3
  out3:
4
3    X
2    X
1    X  O  O
0
  0  1  2  3  4

Player X: 1,1; 1,2; 1,3;
Player X won the game. Congratulations!

in4:
1,1 -> 1,2 -> 1,3 -> 2,2 -> 2,1 -> 2,3 -> 3,2 -> 3,1 -> 3,3
out4:
4
3    X  O  X
2    O  O  X
1    X  X  O
0
  0  1  2  3  4
  
Player X: 1,1; 1,3 2,1; 3,2; 3,3;
9 turn(s) has/have been made. There is no winner.

in5: Lab4.exe Gomoku
out5:
Successfully Construct
19
18
17
16
15
14
13
12
11
10
9
8
7
6
5
4
3
2
1
X  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19
Please enter quit or the valid coordinate in the form: x,y
1,1
19
18
17
16
15
14
13
12
11
10
9
8
7
6
5
4
3
2
1  B
X  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19
Please enter quit or the valid coordinate in the form: x,y
15,1
19
18
17
16
15
14
13
12
11
10
9
8
7
6
5
4
3
2
1  B                                         W
X  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19
Please enter quit or the valid coordinate in the form: x,y
15,2
19
18
17
16
15
14
13
12
11
10
9
8
7
6
5
4
3
2                                            B
1  B                                         W
X  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19
Please enter quit or the valid coordinate in the form: x,y
1,1
The position has been taken. You should enter a valid position for your move.
 Please enter quit or the valid coordinate in the form: x,y
16,1
19
18
17
16
15
14
13
12
11
10
9
8
7
6
5
4
3
2                                            B
1  B                                         W  W
X  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19
Please enter quit or the valid coordinate in the form: x,y
2,2
19
18
17
16
15
14
13
12
11
10
9
8
7
6
5
4
3
2     B                                      B
1  B                                         W  W
X  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19
Please enter quit or the valid coordinate in the form: x,y
17,1
19
18
17
16
15
14
13
12
11
10
9
8
7
6
5
4
3
2     B                                      B
1  B                                         W  W  W
X  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19
Please enter quit or the valid coordinate in the form: x,y
3,3
19
18
17
16
15
14
13
12
11
10
9
8
7
6
5
4
3        B
2     B                                      B
1  B                                         W  W  W
X  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19
Please enter quit or the valid coordinate in the form: x,y
18,1
19
18
17
16
15
14
13
12
11
10
9
8
7
6
5
4
3        B
2     B                                      B
1  B                                         W  W  W  W
X  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19
Please enter quit or the valid coordinate in the form: x,y
4,4
18,1
19
18
17
16
15
14
13
12
11
10
9
8
7
6
5
4           B
3        B
2     B                                      B
1  B                                         W  W  W  W
X  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19
Please enter quit or the valid coordinate in the form: x,y
2,1
18,1
19
18
17
16
15
14
13
12
11
10
9
8
7
6
5
4           B
3        B
2     B                                      B
1  B  W                                      W  W  W  W
X  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19
Please enter quit or the valid coordinate in the form: x,y
5,5
18,1
19
18
17
16
15
14
13
12
11
10
9
8
7
6
5              B
4           B
3        B
2     B                                      B
1  B  W                                      W  W  W  W
X  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19
Player B has won the game. Congratulations!
in6:Lab4.exe
out6:
Successfully Construct
19
18
17
16
15
14
13
12
11
10
9
8
7
6
5
4
3
2
1
X  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19
Please enter quit or the valid coordinate in the form: x,y
20,1
The input coordinate is out of range. Please re-enter.
Please enter quit or the valid coordinate in the form: x,y
-1,0
The input coordinate is out of range. Please re-enter.
Please enter quit or the valid coordinate in the form: x,y
9 9
Please enter quit or the valid coordinate in the form: x,y
Please enter quit or the valid coordinate in the form: x,y
9, 9
Please enter quit or the valid coordinate in the form: x,y
Please enter quit or the valid coordinate in the form: x,y
quit
0 turn(s) has/have been made. The player quits the game.

/////////////////////////////////////////////////////////////////////////////
EXTRA CREDIT:

Design & Implementation:
Create another two contructors, one of which takes one parameter (the board's size), and the other one of which takes two
parameters (the board's size and the connecting pieces required). Create a private member variable storing the connecting
pieces required for the win, which is initialized as 5 by default; when the user inputs a fourth argument, it will be used
to set the number of connecting pieces required. Furthermore, in Gomoku::done() method, this variable (i.e. connected_piece)
will be used to check if any of two players wins the game

// New Constructors
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

// Test Cases
#1) Normal Case
Command: Lab4.exe Gomoku 15 4
// Output (Behave correctly)
successfully construct
15
14
13
12
11
10
9
8
7
6
5
4
3
2
1
X  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15
Please enter quit or the valid coordinate in the form: x,y
1,1
15
14
13
12
11
10
9
8
7
6
5
4
3
2
1  B
X  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15

Please enter quit or the valid coordinate in the form: x,y
15,1
15
14
13
12
11
10
9
8
7
6
5
4
3
2
1  B                                         W
X  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15

Please enter quit or the valid coordinate in the form: x,y
2,2
15
14
13
12
11
10
9
8
7
6
5
4
3
2     B
1  B                                         W
X  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15

Please enter quit or the valid coordinate in the form: x,y
14,2
15
14
13
12
11
10
9
8
7
6
5
4
3
2     B                                   W
1  B                                         W
X  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15

Please enter quit or the valid coordinate in the form: x,y
3,3
15
14
13
12
11
10
9
8
7
6
5
4
3        B
2     B                                   W
1  B                                         W
X  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15

Please enter quit or the valid coordinate in the form: x,y
14,1
15
14
13
12
11
10
9
8
7
6
5
4
3        B
2     B                                   W
1  B                                      W  W
X  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15

Please enter quit or the valid coordinate in the form: x,y
4,4
15
14
13
12
11
10
9
8
7
6
5
4           B
3        B
2     B                                   W
1  B                                      W  W
X  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15

Player B has won the game! Congratulations!

#2) Have to take into account when a < b, which means the board size is smaller than connecting pieces required for a win
Command: game.exe Gomoku 5 8
// Output:
Invalid input argument. Please re-enter.

#3) Have to take into account when a, b are less than 3 (including negative numbers)
Command: game.exe Gomoku -2 5
// Output:
Invalid input argument. Please re-enter.

Command: game.exe Gomoku 5 2
// Output:
Invalid input argument. Please re-enter.