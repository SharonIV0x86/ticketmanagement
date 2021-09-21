#include <iostream>
#include <string>
using namespace std;
class Tickets
{
public:
     string namesofbuyers;
     int numberfoticks;

     int tickets_sold_on_day_1, tickets_sold_on_day_2, tickets_sold_on_day_3, tickets_sold_on_day_4;
     ;

     string buyer1, buyer2, buyer3, buyer4;
};

int main()
{
     cout << "<<<<<ENTER THE NAMES OF THE BUYERS>>>>>" << endl
          << endl
          << endl
          << endl;

     Tickets b1;
     b1.buyer1;
     cout << "Enter the name of the buyer 1: ";
     cin >> b1.buyer1;

     Tickets b2;
     b2.buyer2;
     cout << "Enter the name of the buyer 2: ";
     cin >> b2.buyer2;

     Tickets b3;
     b3.buyer3;
     cout << "Enter the name of the buyer 3: ";
     cin >> b3.buyer3;

     Tickets b4;
     b4.buyer4;
     cout << "Enter the name of the buyer 4: ";
     cin >> b4.buyer4;

     {
          cout << "<<<<<ENTER THE NUMBER OF TICKETS SOLD ON EACH DAY>>>>>" << endl
               << endl
               << endl
               << endl;
     }

     Tickets t1;
     t1.tickets_sold_on_day_1;
     cout << "Enter the number of tickets sold on day 1: ";
     cin >> t1.tickets_sold_on_day_1;

     Tickets t2;
     t2.tickets_sold_on_day_2;
     cout << "Enter the number of tickets sold on day 2: ";
     cin >> t2.tickets_sold_on_day_2;

     Tickets t3;
     t3.tickets_sold_on_day_3;
     cout << "Enter the number of tickets sold on day 3: ";
     cin >> t3.tickets_sold_on_day_3;

     Tickets t4;
     t4.tickets_sold_on_day_4;
     cout << "Enter the number of tickets sold on day 4: ";
     cin >> t4.tickets_sold_on_day_4;

     cout << "The name of first buyer is: " << b1.buyer1 << " and number of tickets sold on day 1 are: " << t1.tickets_sold_on_day_1 << endl
          << endl
          << endl
          << endl;
     cout << "The name of the second buyer is: " << b2.buyer2 << " and the number of tickets sold on day 2 are: " << t2.tickets_sold_on_day_2 << endl
          << endl
          << endl
          << endl;
     cout << "The name of the third buyer is: " << b3.buyer3 << " and the number of tickets sold on day 3 are: " << t3.tickets_sold_on_day_3 << endl
          << endl
          << endl
          << endl;
     cout << "The name of thr fourth buyer is: " << b4.buyer4 << " and the number of tickets sold on day 4 are: " << t4.tickets_sold_on_day_4 << endl
          << endl
          << endl
          << endl;

     cout << "<<<<<THE TOTAL NUMBER OF TICKETS SOLD ON ALL 4 DAY ARE:>>>>> " << t1.tickets_sold_on_day_1 + t2.tickets_sold_on_day_2 + t3.tickets_sold_on_day_3 + t4.tickets_sold_on_day_4 << endl
          << endl
          << endl
          << endl;

     cout << "THANKS FOR TAKING A LOOK AT THE CODE I APPRECIATE IT, I AM STILL WORKING ON MY LEARNING PROCESS AND SURELY WILL ADD MORE CHANGES TO THIS PROGRAM X) " << endl;
}
