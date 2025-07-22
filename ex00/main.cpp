/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 14:33:50 by jidrizi           #+#    #+#             */
/*   Updated: 2025/07/22 16:59:22 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "\033[31mTesting creation with a grade too high and a grade too low\033[0m" << std::endl;
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


	std::cout << std::endl << "\033[31mTesting incrementing and decrementing of the grades\033[0m" << std::endl;
	Bureaucrat b3("IncrementTest", 2);
	std::cout << b3 << std::endl;
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
	std::cout << b4 << std::endl;
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