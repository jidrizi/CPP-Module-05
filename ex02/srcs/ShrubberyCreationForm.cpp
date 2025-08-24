/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 04:55:13 by jidrizi           #+#    #+#             */
/*   Updated: 2025/08/24 04:58:07 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target) : 
	AForm("ShrubberyCreationForm", false, 145, 137), target(_target)
{
	std::cout << "(ShrubberyCreationForm constructor called.)" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& source) :
	AForm(source), target(source.target)
{
	std::cout << "(Copy ShrubberyCreationForm called)" << std::endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm& source)
{
	std::cout << "(Copy ShrubberyCreationForm assignment operator called)" << std::endl;
	if (this != &source)
	{
 		AForm::operator=(source);
		this->target = source.target;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "(ShrubberyCreationForm destructor called)" << std::endl;
}

void	ShrubberyCreationForm::subFormAction() const
{
	std::ofstream	targetFile(this->target);
	if (!targetFile)
	{
		std::cerr << "File named" << this->target << "couldn't be created..."
		<< std::endl;
	}
	
	targetFile << "  .-'- -.\n"
			   << "  (       )\n" 
			   << "(  ,      )\n"
			   << "( \\'./  .'\n"
			   << "  '-| |-'\n"
			   << "    | |\n"
			   << ",,,,|_|,,,";
	targetFile.close();
}
