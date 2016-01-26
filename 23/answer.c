#include <stdio.h>
#define MAXSIZE 1005

int sum(int n, int *num){
	int value = 0;
	for( int i = 0 ; i < n ; ++i ){
		value += num[i];
	}

	return value;
}

int main(){
	int n, i;
	int num[MAXSIZE];

	scanf("%d", &n);
	for( i = 0 ; i < n ; ++i ){
		scanf("%d", &num[i]);
	}
	printf("%d\n", sum(n, num));
	
	return 0;
}
