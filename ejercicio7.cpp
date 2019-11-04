#include <iostream>
#include <algorithm>
#include <vector>
#include <array>
using namespace std;

int main()
{
    int t,n;
    vector<int>v;
    cin>>t;

    while (t--){
        v.clear();

        cin>>n;
        int swaps=0;

        for (int i = 0; i < n; ++i) {
            int j;
            cin>>j;
            v.push_back(j);
        }

        for(int k=0;k<n;k++)
        {
            for(int j=0;j<n-1;j++)
            {
                if(v[j+1]<v[j])
                {
                    swap(v[j],v[j+1]);
                    swaps++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",swaps);
    }


    return 0;
}