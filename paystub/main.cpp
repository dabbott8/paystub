#include <iostream>
#include <string>


using namespace std;
int main() 
{
	string strFirstName = "";
	string strLastName = "";
	double dblGrossAmount = 0;
	double dblFederalTax = 0;
	double dblStateTax = 0;
	double dblNetPay = 0;
	double dblMedical = .0275;
	double dblPension = .05;
	int intHealthInsurance = 75;
	double dblDeductions;
	
	
	cout << "Enter employee first name" <<endl;
	cin >> strFirstName; 
	cout << "Enter employee first name" <<endl;
	cin >> strLastName;
	cout << "Enter Gross income" <<endl;
	cin >> dblGrossAmount;
	
	dblFederalTax = dblGrossAmount *.15;
	dblDeductions = dblFederalTax + dblMedical + dblPension;
	dblNetPay = (dblGrossAmount - dblDeductions)-intHealthInsurance;
	
	
	
	cout << strFirstName << " " << strLastName <<"\n" 
		<< "Gross amount" << " ............ " << "$" << dblGrossAmount <<"\n" 
		<< "Federal Tax" << "  ............ " << "$" << dblFederalTax <<"\n"
		<< "State Tax" << "    ............ " << "$" << dblStateTax <<"\n"
		<< "...\n" 
		<< "Net Pay" << "      ............ " << "$" << dblNetPay
		<< endl;
	
	
	return 0;
}
