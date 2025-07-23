/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 15:11:13 by jidrizi           #+#    #+#             */
/*   Updated: 2025/07/23 15:30:32 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("Default Form"), gradeToSign(150), gradeToExecute(150), isSigned(false) 
{
}

Form::Form(const std::string _name, int _gradeToSign, int _gradeToExecute) : name(_name), gradeToSign(_gradeToSign), gradeToExecute(_gradeToExecute), isSigned(false) 
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

Form::Form(const Form &other) : name(other.name), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute), isSigned(other.isSigned) 
{
}

Form &Form::operator=(const Form &other) 
{
	if (this != &other) 
	{
		isSigned = other.isSigned;
	}
	return (*this);
}

Form::~Form() 
{
}

const std::string &Form::getName() const 
{
	return (name);
}

int Form::getGradeToSign() const 
{
	return (gradeToSign);
}

int Form::getGradeToExecute() const 
{
	return (gradeToExecute);
}

bool Form::getIfIsSigned() const 
{
	return (isSigned);
}


void Form::beSigned(const Bureaucrat &bureaucrat) 
{
	if (bureaucrat.getGrade() > gradeToSign) 
	{
		throw GradeTooLowException();
	}
	isSigned = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

std::ostream &operator<<(std::ostream &os, const Form &form) 
{
	os << "Form Name: " << form.getName() << ", Grade to Sign: " << form.getGradeToSign()
		<< ", Grade to Execute: " << form.getGradeToExecute() 
		<< ", Is Signed: " << (form.getIfIsSigned() ? "Yes" : "No");
	return (os);
}
