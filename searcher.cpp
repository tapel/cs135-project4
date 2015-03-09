//Name: Taryn Apel
//Class: CS135
//Assignment: Project 4

#include <cstdio>
#include <cstdlib>

int search(int *a, int key, int size);
void arrayscan(int *a, int n);

int main(int argc, char *argv[]){
	int size = 1000000;
	int key = 0;
	if (argc == 3){
		size = atoi(argv[1]);
		key = atoi(argv[2]);
	}
	int input[size];
	arrayscan(input, size);
	int index = search(input, key, size);
	if (index != -1){
		printf("Index of %d is %d\n", key, index);
	}
	else {
		printf("Key %d not found\n", key);
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

int search(int array[], int key, int n){
	for (int i = 0; i < n; i++){
		if (array[i] == key){
			return i;
		}
	}
	return -1; //if i didn't find it earlier, return -1
}
