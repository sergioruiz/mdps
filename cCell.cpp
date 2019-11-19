/**
Sergio Ruiz-Loza, Ph.D.
TC2011 201913 Intelligent Systems
C++ MDP starter code
*/

#include "cCell.h"

Cell::Cell()
{
	type = CT_NONE;
	fValue = 0.0f;
	iValue = 0;
	row = 0;
	column = 0;
}

Cell::Cell(Cell* other)
{
	type = other->type;
	fValue = other->fValue;
	iValue = other->iValue;
	row = other->row;
	column = other->column;
}

Cell::Cell(cell_type ct)
{
	type = ct;
	fValue = 0.0f;
	iValue = 0;
	row = 0;
	column = 0;
}

Cell::~Cell()
{

}

string Cell::toString()
{
	string msg = "";
	switch(type)
	{
		case CT_VALUE:
			msg += to_string(fValue);
			break;
		case CT_POLICY:
			switch(iValue)
			{
				case DIR_R:
					msg += "RR";
					break;
				case DIR_UR:
					msg += "UR";
					break;
				case DIR_U:
					msg += "UU";
					break;
				case DIR_UL:
					msg += "UL";
					break;
				case DIR_L:
					msg += "LL";
					break;
				case DIR_DL:
					msg += "DL";
					break;
				case DIR_D:
					msg += "DD";
					break;
				case DIR_DR:
					msg += "DR";
					break;
				case DIR_STAY:
					msg += "ST";
					break;
			}
			break;
		case CT_REWARD:
			msg += to_string(fValue);
			break;
		case CT_NONE:
			msg += "!!";
			break;
	}
	return msg;
}
