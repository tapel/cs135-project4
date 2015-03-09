//Name: Taryn Apel
//Class: CS135
//Assignment: Project 4

#include <cstdio>
#include <cstdlib>

void arrayprint(int *a, int n);
void arrayscan(int *a, int n);
void bubblesort(int *a, int n);
void swap(int &x, int &y);

int main(int argc, char *argv[]){
	int size = 1000000;
	if (argc == 2){
		size = atoi(argv[1]);
	}

	int input[size];
	arrayscan(input, size);
	bubblesort(input, size);
	arrayprint(input, size);
}

void swap(int &x, int &y){
	int jiggity;
	jiggity = x;
	x = y;
	y = jiggity;
}



void bubblesort(int array[], int n){
	bool isSorted = false;
	while(! isSorted) {
		isSorted = true;
		for( int i = 0; i < n-1; i++ ) {
			if( array[i] > array[i+1]){
				swap(array[i], array[i+1]);
				isSorted = false;
			}
		}
	}
}

void arrayprint(int array[], int n){
	for(int i = 0; i < n; i++){
		printf("%d\n", array[i]);
	}
}

void arrayscan(int array[], int n){
	int number;
	for(int i = 0; i < n; i++){
		//printf("Please enter an integer: ");
		scanf("%d", &number);
		array[i] = number;
	}
}