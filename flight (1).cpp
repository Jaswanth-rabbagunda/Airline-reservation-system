#include <iostream>
#include<fstream>
#include<string.h>
using namespace std;
int dom_pnr=100;
int int_pnr=200;
class dom_booking{
    protected:
        int d_pnr,dom_passengers,dom_meal_choice;
         char flight_dom[50],dom_meal[20], meal1[20];;
        char date_dom[10],dom_dep[20],dom_arr[20];
        char dsourplace[15],ddesplace[15];
        int choice_dom,source,destination;
    public:
    void generate_dom_pnr(){
        dom_pnr++;
        d_pnr=dom_pnr;
    };
    int travel_details_dom()
    {
        cout << "\nPlease enter date of departure (DD/MM/YY):" <<  endl;
        cin >> date_dom;

        cout << "-----------------"<<endl;
        cout<<  "      SOURCE     "<<endl;
        cout << "-----------------"<<endl;
        cout << "1.New Delhi(1)" << endl ;
        cout <<"2.Chennai(2)" << endl;
        cout <<"3.Kolkata(3)" << endl;
        cout <<"4.Mumbai(4) " << endl;
        cout << "------------------\n"<<endl;
        cout << "Enter your source:" << endl;
        cin >> source;
        if(source==1){strcpy(dsourplace,"New Delhi");}
        else if(source==2){strcpy(dsourplace,"Chennai");}
        else if(source==3){strcpy(dsourplace,"Kolkata");}
        else{strcpy(dsourplace,"Mumbai");}
        cout << "-----------------"<<endl;
        cout<<  "  DESTINATION     "<<endl;
        cout << "-----------------"<<endl;
        cout << "1.New Delhi(1)" << endl;
        cout <<"2.Chennai(2)" << endl;
        cout <<"3.Kolkata(3)" << endl;
        cout <<"4.Mumbai(4)" << endl;
        cout << "------------------\n"<<endl;
        cout << "Enter your destination :" << endl;
        cin >> destination;
        if(destination==1){strcpy(ddesplace,"New Delhi");}
        else if(destination==2){strcpy(ddesplace,"Chennai");}
        else if(destination==3){strcpy(ddesplace,"Kolkata");}
        else {strcpy(ddesplace,"Mumbai");}
        if((source==1 && destination==2) || (source==2 && destination==1))
        {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
            cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "SpiceJet(3)\t19:00\t\t22:05\t\tRs.6000\n";
        }
        else if((source==1 && destination==3) || (source==3 && destination==1))
        {
            cout << "\t \t \tAvailable flights" << endl << endl;
           cout<<"-------------------------------------------------------"<<endl;
           cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "SpiceJet(3)\t19:00\t\t22:05\t\tRs.6000\n";
        }
        else if((source==1 && destination==4) || (source==4 && destination==1))
        {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
           cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
        }

        else if((source==2 && destination==3) || (source==3 && destination==2))
        {
            cout << "\t \t \tAvailable flights" << endl << endl;
           cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
        }
        else if((source==2 && destination==4) || (source==4 && destination==2))
        {
           cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;;
           cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "SpiceJet(3\t18:00\t\t21:05\t\tRs.6000\n";
        }
        else if((source==3 && destination==4) || (source==4 && destination==3))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
            cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
        }
        else if(source==destination)
        {
            cout << "\nSource and destination are the same.Please enter try again.\n\n\n" << endl;
            return travel_details_dom();
        }
        else
        {
            cout <<"\nYou have entered the wrong input entered.Please try again\n\n\n" << endl;
            return travel_details_dom();
        }
    }
    int select_flight_dom()
    {
        cout << "\nEnter your choice : " << endl;
        cin >> choice_dom;
        switch(choice_dom)
        {
          case 1:
                cout << "\nYour travel information"<<endl;
                cout<<"---------------------------------------"<<endl;
                cout << "Flight name : Air India"<<endl;
                strcpy(flight_dom,"Air India");
                cout << "Departure Time : 08:00"<<endl;
                cout<<"Arrival Time: 11:05"<<endl;
                strcpy(dom_dep,"08:00");
                strcpy(dom_arr,"11:05");
                break;
          case 2:
                cout << "\nYour travel information:"<<endl;
                cout<<"---------------------------------------"<<endl;
                cout << "Flight name : Indigo"<<endl;
                strcpy(flight_dom,"Indigo");
                cout << "Departure Time : 14:00"<<endl;
                cout<<"Arrival Time: 17:05"<<endl;
                strcpy(dom_dep,"14:00");
                strcpy(dom_arr,"17:05");
                break;
          case 3:
                cout << "\nYour travel information" << endl;
                cout<<"---------------------------------------"<<endl;
                cout << "Flight name : SpiceJet" << endl;
                strcpy(flight_dom,"SpiceJet");
                cout << "Departure Time : 18:00" << endl;
                cout<<"Arrival Time: 21:05" << endl;
                strcpy(dom_dep,"18:00");
                strcpy(dom_arr,"21:05");
                break;
          default:
                cout << "\nYou have entered the wrong input entered.Try again\n\n\n" << endl;
                return select_flight_dom();
        }
    }
    void dom_meals(){
        cout<<"---------------------------------------"<<endl;
		cout <<"Please enter your meal preference : "<<endl;
        cout<<"---------------------------------------"<<endl;
		cout << "1.Vegetarian meal(1): Rs.300 \n";
		cout << "2.Non-Vegetarian meal(2) : Rs.500\n";
		cout << "3.No meal(3)\n\n";
		cout <<"Enter your choice :  ";
        cin >> dom_meal_choice;
		while(dom_meal_choice>3 || dom_meal_choice<1){
		cout<<"You have entered the wrong input.Please a number between 1 and 3\n";
		cin>>dom_meal_choice;
		}
		{
		if (dom_meal_choice == 1){
		strcpy(meal1,"Vegetarian Meal");
		}
		else if (dom_meal_choice == 2){
		strcpy(meal1,"Non-Vegetarian Meal");
		}
		else{
		strcpy(meal1,"No Meal");
		}
		 cout<<"You have chosen "<<meal1<<endl;
        }
    }
};

