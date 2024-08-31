#include <iostream>
#include <vector>
using namespace std;

vector<int> seo(int n){
    vector<bool> eliminated(n+1,false);
    vector<int> prime;
    for (int i = 2; i <= n; i++){
        if (eliminated[i] == false){
            prime.push_back(i);
            int j = i*i;
            while (j <= n){
                eliminated[j] = true;
                j += i;
            }
        }
    }

    return prime;
}
