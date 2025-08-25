/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 18:08:39 by jidrizi           #+#    #+#             */
/*   Updated: 2025/08/25 02:23:03 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <exception>
# include "AForm.hpp"

class AForm;

class	Bureaucrat
{
	private:
		const std::string	name;
		int					grade;

	public:
		//constructors
		
		Bureaucrat();
		Bureaucrat(const std::string _name, int _grade);
		Bureaucrat& operator=(const Bureaucrat &src);
		Bureaucrat(const Bureaucrat &src);
		~Bureaucrat();
		
		//functions
		
		const std::string	getName() const;
		int					getGrade() const;
		void				incrementGrade();
		void				decrementGrade();
		void				signForm(AForm& form);
		void				executeForm(AForm const & form) const;

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

// operator << overload 
std::ostream&	operator<<(std::ostream& os, const Bureaucrat& buro);



#endif