/**
 * II Treinamento para a Maratona de Programação 2016
 * UFT- Palmas
 *
 * Problema: Revisão de Contrato
 * Descrição: https://www.urionlinejudge.com.br/judge/pt/problems/view/1120
 *
 */

#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;

int main() {
    char c;
	string str;

    while(true) {
    	cin >> c >> str;

        if(c == '0' and str == "0")
            break;

        str.erase(remove_if(str.begin(), str.end(), [=](char i) { return c == i; }), str.end());
        str.erase(0, str.find_first_not_of('0'));

        if(str.empty()) cout << "0" << endl;
        else if(all_of(str.begin(), str.end(), [](char c) { return c == '0'; }))
                 cout << "0" << endl;
        else 
            cout << str << endl;
    }

	return 0;
}
