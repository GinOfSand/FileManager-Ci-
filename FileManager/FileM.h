#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <iostream>
#include <stdio.h>
#include<string>
class FileM
{
private:
public:
	FileM(std::string name){
		int size = name.length() + 1;
		char * names = new char[size];
		strcpy(names, name.c_str());
		FILE* newfile = fopen(names, "w");
		fclose(newfile);
		delete[]names;
	}
	FileM(): FileM("Default"){}

	void fileEdit(std::string filename,std::string data);
	void fileCreator(std::string filename);
	void fileSumm(std::string filename1, std::string filename2, int param);

	
};

