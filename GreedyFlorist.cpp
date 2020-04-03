/*A group of friends want to buy a bouquet of flowers. The florist wants to maximize his number of new customers and the money he makes. To do this, he decides he'll multiply the price of each flower by the number of that customer's previously purchased flowers plus . The first flower will be original price, , the next will be  and so on.

Given the size of the group of friends, the number of flowers they want to purchase and the original prices of the flowers, determine the minimum cost to purchase all of the flowers.

For example, if there are  friends that want to buy  flowers that cost  each will buy one of the flowers priced  at the original price. Having each purchased  flower, the first flower in the list, , will now cost . The total cost will be .

Function Description

Complete the getMinimumCost function in the editor below. It should return the minimum cost to purchase all of the flowers.

getMinimumCost has the following parameter(s):

c: an array of integers representing the original price of each flower
k: an integer, the number of friends
*/



#include<iostream>
#include<queue>
using namespace std;

int main(void){
    int N, K, price;
    long long int totalAmount = 0;
    priority_queue<int> prices;
    cin >> N >> K;
    for(int i = 0; i < N; i++){
        cin >> price;
        prices.push(price);
    }

    int x;
    for (x = 0; x < N; ++x) {
            totalAmount += (x / K + 1) * prices.top();
            prices.pop();

    }

    cout << totalAmount << "\n";
    return 0;
}