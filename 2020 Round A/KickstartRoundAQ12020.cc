#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main() {
    int testCases, houseNum, budget, tmp;
    
    //price for the input house price, EFhouse for affordable house price
    vector<int> price, efHouse;
    cin >> testCases;
    int times = 0;
    
    //decrease the testCases number by 1
    while (testCases--) {
        cin >> houseNum >> budget;
        
        //get the input prices of all houses prices
        for (int i = 0; i < houseNum; ++i) {
            cin >> tmp;
            price.push_back(tmp);
        }
        
        //sort the vector price, make the prices from low to high
        sort(price.begin(), price.end());
        
        //get the sum from the vector price
        for (int j = 0; j < price.size(); j++) {
            
            //check if the price[j] equal or less than to the budget
            if (price[j] <= budget) {
                
                //check if the current sum in the vector efhouse, and add the current price[j] will equal or less than the budget,
                //if it's, add price[j] in the efhouse, else continue
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
    }
    return 0;
}
