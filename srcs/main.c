#include "../includes/header.h"

int	main(void)
{
	user u_list[4];
	
	u_list[0].age = 21;
	u_list[0].income = 10000;
	u_list[0].super_contribution = 5;

	print_users(u_list)
	return (0);
}
