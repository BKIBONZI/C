# include <unistd.h>
# include <string.h> 
int main(int n, char ** c)
{
	write(1, *(c + 1), strlen(*(c + 1)));
	write(1, "\n", 1);
	return (0);
}
