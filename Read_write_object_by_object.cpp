#include<iostream>
#include<string>
#include<fstream>	

void ReadTextFromFile();
void WritetextInFile();
using namespace std;

class Employee
{
public:
	int emp_id;
	string name;
	double sal;

	void Display()
	{
		cout << "\nEmp_id : " << emp_id;
		cout << "\nEmp_name : " <<name;
		cout << "\nEmp_sal : " << sal;
	}

};

int main()
{
	char ch = 'y';
	int choice = 0;
	do
	{
		cout << "\n1. Read From File";
		cout << "\n2. Write In File";
		cout << "\nEnter your choice :";
		cin >> choice;

		switch (choice)
		{
		case 1:ReadTextFromFile();
			break;
		case 2:WritetextInFile();
			break;
		default:cout << "\nInvalid choice";
			break;
		}
		cout << "\nContinuen y/n";
		cin >> ch;
	} while (ch == 'Y' || ch == 'y');
	return 0;
}

void ReadTextFromFile()
{
	string str;
	double cost;
	Employee *emp = new Employee();
	ifstream fin("Inventory.dat");
	if (!fin)
	{
		cout << "\nUnsable to open file";
		return;

	}
	else
	{
		fin.read((char*)emp, sizeof(Employee));
		emp->Display();
	}
	fin.close();
}
void WritetextInFile()
{
	Employee emp1;
	emp1.emp_id = 101;
	emp1.name = "AaA";
	emp1.sal = 123.33;
	ofstream fout("Inventory.dat");
	if (!fout.is_open())
	{
		cout << "\nUnable to Open File" << endl;
		return;
	}
	else
	{
		fout.write((char*)&emp1, sizeof(Employee));

	}
	fout.close();
}