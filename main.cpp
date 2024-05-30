#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int numColumns;
    cin >> numColumns;

    vector boxColumns (numColumns, 0);
    for (int i = 0; i < numColumns; ++i) {
        cin >> boxColumns[i];
    }

    sort(boxColumns.begin(), boxColumns.end());

    for (int i = 0; i < numColumns; ++i) {
        i > 0 ? cout << " " : cout << "";
        cout << boxColumns[i];
    }

    return 0;
}
