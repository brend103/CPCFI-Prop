#include <iostream>
#include <string>
using namespace std;


int main()
{

    string word;
    getline(cin,word);

    word[0] = toupper(word[0]);
    cout << word<< endl;

    return 0;
}