class int_booking
{
    protected:
        int i_pnr,int_passengers,int_meal_choice,int_meal_price;
        char flight_int[20],int_dep[20],int_arr[20],meal2[30],int_meal_choices[20],date_int[20];
        char isourplace[15],idesplace[15];
        int source_int,destination_int,choice_int;
    public:
        void generate_int_pnr()
        {
            int_pnr++;
           i_pnr=int_pnr;
        }
    int travel_details_int()
    {
        cout << "\nEnter date of departure (DD/MM/YY) :" <<  endl;
        cin>>date_int;

        cout<<  "\n      SOURCE     "<<endl;
        cout << "-----------------"<<endl;
        cout << "1.Dubai(1)" << endl ;
        cout <<"2.Kuala Lumpur(2)" << endl ;
        cout <<"3.Hong Kong(3)" << endl ;
        cout <<"4.Delhi(4) " << endl ;
        cout << "------------------\n"<<endl;
        cout << "Enter your source:" << endl;
        cin >> source_int;
        if(source_int==1){strcpy(isourplace,"Dubai");}
        else if(source_int==2){strcpy(isourplace,"Kuala Lumpur");}
        else if(source_int==3){strcpy(isourplace,"Hong Kong");}
        else{strcpy(isourplace,"Delhi");}
        cout<<  "\n  DESTINATION     "<<endl;
        cout << "-----------------"<<endl;
        cout << "1.Dubai(1)" << endl ;
        cout <<"2.Kuala Lumpur(2)" << endl;
        cout <<"3.Hong Kong(3)" << endl;
        cout <<"4.Delhi(4) " << endl ;
        cout << "------------------\n"<<endl;
        cout << "Enter your destination : \n" << endl;
        cin >> destination_int;
        if(destination_int==1){strcpy(idesplace,"Dubai");}
        else if(destination_int==2){strcpy(idesplace,"Kuala Lumpur");}
        else if(destination_int==3){strcpy(idesplace,"Hong Kong");}
        else {strcpy(idesplace,"Delhi");}
       if((source_int==1 && destination_int==2) || (source_int==2 && destination_int==1))
        {
            cout << "\t \t \tAvailable flights" << endl;
            cout<<"-------------------------------------------------------"<<endl;
            cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Lufthansa(1)\t04:10\t\t08:30\t\tRs.14,010\n";
            cout << "Emirates(2)\t14:00\t\t18:05\t\tRs.15,120\n";
            cout << "Vistara(3)\t22:00\t\t02:10\t\tRs.12,500\n";
        }
        else if((source_int==1 && destination_int==3) || (source_int==3 && destination_int==1))
        {
           cout << "\t \t \tAvailable flights" << endl;
           cout<<"-------------------------------------------------------"<<endl;
            cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Lufthansa(1)\t04:10\t\t08:30\t\tRs.23,010\n";
            cout << "Emirates(2)\t14:00\t\t18:05\t\tRs.28.340\n";
            cout << "Vistara(3)\t22:00\t\t02:10\t\tRs.29,320\n";
        }
        else if((source_int==1 && destination_int==4) || (source_int==4 && destination_int==1))
        {
            cout << "\t \t \tAvailable flights" << endl;
            cout<<"-------------------------------------------------------"<<endl;
            cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Lufthansa(1)\t04:10\t\t08:30\t\tRs.10,500\n";
            cout << "Emirates(2)\t14:00\t\t18:05\t\tRs.9,120\n";
            cout << "Vistara(3)\t22:00\t\t02:10\t\tRs.10,550\n";
        }
        else if((source_int==2 && destination_int==3) || (source_int==3 && destination_int==2))
        {
            cout << "\t \t \tAvailable flights" << endl;
            cout<<"-------------------------------------------------------"<<endl;
            cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Lufthansa(1)\t04:10\t\t08:30\t\tRs.14,010\n";
            cout << "Emirates(2)\t14:00\t\t18:05\t\tRs.15,120\n";
            cout << "Vistara(3)\t22:00\t\t02:10\t\tRs.12,500\n";
        }
        else if((source_int==2 && destination_int==4) || (source_int==4 && destination_int==2))
        {
           cout << "\t \t \tAvailable flights" << endl;
           cout<<"-------------------------------------------------------"<<endl;
            cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Lufthansa(1)\t04:10\t\t08:30\t\tRs.14,010\n";
            cout << "Ethiad(2)\t14:00\t\t18:05\t\tRs.15,120\n";
            cout << "Vistara(3)\t22:00\t\t02:10\t\tRs.12,500\n";
        }
        else if((source_int==3 && destination_int==4) || (source_int==4 && destination_int==3))
        {
            cout << "\t \t \tAvailable flights" << endl;
            cout<<"-------------------------------------------------------"<<endl;
            cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Lufthansa(1)\t04:10\t\t08:30\t\tRs.14,010\n";
            cout << "Emirates(2)\t14:00\t\t18:05\t\tRs.15,120\n";
            cout << "Vistara(3)\t22:00\t\t02:10\t\tRs.12,500\n";

        }
        else if(source_int==destination_int)
        {
            cout << "\nSource and destination are the same.Please enter try again.\n" << endl;
            return travel_details_int();
        }
        else
        {
            cout <<"\nYou have entered the wrong input entered.Try again\n" << endl;
            return travel_details_int();
        }
    }
    int select_flight_int()
    {
        cout << "\nEnter your choice : " << endl;
        cin >> choice_int;
        switch(choice_int){
        case 1:
            cout << "\nYour travel information" <<endl;

            cout<<"-----------------------------\n"<<endl;
            cout << "Flight name :Lufthansa" << endl;
            strcpy(flight_int,"Lufthansa");
            cout << "Departure Time: 04:10" << endl;
            cout << "Arrival Time: 14:05" << endl;
            strcpy(int_dep,"10:00");
            strcpy(int_arr,"14:05");
            break;
        case 2:
               cout << "\nYour travel information" << endl;
               cout<<"-----------------------------\n"<<endl;
               cout << "Flight name:Emirates" << endl;
               strcpy(flight_int,"Emirates");
               cout << "Departure Time: 14:00" << endl;
               cout << "Arrival Time: 18:05" << endl;
               strcpy(int_dep,"14:00");
               strcpy(int_arr,"18:05");
               break;
        case 3:
            cout << "\nYour travel information" << endl;
            cout<<"-----------------------------\n"<<endl;
            cout << "Flight name:Vistara" << endl;
            strcpy(flight_int,"Vistara");
            cout << "Departure Time : 18:00" << endl;
            cout << "Arrival Time: 22:05" << endl;
            strcpy(int_dep,"18:00");
            strcpy(int_arr,"22:05");
            break;
        default:
            cout << "\nYou have entered the wrong input entered.Try again\n\n\n" << endl;
            return select_flight_int();}
        }

