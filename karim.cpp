#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
    time_t now = time(0);
    char* timestring = ctime(&now);
      cout << "Press the number for the system whose electric bill you want to calculate\n";
    cout << "1. Home\n";
    cout << "2. Small-scale industries\n";
    cout << "3. Religious institutions\n";
    cout << "4. Educational institutions\n";
    cout << "5. Street lights\n";
    cout << "If you want to calculate manually, then press 0\n";

    int press;
    cin >> press;

    cout << "Enter electricity consumption in kWh: " << endl;
    int unit;
    cin >> unit;

    double bill;

    if (press == 1) {

 if(unit<=75)
             {
                 bill=75*3.80;
             }
             else if(unit>75&&unit<=200)
             {
                 bill=75*3.80+(unit-75)*5.14;
             }
             else if(unit>200&&unit<=300)
             {
                 bill=75*3.80+125*5.14+(unit-200)*5.36;
             }
             else if(unit>300&&unit<=400)
             {
                 bill=75*3.80+125*5.14+100*5.36+(unit-300)*5.63;
             }
             else if(unit>400&&unit<=600)
             {
                  bill=75*3.80+125*5.14+100*5.36+100*5.63+(unit-400)*8.70;
             }
             else if(unit>600)
             {
                  bill=75*3.80+125*5.14+100*5.36+100*5.63+200*8.70+(unit-600)*9.98;
             }
    } else if (press == 2) {
        bill = unit * 8.53;

    } else if (press == 3 || press == 4) {
        bill = unit * 12;

    } else if (press == 5) {
        bill = unit * 6.2;

    } else if (press == 0) {
        int rate;
        cout << "Enter the per unit rate: ";
        cin >> rate;
        bill = unit * rate;
    }
    cout << "Your electric bill is " << bill <<"taka"<< endl;
     cout << "\nElectric Bill Summary\n";
    cout << "----------------------\n";
    cout << "Timestamp: " <<timestring<<endl;
    cout << "Type: " <<press<<endl;
    cout << "Electricity Consumption: " << unit << " kWh\n";
     cout << "Total Electric Bill: " << bill << " taka\n";
        cout << "----------------------\n";
        cout<<"Do you want to calculate more bill"<<endl;
        cout<<"1.YES\n";
        cout<<"2.NO\n";
        int press2;
        cin>>press2;
        if(press2==2)
        {
            break;
        }
    }
    return 0;
}
