/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 14:33:50 by jidrizi           #+#    #+#             */
/*   Updated: 2025/07/22 17:04:42 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	std::cout << "\033[31mTesting creation with incorrect grades\033[0m" << std::endl;
	try
	{
		Form f1("Form1", 164, 150);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		Form f2("Form2", 1, 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}


	std::cout << "\033[31mNow testing the signing of the forms\033[0m" << std::endl;
	Bureaucrat	failure("Failure", 50);
	Bureaucrat	success("Success", 30);
	Form		f3("Form3", 32, 50);

	try
	{
		failure.signForm(f3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << f3 << std::endl << std::endl;
	try
	{
		success.signForm(f3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << f3 << std::endl;
	return (0);
}