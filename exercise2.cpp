#include <vector>
#include <iostream>

using namespace std;


class Solution {
public:

    int maxValue(vector<int>& candies){
        int maxCandie = 0;
        for(int i = 0; i < candies.size(); i++){
            if(candies[i] > maxCandie){
                maxCandie = candies[i];
            }
        }
        return maxCandie;
        
    }

    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>* result = new vector<bool>();
        int candiesMax = maxValue(candies);

        for(int i = 0; i < candies.size(); i++){
            (candies)[i] += extraCandies;
        }
        for(int j = 0; j < candies.size(); j++){
            cout << candies[j] << " ";
            if((candies)[j] >= candiesMax){
                result->push_back(true);
            }
            if((candies)[j] < candiesMax){
                result->push_back(false);
            }
        }
        cout << endl;
        return *result;
        
    }

    int teste(){
        vector<int> candies = {2,3,5,1,3};
        int extraCandies = 3;
    

        vector<bool> resultado = kidsWithCandies(candies,extraCandies);

        for(unsigned int i = 0; i < candies.size();i++){
           cout << (resultado)[i];
        }

    }

};

int main(){

    Solution* sln = new Solution();

    sln->teste();



}