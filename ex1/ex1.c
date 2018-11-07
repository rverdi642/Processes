// Write a program that calls `fork()`. Before calling `fork()`, have the main process access a variable
// (e.g., x) and set its value to something (e.g., 100). What value is the variable in the child process?
// What happens to the variable when both the child and parent change the value of x?

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    // Your code here
pid_t pid;
int x;
x = 12;
printf("parent is %d value of x in the parent %d", pid, x);

pid = fork();

	if (pid == 0) {
		printf("I'm the child! value of x = %d\n",x);
	} else {
		printf("Parent is about to wait!\n");
		//wait(NULL);
		printf("I'm the parent!\n");
	}
    return 0;
}
