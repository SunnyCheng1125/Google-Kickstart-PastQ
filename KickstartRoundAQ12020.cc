#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main() {
    int testCases, houseNum, budget, tmp;
    vector<int> price, efHouse;
    cin >> testCases;
    int times = 0;
    while (testCases--) {
        cin >> houseNum >> budget;
        for (int i = 0; i < houseNum; ++i) {
            cin >> tmp;
            price.push_back(tmp);
        }
        sort(price.begin(), price.end());
        for (int j = 0; j < price.size(); j++) {
            if (price[j] <= budget) {
                if (((accumulate(efHouse.begin(), efHouse.end(), 0)) + price[j]) <= budget) {
                    efHouse.push_back(price[j]);
                }
            }
        }
        times += 1;
        cout << "Case #" << times << ": ";
        cout << efHouse.size() << '\n';
        efHouse.clear();
        price.clear();

//        testCases--;
    }
    return 0;
}
