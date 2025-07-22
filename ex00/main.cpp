/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 14:33:50 by jidrizi           #+#    #+#             */
/*   Updated: 2025/07/22 14:22:02 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//gere we are requested to provide tests
int main()
{
	std::cout << "[Testing creation with a grade too high and a grade too low]" << std::endl;
	try
	{
		Bureaucrat b1("HighGradeTest", -13);
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b2("LowGradeTest", 151);
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


	std::cout << std::endl << "[Testing incrementing and decrementing of the grades]" << std::endl;
	Bureaucrat b3("IncrementTest", 2);
	try
	{
		b3.incrementGrade();
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		b3.incrementGrade();
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	Bureaucrat b4("DecrementTest", 149);
	try
	{
		b4.decrementGrade();
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		b4.decrementGrade();
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}