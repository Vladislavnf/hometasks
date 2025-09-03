#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream input("input.txt");   
    ofstream output("output2.txt"); 

    if (!input.is_open() || !output.is_open()) {
        cerr << "Помилка відкриття файлу!" << endl;
        return 1;
    }

    string word;
    while (input >> word) { 
        if (word.length() >= 7) {
            output << word << " "; 
        }
    }

    input.close();
    output.close();
    cout << "Готово! Результат у output1.txt" << endl;
    return 0;
}