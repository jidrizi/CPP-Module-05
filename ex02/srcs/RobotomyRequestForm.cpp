/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 00:19:55 by jidrizi           #+#    #+#             */
/*   Updated: 2025/08/25 02:15:09 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	: AForm("RobotomyRequestForm", false, 72, 45), target("defaultTarget")
{
	std::cout << "Default Shrubbery constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target) : 
	AForm("RobotomyRequestForm", false, 72, 45), target(_target)
{
	std::cout << "(RobotomyRequestForm constructor called.)" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& source) :
	AForm(source), target(source.target)
{
	std::cout << "(Copy RobotomyRequestForm called)" << std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm& source)
{
	std::cout << "(Copy RobotomyRequestForm assignment operator called)" << std::endl;
	if (this != &source)
	{
 		AForm::operator=(source);
		this->target = source.target;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "(RobotomyRequestForm destructor called)" << std::endl;
}

void	RobotomyRequestForm::subFormAction() const
{
	int rng = rand() % 2;

	if (rng == 1)
	{
		std::cout << "*drilling noises*" << std::endl << this->target 
		<< " has been sucessfully robotomized," << std::endl;
	}
	else
		std::cout << "Unfortunately " << this->target << " coudln't be robotomized."
			<< std::endl;
}