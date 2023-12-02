//
// Created by messi on 1/12/23.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<string>arr;
    string curr;
    int emp = 0;
    long long result = 0;
    while(getline(cin, curr)) {
        if(curr.empty())
            emp++;
        if(emp == 1)
            break;
        arr.push_back(curr);
        int n = curr.size();
        string ans;
        for(int i = 0; i < n; i++) {
            int res = curr[i] - 48;
            if(res >= 0 && res < 27) {
                ans.push_back(curr[i]);
                break;
            }
        }
        for(int i = n-1; i >= 0; i--) {
            int res = curr[i] - 48;
            if(res >= 0 && res < 27) {
                ans.push_back(curr[i]);
                break;
            }
        }
        int m = stoi(ans);
        result += m;
        curr.clear();
    }
    cout << result << endl;
    return 0;
}