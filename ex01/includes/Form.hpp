/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 23:57:01 by jidrizi           #+#    #+#             */
/*   Updated: 2025/08/23 00:38:52 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>

class	Form
{
	private:
	
		const std::string	name;
		bool				signedStatus;
		const int			grade2sign;
		const int			grade2exec;
	
	public:
	// constructors
		Form();
		Form(const std::string _name, bool _signedStatus, const int _grade2sign, const int _grade2exec);
		Form(Form &source);
		Form	&operator=(Form &source);
		~Form();
	
	// exception classes
		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
	
};

#endif