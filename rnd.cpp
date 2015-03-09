//Name: Taryn Apel
//Class: CS135
//Assignment: Project 4

#include <cstdio>
#include <cstdlib>
#include <ctime>

int main(int argc, char* argv[]){
	
	int n = atoi(argv[1]);
 	int nums[n];

 	if (argc == 2){ 
 		srand (time(NULL));
		for( int i = 0; i < n; i++)
		{
			
			printf( "%d\n", (rand() % 200000 - 100000));
		}
 	}
}

 	
