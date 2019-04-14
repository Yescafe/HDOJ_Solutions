#include <iostream>
#include <cstdint>

const int64_t fact[] = {
    1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800, 39916800,
    479001600, 6227020800, 87178291200, 1307674368000, 20922789888000,
    355687428096000, 6402373705728000, 121645100408832000, 2432902008176640000};

#define facts(X) fact[(X)]

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);

    int t;
    while (cin >> t) {
        while (t--) {
            char cmd;
            int n, m;
            cin >> cmd >> n >> m;
            switch (cmd) {
                case 'A':
                cout << facts(n) / facts(n - m) << '\n';
                break;
                case 'C':
                cout << facts(n) / facts(m) / facts(n - m) << '\n';
                break;
                default:
                break;
            }
        }
    }

    return 0;
}
