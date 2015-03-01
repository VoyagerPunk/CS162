/*
 *
 * ===================================================================================
 * 
 *       Filename:  lab5.cpp
 *
 *    Description:  a set of algorithms for list manipulation
 *
 *        Version:  1.0
 *        Created:  02/20/2015 11:44:59 PM
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Jonathon Sonesen, 
 *   Organization:  PPC CS162
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
    Student ** list;
    //Student * aStudent = createStudent("jon",gpa);
    char ** names;
    names = new char*[6]; 
    
    names[size] = new char[strlen("jon") + 1];
    strcpy(names[size], "jon");
    size++;
    
    names[size] = new char[strlen("anne") + 1];
    strcpy(names[size], "anne");
    size++;
    
    names[size] = new char[strlen("beth") + 1];
    strcpy(names[size], "beth");
    size++;
    
    names[size] = new char[strlen("gabi") + 1];
    strcpy(names[size], "gabi");
    size++;
    
    names[size] = new char[strlen("lee") + 1];
    strcpy(names[size], "lee");
    size++;
    
    for (int i = 0; i < size; i++)
    {
        cout << names[i] << "\n";
    }

    list = createStudentList(names, size);
    for (int i = 0; i < size; i++)
    delete names[i];

    delete names;
    destroyStudentList(list, size);
    
    //destroyStudent(aStudent);
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
    Student ** list;
    list = new Student*[size*2];

    for (int i = 0; i < size; i++)
    {  
        list[i] = createStudent(names[i], 0);
    }
    return list;
}

bool destroyStudentList(Student ** studentList, int size)
{
    for (int i = 0; i < size; i++)
    {
        if(studentList[i] == NULL)
        {
            return false;
        }
        else
        {
            delete  [] studentList[i]->name;
            studentList[i]->gpa = 0;
            delete studentList[i];
        }
    }
    delete  studentList;
    return true;
}
