/**
 * II Treinamento para a Maratona de Programação 2016
 * UFT- Palmas
 *
 * Problema: Jogando Cartas Fora
 * Descrição: https://www.urionlinejudge.com.br/judge/pt/problems/view/1110
 *
 */

#include <deque>
#include <algorithm>
#include <vector>
#include <iostream>
 
using namespace std;

int main() {
    int m;

    while(scanf("%d", &m), m) { 
		deque<int> dq(m);
        iota(dq.begin(), dq.end(), 1);

        vector<int> v;    
		do {
            v.push_back(dq.front());
			dq.pop_front();
            int top = dq.front();
			dq.pop_front();
			dq.push_back(top);
		} while(dq.size() >= 2);

        cout << "Discarded cards: ";

        if(v.size() > 1) {
            cout << v[0];
            for(auto it = v.begin()+1; it != v.end(); ++it)
                cout << ", " << *it;
        }
		cout << "\nRemaining card: " << dq.front() << endl;
    }

    return 0;
}
