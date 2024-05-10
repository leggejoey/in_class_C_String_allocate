#include <iostream>
#include "CString1.h"
#include <sstream>

using namespace std;

int main() {
    const int max = 100;
    CString1 words[max];
    int count = 0;
    string line;
    stringstream ss;
    char word[50];

    cout << "Enter a sentence:\n";
    getline(cin, line);
    ss.str(line);

    while (count < max && ss >> word){
        words[count++].SetString(word);
    }

    for(int i = 0; i < count; i++) {
        cout << words[i].GetString() << " ";
    }
    return 0;
}
