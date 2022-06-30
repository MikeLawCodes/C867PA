#pragma once
#include <iostream>
#include <string>
#include "Degree.h"
using namespace std;
using std::string;


class Student {
public:
	const static int daysToComplete = 3
private:
	int studentID;
	string firstName;
	string lastName;
	string eMail;
	int studentAge;
	int daysToComplete[];
	DegreeProgram degreeProgram;
public:
	Student();
	Student(int studentID, string firstName, string lastName, string eMail, int studentAge, DegreeProgram degreeProgram);
	~Student(); //Destructor

	//Getters
	int getStudentID();
	string getFirstName();
	string getLastName();
	string getEMail();
	int getStudentAge();
	int getDaysToComplete();
	DegreeProgram getDegreeProgam();


	//Setters
	void setStudentID(int studentID);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setEMail(string eMail);
	void setAge(int studentAge);
	void setDaysToComplete(int daysToComplete[]);
	void setDegreeProgram(DegreeProgram dp);

	static void printHeader();
	
	void print();
};
