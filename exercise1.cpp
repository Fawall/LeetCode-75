#include <string>
#include <iostream>

using namespace std;

class Exercise1
{

public:

    int MDC(int tamanho_str1, int tamanho_str2){

        if(tamanho_str1%tamanho_str2 == 0){
            return tamanho_str2;
        }
        return MDC(tamanho_str2, tamanho_str1%tamanho_str2);

    }

    string gcdOfStrings(string str1, string str2)
    {
        string new_string = "";

        int mdc = MDC(str1.length(), str2.length());
        int diferente = 0;

        if(str1+str2 != str2+str1){
            return new_string;
        }

        for(int i = 0; i < mdc; i++){
            new_string += str1[i];
        }
        return new_string;
    }
};

void teste()
{
    Exercise1 *gcd = new Exercise1();

    string str1 = "ABCDEF";
    string str2 = "ABC";

    string divisor;

    divisor = gcd->gcdOfStrings(str1, str2);

    cout << divisor;
}

int main()
{

    teste();
}