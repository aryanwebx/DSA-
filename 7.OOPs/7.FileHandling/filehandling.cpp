#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ofstream fout;
    fout.open("file.txt");
    fout << "hello Webx developer";
    fout.close();

    fstream fin;
    fin.open("file.txt");
    char c;

    c=fin.get();
    while(!fin.eof()){
       cout<<c;

            c=fin.get();

    }
}