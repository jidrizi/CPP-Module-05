/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 15:11:13 by jidrizi           #+#    #+#             */
/*   Updated: 2025/07/23 15:32:14 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("Default AForm"), gradeToSign(150), gradeToExecute(150), isSigned(false) 
{
}

AForm::AForm(const std::string _name, int _gradeToSign, int _gradeToExecute) : name(_name), gradeToSign(_gradeToSign), gradeToExecute(_gradeToExecute), isSigned(false) 
{
	if (gradeToSign < 1 || gradeToExecute < 1) 
	{
		throw GradeTooHighException();
	}
	if (gradeToSign > 150 || gradeToExecute > 150) 
	{
		throw GradeTooLowException();
	}
}

AForm::AForm(const AForm &other) : name(other.name), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute), isSigned(other.isSigned) 
{
}

AForm &AForm::operator=(const AForm &other) 
{
	if (this != &other) 
	{
		isSigned = other.isSigned;
	}
	return (*this);
}

AForm::~AForm() 
{
}

const std::string &AForm::getName() const 
{
	return (name);
}

int AForm::getGradeToSign() const 
{
	return (gradeToSign);
}

int AForm::getGradeToExecute() const 
{
	return (gradeToExecute);
}

bool AForm::getIfIsSigned() const 
{
	return (isSigned);
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

const char *AForm::UnSignedException::what() const throw()
{
	return ("Form is not signed!");
}

std::ostream &operator<<(std::ostream &os, const AForm &aform) 
{
	os << "Form Name: " << aform.getName() << ", Grade to Sign: " << aform.getGradeToSign()
		<< ", Grade to Execute: " << aform.getGradeToExecute() 
		<< ", Is Signed: " << (aform.getIfIsSigned() ? "Yes" : "No") << std::endl;
	return (os);
}

void AForm::setIsSigned(bool is_signed)
{
	isSigned = is_signed;
}

void AForm::beSigned(const Bureaucrat &bureaucrat) 
{
	if (bureaucrat.getGrade() > gradeToSign) 
	{
		throw GradeTooLowException();
	}
	isSigned = true;
}

void AForm::execute(const Bureaucrat &executor) const
{
	if (isSigned == false)
		throw UnSignedException();
	if (gradeToExecute < executor.getGrade())
		throw GradeTooLowException();

	executeAction();
}