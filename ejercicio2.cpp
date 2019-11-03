#include<iostream>
#include<sstream>
#include<map>
using namespace std;

void newspaper();
int main(){
    newspaper();

    return 0;
}

void newspaper(){
    int t, k, number,lines,count = 0,count1=0, count2=0;
    cin >> t;
    string line;
    char c;
    float total = 0.0;
    while (count!=t){
        cin >> k;
        map<char,int> m;
        m.clear();
        for (int i = 0; i < k; ++i) {
            cin>>c>>number;
            m.insert(pair<char, int>(c,number));
        }
        /*for(auto &item:m)
            cout << item.first<<" "<<item.second<<endl;
        */
        cin>>lines;

        while (count1!=lines+1){
            count2= 0;
            getline(cin, line);
            for ( auto & c :line){
                auto pos = m.find(c);
                total +=  pos->second;
            }
            count1++;
        }

        count++;
    }
    cout<<endl<<total/100<<"$";

}