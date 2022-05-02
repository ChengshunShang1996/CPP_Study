#pragma once
#include<iostream>
#include<string>

using namespace std;

class Worker{

public:

    //show message
    virtual void showInfo() = 0;
    //get position name
    virtual string getDeptName() = 0;

    int m_Id; // ID
    string m_Name; // Name
    int m_DeptId; // Dept ID

};