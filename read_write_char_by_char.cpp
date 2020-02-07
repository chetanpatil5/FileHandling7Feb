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
//	char ch = 'y';
//	int choice = 0;
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
//	double cost;
//	ifstream fin("Inventory.dat");
//	if (!fin)
//	{
//		cout << "\nUnsable to open file";
//		return;
//		
//	}
//	else
//	{
//		while (fin >> str >> cost)//!fin.eof()
//		{
//			//fin >> str >> cost;
//			cout << str << " : " << cost<<endl;
//		}
//		
//	}
//	fin.close();
//}
//void WritetextInFile()
//{
//	ofstream fout("Inventory.dat");
//	if (!fout.is_open())
//	{
//		cout << "\nUnable to Open File" << endl;
//		return;
//	}
//	else
//	{
//		fout << "Radios " << 39.95 << endl;
//		fout << "Toasters " << 19.95 << endl;
//		fout << "Mixers " << 29.95 << endl;
//		
//
//	}
//	fout.close();
//}