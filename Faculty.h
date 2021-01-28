#pragma once
#include "SchoolSystem.h"

// child class of School System, will contain data about faculty including  
//name, subject taught, faculty number, number of teachers 

class Faculty :
    public SchoolSystem
{
private:
    
    string name; 
    string subject;
    int numID; //faculty ID number

public:
    

};

