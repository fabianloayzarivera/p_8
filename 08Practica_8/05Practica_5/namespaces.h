#pragma once

#include <stdio.h>
#include <string.h>
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

namespace FileTools {
	FILE* open(char *filename, char* openMode);
	void  close(FILE *ptr);
	int   write(FILE* ptr, char *buffer, int cant);
	int   read(FILE* ptr, char bufferRead[], int cant);
}

namespace Functions {
	int countWords(char *cad, const char* filename);
	int sumNumbers(const char* filename);

}