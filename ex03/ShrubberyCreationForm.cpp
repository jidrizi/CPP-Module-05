/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 13:37:00 by jidrizi           #+#    #+#             */
/*   Updated: 2025/07/23 15:29:51 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), target("Default") 
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137), target(target) 
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other), target(other.target) 
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	target = other.target;
	setIsSigned(other.getIfIsSigned());
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

const char *ShrubberyCreationForm::FileOpenException::what() const throw()
{
	return ("Could not open and write the file!");
}


void ShrubberyCreationForm::executeAction() const
{
	std::ofstream outFile((target + std::string("_shrubbery")).c_str());

	if (outFile)
	{
		outFile << "    oxoxoo    ooxoo\n";
		outFile << "  ooxoxo oo  oxoxooo\n";
		outFile << " oooo xxoxoo ooo ooox\n";
		outFile << " oxo o oxoxo  xoxxoxo\n";
		outFile << " oxo xooxoooo o ooo\n";
		outFile << "    ooo\\oo\\  /o/o\n";
		outFile << "        \\  \\/ /\n";
		outFile << "         |   /\n";
		outFile << "         |  |\n";
		outFile << "         | D|\n";
		outFile << "         |  |\n";
		outFile << "         |  |\n";
		outFile << "  ______/____\\____\n";


		outFile.close();
	}
	else
		throw ShrubberyCreationForm::FileOpenException();
		
}