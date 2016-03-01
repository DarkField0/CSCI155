#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()

{

	// here is the datastring length=4&width=5&height=6

	// Variables
	int Number1, Number2, Number3, Number4, cost, charge, profit, volume;
	const double COST_PER_CUBIC_FOOT = 0.23;
  const double CHARGE_PER_CUBIC_FOOT = 0.5;
	

	string str = "";

	cin >> str;

	string str1 = str.substr(7,1);

	string str2 = str.substr (15,1);
      
        string str3 = str.substr (24,1);


	stringstream(str1) >> Number1;

	stringstream(str2) >> Number2;

	stringstream(str3) >> Number3;

	Number4 = Number1 * Number2 * Number3;


	cout << "Content-type: text/html" << endl << endl;

        cout << "<html><head><title>customer order</title></head><body>" << endl;
        
        cout << "Data received: "  << str << endl << "<br>";
	
	cout << "Length: "  << Number1 << endl << "<br>";

	cout << "Width: "  << Number2 << endl << "<br>";

	cout << "Height: "  << Number3 << endl << "<br>" ;

	cout << "The total Volume: " <<  Number4 << " cubic feet" << endl << "<br>";
	
	volume = Number4;
	cost = volume * COST_PER_CUBIC_FOOT;
	charge = volume * CHARGE_PER_CUBIC_FOOT;
	profit = charge - cost;
		
	cout << "The amount it costs to build crate: $" << cost << endl << "<br>";
	cout << "The amount we charge the customer: $" << charge << endl << "<br>";
	cout << "The amount of profit we earn: $" << profit << endl << "<br>";

	cout << "</body></html>" << endl;

	return 0;

}
