#include <stdio.h>
#include <unistd.h>
/**
 * main - gives the addition of two numbers
 *it also gives the process id and the parent pid
 *
 * Hope its Betty friendly
 * Return: Always 0
 */
int main(void)
{

int a = 4;
int b = 6;
int sum;
pid_t pid, ppid;

sum = a + b;
pid = getpid();
ppid = getppid();

printf("the sum is %d\n", sum);
printf("the parent id is %u\n", ppid);
printf("the child id is %u\n", pid);

return (0);
}
