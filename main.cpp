//Fanis Zinnurov
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    cout << fixed << setprecision(2);
    int v, k, n, i = 0;
    double a1, b1, a2, b2, t, t0 = 0;
    cin >> v >> k >> a1 >> b1 >> a2 >> b2 >> t >> n;
    v -= a2/b2;
    k -= a1/b1;
    vector<double> times(n + 1), victims(n + 1), killers(n + 1);
    while (i <= n) {
        times[i] = t0;
        victims[i] = v * cos(t0 * sqrt(a1 * a2)) - (k * sqrt(a2) * b1 * sin(t0 * sqrt(a1 * a2)))/(b2 * sqrt(a1)) + a2/b2;
        killers[i] = (v * sqrt(a1) * b2 * sin(t0 * sqrt(a1 * a2)))/(b1 * sqrt(a2)) + k * cos(t0 * sqrt(a1 * a2)) + a1/b1;
        i++;
        t0 += t/n;
    }

    cout << "t:" << endl;
    for (auto timer: times) {
        cout << timer << " ";
    }
    cout << endl << "v:" << endl;
    for (auto victim: victims) {
        cout << victim << " ";
    }
    cout << endl << "k:" << endl;
    for (auto killer: killers) {
        cout << killer << " ";
    }

    return 0;
}