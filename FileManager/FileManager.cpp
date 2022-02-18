#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
#include "FileM.h"
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    string data, data2;
    for (int i = 0; i < 10; i++) {
        data += "Силянин_Роман ";
        if (i == 9)
            data += "\n";
    }
    for (int i = 0; i < 10; i++) {
        data2 += "Андреевич ";
        if (i == 9)
            data2 += "\n";
    }
    FileM a("File1.txt");
    a.fileCreator("File2.txt");
    a.fileEdit("File1.txt", data);
    a.fileEdit("File2.txt", data2);
    cout << "Введите параметр для создания файла из 2х\n Для сохранения обоих файлов :1\n для удаления исходных :0\n";
    int selecter;
    do {
        cin >> selecter;
        if (selecter != 0 && selecter != 1) {
            cout << "Неверный выбор попробуйте еще!\n";
            cin.clear();
        }
    } while (selecter != 0 && selecter != 1);
    a.fileSumm("File1.txt", "File2.txt",selecter);
}
