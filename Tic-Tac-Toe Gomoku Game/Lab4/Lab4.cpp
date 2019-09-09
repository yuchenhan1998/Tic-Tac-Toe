// Lab4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "game.h"
using namespace std;


int main(int argc,char* argv[])
{
	try
	{
		GameBase B;
		shared_ptr<GameBase>game(B.init(argc, argv));
		if(game->play() == quit)
			return quit;
		else 
		   return success;
	}
	catch (int)
	{
		return fail;
	}
	catch (...)
	{
		return fail;
	}
}