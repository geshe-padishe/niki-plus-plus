/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfritsch <gfritsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:00:59 by gfritsch          #+#    #+#             */
/*   Updated: 2022/11/14 21:19:01 by gfritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Array.hpp"

#define MAX_VAL 10

int main(int, char**)
{
	std::cout << "\t\tINSTANCIATIONS OBJETS\n";
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];

	std::cout << "\t\tREMPLISSAGE\n";
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand() % (MAX_VAL);
		numbers[i] = value;
		mirror[i] = value;
	}
	int start = 0;
	start = rand() % (MAX_VAL - 5) + 0;
	std::cout << "starting index : "<< start << "\n";
	for (int i = start; i < (start + 5); i++)
	{
		std::cout << "mirror["<< i << "]" << ":\t" << mirror[i] << "\n";
		std::cout << "numbers[" << i << "]" << ":\t" << numbers[i] << "\n";    
	}
	std::cout << "\t\tSCOPE OBJETS TEMPORAIRES\n";
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
        //printArray(tmp);
        //printArray(test);
        //tmp.~Array();
        //printArray(test);
	}

	std::cout << "\t\tCHECK COPIE PROFONDE\n";
	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	
	std::cout << "\t\tTEST EXCEPTIONS\n";
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "\t\tECRASEMENT\n";
	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand() % (MAX_VAL);
	}
	std::cout << "\t\tAFFICHAGE ECRASMENT\n";
	std::cout << "starting index : "<< start << "\n";
	for (int i = start; i < (start + 5); i++)
	{
		std::cout << "numbers[" << i << "]" << ":\t" << numbers[i] << "\n";
	}
	std::cout << "\t\tDESTRUCTIONS\n";
	delete [] mirror;//
	return 0;
}