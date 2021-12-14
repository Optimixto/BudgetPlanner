#ifndef HEADER_BUDGETPLANNER
#define HEADER_BUDGETPLANNER

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "Month.hpp"

using namespace std;

class BudgetPlanner
{
public:
	vector<Month> months;

	bool IsMonthInBudgetPlanner(string monthName);
	void AddMonth(string monthName);
	int AccessMonth(string monthName);
	void PrintBudgetPlanner();
	bool ReadDocument(std::string fileName, std::vector<std::string>& vecOfStrs);
	void WriteDocument(std::vector<std::string>& vecOfStrs);
};
#endif