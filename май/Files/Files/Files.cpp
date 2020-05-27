#include "Files.h"
#include <fstream>
#include <cassert>
#include <iostream>

using namespace std;

void worksWithFile()
{
    ofstream writer;
    writer.open("file.txt");

    assert(writer.is_open());

    writer << "Записать несколько строк в файл. Прочитать первую строку и вывести ее на консоль.";
    writer.close();

    char buff[100];
    ifstream reader;
    reader.open("file.txt");
    assert(reader.is_open());

    reader >> buff;
    cout << buff << endl;
    reader.getline(buff, 100);
    cout << buff << endl;
    reader.close();
}