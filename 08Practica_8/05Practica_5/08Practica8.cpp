// 05Practica_5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "namespaces.h"


using namespace std;
int main()
{
	FILE* ptrToFile;
	char *buffer = "Hello World!";
	char bufferRead[100] = "";
	ptrToFile = FileTools::open("myFile.txt", "at+");

	cout << ptrToFile <<endl;
	cout << "Number of characters written: " << FileTools::write(ptrToFile, buffer, 5) << endl;
	FileTools::close(ptrToFile);


	FileTools::open("myFile.txt", "at+");
	cout << "Number of characters read: " << FileTools::read(ptrToFile, bufferRead, 4) << " buffer: " << bufferRead << endl;
	FileTools::close(ptrToFile);

	char *cad = "yes";
	int count = Functions::countWords(cad, "Read.txt");
	cout << "Word: " << cad << " Count: " << count << endl;
	int sum = Functions::sumNumbers("ReadNumbers.txt");
	cout << "Numbers sum: " << sum << endl;

	getchar();
    return 0;
}

