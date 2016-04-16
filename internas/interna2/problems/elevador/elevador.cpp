#include <iostream>
#include <cmath>
using namespace std;

int main () {
    cin.sync_with_stdio (false);
    
    while (true) {
        int l, c, r1, r2; // Largura, Comprimento, Raio1 e Raio2
        
        cin >> l >> c >> r1 >> r2;
        if (!(l || c || r1 || r2)) break;
        
        if (min(l, c) < 2*max(r1, r2))
            cout << "N\n";
        else {
            int R = r1+r2;
            int a = l - R;
            int b = c - R; // R' = sqrt (a*a + b*b);
            
            if (a*a + b*b < R*R) // Comparamos com R*R para evitarmos a raiz quadrada.
                cout << "N\n";
            else
                cout << "S\n";
        }
    }
    return 0;
}

