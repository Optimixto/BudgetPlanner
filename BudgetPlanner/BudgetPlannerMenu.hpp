#ifndef HEADER_BUDGETMENU
#define HEADER_BUDGETMENU

#include <iostream>

using namespace std;

#include "BudgetPlanner.hpp"
#include "MonthMenu.hpp"

class BudgetPlannerMenu
{
public:
	static void DisplayMainMenu(BudgetPlanner budget);
	static void MainMenu(BudgetPlanner budget);
	static void OpenMonth(BudgetPlanner budget);
	static void ExitProgram();
};
#endif