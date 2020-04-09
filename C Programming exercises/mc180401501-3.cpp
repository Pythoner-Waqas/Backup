#include <iostream>
#include <cstring>
using namespace std;


class TaxPayer
{
	private:
		char *TaxPayerName;
		char *Filer;
		double Property_value;
	
	public:
	
		TaxPayer(char *TaxPayerName, double Property_value, char *Filer)
		{
			int len1 = strlen(TaxPayerName);
			this->TaxPayerName = new char[len1+1];
			strcpy(this->TaxPayerName,TaxPayerName);
			
			int len2 = strlen(Filer);
			this->Filer = new char[len2+1];
			strcpy(this->Filer,Filer);
			
			this->Property_value = Property_value;
		}
		
		~TaxPayer()
		{	
			delete[] this->TaxPayerName;
			delete[] this->Filer;
		}
		
		double GetPropertyValue()
		{
			return Property_value;			
		}
		
		double GetAdvanceIncomeTax()
		{
			double incomeTax = 0.0;
			if (strcmp(this->Filer,"Filer")==0)
			{
				incomeTax = 0.02*this->Property_value;
			}
			else
			{
				incomeTax = 0.04*this->Property_value;
			}
			
			return incomeTax;
		}
		
		virtual void Calculate_Total_Tax()
		{
		}
		
		void Info()
		{
			cout << "Tax Payer Name: "<< this->TaxPayerName<<endl;
			cout << "Property Value: "<< this->Property_value<<endl;
		}
		
		
};

class Seller:public TaxPayer
{
	private:
		double CapitalGainTax;
		double PropertyPurchasePrice;
		double Profit;
		int soldyear;
		double TotalTax;
	
	public:
		Seller(char *TaxPayerName, double Property_value, double PropertyPurchaseValue, char *Filer, int sold_year):TaxPayer(TaxPayerName,Property_value,Filer)
		{
			this->PropertyPurchasePrice = PropertyPurchaseValue;
			this->soldyear = sold_year;
		}
		
		double Calculate_CGT()
		{
			if (this->soldyear <=3 && this->soldyear>0)
			{
				this->Profit = this->GetPropertyValue() - this->PropertyPurchasePrice;
				switch(this->soldyear)
				{
					case 1:
					{	
						this->CapitalGainTax = this->Profit*0.10;
						break;
					}
					case 2:
					{
						this->CapitalGainTax = this->Profit*0.075;
						break;
				    }
					default:
					{
						this->CapitalGainTax = this->Profit*0.05;
						break;
					}
				}
			}
			return this->CapitalGainTax;
		}
		
		virtual void Calculate_Total_Tax()
		{
			this->TotalTax = this->GetAdvanceIncomeTax() + this->Calculate_CGT();
			cout << "Seller Tax" << endl<<"-------------"<<endl<<endl;
			this->Info();
			cout << "Sold Year: " << this->soldyear<<endl;
			cout << "Income Tax: "<< this->GetAdvanceIncomeTax()<<endl;
			cout << "Capital Gain Tax: "<< this->CapitalGainTax<<endl;
			cout << "Total Tax of Seller: "<< this->TotalTax<<endl;
		}
};

class Purchaser:public TaxPayer
{
	private:
		double CapitalValueTax;
		double StampDuty;
		double TotalTax;
	public:
		Purchaser(char *TaxPayerName, double Property_value, char *Filer):TaxPayer(TaxPayerName,Property_value,Filer)
		{
		}
		
		virtual void Calculate_Total_Tax()
		{
			double value = this->GetPropertyValue();
			this->CapitalValueTax = value*0.03;
			this->StampDuty = value*0.02;
			this->TotalTax = this->GetAdvanceIncomeTax()+this->CapitalValueTax+this->StampDuty;
			
			cout << endl;
			cout << "Purchaser Tax" << endl<<"-------------"<<endl<<endl;
			this->Info();
			cout << "Capital Value Tax: " << this->CapitalValueTax<<endl;
			cout << "Stamp Duty: "<< this->StampDuty<<endl;
			cout << "Income Tax: "<< this->GetAdvanceIncomeTax()<<endl;
			cout << "Total Tax of Purchaser: "<< this->TotalTax<<endl;	
		}
};


main()
{
	Seller seller((char *)"Kamran", 500000,300000,(char *)"Filer",2);
	Purchaser purchaser((char *)"Bilal", 500000,(char *)"Non-Filer");
	
	TaxPayer *obj[2];
	obj[0] = &seller;
	obj[1] = &purchaser;
	
	for (int i=0;i<2;i++)
	{
		obj[i]->Calculate_Total_Tax();
	}

}

