#include <string>

#define MAX 1000

struct Person
{
    std::string m_Name;
    int m_Sex;
    int m_Age;
    std::string m_Phone;
    std::string m_Addr;
};

struct Addressbooks
{
    struct Person *personArray[MAX];
    int m_Size;
};

void showMenu();

void addPerson(Addressbooks *abs);
