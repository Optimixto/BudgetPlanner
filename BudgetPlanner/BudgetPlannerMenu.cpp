#include "BudgetPlannerMenu.hpp"

void BudgetPlannerMenu::DisplayMainMenu(BudgetPlanner budget)
{
    cout << "\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n";
    cout << "=====================================================\n";
    cout << " \tWelcome to the Budget Planner\t \n ";
    cout << " \t\tTeam 1\t \n";
    cout << "=====================================================\n";

    budget.PrintBudgetPlanner();

    cout << "-----------------------------------------------------\n";
}

void BudgetPlannerMenu::MainMenu(BudgetPlanner budget)
{
    DisplayMainMenu(budget);

    int choice;
    //Choices:
    printf("1.Open month\n");
    printf("2.Exit\n");

    do
    {
        cout << "Enter your choice(1-2): ";
        cin >> choice;

        switch (choice)
        {
            case 1: OpenMonth(budget); break;
            case 2: ExitProgram(); break;
            default: cout << "Invalid! \n"; break;
        }
    } while (!(choice > 0 && choice < 3));
}

void BudgetPlannerMenu::OpenMonth(BudgetPlanner budget)
{
    string monthToCheck;
    cout << "Enter the month name: ";
    cin >> monthToCheck;

    if (budget.IsMonthInBudgetPlanner(monthToCheck))
    {
        MonthMenu::LowerMenu(monthToCheck, budget);
    }
    else
    {
        cout << "\nError: Month not in Budget Planner!\n";
        MainMenu(budget);
    }
}

void BudgetPlannerMenu::ExitProgram()
{
    //TODO -> WriteDataIntoFile();
    exit(0);
}