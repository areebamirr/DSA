#include <iostream>
#include <climits>
using namespace std;

// Buy and Sell Stock Problem:-
// Find the maximum profit after selling the buyed stock.

int maxPofit(int *prices, int n){
    int bestBuy[100000];

    bestBuy[0] = INT_MAX;
    
    for (int i = 1; i < n; i++){
        bestBuy[i] = min(bestBuy[i-1], prices[i-1]);
    }

    int maxProfit = 0;
    for(int i = 0; i < n; i++){
        int currPorfit = prices[i] - bestBuy[i];
        maxProfit = max(maxProfit, currPorfit);
    }
    cout << maxProfit << endl;

}

int main(){

    int prices[6] = {7,1,5,3,6,4};
    int n = sizeof(prices)/sizeof(int);

    
    maxPofit(prices,n);

    return 0;
}