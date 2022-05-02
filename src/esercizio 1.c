
#include <stdio.h>

int x=2 , y=10 , d ;

int main (void) {
		
		printf ( " inserisci il valore di d : ");
		scanf ( "%d" , &d);
	
		int t1 , t2 ;
		t1 = d+3;
		t2 = x+y;
	
		if ( t1 > t2) goto if_true ;
			
			int t;
			t = d+y ;
			x = t / 2;
			y = 6 ;
			goto if_end;
			
		
	if_true :
		x += 5;
		y *= 2;
		
	if_end :
		
		printf (" %d %d %d /n", x , y , d ) ;
		
		return 0;
}