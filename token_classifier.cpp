#include <iostream>
#include <unordered_set>
#include <regex>
using namespace std;

int main() {

    int N;
    cin >> N;

    unordered_set<string> keywords = {
        "int","float","double","char","return","if","else","while","for",
        "break","continue","void","class","public","private","protected",
        "switch","case","default","do","struct","long","short","bool"
    };

    unordered_set<string> operators = {
        "+","-","*","/","%","=","==","!=","<",">","<=",">=",
        "&&","||","!","++","--","+=","-=","*=","/="
    };

    unordered_set<string> specialSymbols = {
        "(",")","{","}","[","]",";",",",".","#"
    };

    regex identifier("^[a-zA-Z_][a-zA-Z0-9_]*$");
    regex integerLiteral("^[0-9]+$");
    regex floatLiteral("^[0-9]*\\.[0-9]+$");

    string token;

    for(int i = 0; i < N; i++) {
        cin >> token;

        if(keywords.count(token))
            cout << token << " : Keyword" << endl;

        else if(operators.count(token))
            cout << token << " : Operator" << endl;

        else if(specialSymbols.count(token))
            cout << token << " : Special Symbol" << endl;

        else if(regex_match(token, floatLiteral))
            cout << token << " : Floating Literal" << endl;

        else if(regex_match(token, integerLiteral))
            cout << token << " : Integer Literal" << endl;

        else if(regex_match(token, identifier))
            cout << token << " : Identifier" << endl;

        else
            cout << token << " : Invalid Token" << endl;
    }

    return 0;
}

