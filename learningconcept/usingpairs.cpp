// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter number of pairs: ";
//     cin >> n;

//     vector<pair<int, int>> pairs;
//     int a, b;

//     cout << "Enter " << n << " pairs:" << endl;
//     for (int i = 0; i < n; i++) {
//         cin >> a >> b;
//         pairs.push_back({a, b});
//     }

//     cout << "You entered:" << endl;
//     for (auto p : pairs) {
//         cout << "(" << p.first << ", " << p.second << ")" << endl;
//     }

//     return 0;
// }


// second method
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<pair<int, int>> pairs;
    int x, y;

    cout << "Enter pairs (end with -1 -1):" << endl;

    while (cin >> x >> y) {
        if (x == -1 && y == -1) break;
        pairs.push_back({x, y});
    }

    cout << "You entered the following pairs:" << endl;
    for (auto p : pairs) {
        cout << "(" << p.first << ", " << p.second << ")" << endl;
    }

    return 0;
}