/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qperez <qperez42@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/10/16 12:55:00 by qperez            #+#    #+#             */
/*   Updated: 2013/11/04 20:51:46 by qperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <getopt/s_getopt.h>
#include <f_string/f_print.h>

int	uf_usage(void)
{
	uf_print_str("Lib42: Class getopt\nUsage: ./a.out <params>\n"
				 "Params: -h --help, -f --file <file>\n");
	return (-1);
}

void	uf_open_file(const char *file)
{
	if (file == NULL)
		uf_print_str("File: NULL\n");
	else
	{
		uf_print_str("File: ");
		uf_print_str(file);
		uf_print_char('\n');
	}
}

/*
 * This file is a little example of the t_getopt structure
 */

int	main(int argc, char const** argv)
{
	t_getopt	getopt;

	if (argc < 2)
		return (uf_usage());
	/*
	 * You should pass argc and argv
	 */
	D_GETOPT(init)(&getopt, argc, argv, "file:f:h:help");
	/*
	 * If option return true, getopt has found an argument
	 */
	while (D_GETOPT(option)(&getopt) == true)
	{
		/*
		 * Here you check argument
		 */
		if (D_GETOPT(check)(&getopt, "h") == true ||
			D_GETOPT(check)(&getopt, "help") == true)
			uf_usage();
		else if (D_GETOPT(check)(&getopt, "f") == true ||
				 D_GETOPT(check)(&getopt, "file") == true)
			uf_open_file(D_GETOPT(params)(&getopt));
	}
	/*
	 * And you free memory
	 */
	D_GETOPT(destroy)(&getopt);
	return (0);
}

