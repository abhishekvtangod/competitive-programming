#include <bits/stdc++.h>

using namespace std;

// Complete the gemstones function below.
int gemstones(vector<string> arr) {
    map<char,int> mp;
    for(int i = 0; i < arr.size(); i++)
    {   string str = arr[i];
        set<char> s(str.begin(),str.end());


        for(auto it = s.begin();it != s.end();it++)
        {
            mp[*it]++;
        }
    }
    int count=0;
    for(auto it= mp.begin();it!=mp.end();it++)
    {
        if(it->second >= arr.size())
            count++;
    }
    return count;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> arr(n);

    for (int i = 0; i < n; i++) {
        string arr_item;
        getline(cin, arr_item);

        arr[i] = arr_item;
    }

    int result = gemstones(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
