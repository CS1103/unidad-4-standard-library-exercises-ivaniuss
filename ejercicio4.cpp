#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;
int main () {
        vector<string> v;
        string ss;
        while (getline(cin, ss))
            if (ss == "#")
                break;
            else{
                v.emplace_back(ss);
            }

        for(auto & item:v){

            bool val = next_permutation(item.begin(),item.end());
            if (val == false)
                cout << "No Successor"
                     << endl;
            else
                cout << item << endl;

        }

    return 0;
}