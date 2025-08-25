/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 02:01:15 by jidrizi           #+#    #+#             */
/*   Updated: 2025/08/25 02:24:45 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "_Intern default constructor called_" << std::endl;
}

Intern::Intern(Intern& source)
{
	std::cout << "_Intern copy constructor called_" << std::endl;
	(void) source;
}

Intern&	Intern::operator=(Intern& source)
{
	std::cout << "_Intern copy assigment called_" << std::endl;
	(void) source;
	return (*this);
}

Intern::~Intern()
{
	std::cout << "_Intern destructor called_" << std::endl;
}

AForm*	Intern::makeForm(std::string formName, std::string formTarget)
{
	std::string	availableForms[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	int			i = 0;

	while(i < 3 && formName != availableForms[i])
		i++;
	switch (i)
	{
	case 0:
		std::cout << "Intern creates " << formName << std::endl;
		return (new ShrubberyCreationForm(formTarget));
	case 1:
		std::cout << "Intern creates " << formName << std::endl;
		return (new RobotomyRequestForm(formName));
	case 2:
		std::cout << "Intern creates " << formName << std::endl;
		return (new PresidentialPardonForm (formTarget));
	default:
		std::cout << "Form is not existing" << std::endl;
		return (NULL);
	}
}
