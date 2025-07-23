/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 14:33:50 by jidrizi           #+#    #+#             */
/*   Updated: 2025/07/23 15:28:02 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	srand(time(NULL));

	std::cout << "\033[33m" << std::endl << "Test  ShrubberyCreationForm" << "\033[0m" << std::endl;
	Bureaucrat ShrubTester("ShrubTester", 130);
	ShrubberyCreationForm Shrubby_form("Hello");
	std::cout << std::endl;
	std::cout << Shrubby_form;
	ShrubTester.signForm(Shrubby_form);
	std::cout << Shrubby_form;
	ShrubTester.executeForm(Shrubby_form);

	std::cout << "\033[33m" << std::endl << "Test ex02 RobotomyRequestForm" << "\033[0m" << std::endl;
	RobotomyRequestForm Robo_form("I am a robo form");
	Bureaucrat Robotnik("Robotnik", 45);

	Robotnik.executeForm(Robo_form);
	Robotnik.signForm(Robo_form);
	Robotnik.executeForm(Robo_form);
	Robotnik.executeForm(Robo_form);
	Robotnik.executeForm(Robo_form);

	std::cout << "\033[33m" << std::endl << "Test ex02 PresidentialPardonForm" << "\033[0m" << std::endl;
	PresidentialPardonForm President_form("I am a robo form");
	Bureaucrat Mr_President("Mr_President", 5);

	Robotnik.executeForm(President_form);
	Robotnik.signForm(President_form);

	Mr_President.executeForm(President_form);
	Mr_President.signForm(President_form);
	Mr_President.executeForm(President_form);
	return (0);
}