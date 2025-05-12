#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream in;
    in.open("numbers.txt");
    if (!in) {
        cout << "Error opening file!" << endl;
        return 1;
    }
    int n, sum = 0;
    while (in >> n)
    {
        sum += n;
    }
    cout << "The sum is " << sum << endl;
    in.close();
    return 0;
}
