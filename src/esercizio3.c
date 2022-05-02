#include <stdio.h>

int x = -1 , y = 3 , z = -5 ;

int main (void) {
	
	z = x++ * 3 - ( x = 6 ) ;
	
	printf ( " %d %d " , z , x);
	
	return 0;
}