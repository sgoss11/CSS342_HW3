#include "SchoolSystem.h"

//constructors
	SchoolSystem::SchoolSystem()
	{
		name = "";
		schDist = "";
		grdLvls = 0;
	};
	SchoolSystem::SchoolSystem(const string n, const string sD, const int gL)
	{
		name = n;
		schDist = sD;
		grdLvls = gL;
	};

//destructors
	SchoolSystem::~SchoolSystem()
	{};

