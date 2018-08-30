#include <iostream>

using namespace std;

int main()
{
    int score; //Initialize Score
    cout << "Please enter your score" << endl; //User is prompted to enter score
    cin >> score;

    if  (score >= 80)
       {
          cout <<"Your grade is A" <<endl;
        cout <<"Outstanding" << endl;
       }

       else if (score >=75 && score <=79 )
       {
         cout <<"Your grade is B+" <<endl;
        cout <<"Very Good" << endl;
       }

       else if (score >=70 && score <=74 )
       {
         cout <<"Your grade is B" <<endl;
        cout <<"Good" << endl;
       }

        else if (score >=65 && score <=69 )
       {
         cout <<"Your grade is C+" <<endl;
        cout <<"Fairly Good" << endl;
       }

        else if (score >=60 && score <=64 )
       {
         cout <<"Your grade is C" <<endl;
        cout <<"Good" << endl;
       }

        else if (score >=55 && score <=59 )
       {
         cout <<"Your grade is D+" <<endl;
        cout <<"Below Average" << endl;
       }

        else if (score >=50 && score <=54 )
       {
         cout <<"Your grade is D" <<endl;
        cout <<"Marginal Pass" << endl;
       }

        else if (score >=45 && score <=49 )
       {
         cout <<"Your grade is E" <<endl;
        cout <<"Unsatisfactory" << endl;
       }

        else
       {
         cout <<"Your grade is F" <<endl;
        cout <<"Fail" << endl;
       }

    return 0;
}
