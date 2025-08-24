/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 00:10:02 by jidrizi           #+#    #+#             */
/*   Updated: 2025/08/25 00:22:48 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// constructors

Form::Form() : name("Default"), signedStatus(false), grade2sign(150), grade2exec(150)
{
	std::cout << "(Default Form constructor called)" << std::endl;
}

Form::Form(const std::string _name, bool _signedStatus, const int _grade2sign, const int _grade2exec)
	: name(_name), signedStatus(_signedStatus), grade2sign(_grade2sign), grade2exec(_grade2exec)
{
	std::cout << "(Form constructor with parameters called)" << std::endl;
	if (this->grade2sign < 1 || this->grade2exec < 1)
		throw (GradeTooHighException());
	if (this->grade2sign > 150 || this->grade2exec > 150)
		throw (GradeTooLowException());
}


Form::Form(Form &source)
	: name(source.name), signedStatus(source.signedStatus), grade2sign(source.grade2sign), grade2exec(source.grade2exec)
{
	std::cout << "(Form copy constructor called)" << std::endl;
}

Form&	Form::operator=(Form &source)
{
	this->signedStatus = source.signedStatus;
	return (*this);
}

Form::~Form()
{
	std::cout << "(Form destructor called)" << std::endl;
}

//functions

const std::string	Form::getName()
{
	return (this->name);
}

bool				Form::getSignedStatus()
{
	return (this->signedStatus);
}
int			Form::getGrade2Sign()
{
	return (this->grade2sign);
}
int			Form::getGrade2Exec()
{
	return (this->grade2exec);
}

void	Form::beSigned(Bureaucrat buro)
{
	if (buro.getGrade() > this->grade2sign)
		throw (GradeTooLowException());
	else
		this->signedStatus = true;
}

std::ostream&	operator<<(std::ostream& os, Form& form)
{
	os << "Name:" << form.getName() 
	<< "\tsigned status:" << form.getSignedStatus()
	<< "\tgrade2sign:" << form.getGrade2Sign()
	<< "\tgrade2exec:" << form.getGrade2Exec()
	<< std::endl;
	return (os);
}

// exception functions
const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Error: Grade is too high.\n");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Error:Grade is too low.\n");
}