#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ifstream input("input.txt");
    ofstream output("output3.txt");

    if (!input.is_open() || !output.is_open()) {
        cerr << "Помилка відкриття файлу!" << endl;
        return 1;
    }

    vector<string> lines;
    string line;
    while (getline(input, line)) {
        lines.push_back(line); 
    }

    for (int i = lines.size() - 1; i >= 0; i--) {
        output << lines[i] << endl;
    }

    input.close();
    output.close();
    cout << "Готово! Результат у output3.txt" << endl;
    return 0;
}