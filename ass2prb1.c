/* 
Fouad Aswad
104357145
May 25th, 2016
This program takes an item number, price, date of purchase, and formats inputted information in a visually appealing manner.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float item_number = 0;//Defining and initializing variable to be assigned the item number
    float unit_price = 0;//Defining and initializing variable to be assigned the unit price
    float pur_date_month1 = 0;//Defining and initializing variable to be assigned the first digit of the month inputted
    float pur_date_month2 = 0;//Defining and initializing variable to be assigned the second digit of the month inputted
    float pur_date_day1 = 0;//Defining and initializing variable to be assigned the first digit of the day inputted
    float pur_date_day2 = 0;//Defining and initializing variable to be assigned the second digit of the day inputted
    float pur_date_year1 = 0;//Defining and initializing variable to be assigned the first digit of the year inputted
    float pur_date_year2 = 0;//Defining and initializing variable to be assigned the second digit of the year inputted
    float pur_date_year3 = 0;//Defining and initializing variable to be assigned the third digit of the year inputted
    float pur_date_year4 = 0;//Defining and initializing variable to be assigned the fourth digit of the year inputted

    printf("Enter item number: ");//Prompt to enter item number
    scanf(" %f", &item_number);//Scans for input to assign to variable 'item_number'

    printf("Enter unit price: ");//Prompt to enter unit price
    scanf(" %f", &unit_price);//Scans for input to assign to variable 'unit_price'


    printf("Enter purchase date(mm/dd/yyyy): ");//Prompt to enter date in a mm/dd/yyyy format
    scanf(" %1f%1f/%1f%1f/%1f%1f%1f%1f", &pur_date_month1, &pur_date_month2, &pur_date_day1, &pur_date_day2, &pur_date_year1, &pur_date_year2, &pur_date_year3, &pur_date_year4);//Scans for input and assigns variables to their respective input

    printf("\n\n\tItem\t\tUnit\t\tPurchase\n");//Creates two lines and prints categories, each tabbed twice
    printf("\t\t\tPrice\t\tDate\n\n");//Prints "price" and "date" and aligns words with respective upper counterparts


    printf("\t%.0f\t\t$ %.2f\t\t%.0f%.0f/%.0f%.0f/%.0f%.0f%.0f%.0f\n\n", item_number, unit_price, pur_date_month1, pur_date_month2, pur_date_day1, pur_date_day2, pur_date_year1, pur_date_year2, pur_date_year3, pur_date_year4);//Prints variables 'item_number', 'unit_price', and the date variables in formatted manner
    return 0;
}
