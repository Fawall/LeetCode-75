#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:

    string reverseWords(string s) {
        
        int qntWords = 0;
        int stringhLength = s.length();
        
        vector<string> words;
        string word = "";
        string newString;

        for(char character: s){

            if(!isspace(character)){
                
                word += character;
                
            }
            else{
                if(!word.empty()){
                    words.push_back(word);
                    word = "";
                }
               
            }
        }
        if(!word.empty()){
            words.push_back(word);

        }

        for(int i = words.size() -1; i > 0; i--){
            newString += words.at(i) + " ";
        }
        newString += words.at(0);

        cout << newString;
        return newString;
    }

    void test(){
        reverseWords("the sky is blue");
    }

};

int main(){
    Solution *sln = new Solution();
    sln->test();


}