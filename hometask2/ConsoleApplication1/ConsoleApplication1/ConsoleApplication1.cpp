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

    string line;
    while (getline(input, line)) { 
        output << line << endl;
    }

    input.close();
    output.close();
    cout << "Готово! Результат у output2.txt" << endl;
    return 0;
}