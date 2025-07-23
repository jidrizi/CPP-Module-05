/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 13:37:00 by jidrizi           #+#    #+#             */
/*   Updated: 2025/07/23 14:44:58 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), target("Default") 
{
	std::cout << "(ShrubberyCreationForm default constructor called.)" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137), target(target) 
{
	std::cout << "(ShrubberyCreationForm parameterized constructor called.)" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other), target(other.target) 
{
	std::cout << "(ShrubberyCreationForm copy constructor called.)" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	target = other.target;
	setIsSigned(other.getIfIsSigned());
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "(ShrubberyCreationForm destructor called.)" << std::endl;
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