#include "FileM.h"

void FileM::fileEdit(std::string filename,std::string data)
{
	int size1 = filename.length() + 1;
	int size2 = data.length() + 1;
	char* names = new char[size1];
	strcpy(names, filename.c_str());

	FILE* file = fopen(names, "w");
	char* datas = new char[size2];
	strcpy(datas,data.c_str());

	fputs(datas, file);

	fclose(file);
	delete[]names;
}

void FileM::fileCreator(std::string filename)
{
	int size = filename.length() + 1;
	char* names = new char[size];
	strcpy(names, filename.c_str());
	FILE* newfile = fopen(names, "w");
	fclose(newfile);
	delete[]names;
	
}
//Складываем два файла с парамметром (удалить исходные или нет)!
void FileM::fileSumm(std::string filename1, std::string filename2, int param = 0)
{
	int size1, size2, size3;
	std::string sumname = filename1 + "_" + filename2;
	size1 = filename1.length() + 1;
	size2 = filename2.length() + 1;
	size3 = size1 + size2;
	char* names1 = new char[size1];
	char* names2 = new char[size2];
	char* names3 = new char[size3];
	strcpy(names1, filename1.c_str());
	strcpy(names2, filename2.c_str());
	strcpy(names3, sumname.c_str());
	FILE* file1 = fopen(names1, "r");
	FILE* file2 = fopen(names2, "r");
	FILE* file3 = fopen(names3, "a");
	char * value_f1 = new char[200];
	fgets(value_f1,200, file1);
	fputs(value_f1, file3);
	char * value_f2 = new char[200];
	fgets(value_f2,200, file2);
	fputs(value_f2, file3);
	fclose(file1);
	fclose(file2);
	fclose(file3);
	if (param == 0) {
		remove(names1);
		remove(names2);
	}
	delete[]names1,names2, value_f1, value_f2;
	
}
