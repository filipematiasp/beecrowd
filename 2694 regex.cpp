#include <iostream>
#include <string>
#include <regex>
#include <iterator>

using namespace std;

int main() {
    int qtd;
    int sum;
    string linha;

    cin >> qtd;
    for (int i = 0; i < qtd; i++){
        cin >> linha;
        sum = 0;
        regex words_regex("\\d+");
        auto words_begin = sregex_iterator(linha.begin(), linha.end(), words_regex);
        auto words_end = sregex_iterator();

        for (std::sregex_iterator i = words_begin; i != words_end; ++i){
            std::smatch match = *i;
            std::string match_str = match.str();

            sum += stoi(match_str);
        }

        cout << sum << endl;
    }

}