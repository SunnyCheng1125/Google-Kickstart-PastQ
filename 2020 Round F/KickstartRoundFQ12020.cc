/*
 * Revise by using vector<pair<int,int>>, inspirited by https://codingcompetitions.withgoogle.com/kickstart/submissions/000000000019ff48/em9ybQ
 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int testCases, persons, money, tmp;
    vector<pair<int, int>> queue;

    cin >> testCases;
    int times = 0;
    while (testCases--) {
        cin >> persons >> money;
        for (int i = 0; i < persons; ++i) {
            cin >> tmp;
            queue.push_back(make_pair(((tmp + money - 1) / money), i + 1));
        }
        sort(queue.begin(), queue.end());

        times += 1;
        cout << "Case #" << times << ": ";
        for (auto it: queue) {
            cout << it.second << " ";
        }
        queue.clear();
        cout << endl;
    }
    return 0;
}

/*
* It's my first try, passed the small data set test, but TLE on the large data set test
*/

//#include <iostream>
//#include <vector>
//#include <numeric>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//    int testCases, persons, money, tmp;
//    vector<int> eachMoney, query;
//    cin >> testCases;
//    int times = 0;
//    while (testCases--) {
//        cin >> persons >> money;
//        for (int i = 0; i < persons; ++i) {
//            cin >> tmp;
//            eachMoney.push_back(tmp);
//        }
//        while ((accumulate(eachMoney.begin(), eachMoney.end(), 0)) != 0) {
//            for (int i = 0; i < eachMoney.size(); i++) {
//                if (eachMoney[i] <= money) {
//                    if(eachMoney[i]==0){
//                        continue;
//                    }
//                    else{
//                        query.push_back(i+1);
//                        eachMoney[i] = 0;
//                    }
//                } else {
//                    eachMoney[i] = eachMoney[i] - money;
//                }
//            }
//        }
//        times += 1;
//        cout << "Case #" << times << ": ";
//        for (auto i:query) {
//            cout << i << " ";
//        }
//        cout << endl;
//
//        eachMoney.clear();
//        query.clear();
//    }
//    return 0;
//}
