/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 18:08:35 by jidrizi           #+#    #+#             */
/*   Updated: 2025/08/18 23:16:09 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(75)
{
	"-Default Bureaucrat constructor called-";
}

Bureaucrat::Bureaucrat(const std::string _name, int _grade) : name(_name)
{
	"-Bureacrat constructor with parameters called-";
	if (_grade < 1)
		throw (GradeTooHighException());
	else if (_grade > 150)
		throw (GradeTooLowException());
	else
		this->grade = _grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : name(src.name), grade(src.grade)
{
	"-Copy Bureaucrat constructor called-";
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &src)
{
	if (this != &src)
		this->grade = src.grade;
	"-Copy assigment operator Bureaucrat called-";
	return (*this);
}



const std::string	Bureaucrat::getName()
{
	return (this->name);
}

int					Bureaucrat::getGrade()
{
	return (this->grade);
}

void				Bureaucrat::incrementGrade()
{
	if (this->grade > 1)
		this-> grade -= 1;
}

void				Bureaucrat::decrementGrade()
{
	if (this->grade < 150)
		this-> grade += 1;
}


// << overload
std::ostream&	operator<<(std::ostream& os, Bureaucrat& const buro)
{
	os << buro.getName() << ", bureaucrat grade " << buro.getGrade() << "." << std::endl;
	return (os);
}

//exception functions
const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Error: Grade is too high.\n");
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Error:Grade is too low.\n");
}