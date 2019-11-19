/**
Sergio Ruiz-Loza, Ph.D.
TC2011 201913 Intelligent Systems
C++ MDP starter code
*/

#pragma once
#include <iostream>
#include <string>
using namespace std;

#ifndef __CELL
#define _CELL
class Cell
{
public:
	enum cell_type{
		CT_VALUE,
		CT_POLICY,
		CT_REWARD,
		CT_NONE
	};
	// Direction is the Action set in MDP=<S,A,T,R>
	enum direction{
		DIR_R,
		DIR_UR,
		DIR_U,
		DIR_UL,
		DIR_L,
		DIR_DL,
		DIR_D,
		DIR_DR,
		DIR_STAY
	};

	Cell();
	Cell(Cell* other);
	Cell(cell_type ct);
	~Cell();
	string toString();

	cell_type type;
	float fValue; // for CT_REWARD and CT_VALUE
	int iValue; // for CT_POLICY
	int row;
	int column;
};
#endif
