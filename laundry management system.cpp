#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fstream>
#include<string.h>
#include<conio.h>
using namespace std;
//char laundarynumber[20];
int sum=0;
void menustudent();
void get();

///////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////// CLOTH CLASS //////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////

class CLOTH
{
	public:
		char laundarynumber[20];
		char numbertshirt[3];
		char numbershirt[3];
		char numberjeans[3];
		char numberpyjama[3];
		char numbershorts[3];
	//	char yourname[50];
	//	char yourroomnumber[20];
	//	char yourphonenumber[20];
	public:
	int createcloth()
	{
			cout<<"\n********* ENTER CLOTH NUMBER **************";
		cout<<"\n\n\t\t Enter Laundry Number :- ";
		cin>>laundarynumber;
		fflush(stdin);
		cout<<"\n\n\t\t\tNumber Of Shirts :- ";
		gets(numbershirt);
		cout<<"\n\n\t\t\tNumber Of Tshirts :- ";
		gets(numbertshirt);
		cout<<"\n\n\t\t\tNumber Of Jeans :-";
		gets(numberjeans);
		cout<<"\n\n\t\t\tNumber Of Pyjama :-";
		gets(numberjeans);
		cout<<"\n\n\t\t\tNumber Of Shorts :-";
		gets(numbershorts);
		cout<<"\n\n\nPRESS ANY KEY TO CONTINUE....................";
		getch();
		system("cls");
		return 1;
	}
	int showcloth()
	{
		system("cls");
		cout<<"********* CLOTH GIVEN **********";
		cout<<"\n\n\t Laundry Number :- "<<laundarynumber;
		fflush(stdin);
		cout<<"\n\n\t\t\tNumber Of Shirts :- ";
		puts(numbershirt);
		cout<<"\n\n\t\t\tNumber Of Tshirts :- ";
		puts(numbertshirt);
		cout<<"\n\n\t\t\tNumber Of Jeans :-";
		puts(numberjeans);
		cout<<"\n\n\t\t\tNumber Of Pyjama :-";
		puts(numberjeans);
		cout<<"\n\n\t\t\tNumber Of Shorts :-";
		puts(numbershorts);
		cout<<"\n\n\nPRESS ANY KEY TO CONTINUE....................";
		getch();
		system("cls");
		return 1;
	}
	int modifycloth()
	{
		cout<<"******* ENTER CLOTH DETAIL THAT YOUR GIVING *****************";
		cout<<"\n\n\t\tEnter Laundry Number :- "<<laundarynumber;
		fflush(stdin);
		cout<<"\n\n\t\t\tNumber Of Shirts :- ";
		gets(numbershirt);
		cout<<"\n\n\t\t\tNumber Of Tshirts :- ";
		gets(numbertshirt);
		cout<<"\n\n\t\t\tNumber Of Jeans :-";
		gets(numberjeans);
		cout<<"\n\n\t\t\tNumber Of Pyjama :-";
		gets(numberjeans);
		cout<<"\n\n\t\t\tNumber Of Shorts :-";
		gets(numbershorts);
		cout<<"\n\n\nPRESS ANY KEY TO CONTINUE....................";
		getch();
		system("cls");
		return 1;
	}
	char* retadmno()
		{
			return laundarynumber;
		}		
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////delivery date and pick up date class////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

class PICKUP
{
	public:
		char laundarynumber[20];
		char pickupdate[20];
		char pickuptime[20];
		char deliverydate[20];
		char deliverytime[20];
	public:
		int createdate()
		{
			system("cls");
			cout<<"\n********** Enter Pickup And Delivery Date ***********";
			cout<<"\n\n\t\tEnter Laundry Number :- ";
			cin>>laundarynumber;
			fflush(stdin);
			cout<<"\n\n\t\tEnter Pickup Date (date/month/year) :-";
			gets(pickupdate);
			cout<<"\n\n\t\tEnter PickUp Time (hour:minutes) :- ";
			gets(pickuptime);
			cout<<"\n\n\t\tEnter Delivery Date (date/month/year) :-";
			gets(deliverydate);
			cout<<"\n\n\t\tEnter Delivery Time (hour:minute) :- ";
			gets(deliverytime);
			cout<<"\n\n\nPRESS ANY KEY TO CONTINUE....................";
			getch();
			system("cls");
		//	menustudent();
			return 1;
		}
		int showdate() 
		{
			system("cls");
			cout<<"\n********* Pickup And Delivery Date ***********";
			cout<<"\n\n\t\tLaundry Number :-"<<laundarynumber;
			cout<<"\n\n\t\tPick Up Date (date/month/year) :-";
			puts(pickupdate);
			cout<<"\n\n\t\tPickUp Time (hour:minute) :-";
			puts(pickuptime);
			cout<<"\n\n\t\tDelivery date (date/month/year) :-";
			puts(deliverydate);
			cout<<"\n\n\t\tDelivery Time (hour:minute) :-";
			puts(deliverytime);
			cout<<"\n\n\nPRESS ANY KEY TO CONTINUE....................";
			getch();
			system("cls");
		//	menustudent();
			return 1;
		}
		int modifydate()
		{
			system("cls");
			cout<<"\n********** Enter Pickup And Delivery Date ***********";
			cout<<"\n\n\t\tEnter Laundry Number :- "<<laundarynumber;
			fflush(stdin);
			cout<<"\n\n\t\tEnter Pickup Date (date/month/year) :-";
			gets(pickupdate);
			cout<<"\n\n\t\tEnter PickUp Time (hour:minutes) :- ";
			gets(pickuptime);
			cout<<"\n\n\t\tEnter Delivery Date (date/month/year) :-";
			gets(deliverydate);
			cout<<"\n\n\t\tEnter Delivery Time (hour:minute) :- ";
			gets(deliverytime);
			cout<<"\n\n\nPRESS ANY KEY TO CONTINUE....................";
			getch();
			system("cls");
			return 1;
		//	menustudent();
		}
		char* retadmno()
		{
			
			return laundarynumber;
		}
};

/////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////Bill Class////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

class BILL
{
	public:
		char laundarynumber[20]; 
		char billamount[100];
	public:
		int createbill()
		{
			system("cls");
			cout<<"\n******** Bill **********";
			cout<<"\n\n\tEnter Laundry Number :-";
			cin>>laundarynumber;
			//cout<<"l="<<laundarynumber<<endl;
			fflush(stdin);
			//cout<<"l="<<laundarynumber<<endl;
			cout<<"\n\t\tEmter Bill Amount :-";
			gets(billamount);
		//	menustudent();
			cout<<"\n\n\nPRESS ANY KEY TO CONTINUE....................";
			getch();
			system("cls");
			return 1;
		}
		int showbill()
		{
			system("cls");
			cout<<"\n************ Bill **********";
			cout<<"\n\n\t\tLaundry Number :- ";
			puts(laundarynumber);
			cout<<"\n\n\t\tBill Amount :- ";
			puts(billamount);
			cout<<"PRESS ANY KEY TO CONTINUE.................";
			getch();
			fflush(stdin);
			return 1;
		//	menustudent();
		}
		int modifybill()
		{
			system("cls");
			cout<<"************ Bill *****************";
			cout<<"\n\n\t\tLaundry Number :-"<<laundarynumber;
			//billamount=billamount+sum;
			fflush(stdin);
			cout<<"\n\n\n\t\tBill Amount :-";
			gets(billamount);
			cout<<"\n\n\nPRESS ANY KEY TO CONTINUE....................";
			getch();
			system("cls");
		//	menustudent();
			return 1;
		}
		char* retadmno()
		{
			return laundarynumber;
		}
};

///////////////////////////////////////////////////////////////////////////////////
////////////////////////////////ADMIN CLASS////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////

class ADMIN
{
	public:
		char laundarynumber[20];
		char studentname[50];
		char roomnumber[20];
		char phonenumber[20];
	public:
		int createstudent()
		{
			system("cls");
			cout<<"\n*************** NEW STUDENT REGISTRATION ***************";
			cout<<"\n\n\tEnter The Student Laundry Number:-";
			cin>>laundarynumber;
			fflush(stdin);
			cout<<"\n\n\tEnter The Name Of Student:-";
			gets(studentname);
			cout<<"\n\n\tEnter The Room Number Student:-";
			gets(roomnumber);
			cout<<"\n\n\tEnter The Student Phone Number:-";
			gets(phonenumber);
			cout<<"\n\nRECORD CREATED SUCCESSFULLY";
			cout<<"\n\nPLEASE PRESS ANY KEY TO CONTINUE...............................";
			getch();
			fflush(stdin);
			return (1);
		}
		int showstudent()
		{
			system("cls");
			cout<<"\n**************** Details Of Student **********************";
			cout<<"\n\n\tLaundry Number :- "<<laundarynumber;
			fflush(stdin);
			cout<<"\n\n\tStudent Name :- ";
			puts(studentname);
			cout<<"\n\n\ttRoom Number :- ";
			puts(roomnumber);
			cout<<"\n\n\tPhone Number :- ";
			puts(phonenumber);
			cout<<"\n\nPLEASE PRESS ANY KEY TO CONTINUE...............................";
			getch();
			fflush(stdin);
			//cout<<"\n\t\tBill Amount :- ";
			//put(billamount);
			return 1;
		}
	/*	void modifybill()
		{
			cout<<"***********Update Student Bills**********";
			cout<<"\n\n\tLaundary Number :- "<<laundarynumber;
			cout<<"\n\n\tStudent Name :- ";
			put(studentname);
			cout<<"\n\n\tRoom Number :- ";
			put(roomnumber);
			cout<<"\n\n\tPhone NUmber :- ";
			put(phonenumber);
			cout<<"\n\n\tEnter Bill Amount :- ";
			get(billamount);
		}*/
		int modifystudent()
		{
			system("cls");
			cout<<"******************* Update Student Details ********************";
			cout<<"\n\n\tLaundry Number :-"<<laundarynumber;
			cout<<"\n\n\tStudent Name :-";
			gets(studentname);
			cout<<"\n\n\tRoom Number :-";
			gets(roomnumber);
			cout<<"\n\n\tPhone Number :-";
			gets(phonenumber);
			cout<<"\n\nPLEASE PRESS ANY KEY TO CONTINUE...............................";
			getch();
			fflush(stdin);
			return 1;
		}
		/*void deliverydetails()
		{
			cout<<"***************** Pick Up And Delivery Date ************";
			cout<<"\n\n\tEnter Laundary Number";
		}*/
		char* retadmno()
		{
			return laundarynumber;
		}
};

///////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////STUDENT CLASS//////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////

class STUDENT
{
	public:
		char laundarynumber[20];
		char yourname[50];
		char yourroomnumber[20];
		char yourphonenumber[20];
	public:
		int createyours()
		{
			system("cls");
			cout<<"\n********** Enter Your Details **********";
			cout<<"\n\n\tEnter The Student Laundry Number:-";
			cin>>laundarynumber;
			fflush(stdin);
			cout<<"\n\n\tEnter The Name Of Student:-";
			gets(yourname);
			cout<<"\n\n\tEnter The Room Number Student:-";
			gets(yourroomnumber);
			cout<<"\n\n\tEnter The Student Phone Number:-";
			gets(yourphonenumber);
			cout<<"\n\n\n Data Enter Successfully ";
			cout<<"\n\nPLEASE PRESS ANY KEY TO CONTINUE...............................";
			getch();
			fflush(stdin);
			return 1;
		//	system("cls");
		//	menustudent();
		}
		int showyour()
		{
			system("cls");
			cout<<"*********** Your Personal Details ***********";
			cout<<"\n\n\tLaundry Number :- ";
			puts(laundarynumber);
			cout<<"\n\n\tStudent Name :- ";
			puts(yourname);
			cout<<"\n\n\tRoom Number :- ";
			puts(yourroomnumber);
			cout<<"\n\n\tPhone Number :- ";
			puts(yourphonenumber);
			//cout<<"\n\t\tBill Amount :- ";
			//put(billamount);
			cout<<"Press Any Key To Contine............";
			getch();
			return 1;
		//	system("cls");
		//	menustudent();
		}
		int modifyyour()
		{
			system("cls");
			cout<<"************** Update Your Details ***********";
			cout<<"\n\n\tLaundry Number :-"<<laundarynumber;
			fflush(stdin);
			cout<<"\n\n\tStudent Name :-";
			gets(yourname);
			cout<<"\n\n\tRoom Number :-";
			gets(yourroomnumber);
			cout<<"\n\n\tPhone Number :-";
			gets(yourphonenumber);
			//cout<<"\n\n\t Bill Amount :-";
			//put(billamount);
			cout<<"\n\nPLEASE PRESS ANY KEY TO CONTINUE...............................";
			getch();
			fflush(stdin);
			return 1;
		}
		char* retadmno()
		{
			return laundarynumber;
		}
};

//////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////CREATE FILES//////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////


fstream fp,fp1,fp2,fp3,fp4;
STUDENT s;
ADMIN a;
BILL b;
PICKUP c;
CLOTH d;

int studentwrite()
{
	char ch;
	fp.open("STUDENT.txt",ios::out|ios::app);
	int o=s.createyours();
	fp.write((char*)&s,sizeof(STUDENT));
		
	fp.close();
	//cout<<"\n\nPress Any Key To Contine............";
	//getch();
	//system("cls");
//	menustudent();
return 1;
}
int laundarywrite()
{
	char ch;
	fp.open("ADMIN.txt",ios::out|ios::app);
	int o=a.createstudent();
	fp.write((char*)&a,sizeof(ADMIN));
	fp.close();
//	cout<<"\n\nPress Any Key To Contine............";
//	getch();
	//system("cls");
//	menuadmin();
	return (1);
}
int billwrite()
{
	char ch;
	fp.open("BILL.txt",ios::out|ios::app);
	int o=b.createbill();
	fp.write((char*)&b,sizeof(BILL));
	fp.close();
	//cout<<"\n\nPress Any Key To Contine............";
	//getch();
	//system("cls");
//	meunstudent();
	return (1);
}
int datewrite()
{
	char ch;
	fp.open("PICKUP.txt",ios::out|ios::app);
	int o=c.createdate();
	fp.write((char*)&c,sizeof(PICKUP));
	fp.close();
	cout<<"\n\nPress Any Key To Contine............";
	getch();
	system("cls");
//	meunstudent();
	return (1); 
}
int clothwrite()
{
	char ch;
	fp.open("CLOTH.txt",ios::out|ios::app);
	int o=d.createcloth();
	fp.write((char*)&d,sizeof(CLOTH));
	fp.close();
	//cout<<"\n\nPress Any Key To Contine............";
	//getch();
	//system("cls");
	return (1);
}

///////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////// READ FROM A FILE ////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////

int displaystudent(char n[])
{
	//char n[20];
	//cout<<"###### YOUR DETAILS ##########";
	int flag=0;
	int o;
	//cout<<"ENTER YOUR LAUNDARY NUMBER :-";
	//gets(n);
	fp.open("STUDENT.txt",ios::in);
	while(fp.read((char*)&s,sizeof(STUDENT)))
	{
		if(strcmpi(s.retadmno(),n)==0)
		{
			o=s.showyour();
			flag=1;
		}
	}
	fp.close();
	if(flag==0)
	{
		cout<<"\n\nSTUDENT DOES NOT EXIST";
	}
	getch();
	//cout<<"\n\nPress Any Key To Contine............";
	//getch();
	//system("cls");
	return 1;
}
int displaylaundary(char n[])
{
	//cout<<"####### DETAILS OF STUDENT ############";
	int flag=0;
	int o;
	fp.open("ADMIN.txt",ios::in);
	while(fp.read((char*)&a,sizeof(ADMIN)))
	{
		if(strcmpi(a.retadmno(),n)==0)
		{
			o=a.showstudent();
			flag=1;
		}
	}
	fp.close();
	if(flag==0)
	{
		cout<<"\n\nSTUDENT DOES NOT EXIST";
	}
	//getch();
	//cout<<"\n\nPress Any Key To Contine............";
	//getch();
	system("cls");
	return(1);
	
}
int displaydate(char n[])
{
	//cout<<"####### DATE AND TIME OF PICKUP AND DELIVERY ############";
	int flag=0;
	int o;
	fp.open("PICKUP.txt",ios::in);
	while(fp.read((char*)&c,sizeof(PICKUP)))
	{
		if(strcmpi(c.retadmno(),n)==0)
		{
			o=c.showdate();
			flag=1;
		}
	}
	fp.close();
	if(flag==0)
	{
		cout<<"\n\nSTUDENT DOES NOT EXIST";
	}
	//getch();
	//cout<<"\n\nPress Any Key To Contine............";
	//getch();
	//system("cls");
	return(1);
}
int displaybill(char n[])
{
	//cout<<"n="<<n;
	//cout<<"####### BILL ############";
	int flag=0;
	int o;
	fp.open("BILL.txt",ios::in);
	while(fp.read((char*)&b,sizeof(BILL)))
	{
		if(strcmpi(b.retadmno(),n)==0)
		{
			o=b.showbill();
			flag=1;
		}
	}
	fp.close();
	if(flag==0)
	{
		cout<<"\n\nSTUDENT DOES NOT EXIST";
	}
	//getch();
	//cout<<"\n\nPress Any Key To Contine............";
	//getch();
	//system("cls");
	return 1;
}
int displaycloth(char n[])
{
	int flag=0;
	int o;
	fp.open("CLOTH.txt",ios::in);
	while(fp.read((char*)&d,sizeof(CLOTH)))
	{
		if(strcmpi(d.retadmno(),n)==0)
		{
			o=d.showcloth();
			flag=1;
		}
	}
	fp.close();
	if(flag==0)
	{
		cout<<"\n\nCLOTH RECORD DOES NOT EXIST";
	}
	//getch();
	//cout<<"\n\nPress Any Key To Contine............";
	//getch();
	//system("cls");
	return 1;
}

////////////////////////////////////////////////////////////////////////////////
///////////////////////////////// MODIFY THE FILES ////////////////////////////
///////////////////////////////////////////////////////////////////////////////

int modifystudent()
{
	char n[20];
	int found=0;
	int o;
	system("cls");
	cout<<"Enter Your Laundry Number :-";
	cin>>n;
	fflush(stdin);
	fp.open("STUDENT.txt",ios::in|ios::out);
	while(fp.read((char*)&s,sizeof(STUDENT))&&found==0)
	{
		if(strcmpi(s.retadmno(),n)==0)
		{
			o=s.showyour();
			cout<<"\n\n\tEnter Your New Details"<<endl;
			o=s.modifyyour();
			int pos=-1*sizeof(s);
			fp.seekp(pos,ios::cur);
			fp.write((char*)&s,sizeof(STUDENT));
			cout<<"\n\n\n\t\tRECORD UPDATES";
			found=1;
		}
	}
	fp.close();
	if(found==0)
	{
		cout<<"\n\n\t\tRecord Not Found";
		getch();
	}
	return 1;
}

int modifylaundary()
{
	char n[20];
	int found=0;
	int o;
	system("cls");
	cout<<"Enter Your Laundry Number :-";
	cin>>n;
	fp.open("ADMIN.txt",ios::in|ios::out);
	while(fp.read((char*)&a,sizeof(ADMIN))&&found==0)
	{
		if(strcmpi(a.retadmno(),n)==0)
		{
			o=a.showstudent();
			cout<<"\n\n\tEnter Your New Details"<<endl;
			o=a.modifystudent();
			int pos=-1*sizeof(a);
			fp.seekp(pos,ios::cur);
			fp.write((char*)&a,sizeof(ADMIN));
			cout<<"\n\n\n\t\tRECORD UPDATES";
			found=1;
		}
	}
	fp.close();
	if(found==0)
	{
		cout<<"\n\n\t\tRecord Not Found";
		getch();
	}
	return 1;
}

int modifyamount()
{
	char n[20];
	int found=0;
	int o;
	system("cls");
	cout<<"Enter Student Laundry Number :-";
	cin>>n;
	fp.open("BILL.txt",ios::in|ios::out);
	while(fp.read((char*)&b,sizeof(BILL))&&found==0)
	{
		if(strcmpi(b.retadmno(),n)==0)
		{
			o=b.showbill();
			cout<<"\n\n\tEnter Your New Details"<<endl;
			o=b.modifybill();
			int pos=-1*sizeof(b);
			fp.seekp(pos,ios::cur);
			fp.write((char*)&b,sizeof(BILL));
			cout<<"\n\n\n\t\tRECORD UPDATES";
			found=1;
		}
	}
	fp.close();
	if(found==0)
	{
		cout<<"\n\n\t\tRecord Not Found";
		getch();
	}
	return 1;
}

/*void modifybill()
{
	char n[20];
	int found=0;
	system("cls");
	cout<<"Enter Your Laundary Number :-";
	cin>>n;
	fp.open("BILL.txt",ios::in|ios::out);
	while(fp.read((char*)&b,sizeof(BILL))&&found==0)
	{
		if(strcmpi(b.retadmno(),n)==0)
		{
			b.showbill();
			cout<<"\n\n\tEnter Your New Details"<<endl;
			b.modifybill();
			int pos=-1*sizeof(s);
			fp.seekp(pos,ios::cur);
			fp.write((char*)&s,sizeof(STUDENT));
			cout<<"\n\n\n\t\tRECORD UPDATES";
			found=1;
		}
	}
	fp.close();
	if(found==0)
	{
		cout<<"\n\n\t\tRecord Not Found";
		getch();
	}
}*/

int modifydate()
{
	char n[20];
	int found=0;
	int o;
	system("cls");
	cout<<"Enter Your Laundry Number :-";
	cin>>n;
	fp.open("PICKUP.txt",ios::in|ios::out);
	while(fp.read((char*)&c,sizeof(PICKUP))&&found==0)
	{
		if(strcmpi(c.retadmno(),n)==0)
		{
			o=c.showdate();
			cout<<"\n\n\tEnter Your New Details"<<endl;
			o=c.modifydate();
			int pos=-1*sizeof(c);
			fp.seekp(pos,ios::cur);
			fp.write((char*)&c,sizeof(PICKUP));
			cout<<"\n\n\n\t\tRECORD UPDATES";
			found=1;
		}
	}
	fp.close();
	if(found==0)
	{
		cout<<"\n\n\t\tRecord Not Found";
		getch();
	}
	return 1;
}

int modifycloth()
{
	char n[20];
	int found=0;
	int o;
	system("cls");
	cout<<"Enter Your Laundry Number :-";
	cin>>n;
	fflush(stdin);
	fp.open("CLOTH.txt",ios::in|ios::out);
	while(fp.read((char*)&d,sizeof(CLOTH))&&found==0)
	{
		if(strcmpi(d.retadmno(),n)==0)
		{
			o=d.showcloth();
			//cout<<"\n\n\tEnter Your New Details"<<endl;
			o=d.modifycloth();
			int pos=-1*sizeof(d);
			fp.seekp(pos,ios::cur);
			fp.write((char*)&d,sizeof(CLOTH));
			cout<<"\n\n\n\t\tRECORD UPDATES";
			found=1;
		}
	}
	fp.close();
	if(found==0)
	{
		cout<<"\n\n\t\tRecord Not Found";
		getch();
	}
	return 1;
}

///////////////////////////////////////////////////////////////////////////////////
////////////////////////////// STUDENT MENU ///////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////

void menustudent()
{
	STUDENT s; 
	int i;
	int o;
	cout<<"########### WELCOME STUDENT ####################\n\n";
	cout<<"\n\n\t\t1.If Login In First Time Enter Your Details\n\n\n\t\t2.See Your Details\n\n\n\t\t3.Update Your Details\n\n\n\t\t4.See Your Bill\n\n\n\t\t5.Enter Cloth Details\n\n\n\t\t6.See Cloth Details\n\n\n\t\t7.Enter PickUp and Delivery Date\n\n\n\t\t8.See PickUp And Delivery Date\n\n\n\t\t9.Exit";
	cout<<"\n\n\t\t Enter Your Choise :-";
	cin>>i;
	if(i==1)
	{
		//system("cls");
		o=studentwrite();
		system("cls");
		menustudent();
	}
	else if(i==2)
	{
		//cout<<"under construction";
		//s.showyour();
		system("cls");
		char num[20];
		cout<<"Please Enter Your Laundry Number :-";
		cin>>num;
		fflush(stdin);
		o=displaystudent(num);
		system("cls");
		menustudent();
	}
	else if(i==3)
	{
		//cout<<"under construction";
		o=modifystudent();
		system("cls");
		menustudent();
	}
/*	else if(i==4)
	{
		billwrite();
	}*/
	else if(i==4)
	{
		//cout<<"under construction";
		system("cls");
		char num[20];
		cout<<"Please Enter Your Laundry Number :-";
		cin>>num;
		fflush(stdin);
		o=displaybill(num);
		system("cls");
		menustudent();
	}
	else if(i==5)
	{
		o=modifycloth();
		system("cls");
		menustudent();
	}
	else if(i==6)
	{
		system("cls");
		char num[20];
		cout<<"Please Enter Your Laundry Number :-";
		cin>>num;
		fflush(stdin);
		o=displaycloth(num);
		system("cls");
		menustudent();
	}
	else if(i==7)
	{
		o=modifydate();
		system("cls");
		menustudent();
	}
	else if(i==8)
	{
		system("cls");
		char num[20];
		cout<<"Please Enter Your Laundry Number :-";
		cin>>num;
		fflush(stdin);
		o=displaydate(num);
		system("cls");
		menustudent();
	}
	else if(i==9)
	{
		exit(1);
	}
}

///////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////// ADMIN MENU //////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

void menuadmin()
{
	int i,a1,a2,a3,a4;
	int o;
	system("cls");
	cout<<"################ WELCOME ADMIN ######################";
	cout<<"\n\n\t\t1.Create A New Student Record\n\n\n\t\t2.View A Particular Student Record\n\n\n\t\t3.Update The Bill Of A Particular Student\n\n\n\t\t4.Cloth Detail Of A Particular Studen\n\n\n\t\t5.PickUp And Delivery Details\n\n\n\t\t6.Exit";
	cout<<"\n\n\n\t\tPlease Enter Your Choise :- ";
	cin>>i;
	switch(i)
	{
		case 1:
		{
			system("cls");
			a1=laundarywrite();
			a2=billwrite();
			a3=clothwrite();
			a4=datewrite();
			break;
		}
		case 2:
			{
				system("cls");
				char num[20];
				cout<<"Please Enter The Laundry Number :-";
				cin>>num;
				fflush(stdin);
				o=displaylaundary(num);
				system("cls");
				break;
			}
		case 3:
			{
				o=modifyamount();
				system("cls");	
				break;
			}
		case 4:
			{
				system("cls");
				char num[20];
				cout<<"Please Enter The Laundry Number :-";
				cin>>num;
				fflush(stdin);
				o=displaycloth(num);
				system("cls");
				break;
			}
		case 5:
			{
				system("cls");
				char num[20];
				cout<<"Please Enter The Laundry Number :-";
				cin>>num;
				fflush(stdin);
				o=displaydate(num);
				system("cls");
				break;
			}
		case 6:
			{
				exit (1);
				break;
			}	
	}
	menuadmin();
}

/////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////// LOGIN OF ADMIN ///////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////

void login()
{
	char ch[21],ch1[21]={"pass"};
	cout<<"\n\n\tEnter The Password :-";
	cin>>ch;
//ch1[21]={"pass"};
	int b=0;
	int n=strlen(ch);
	int n1=strlen(ch1);
	cout<<"n="<<n<<endl<<"n1="<<n1<<endl;
	if(n1==n)
	{
		for(int i=0;i<n;i++)
		{
			if(ch[i]==ch1[i])
			{
				
			}
			else if(ch[i]!=ch1[i])
			{
				b=1;
			}
		}
		if(b==0)
		{
			menuadmin();
		}
		else if(b==1)
		{
			cout<<"Wrong Password\n";
			cout<<"Press any key ...............";
			getch();
			system("cls");
		}
	}
	else 
	{
		cout<<"Wrong Password\n";
		cout<<"Press any key ...............";
		getch();
		system("cls");
		get();
	}
}

/////////////////////////////////////////////////////////////////////////////////
///////////////////////////// THE MAIN INTERFACE ////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

void get()
{
	int i;
        cout<<"\n\t*********** LAUNDRY MANAGEMENT SYSTEM ***********\n"<<"\n\t\t\t    L M S C++\n";
        cout<<"\n\t\t>>Please Choose Any Option To login \n";
        cout<<"\n\t\t1.Student\n\n\t\t2.Admin\n\n\t\t3.Close Application\n";
        cout<<"\n\t\tEnter your choice : ";
        cin>>i;
        if(i==1)
        {
            system("cls");
            menustudent();
        }
        else if(i==2)
            login();

        else if(i==3)
            exit(0);
        else
        {
            cout<<"\n\t\tPlease enter correct option :(";
            getch();
            system("CLS");
           get();
        }
}

/////////////////////////////////////////////////////////
//////////////////////////// MAIN //////////////////////
//////////////////////////////////////////////////////

int main()
{
	get();
}
