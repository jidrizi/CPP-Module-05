/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 18:08:43 by jidrizi           #+#    #+#             */
/*   Updated: 2025/08/25 02:25:11 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main()
{
	Intern		jeff;
	Bureaucrat	bob("bob", 55);
	AForm*		tree = jeff.makeForm("ShrubberyCreationForm", "home.shrubbery");

	try
	{
		bob.signForm(*tree);
		bob.executeForm(*tree);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}



























// ex02 main
// int main()
// {
// 	std::cout << "\033[1;31mTesting Shrubbery form\033[0m" << std::endl;
// 	try
// 	{
// 		ShrubberyCreationForm	a("trees.shrubbery");
// 		Bureaucrat				b("b", 138);
// 		b.signForm(a);
// 		a.execute(b);
// 		std::cout << "Shrubbery success\n";
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}

// 	std::cout << "\033[1;31mTesting Robotomy form\033[0m" << std::endl;
// 	try
// 	{
// 		RobotomyRequestForm	c("cop");
// 		Bureaucrat			d("d", 4);
// 		d.signForm(c);
// 		c.execute(d);
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}

// 	std::cout << "\033[1;31mTesting Presidential Pardon form\033[0m" << std::endl;
// 	try
// 	{
// 		PresidentialPardonForm	islandMan("IslandMan");
// 		Bureaucrat				vicePresident("VicePresident", 0);
// 		vicePresident.signForm(islandMan);
// 		islandMan.execute(vicePresident);
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
	
// 	return (0);
// }

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
			// 

// ex01 main
//int main()
// {
// 	std::cout << "\033[1;31m*Testing Constructor*\033[0m" << std::endl;
// 	try
// 	{
// 		Form a("a", false, 160, -2);
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}

// 	std::cout << "\033[1;31m*Testing << and beSigned*\033[0m" << std::endl;
// 	try 
// 	{
// 		Bureaucrat	b("b", 90);
// 		Form		c("c", false, 80, 130);
// 		b.signForm(c);
// 	}
// 	catch(const std::exception& e)
// 	{
// 		return (0);
// 	}
// 	Form	e("E", true, 67, 76);
// 	std::cout << e;
// 	return (0);
// }