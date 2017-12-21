// 05Practica_5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "namespaces.h"


using namespace std;
int main()
{
	//for write
	TypeFile* ptrToFile1 = nullptr;

	ptrToFile1 = FileTools::open(ptrToFile1, "notebook.txt", "at+");

	char *buffer = "Hello World!";

	cout << "Number of characters written: " << FileTools::write(ptrToFile1, buffer, 5) << endl;
	FileTools::close(ptrToFile1);

	//for read
	TypeFile* ptrToFile2 = nullptr;
	char bufferRead[100] = "";
	ptrToFile2 = FileTools::open(ptrToFile2, "notebook.txt", "at+");
	cout << "Number of characters read: " << FileTools::read(ptrToFile2, bufferRead, 4) << " buffer: " << bufferRead << endl;
	FileTools::close(ptrToFile2);

	char *cad = "yes";
	int count = Functions::countWords(cad, "journal.txt");
	cout << "Word: " << cad << " Count: " << count << endl;
	int sum = Functions::sumNumbers("accounts.txt");
	cout << "Numbers sum: " << sum << endl;

	getchar();
    return 0;
}

