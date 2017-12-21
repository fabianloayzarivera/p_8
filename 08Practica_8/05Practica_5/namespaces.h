#pragma once

#include <stdio.h>
#include <string.h>
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;
typedef FILE TypeFile;
namespace FileTools {
	
	TypeFile* open(TypeFile* ptr, char *filename, char* openMode);
	void  close(TypeFile* ptr);
	int   write(TypeFile* ptr, char *buffer, int cant);
	int   read(TypeFile* ptr, char bufferRead[], int cant);
}

namespace Functions {
	int countWords(char *cad, const char* filename);
	int sumNumbers(const char* filename);

}