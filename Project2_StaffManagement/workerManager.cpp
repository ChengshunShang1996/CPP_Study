#include "workerManager.h"

WorkerManager::WorkerManager(){}

WorkerManager::~WorkerManager(){}

void WorkerManager::Show_Menu(){
    cout << "*******************************" << endl;
    cout << "*****       Welcome!      *****" << endl;
    cout << "*****  1. Add new worker  *****" << endl;
	cout << "*****  2. Show wokers     *****" << endl;
	cout << "*****  3. Delete workers  *****" << endl;
	cout << "*****  4. Modify workers  *****" << endl;
	cout << "*****  5. Find workers    *****" << endl;
	cout << "*****  6. Order the data  *****" << endl;
    cout << "*****  6. Clear workers   *****" << endl;
	cout << "*****  0. Exit            *****" << endl;
	cout << "*******************************" << endl;
    cout << endl;
}