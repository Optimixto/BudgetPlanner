#include <iostream>
#include <string>
#include <vector>

#include "BudgetPlanner.hpp"
#include "BudgetPlannerMenu.hpp"

using namespace std;

BudgetPlanner sampleData()
{
    BudgetPlanner myBudget;
    myBudget.AddMonth("January");
    myBudget.AddMonth("February");
    myBudget.AddMonth("March");
    myBudget.AddMonth("April");

    int testMonthPosition = myBudget.AccessMonth("January");
    myBudget.months.at(testMonthPosition).AddEntry("rent", false, 533.4f);
    myBudget.months.at(testMonthPosition).AddEntry("car", true, 23.4f);
    myBudget.months.at(testMonthPosition).AddEntry("shop", true, 53.4f);


    testMonthPosition = myBudget.AccessMonth("February");
    myBudget.months.at(testMonthPosition).AddEntry("rent", false, 333.4f);
    myBudget.months.at(testMonthPosition).AddEntry("car", true, 63.4f);
    myBudget.months.at(testMonthPosition).AddEntry("shop", true, 53.4f);

    testMonthPosition = myBudget.AccessMonth("March");
    myBudget.months.at(testMonthPosition).AddEntry("rent", false, 633.4f);
    myBudget.months.at(testMonthPosition).AddEntry("car", true, 13.4f);
    myBudget.months.at(testMonthPosition).AddEntry("shop", true, 53.4f);

    testMonthPosition = myBudget.AccessMonth("April");
    myBudget.months.at(testMonthPosition).AddEntry("rent", false, 133.4f);
    myBudget.months.at(testMonthPosition).AddEntry("car", true, 233.4f);
    myBudget.months.at(testMonthPosition).AddEntry("shop", true, 53.4f);

    return myBudget;
}

void tests()
{
    //Tests BudgetPlanner:
    cout << "Start Budget: " << endl;
    BudgetPlanner myBudget;
    myBudget.AddMonth("January");
    myBudget.AddMonth("February");
    myBudget.AddMonth("March");
    myBudget.AddMonth("April");

    myBudget.PrintBudgetPlanner();

    cout << "Add existing month: " << endl;
    myBudget.AddMonth("February");

    myBudget.PrintBudgetPlanner();

    //Tests Month:
    //initialize a month and add some data
    cout << "Access January: " << endl;
    int testMonthPosition = myBudget.AccessMonth("January");

    myBudget.months.at(testMonthPosition).PrintMonth();

    //Use all the functions
    cout << "Add entries: " << endl;
    myBudget.months.at(testMonthPosition).AddEntry("rent", false, 833.4f);
    myBudget.months.at(testMonthPosition).AddEntry("car", true, 43.4f);
    myBudget.months.at(testMonthPosition).AddEntry("shop", true, 53.4f);

    myBudget.months.at(testMonthPosition).PrintMonth();

    cout << "Delete entry: " << endl;
    myBudget.months.at(testMonthPosition).DeleteEntry("shop");

    myBudget.months.at(testMonthPosition).PrintMonth();

    cout << "Modify entry: " << endl;
    myBudget.months.at(testMonthPosition).ModifyEntry("car", 200.3f);

    myBudget.months.at(testMonthPosition).PrintMonth();

    //Double test
    cout << "Show updated Budget: " << endl;
    myBudget.PrintBudgetPlanner();
}

int main () {
    
    //tests();
    //TODO -> Read data

    BudgetPlannerMenu::MainMenu(sampleData());
}