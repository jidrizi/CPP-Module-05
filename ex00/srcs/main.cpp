/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 18:08:43 by jidrizi           #+#    #+#             */
/*   Updated: 2025/08/18 23:49:16 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	std::cout << "\033[1;31m*Testing Constructor*\033[0m" << std::endl;
	try
	{
		Bureaucrat	ConstructorTest("ConstructorTest", 1000);
	}
	catch(const std::exception& excp)
	{
		std::cerr << excp.what() << std::endl;
	}


	std::cout << "\033[1;31m*Testing Increment and Decrement*\033[0m" << std::endl;
	try
	{
		Bureaucrat	DecrementTest("DecrementTest", 150);
		DecrementTest.decrementGrade();
	}
	catch(const std::exception& excp)
	{
		std::cerr << excp.what() << std::endl;
	}
	
	try
	{
		Bureaucrat	IncrementTest("IncrementTest", 150);
		IncrementTest.incrementGrade();
	}
	catch(const std::exception& excp)
	{
		std::cerr << excp.what() << std::endl;
	}
	return(0);
}