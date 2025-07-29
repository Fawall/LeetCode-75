#include <iostream>

using namespace std;

class Solution {
public:

    bool is_vowel(char c){
        string vowels = "AaEeIiOoUu";

        for(char v: vowels){
            if(c == v){
                return true;
            }
        }
        return false;

    }

    string reverseVowels(string s) {
        string vowels = "AaEeIiOoUu";

        int tamanhoString = s.size();

        char inicio,fim,temp;

        int j = tamanhoString -1;
        int i = 0;

        while(i < j){
            while(i < j && !is_vowel(s[i]) ){
                i++;
            }
            while(i < j && !is_vowel(s[j])){
                j--;
            }
            if(i < j){
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                i++;
                j--;

            }
        }

        return s;
    }

    void teste(){
        cout << reverseVowels("IceCreAm");
    }


};

int main(){

    Solution *sln = new Solution();

    sln->teste();


}