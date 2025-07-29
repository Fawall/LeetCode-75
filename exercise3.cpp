#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        int vectorSize = flowerbed.size();
        
        int verifyRight;
        int verifyLeft;

        for (unsigned int i = 0; i < vectorSize; i++)
        {
            if (flowerbed[i] == 0)
            {
                verifyLeft = -1;
                verifyRight = -1;

                if (i == 0 || flowerbed[i - 1] == 0)
                {
                    verifyLeft = 0;
                }
                if (i == vectorSize - 1 || flowerbed[i + 1] == 0)
                {
                    verifyRight = 0;
                }
                if (verifyLeft == 0 && verifyRight == 0)
                {
                    flowerbed[i] = 1;
                    n--;
                }
            }
        }

        if(n <= 0){
            return true;
        }
        return false;
    }

    void teste()
    {

        vector<int> flowerBed = {1, 0, 0, 0, 1};

        bool result = canPlaceFlowers(flowerBed, 2);

        cout << result;
    }
};

int main()
{
    Solution *sln = new Solution();

    sln->teste();
}