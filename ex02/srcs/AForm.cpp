/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 00:10:02 by jidrizi           #+#    #+#             */
/*   Updated: 2025/08/24 02:28:54 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// constructors
AForm::AForm() : name("Default"), signedStatus(false), grade2sign(150), grade2exec(150)
{
	std::cout << "(Default AForm constructor called)" << std::endl;
}

AForm::AForm(const std::string _name, bool _signedStatus, const int _grade2sign, const int _grade2exec)
	: name(_name), signedStatus(_signedStatus), grade2sign(_grade2sign), grade2exec(_grade2exec)
{
	std::cout << "(AForm constructor with parameters called)" << std::endl;
	if (this->grade2sign < 1 || this->grade2exec < 1)
		throw (GradeTooHighException());
	if (this->grade2sign > 150 || this->grade2exec > 150)
		throw (GradeTooLowException());
}


AForm::AForm(AForm &source)
	: name(source.name), signedStatus(source.signedStatus), grade2sign(source.grade2sign), grade2exec(source.grade2exec)
{
	std::cout << "(AForm copy constructor called)" << std::endl;
}

AForm&	AForm::operator=(AForm &source)
{
	this->signedStatus = source.signedStatus;
	return (*this);
}

AForm::~AForm()
{
	std::cout << "(AForm destructor called)" << std::endl;
}

//functions

const std::string	AForm::getName()
{
	return (this->name);
}

bool				AForm::getSignedStatus()
{
	return (this->signedStatus);
}
int			AForm::getGrade2Sign()
{
	return (this->grade2sign);
}
int			AForm::getGrade2Exec()
{
	return (this->grade2exec);
}

void	AForm::beSigned(Bureaucrat buro)
{
	if (buro.getGrade() > this->grade2sign)
		throw (GradeTooLowException());
	else
		this->signedStatus = true;
}

std::ostream&	operator<<(std::ostream& os, AForm& form)
{
	os << "Name:" << form.getName() 
	<< "\tsigned status:" << form.getSignedStatus()
	<< "\tgrade2sign:" << form.getGrade2Sign()
	<< "\tgrade2exec:" << form.getGrade2Exec()
	<< std::endl;
	return (os);
}

// exception functions
const char	*AForm::GradeTooHighException::what() const throw()
{
	return ("Error: Grade is too high.\n");
}

const char	*AForm::GradeTooLowException::what() const throw()
{
	return ("Error:Grade is too low.\n");
}

const char	*AForm::UnsignedFormException::what() const throw()
{
	return ("Error:The form being executed in not signed\n");
}