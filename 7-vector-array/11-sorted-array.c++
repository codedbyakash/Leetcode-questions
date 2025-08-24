#include <iostream>
#include <vector>
using namespace std;

void sortedArray(vector<int>& v) {
    bool flag = false;

    for (int i = 0; i < v.size() - 1; i++) {
        if (v[i + 1] < v[i]) {
            flag = true;
            break; // no need to check further
        }
    }

    if (flag)
        cout << "Vector array is not sorted." << endl;
    else
        cout << "Vector array is sorted." << endl;
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> v;
    cout << "Enter vector elements: " << endl;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sortedArray(v);

    return 0;
}
