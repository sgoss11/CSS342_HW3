#pragma once
#include <iostream>
#include <string>
using namespace std;

//Parent class : Data Base for school system information including 
	// faculty, students, grades levels, GPA, subjects, population, etc

const int NUMOFSUBJECTS = 5; //English, Math, Science, PE, History

class SchoolSystem
{
private:

	string name;
	string schDist;
	string subjects[NUMOFSUBJECTS];

public:

//constructors
	SchoolSystem();
	SchoolSystem(const string name, const string schlDist, const int population);

//Students


//Teachers


//destructors
	virtual ~SchoolSystem();

};

