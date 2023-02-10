#include <stdio.h> 



int main(int argc, char const *argv[])
{
	
char *table[8][8] = {
	{"T","C","A","R","Q","A","C","T"},
	{"P","P","P","P","P","P","P","P"},
	{"X","X","X","X","X","X","X","X"},
	{"X","X","X","X","X","X","X","X"},
	{"X","X","X","X","X","X","X","X"},
	{"X","X","X","X","X","X","X","X"},
	{"P","P","P","P","P","P","P","P"},
	{"T","C","A","R","Q","A","C","T"}
};

printf("%c\n", *table[1][1] );



	return 0;
}