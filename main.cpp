#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main() {
    int numColumns;
    cin >> numColumns;

    vector<int> boxColumns(numColumns);
    for (int& height : boxColumns) {
        cin >> height;
    }

    sort(boxColumns.begin(), boxColumns.end());

    copy(boxColumns.begin(), boxColumns.end() - 1, ostream_iterator<int>(cout, " "));
    cout << boxColumns.back();

    return 0;
}
