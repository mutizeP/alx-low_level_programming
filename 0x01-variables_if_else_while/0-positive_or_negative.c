/**
* main - main block
* Description: Get a random number
* print if the number is negative, positive or zero
* retur: 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n>0)
	printf("%i is positive\n", n);
else if (n<0)
	printf("%i is negative\n", n);
else if (n=0)
	printf("%i is zero\n", n);
return (0);
