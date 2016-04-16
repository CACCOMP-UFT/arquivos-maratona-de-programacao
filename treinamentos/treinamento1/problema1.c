/**
 * I Treinamento para a Maratona de Programação 2016
 * UFT- Palmas
 *
 * Problema: Encaixa ou não encaixa II
 * Descrição: https://www.urionlinejudge.com.br/judge/pt/problems/view/1241
 *
 */

#include <stdio.h>
#include <string.h>

int main() {
	int TC;
	scanf("%d\n", &TC);
	
	while (TC--) {
		char str1[1000], str2[1000];
		scanf("%s %s", str1, str2);
		
		int len1 = strlen(str1);
		int len2 = strlen(str2);
		
		if(len1 < len2)
			printf("nao encaixa\n");
		else {	
			int i, j, fit;			
			fit = 0;
			
			for(i = len1 - 1, j = len2 - 1; j >= 0; i--, j--)
				if(str1[i] == str2[j])
					fit++;

			if(fit == len2)
				printf("encaixa\n");
			else
				printf("nao encaixa\n");
		}					
	}
		
 	return 0;
}