    void int_meal(){
        cout<<"------------------"<<endl;
		cout <<"Meal preferences "<<endl;
		cout<<"------------------"<<endl;
		cout << "1.Vegetarian meal(1): Rs.450 \n";
		cout << "2.Non-Vegetarian meal(2) : Rs.600\n";
		cout << "3.No meal(3)\n\n";
		cout <<"Enter your choice :  ";
		cin >> int_meal_choice;
		while(int_meal_choice>3 ||int_meal_choice<1){
		cout<<"You have entered the wrong input.Please enter a number between 1 and 3\n";
		cin>>int_meal_choice;
		}
        {
        if (int_meal_choice== 1){
		strcpy(meal2,"Vegetarian Meal");
		}
		else if (int_meal_choice == 2){
		strcpy(meal2,"Non-Vegetarian Meal");
		}
		else{
		strcpy(meal2,"No Meal");
		}
        }
        cout<<"You have chosen "<<meal2<<endl;
        }
};

class passenger: public dom_booking,public int_booking
{
protected:
    char name[100],email[50],gender[20],pass_no[30],contact_no[30];
public:
    void passenger_details(int x)
    {

        if(x==1)
        { travel_details_dom();
          select_flight_dom();
          dom_meals();
        }
        else
          { travel_details_int();
            select_flight_int();
            int_meal();
          }

        cout << "\nEnter the required details:\n";
        cout<<"------------------------------------\n"<<endl;
        cout << "Enter your name : ";
        cin >> name;
        cout << "Enter your email ID : ";
        cin >> email;
        cout << "Enter your gender : ";
        cin >> gender;
        cout<<"Enter your contact number : ";
        cin>>contact_no;
        cout<<"Enter your passport number : ";
        cin>>pass_no;
    }
        void display_details(){

        cout << "\nPassenger details\n";
        cout<<"--------------------------------------\n"<<endl;;
        cout << "Name : " <<name<< endl;
        cout << "Gender : " << gender << endl;
        cout << "Email ID : " << email << endl;
        cout << "Contact No.: " << contact_no << endl;
        cout<<"Passport number : "<<pass_no<<endl;
    }
    int getpnr_dom()
    {
        return d_pnr;
    }

