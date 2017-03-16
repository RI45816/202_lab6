/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*****************************************
 ** File:    Student.h
 ** Project: CMSC 202 lab6, Spring 2017
 ** Author:  Uzoma Uwanamodo
 ** Date:    03/15/2017
 ** Section: 05
 ** E-mail:  uu3@umbc.edu
 ** 
 ** This file contains the header for the Student class.
 ** 
 ** 
 ** 
 ** 
 *********************************************/

#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    Student();
    Student(int,double);
    void Display();
    ~Student();

private:
    int m_num;
    float *m_ptr;
    double m_grade;
};

#endif /* STUDENT_H */

