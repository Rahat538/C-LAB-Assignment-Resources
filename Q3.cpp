#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;
int main()
{
    ofstream file("log.txt",ios::app);
    time_t now = time(0);
    char* dt = ctime(&now);
    file << dt << "Program executed successfully\n";
    cout << "Logged successfully!\n";
    return 0;
}
