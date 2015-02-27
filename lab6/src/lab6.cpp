/*
 * =====================================================================================
 *
 *       Filename:  lab5.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/20/2015 11:44:59 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <cstring>
#include <iostream>
using namespace std;

struct Student
{
    char * name;
    float gpa;
};

Student ** createStudentList(char ** names, int size);
bool destroyStudentList(Student ** studentList, int size);
Student * createStudent(const char name[], float gpa);
bool destroyStudent(Student * &aStudent);

int main()
{   int size = 0;
    float gpa = 3.5;
    
    Student * aStudent = createStudent("jon",gpa);
    char ** names;
    names[size] = new char*[size]; 
    name[size] = new char[strlen("jon") + 1];
    strcpy(names[size], "jon");
    size++;
    name[size] = new char[strlen("anne") + 1];
    strcpy(names[size], "anne");
    size++;
    name[size] = new char[strlen("beth") + 1];
    strcpy(names[size], "beth");
    size++;
    name[size] = new char[strlen("jolene") + 1];
    strcpy(names[size], "gabi");
    size++;
    name[size] = new char[strlen("lee") + 1];
    strcpy(names[size], "lee");
    size++;

    Student ** List = createStudentList(names, size);
    //  cout << aStudent.name << " " << aStudent.gpa << '\n';
    
    destroyStudent(aStudent);
    return 0;
}

Student * createStudent(const char name[], float gpa)
{       
    Student *aStudent;
    aStudent = new Student;   
    aStudent->name= new char[strlen(name) + 1];
    strcpy(aStudent->name, name);
    
    aStudent->gpa = gpa;
    
    cout << aStudent->name << " " << aStudent->gpa << '\n';
    return aStudent;
}

bool destroyStudent(Student * &aStudent)
{
    if(aStudent->name != NULL)
    {   
        delete [] aStudent->name;
        delete aStudent;
    }
    return false;
}

Student ** createStudentList(char ** names, int size)
{
    Student aStudent = new Student;
    for (int i = 0; i < size; i++;)
    {
        
    }
}


