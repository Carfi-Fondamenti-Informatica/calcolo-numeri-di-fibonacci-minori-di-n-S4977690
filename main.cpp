#include <iostream>
using namespace std;

int main() {
    int i=1, n=0, p=i, s=0, r=0;
    cin >> n;
    for (int i = 1; i <n+2 ; i++) {
        r = p + s;
        p = s;
        s = r;
        if (r<=n) {
        cout << r << endl;
        }
    }
    return 0;
}
