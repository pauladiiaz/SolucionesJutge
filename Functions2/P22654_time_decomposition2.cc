#include <iostream>
using namespace std;

void decompose(int n, int& h, int& m, int& s) {
  m = (n % 3600) / 60;
  s = n % 60;
  h = n / 3600;
}

int main()
{
    int n, h, m, s;
    while (cin >> n) {
        decompose(n, h, m, s);
        cout << h << " " << m << " " << s << endl;
    }

    return 0;
}

