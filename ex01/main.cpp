#include "iter.hpp"

int main(int ac, char **av)
{
	iter<char *>(av, (size_t)ac, display<char *>);
}