/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 01:05:53 by jidrizi           #+#    #+#             */
/*   Updated: 2025/08/25 01:07:45 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	: AForm("PresidentialPardonForm", false, 25, 5), target("defaultTarget")
{
	std::cout << "Default Shrubbery constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target) : 
	AForm("PresidentialPardonForm", false, 25, 5), target(_target)
{
	std::cout << "(PresidentialPardonForm constructor called.)" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& source) :
	AForm(source), target(source.target)
{
	std::cout << "(Copy PresidentialPardonForm called)" << std::endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm& source)
{
	std::cout << "(Copy PresidentialPardonForm assignment operator called)" << std::endl;
	if (this != &source)
	{
 		AForm::operator=(source);
		this->target = source.target;
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "(PresidentialPardonForm destructor called)" << std::endl;
}

void	PresidentialPardonForm::subFormAction() const
{
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." 
		<< std::endl;
}