    int getpnr_int()
    {
        return i_pnr;
    }

    void disp_dom()
    {
        cout<<"PNR : " << d_pnr << endl;
        cout <<"Name : " <<name<< endl;
        cout<<"Flight : " << flight_dom << endl;
        cout<<"Source : "<<dsourplace << endl;
        cout<<"Boarding date : " << date_dom << endl;
        cout<<"Destination : " <<ddesplace << endl;
        cout<<"Departure Time : " << dom_dep << endl;
        cout<<"Arrival Time : " << dom_arr<<endl;
        cout<<"Meal choice : "<<meal1<<endl;
    }
    void disp_int()
    {
        cout<<"PNR : " << i_pnr << endl;
        cout <<"Name : " <<name<< endl;
        cout<<"Flight : " << flight_int << endl;
        cout<<"Source : "<<isourplace << endl;
        cout<<"Boarding date : " << date_int << endl;
        cout<<"Destination : " <<idesplace << endl;
        cout<<"Departure Time : " << int_dep << endl;
        cout<<"Arrival Time : " << int_arr<<endl;
        cout<<"Meal choice : "<<meal2<<endl;
    }
};

class payment{
        protected:
            int choice3,bank,bank1,card,cvv;
            string date,user_id;
            char password[30];
        public:
            void payment_details()
           {

                cout << "\nMode of payment\n";
                cout << "\n1.Debit Card(1) \n2.Credit Card(2) \n3.Net Banking(3)";
                cout << "\n\nEnter your choice :";
                cin >> choice3;
                switch(choice3)
                {
                case 1:
                    cout << "Enter card number:";
                    cin >> card;
                    cout << "Enter expiry date:";
                    cin >> date;
                    cout << "Enter CVV number:";
                    cin >> cvv;
                    cout << "Transaction Successful\n";
                    break;
                case 2:
                    cout << "Enter card number:";
                    cin >> card;
                    cout << "Enter expiry date:";
                    cin >> date;
                    cout << "Transaction Successful\n";
                    break;
                case 3:
                    cout << "\nBanks Available:\n----------- \n1.State bank of India(1) \n2.ICICI(2) \n3.Axis Bank(3) \n4.HDFC(4)";
                    cout << "\nSelect your bank:";
                    cin >> bank;
                    cout << "\nYou have selected:" << bank;
                    cout << "\nEnter user id:";
                    cin >> user_id;
                    cout << "Enter password:";
                    cin >> password;
                    cout<<"-----------------------------";
                    cout << "\nTransaction Successful\n";
                    cout<<"-----------------------------";
                    break;
                default:
                    cout << "\nWrong input entered.\nTry again\n";
                    return payment_details();
                }
            }
};

