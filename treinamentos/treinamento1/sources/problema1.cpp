/**
 * I Treinamento para a Maratona de Programação 2016
 * UFT- Palmas
 *
 * Problema: Encaixa ou não encaixa II
 * Descrição: https://www.urionlinejudge.com.br/judge/pt/problems/view/1241
 *
 */

#include <string>
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int TC;
	scanf("%d\n", &TC);
	
	while (TC--) {
		int fit = 0;
		string str1, str2;
		cin >> str1 >> str2;
		
		if(str1.size() < str2.size())
			cout << "nao encaixa" << endl;
		else {				
			for(int i = str1.size() - 1, j = str2.size() - 1; j >= 0; i--, j--)
				if(str1[i] == str2[j])
					fit++;

			if(fit == str2.size())
				cout << "encaixa" << endl;
			else
				cout << "nao encaixa" << endl;
		}					
	}
		
 	return 0;
}
