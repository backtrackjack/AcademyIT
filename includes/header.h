#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>

typedef struct s_user
{
	int		age;
	int		income;
	int		super_contribution;
}	user;

void	print_users(user* u);
#endif