void createfile_dom(passenger y){
    ofstream file_out("Domestic_flight_details.txt",ios::binary|ios::app);
    file_out.write((char*)&y,sizeof(y));
    file_out.close();
}

void dom_cancelticket(int x){
    passenger y;
    int f=0;
    ifstream file_in("Domestic_flight_details.txt",ios::binary|ios::app);
    ofstream file_out("Domestic_flight_details1.txt",ios::binary|ios::app);
    file_in.read((char *)&y,sizeof(y));
    while(file_in){
        if(y.getpnr_dom()!=x)
        file_out.write((char *)&y,sizeof(y));
        else{
            y.disp_dom();
            cout<<"\nYour  ticket has been deleted\n";
            f++;
        }
        file_in.read((char *)&y,sizeof(y));
    }
    if(f==0)
    cout<<"Ticket not found\n";
    file_out.close();
    file_in.close();
    remove("Domestic_flight_details.txt");
    rename("Domestic_flight_details1.txt","Domestic_flight_details.txt");
}

void dom_checkticket(int x){
    passenger y;
    int f=0;
    ifstream file_in("Domestic_flight_details.txt",ios::binary);
    file_in.read((char *)&y,sizeof(y));
    while(file_in){
    if(y.getpnr_dom()==x){
        cout<<"\nTicket details\n"<<endl;
        y.disp_dom();
        f++;
        break;
        }
    file_in.read((char *)&y,sizeof(y));
    }
    file_in.close();
    if(f==0)
    cout<<"This PNR number does not exist"<<endl;
}

void createfile_int(passenger y){
    ofstream  file_out("International.txt",ios::binary|ios::app);
    file_out.write((char*)&y,sizeof(y));
    file_out.close();
}

