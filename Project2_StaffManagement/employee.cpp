#include "employee.h"

Employee::Employee(int id, string name, int dId){

    this->m_Id = id;
    this->m_Name = name;
    this->m_DeptId = dId;
}

void Employee::showInfo(){
    cout << "Staff ID: " << this->m_Id
    << "\tStaff name: " << this->m_Name
    << "\tPosition: " << this->getDeptName()
    << "\tJob: Finish what the boss said" << endl;
}

string Employee::getDeptName(){
    return string("employee");
}