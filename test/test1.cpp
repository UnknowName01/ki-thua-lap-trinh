#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main()
{
    string s;
    fstream infile;
    fstream outfile;
    infile.open("test1.cpp");   //Day la 1 comment
    outfile.open("gg.txt");
        while(!infile.eof())
        {
            getline(infile, s);
            outfile << s << endl;
        }       
    
    infile.close();
    outfile.close();
    return 0;
}