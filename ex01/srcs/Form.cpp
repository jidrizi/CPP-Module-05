/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 00:10:02 by jidrizi           #+#    #+#             */
/*   Updated: 2025/08/23 00:40:58 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("Default"), signedStatus(false), grade2sign(150), grade2exec(150)
{
	std::cout << "(Default Form constructor called )" << std::endl;
}

Form::Form(const std::string _name, bool _signedStatus, const int _grade2sign, const int _grade2exec)
	: name(_name), signedStatus(_signedStatus), grade2sign(_grade2sign), grade2exec(_grade2exec)
{
	std::cout << "(Form constructor with parameters called)" << std::endl;
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

//exception functions
const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Error: Grade is too high.\n");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Error:Grade is too low.\n");
}