void int_cancelticket(int x){
    passenger y;
    int f=0;
    ifstream file_in("International.txt",ios::binary|ios::app);
    ofstream  file_out("International1.txt",ios::binary|ios::app);
    file_in.read((char *)&y,sizeof(y));
    while(file_in){
        if(y.getpnr_int()!=x)
        file_out.write((char *)&y,sizeof(y));
        else{
            y.disp_int();
            cout<<"You ticket is being deleted\n";
            f++;
            }
        file_in.read((char *)&y,sizeof(y));
        }
    if(f==0)
    cout<<"\nTicket not found\n";
    file_in.close();
    file_out.close();
    remove("International.txt");
    rename("International1.txt","International.txt");
}

void int_checkticket(int x){
    passenger y;
    int f=0;
    ifstream file_in("International.txt",ios::binary);
    file_in.read((char *)&y,sizeof(y));
    while(file_in){
        if(y.getpnr_int()==x){
            cout<<"\nTicket details\n"<<endl;
            y.disp_int();
            f++;
            break;
            }
        file_in.read((char *)&y,sizeof(y));
        }
    file_in.close();
    if(f==0)
    cout<<"This PNR number does not exist"<<endl;
}

int main(){
    class dom_booking d;
    class int_booking i;
    class passenger p;
    class payment pay;
    int choice,choice1,choice2,choice3,input;
    char input1;
    do{

        cout<<"AIRLINE RESERVATION SYSTEM"<<endl;
        cout<<"--------------------------------"<<endl;
        cout << "1.Book flight(1) \n2.Cancel fight(2) \n3.Check your flight ticket(3) \n4.Exit(4)" << endl;
        cout<<"--------------------------------"<<endl;
        cout<<"Enter your choice:"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:

            cout<<"Please enter your choice"<<endl;
            cout << "1.Domestic Fights(1)\n2.International Flights(2)" << endl;
            cout << "\nEnter your option" << endl;
            cin >> choice1;
            switch(choice1){
                case 1:
                p.generate_dom_pnr();
                p.passenger_details(1);
                pay.payment_details();
                p.display_details();
                p.disp_dom();
                createfile_dom(p);
                break;
                case 2:
                p.generate_int_pnr();
                p.passenger_details(2);
                pay.payment_details();
                p.display_details();
                p.disp_int();
                createfile_int(p);
                break;
                default:
                cout << "Wrong input.\nPlease enter 1 for domestic flight booking and 2 for international flight booking" << endl;
                return main();
                }
                break;
                case 2:

                cout << "1.Domestic Fights(1) \n2.International Flights(2)" << endl;
                cout << "\nPlease enter your option" << endl;
                cin >> choice2;
                if(choice2==1)
                {
                    cout << "Enter your PNR number :" << endl;
                    cin>>input;
                    dom_cancelticket(input);
                }
                else if(choice2==2)
                {
                    cout << "Enter your PNR number :" << endl;
                    cin>>input;
                    int_cancelticket(input);
                }
                else
                {
                    cout << "Wrong input.\n";
                    return main();
                }
                break;
                case 3:

                cout << "Check your tickets" << endl;
                cout<<"------------------------"<<endl;
                cout << "1.Domestic Fights(1) \n2.International Flights(2)" << endl;
                cout << "\nEnter your option :" << endl;
                cin >> choice3;
                if(choice3==1)
                {
                    cout << "\nEnter your PNR number :" << endl;
                    cin>>input;
                    dom_checkticket(input);}
                else if(choice3==2)
                {
                    cout << "\nEnter your PNR number :" << endl;
                    cin>>input;
                    int_checkticket(input);
                }
                else
                {
                    cout << "Wrong input.";
                    return main();
                }
                break;
                case 4:

                return 0;
                default:
                cout << "Wrong input.Please enter the correct input \n" << endl;
                return main();
        }
        cout<<"\nDo you wish to continue? (Y/N)" << endl;
        cin >> input1;
    }
    while(input1=='Y' || input1=='y');
    return 0;
}
