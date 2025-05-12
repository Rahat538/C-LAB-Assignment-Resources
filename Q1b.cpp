#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    // Writing to the File
    string name = "John Doe", job = "Engineer";
    int age=30;
    ofstream out ("data.txt");
    out<<"Name: "<<name<<endl<<"Age: "<<age<<endl<<"Occupation: "<<job<<endl;
    out.close();
    return 0;
}

