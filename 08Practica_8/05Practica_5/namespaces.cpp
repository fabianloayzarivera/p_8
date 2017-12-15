#include "stdafx.h"
#include "namespaces.h"


FILE* FileTools::open(char *filename, char* openMode) {
	FILE *ptr;
	if (!fopen_s(&ptr, filename, openMode))
		return ptr;
	else
		return nullptr;	
}

void FileTools::close(FILE *ptr) {
	fclose(ptr);
}

int FileTools::write(FILE* ptr, char *buffer, int cant) {
	
	int charWritten = fwrite(buffer, cant, 1, ptr) * cant;
	return charWritten;
}

int FileTools::read(FILE* ptr, char bufferRead[], int cant) {

	int charRead = fread(bufferRead, cant, 1, ptr) * cant;
	return charRead;
}

int Functions::countWords(char *cad, const char* filename) {
	int count = 0;
	ifstream file(filename);
	char str[255];

	while (file.getline(str, 255))
	{
		if (!strcmp(str, cad))
			count++;
	}

	return count;
}

int Functions::sumNumbers(const char* filename) {
	ifstream file(filename);
	char str[255];
	int sum = 0;
	while (file.getline(str, 255))
	{
		stringstream ss(str);
		int i;
		while (ss >> i) {
			sum += i;
			if (ss.peek() == ',')
				ss.ignore();
		}
	}
	return sum;
}