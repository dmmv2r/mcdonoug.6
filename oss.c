//Name: Donovan McDonough
//Date: 11/19/2020

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char* argv[]) {

	printf("in oss\n");

	char* arr[] = {"./user_proc", NULL};
	execvp(arr[0], arr);

	printf("end oss\n");
	return 0;
}
