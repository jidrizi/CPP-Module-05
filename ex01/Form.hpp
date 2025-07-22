/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 15:11:33 by jidrizi           #+#    #+#             */
/*   Updated: 2025/07/22 15:45:21 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string	name;
		const int			gradeToSign;
		const int			gradeToExecute;
		bool				isSigned;
	
	public:
		Form();
		Form(const std::string name, int gradeToSign, int gradeToExecute);
		Form(const Form &other);
		Form &operator=(const Form &other);
		~Form();
		
		const std::string	&getName() const;
		int					getGradeToSign() const;
		int					getGradeToExecute() const;
		bool				getIfIsSigned() const;
		void				beSigned(const Bureaucrat &bureaucrat);
		
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

std::ostream &operator <<(std::ostream &os, const Form &form);

#endif