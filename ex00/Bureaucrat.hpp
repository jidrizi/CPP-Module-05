/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 14:33:44 by jidrizi           #+#    #+#             */
/*   Updated: 2025/06/28 14:51:45 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class Bureacrat:
{
	private:
		const std::string	name;
		int					grade;
	
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureacrat(const Bureaucrat &other);
		Bureaucrat &operator=(const Bureaucrat &other);
		~Bureaucrat();

		std:string	getName() const;
		int			getGrade() const;
		void		incrementGrade();
		void		decrementGrade();
}

std::ostream &operator<<(std::ostream & os, Bureaucrat const &buro);

#endif