//Student Name: Patrick Freehill

//Teacher: Dr. Tyson McMillan

//Date:11/24/2021

//A program to practice working with multi-dimensional arrays

#include <iostream>

using namespace std;

/*

Research Input data: go to http://www.weather.com (Links to an external site.)

Pick two cities of your choice. Fill in the temperature for the 7 days of this week of both cities. Fill in this text data table, which will be used in your program.

//City_One = 1, City_Two = 2  Replace City_One and City_Two with the names of your cities

//Data Table

//City X, Day X: Temp

City 1, Day 1: 45

City 1, Day 2: 56

City 1, Day 3: 66

City 1, Day 4: 55

City 1, Day 5: 67

City 1, Day 6: 66

City 1, Day 7: 40

City 2, Day 1: 50

City 2, Day 2: 46

City 2, Day 3: 34

City 2, Day 4: 39

City 2, Day 5: 40

City 2, Day 6: 39

City 2, Day 7: 41

*/

 

int main()

{
int cityOne[]{45, 56, 66, 55, 67, 66, 40};
int cityTwo[]{50, 46, 34, 39, 40, 39, 41};

      const int CITY = 2;

      const int WEEK = 7;

 

    int temperature[CITY][WEEK];

    //Note your input data from the above

    cout << "Enter all temperature for a week of first city and then second city. \n";

 

    // Inserting the values into the temperature array

    //note for every dimension of the array you need a for loop 2 dimensions = 2 for loops

    for (int i = 0; i < CITY; ++i)

    {

        for(int j = 0; j < WEEK; ++j)

        {

          temperature[i][j] = cityOne[j];

          for(int i=1; i < CITY; ++i)
          {
            temperature[i][j] = cityTwo[j];
          }

        }

    }

 

    cout << "\n\nDisplaying Values:\n";

 

    // Accessing the values from the temperature array

    for (int i = 0; i < CITY; i++)

    {

        for(int j = 0; j < WEEK; ++j)

        {

            cout << "City " << i + 1 << ", Day " << j + 1 << " = " << temperature[i][j] << endl;

        }

    }

   /*For up to 5 Points Extra Credit

      Expand this program:

      1. Create a one dimensional array, cityOne[7] to store the 7 temperatures of city 1, assume that value 0 represents day 1, 1 represents day 2....

      2. Create a on dimensional array, cityTwo[7] to store the 7 temperatures of city 2 , assume that value 0 represents day 1, 1 represents day 2....

      3. Using a for loop (or nested for loop), feed the data of CityOne[] and CityTwo[] into temperature[i][j], where i is index of the City Number, and j is the index of the temp for the day.

      4. print the results of temperature[i][j]; to the screen.

    */

 

 

    return 0;

}