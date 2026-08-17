#include <iostream>
using namespace std;

int main() {
    int h1, m1, s1;
    int h2, m2, s2;

    cout << "Enter first time (hrs:min:sec): ";
    scanf("%d:%d:%d", &h1, &m1, &s1);

    cout << "Enter second time (hrs:min:sec): ";
    scanf("%d:%d:%d", &h2, &m2, &s2);

    int s = s1 + s2;
    int m = m1 + m2 + s / 60;
    int h = h1 + h2 + m / 60;

    s = s % 60;
    m = m % 60;

    cout << "Sum = " << h << ":" << m << ":" << s;

    return 0;
}
