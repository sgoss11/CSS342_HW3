#pragma once
#include "SchoolSystem.h"

// child class of School System, will contain data about students including
//name, student number, GPA, number of students 

//string registeredClasses[] ;

class Student :
    public SchoolSystem
{
private:

    string name;
    int GPA;
    int numID; //student ID number

public:

    Student();
    Student(const string n, const int g, const int nID);


};

