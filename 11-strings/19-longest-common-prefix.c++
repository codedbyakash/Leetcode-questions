#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string longestStringPrefix(vector<string>& str) {
    int n = str.size();
    if (n == 0) return "";
    if (n == 1) return str[0];

    sort(str.begin(), str.end()); // First sort

    string first = str[0];
    string last = str[n - 1];
    string s = "";

    for (int i = 0; i < min(first.size(), last.size()); i++) {
        if (first[i] == last[i]) {
            s += first[i];
        } else {
            break;
        }
    }

    return s;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<string> str;

    cout << "Enter vector strings:\n";
    for (int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        str.push_back(temp);
    }

    string result = longestStringPrefix(str);
    cout << "Longest common prefix: " << result << endl;

    return 0;
}
