#include <iostream>
using namespace std;

int main() {
    int a, okrenutibroj = 0, ostatak;

    cout << "Unesi neki broj: ";
    cin >> a;

    while (a != 0) {
        ostatak = a % 10;
        okrenutibroj = okrenutibroj * 10 + ostatak;
        a /= 10;
    }

    cout << "Okrenuti broj = " << okrenutibroj;

    return 0;
}