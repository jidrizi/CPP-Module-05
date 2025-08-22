/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 00:10:02 by jidrizi           #+#    #+#             */
/*   Updated: 2025/08/23 01:24:29 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// constructors
Form::Form() : name("Default"), signedStatus(false), grade2sign(150), grade2exec(150)
{
	std::cout << "(Default Form constructor called )" << std::endl;
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

// exception functions
const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Error: Grade is too high.\n");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Error:Grade is too low.\n");
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
const int			Form::getGrade2Sign()
{
	return (this->grade2sign);
}
const int			Form::getGrade2Exec()
{
	return (this->grade2exec);
}

std::ostream&	operator<<(std::ostream& os, const Form& form)
{
	os << form.getName << "\tsigned status:" << form.getSignedStatus
	<< "\tgrade2sign:" << form.grade2sign << "\tgrade2exec:" form.grade2exec
	<< std::endl;
	return (os);
}