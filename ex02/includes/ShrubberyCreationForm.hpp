/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 04:24:59 by jidrizi           #+#    #+#             */
/*   Updated: 2025/08/25 00:37:28 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"


class ShrubberyCreationForm : public AForm
{
	private:
		std::string	target;
	public:
	//constructors
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm &source);
		ShrubberyCreationForm&	operator=(ShrubberyCreationForm &source);
		~ShrubberyCreationForm();
	
	//functions
		void			subFormAction() const;

		// this function is for testing
		// std::string		getTarget()
		// {
		// 	return (this->target);
		// }
};

#endif