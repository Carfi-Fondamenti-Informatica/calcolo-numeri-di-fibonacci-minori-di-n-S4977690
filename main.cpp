#include <iostream>
using namespace std;

int main() {
    int i=0, n=0, p=i, s=1, r=0;
    cin >> n;
    cout << 1 << endl;
    for (int i = 2; i <=n ; i++) {
        r = p + s;
        p = s;
        s = r;
        if (r < n) {
            cout << r << endl;

        }
    }
    return 0;
}
