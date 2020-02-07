//#include<iostream>
//#include<fstream>		//To perform IO operations
//
//using namespace std;
//
//int main()
//{
//	//Input file class
//	ifstream in;
//	//open("fname", ios::openmode mode = ios::in);
//	in.open("filename", ios::app | ios::ate | ios::binary | ios::in | ios::out | ios::trunc);
//
//	//output file class
//	ofstream out;
//	out.open("filename", ios::app | ios::ate | ios::binary | ios::in | ios::out | ios::trunc);
//
//	//Combination of I/O class
//	fstream io;
//	io.open("filename", ios::app | ios::ate | ios::binary | ios::in | ios::out | ios::trunc);
//
//	
//	if (!in)
//	{
//		cout << "Cannot Open File";
//	}
//	else
//	{
//		cout << "File is open";
//	}
//	return 0;
//}