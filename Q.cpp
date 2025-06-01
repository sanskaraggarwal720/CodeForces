#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    vector<string> ans(n);
    
    for (int i = 0; i < n; i++) {
        char start;
        char end;
        int len = arr[i].length();
        start = arr[i][0];
        end = arr[i][len - 1];
        
        if (len < 10) {
            ans[i] = arr[i];
        } else {
            string word = "";
            word += start;
            word += to_string(len - 2);  // Append the number of middle characters
            word += end;
            ans[i] = word;
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << ans[i] << endl;
    }
    
    return 0;
}
