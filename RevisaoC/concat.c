#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *concatena( char *str1, char *str2 );

int main(int argc, char *argv[]) {
	char s1[30] = "Hello ";
	char s2[30] = "World!";
	
	printf("Antes:\n");
	printf("S1 = '%s' e S2 = '%s'\n", s1, s2);
	
	char *s3 = concatena( s1, s2 );
	
	printf("Depois:\n");
	printf("S1 = '%s' e S2 = '%s'\n", s1, s2);
	printf("S3 = '%s'\n", s3);
	
	free( s3 );
			
	return 0;
}

char *concatena( char *str1, char *str2 ){
	int n1 = strlen( str1 );
	int n2 = strlen( str2 );
	
	char *p = malloc( n1 + n2 + 1 );
	
	p[0] = '\0'; 
	strcat( p, str1 );
	strcat( p, str2 );
	
	return p;
}
