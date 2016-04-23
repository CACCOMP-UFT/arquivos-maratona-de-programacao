import java.io.*;
import java.util.*;

public class Problema2 {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		Integer m;
		
		while(true) {
			m = scan.nextInt();
			
			if(m == 0)
				break;
				
			Deque<Integer> dq = new LinkedList<Integer>();
			ArrayList<Integer> lst = new ArrayList<Integer>();
			
			for(Integer i = 1; i <= m; i++)
				dq.addLast(i);
			
			do {
				lst.add(dq.removeFirst());
				Integer top = dq.removeFirst();
				dq.addLast(top);
			} while(dq.size() >= 2);
			
			System.out.print("Discarded cards: ");
			 
			if(lst.size() > 1) {
	            System.out.printf("%d", lst.get(0));
	            
	            for(int i = 1; i < lst.size(); i++)
	            	System.out.printf(", %d", lst.get(i));
		    }
	
			System.out.printf("%nRemaining card: %d%n", dq.getFirst());
		}
	}
}
