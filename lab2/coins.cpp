#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <string>
#include <unordered_set>

using namespace std;

vector<int> coins;
unordered_set<int> coins_r;

void withdraw(int x) {
    if (x == 0) return;
    for (int i = 0; i < coins.size(); i++)
    {
        int a = coins[i];
        if (a <= x)
        {
            x -= a;
            coins_r.insert(a);
            break;
        }
    }
    withdraw(x);
}

int main()
{
    int a;
    cin >> a;
    coins.resize(a);

    string s;
    cin >> s;

    int cantidad = 100;

    for (int i = 0; i < a; i++)cin >> coins[i];
    sort(coins.begin(), coins.end(), greater<int>());

    withdraw(127);

    cout << coins_r.size();

}
