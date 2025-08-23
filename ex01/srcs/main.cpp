/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 18:08:43 by jidrizi           #+#    #+#             */
/*   Updated: 2025/08/23 03:07:27 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout << "\033[1;31m*Testing Constructor*\033[0m" << std::endl;
	try
	{
		Form a("a", false, 160, -2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\033[1;31m*Testing << and beSigned*\033[0m" << std::endl;
	try 
	{
		Bureaucrat	b("b", 90);
		Form		c("c", false, 80, 130);
		b.signForm(c);
	}
	catch(const std::exception& e)
	{
		return (0);
	}
	Form	e("E", true, 67, 76);
	std::cout << e;
	return (0);
}





//ex00 main
// int	main()
// {
// 	std::cout << "\033[1;31m*Testing Constructor*\033[0m" << std::endl;
// 	try
// 	{
// 		Bureaucrat	ConstructorTest("ConstructorTest", 1000);
// 	}
// 	catch(const std::exception& excp)
// 	{
// 		std::cerr << excp.what() << std::endl;
// 	}


// 	std::cout << "\033[1;31m*Testing Increment and Decrement*\033[0m" << std::endl;
// 	try
// 	{
// 		Bureaucrat	DecrementTest("DecrementTest", 150);
// 		DecrementTest.decrementGrade();
// 	}
// 	catch(const std::exception& excp)
// 	{
// 		std::cerr << excp.what() << std::endl;
// 	}
	
// 	try
// 	{
// 		Bureaucrat	IncrementTest("IncrementTest", 1);
// 		IncrementTest.incrementGrade();
// 	}
// 	catch(const std::exception& excp)
// 	{
// 		std::cerr << excp.what() << std::endl;
// 	}
// 	return(0);
// }