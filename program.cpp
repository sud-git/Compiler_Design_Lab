#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    int n;
    cout << "Enter number of lines of source code: ";
    cin >> n;
    cin.ignore();   

    string code = "", line;

    cout << "Enter source code:\n";
    for (int i = 0; i < n; i++) {
        getline(cin, line);
        code += line + "\n";
    }

    int len = code.length();
    for (int i = 0; i < len; i++) {

        if (i + 2 < len && code[i]=='/' && code[i+1]=='/' && code[i+2]=='/') {
            cout << "\n[Document] ";
            while (i < len && code[i] != '\n') {
                cout << code[i];
                i++;
            }
        }
        else if (i + 1 < len && code[i]=='/' && code[i+1]=='/' &&
                 !(i + 2 < len && code[i+2]=='/')) {

            cout << "\n[Single Line] ";
            while (i < len && code[i] != '\n') {
                cout << code[i];
                i++;
            }
        }
        else if (i + 1 < len && code[i]=='/' && code[i+1]=='*') {

            if (i + 2 < len && code[i+2]=='*')
                cout << "\n[Document Block] ";
            else
                cout << "\n[Multi Line] ";
            cout << "/*";
            i += 2;
            while (i + 1 < len && !(code[i]=='*' && code[i+1]=='/')) {
                cout << code[i];
                i++;
            }
            if (i + 1 < len) {
                cout << "*/";
                i++;
            }
        }
    }
    return 0;
}

