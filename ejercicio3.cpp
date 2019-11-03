#include <iostream>
#include <fstream>
#include <fstream>
#include <list>
#include <iterator>
using namespace std;

#define integer signed long long int

int main() {
    integer n;
    int n1;
    string s;

    list<string>l;
    list<signed long long int>l1;

    ifstream file;
    file.open("ejercicio3.txt");
    /* read file like
     123456789
    -123456789
    1
    16777216
    20034556
    */
     while(getline(file,s))
        l1.push_back(stoi(s));

    //copy(l1.begin(), l1.end(), ostream_iterator<signed long long int>(cout, "\n"));

    for (auto &item : l1){
        integer b0 = item & 255;
        integer b1 = (item >> 8) & 255;
        integer b2 = (item >> 16) & 255;
        integer b3 = (item >> 24) & 255;
        integer m = (b0 << 24) + (b1 << 16) + (b2 << 8) + b3;
        int left = (b0 >> 7) << 30;
        for (int i = 31; i <= sizeof(integer) * 8 - 1; i++) {
            left = left << 1;
            m = m | left;
        }

        cout << n << " converts to " << m << endl;

    }

    return 0;
}