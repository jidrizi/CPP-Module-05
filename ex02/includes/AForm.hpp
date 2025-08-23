/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 23:57:01 by jidrizi           #+#    #+#             */
/*   Updated: 2025/08/23 04:01:54 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"
# include <string>
# include <iostream>
# include <exception>


class Bureaucrat;

class	AForm
{
	private:
	
		const std::string	name;
		bool				signedStatus;
		const int			grade2sign;
		const int			grade2exec;
	
	public:
	// constructors
		AForm();
		AForm(const std::string _name, bool _signedStatus, const int _grade2sign, const int _grade2exec);
		AForm(AForm &source);
		AForm	&operator=(AForm &source);
		~AForm();

	// functions
		const std::string	getName();
		bool				getSignedStatus();
		int					getGrade2Sign();
		int					getGrade2Exec();
		void				beSigned(Bureaucrat buro);
	
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


// << overload
std::ostream&	operator<<(std::ostream& os, AForm& form);

#endif