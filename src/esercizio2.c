#include <stdio.h>

int x = 2 , y = 10 , d ;

int main (void) {
	
	int t;
	
	scanf ( " %d " , &d );
	
	if ( d <= 5 ) goto if_false;
	if ( d < y ) goto if_true;
	
	if_false :
	
	t = d + y ;
	
	x = t / 2 ;
	
	y = 6;
	
	goto if_end ;
	
	if_true:
		
		x += d ;
		
		y *= 2 ;
		
	if_end :
		
		printf (" %d %d %d /n", x , y , d ) ;
		
		return 0;
	
	
	
}