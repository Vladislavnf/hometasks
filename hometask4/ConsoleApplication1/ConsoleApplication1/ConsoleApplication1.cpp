#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

bool hasSpace(const string& s) {
    return s.find(' ') != string::npos;
}

int main() {
    ifstream input("input.txt");
    ofstream output("output4.txt");

    if (!input.is_open() || !output.is_open()) {
        cerr << "Помилка відкриття файлу!" << endl;
        return 1;
    }

    vector<string> lines;
    string line;
    int lastNoSpaceIndex = -1;

    while (getline(input, line)) {
        lines.push_back(line);
        if (!hasSpace(line)) {
            lastNoSpaceIndex = lines.size() - 1;
        }
    }

    for (int i = 0; i < lines.size(); i++) {
        output << lines[i] << endl;
        if (i == lastNoSpaceIndex) {
            output << "------------" << endl;
        }
    }

    if (lastNoSpaceIndex == -1) {
        output << "------------" << endl;
    }

    input.close();
    output.close();
    cout << "Готово! Результат у output4.txt" << endl;
    return 0;
}