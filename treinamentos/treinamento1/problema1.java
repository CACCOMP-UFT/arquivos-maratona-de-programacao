/**
 * I Treinamento para a Maratona de Programação 2016
 * UFT- Palmas
 *
 * Problema: Encaixa ou não encaixa II
 * Descrição: https://www.urionlinejudge.com.br/judge/pt/problems/view/1241
 *
 */

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int TC = scan.nextInt();
		
		for(int k = 0; k < TC; k++) {
			String str1 = scan.next(); 
			String str2 = scan.next();
			int fit = 0;
			
			if(str1.length() < str2.length())
				System.out.println("nao encaixa");
			else {				
				for(int i = str1.length() - 1, j = str2.length() - 1; j >= 0; i--, j--)
					if(str1.charAt(i) == str2.charAt(j))
						fit++;

				if(fit == str2.length())
					System.out.println("encaixa");
				else
					System.out.println("nao encaixa");
			}	
		}
	}
}
