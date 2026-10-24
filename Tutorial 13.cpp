#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream createSource("source.txt");
    if (createSource) {
        createSource << "Hello, this is test content inside the source file!\n";
        createSource.close();
    }

    char source[50], destination[50];
    cout << "Enter source file name: ";
    cin >> source;
    cout << "Enter destination file name: ";
    cin >> destination;

    ifstream fin(source);
    if (!fin) {
        cout << "Source file not found.";
        return 1;
    }

    ofstream fout(destination);
    if (!fout) {
        cout << "Error opening destination file.";
        return 1;
    }

    fout << fin.rdbuf();

    fin.close();
    fout.close();

    cout << "File copied successfully." << endl;
    return 0;
}