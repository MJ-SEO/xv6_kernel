#include "types.h"
#include "stat.h"
#include "user.h"

int
main()
{
	int arr[10000];
	
	for(int i=0; i<10000; i++){
		printf(1, "[DEBUG] %i: %p", i, &arr[i]);
	}
	exit(0);
}
