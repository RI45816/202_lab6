/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*****************************************
 ** File:    Student.cpp
 ** Project: CMSC 202 lab6, Spring 2017
 ** Author:  Uzoma Uwanamodo
 ** Date:    03/15/2017
 ** Section: 05
 ** E-mail:  uu3@umbc.edu
 ** 
 ** This file contains the definition for the Student class.
 ** 
 ** 
 ** 
 ** 
 *********************************************/
#include <iostream>
#include "Student.h"

using namespace std;

Student::Student() {

}

Student::Student(int index, double grade) : m_grade(grade), m_num(index) {
}

Student::~Student() {
}

void Student::Display() {
    cout << "Student" << m_num << ": " << m_grade << endl;
}
