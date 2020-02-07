//#include<iostream>
//#include<string>
//#include<fstream>	
//
//void ReadTextFromFile();
//void WritetextInFile();
//using namespace std;
//
//int main()
//{
//	char ch='y';
//	int choice=0;
//	do
//	{
//		cout << "\n1. Read From File";
//		cout << "\n2. Write In File";
//		cout << "\nEnter your choice :";
//		cin >> choice;
//		
//		switch (choice)
//		{
//		case 1:ReadTextFromFile();
//			break;
//		case 2:WritetextInFile();
//			break;
//		default:cout << "\nInvalid choice";
//			break;
//
//			
//		}
//		cout << "\nContinuen y/n";
//		cin >> ch;
//	} while (ch == 'Y' || ch == 'y');
//	return 0;
//}
//
//void ReadTextFromFile()
//{
//	string str;
//
//	ifstream fin("Inventory.dat");
//	if (fin.is_open())
//	{
//		while (getline(fin, str))
//		{
//			cout << str << endl;
//		}
//	}
//	else
//	{
//		cout << "\nUnsable to open file";
//	}
//	fin.close();
//}
//void WritetextInFile()
//{
//	ofstream fout("Inventory.dat",ios::app);
//	if (fout.is_open())
//	{
//		fout << "I Like C++\n";
//		fout << "This is Line 2\n";
//		fout << "This is Line 3\n";
//	}
//	else
//	{
//		cout << "\nUnable to Open File"<<endl;
//	}
//	fout.close();
//}