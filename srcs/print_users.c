#include "../includes/header.h"

void	print_users(user* u)
{
	while(*u)
	{
		printf("Name: %s, Age: %d, Income: %d, Super Contribution: %d\n", *u.name, *u.age, *u.income, *u.super_contribution);
	}
}
