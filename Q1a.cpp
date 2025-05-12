#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    // Reading from the File
    string line;
    ifstream in("data.txt");
    while(getline(in,line))
    {
        cout<<line<<endl;
    }
    in.close();
    return 0;
}
