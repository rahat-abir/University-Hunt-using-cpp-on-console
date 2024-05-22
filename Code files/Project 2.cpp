#include<iostream>
#include<fstream>
#include<cstring>
#include<time.h>
#include<windows.h>
#include <algorithm>
using namespace std;
HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );

void first_menu();
void find_university();
int main();
void searchbylocation();
void searchbyname();
void nametemplate();
void change_password();

void subject_review()
{
    system("cls");
    nametemplate();
cout <<"\t\t\t\t\t   "<< char(186) << "   Subject Review    " << char(186) << endl;

cout <<"\t\t\t\t"<< char(218);  for(int i=0; i<21; i++){cout << char(205);}  cout << char(194);  for(int i=0; i<21; i++){cout << char(205);}  cout << char(191) << endl;
cout <<"\t\t\t\t"<< char(186) << "         1.CSE       " << char(186) << "        2.EEE        " << char(186) << endl;
cout <<"\t\t\t\t"<< char(186) << "                     " << char(186) << "                     " << char(186) << endl;
cout <<"\t\t\t\t"<< char(195);  for(int i=0; i<21; i++){cout << char(205);}  cout << char(197);  for(int i=0; i<21; i++){cout << char(205);}  cout << char(185) << endl;
cout <<"\t\t\t\t"<< char(186) << "    3.Architecture   " << char(186) << "  4.civil engineer   " << char(186) << endl;
cout <<"\t\t\t\t"<< char(186) << "                     " << char(186) << "                     " << char(186) << endl;
cout <<"\t\t\t\t"<< char(192);  for(int i=0; i<21; i++){cout << char(205);}  cout << char(193);  for(int i=0; i<21; i++){cout << char(205);}  cout << char(217) << endl;

    cout<<endl<<"Enter your choice: ";
    int choice;
    string ch;
    cin>>choice;
    cout<<endl<<endl;
    if(choice==1)
    {
        fstream my_file;
        my_file.open("C:\\project university hunt txt files\\subject review\\cse.txt", ios::in);
        if (!my_file)
        {
            cout << "File missing from database";
        }
        else
        {
            while(getline(my_file,ch))
            {
                cout<<ch<<endl;
            }
        }
        int choice;
    cin>>choice;
        switch(choice)
    {

    case 0:
        first_menu();
        break;
    case 10:
        first_menu();
        break;
    case 100:
        exit(1);
        break;
    }
    }
    if(choice==2)
    {
        fstream my_file;
        my_file.open("C:\\project university hunt txt files\\subject review\\eee.txt", ios::in);
        if (!my_file)
        {
            cout << "File missing from database";
        }
        else
        {
            while(getline(my_file,ch))
            {
                cout<<ch<<endl;
            }
        }
        int choice;
    cin>>choice;
        switch(choice)
    {

    case 0:
        first_menu();
        break;
    case 10:
        first_menu();
        break;
    case 100:
        exit(1);
        break;
    }
    }
    if(choice==3)
    {
        fstream my_file;
        my_file.open("C:\\project university hunt txt files\\subject review\\architecture.txt", ios::in);
        if (!my_file)
        {
            cout << "File missing from database";
        }
        else
        {
            while(getline(my_file,ch))
            {
                cout<<ch<<endl;
            }
        }
        int choice;
    cin>>choice;
        switch(choice)
    {

    case 0:
        first_menu();
        break;
    case 10:
        first_menu();
        break;
    case 100:
        exit(1);
        break;
    }
    }
    if(choice==3)
    {
        fstream my_file;
        my_file.open("C:\\project university hunt txt files\\subject review\\civil engineer.txt", ios::in);
        if (!my_file)
        {
            cout << "File missing from database";
        }
        else
        {
            while(getline(my_file,ch))
            {
                cout<<ch<<endl;
            }
        }
    }
    int choice2;
    cin>>choice2;
        switch(choice)
    {

    case 0:
        first_menu();
        break;
    case 10:
        first_menu();
        break;
    case 100:
        exit(1);
        break;
    }

}

void news()
{
    string ch;
    cout<<"Get the latest news about admission here."<<endl<<endl<<"NEWS:- ";
    fstream my_file;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    my_file.open("C:\\project university hunt txt files\\news\\main news.txt", ios::in);
    if (!my_file)
    {
        cout << "File missing from database";
    }
    else
    {
        while(getline(my_file,ch))
        {
            cout<<ch<<endl;
        }
    }
    my_file.close();
    cout<<endl<<endl;
    system("pause");
    system("COLOR 3F");
    cout<<endl<<endl<<"0. Go back"<<endl<<"10. main menu"<<endl<<"100. exit"<<endl<<endl<<"Enter your choice: ";
    int choice;
    cin>>choice;
    switch(choice)
    {

    case 0:
        first_menu();
        break;
    case 10:
        first_menu();
        break;
    case 100:
        exit(1);
        break;
    }

}

void searchbygpa()
{
    int choice;
    string ch;
    cout<<"\n\t\tSelect the gpa range you are in:- ";
    cout<<"\n\t\t1. 1-6 \n\t\t2. 6-8 \n\t\t3. 9+\n\n";
    cout<<endl<<endl<<"0. Go back"<<endl<<"10. main menu"<<endl<<"100. exit"<<endl<<endl<<"Enter your choice: ";
    cout<<"Enter your choice: ";
    cin>>choice;
    cout<<endl;
    if(choice==1)
    {
    fstream my_file;
        my_file.open("C:\\project university hunt txt files\\Search files\\gpa\\1-6.txt", ios::in);
        if (!my_file)
        {
            cout << "File missing from database";
        }
        else
        {
            while(getline(my_file,ch))
            {
                cout<<"______________________________________________________________"<<
            "__________________________________________________________"<<endl;
                cout<<ch<<endl;
            }
        }
        my_file.close();
        cout<<endl<<endl<<"1.View details"<<endl<<"0. Go back"<<endl<<"10. main menu"<<endl<<"100. exit"<<endl<<endl<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            searchbyname();
            break;
        case 0:
            find_university();
            break;
        case 10:
            first_menu();
            break;
        case 100:
            exit(1);
            break;
        }
    }
    if(choice==2)
    {
        fstream my_file;
        my_file.open("C:\\project university hunt txt files\\Search files\\gpa\\7-8.txt", ios::in);
        if (!my_file)
        {
            cout << "File missing from database";
        }
        else
        {
            while(getline(my_file,ch))
            {
                cout<<"______________________________________________________________"<<
            "__________________________________________________________"<<endl;
                cout<<ch<<endl;
            }
        }
        my_file.close();
        cout<<endl<<endl<<"1.View details"<<endl<<"0. Go back"<<endl<<"10. main menu"<<endl<<"100. exit"<<endl<<endl<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            searchbyname();
            break;
        case 0:
            find_university();
            break;
        case 10:
            first_menu();
            break;
        case 100:
            exit(1);
            break;
        }
    }
    if(choice==3)
    {
        fstream my_file;
        my_file.open("C:\\project university hunt txt files\\Search files\\gpa\\9+.txt", ios::in);
        if (!my_file)
        {
            cout << "File missing from database";
        }
        else
        {
            while(getline(my_file,ch))
            {
                cout<<"______________________________________________________________"<<
            "__________________________________________________________"<<endl;
                cout<<ch<<endl;
            }
        }
        my_file.close();
        cout<<endl<<endl<<"1.View details"<<endl<<"0. Go back"<<endl<<"10. main menu"<<endl<<"100. exit"<<endl<<endl<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            searchbyname();
            break;
        case 0:
            find_university();
            break;
        case 10:
            first_menu();
            break;
        case 100:
            exit(1);
            break;
        }
    }
    switch(choice)
    {

    case 0:
        find_university();
        break;
    case 10:
        first_menu();
        break;
    case 100:
        exit(1);
        break;
    }

}

void searchbycost()
{
    cout<<"\n1.1 lakh- 5 lakh"<<endl<<"2.5 lakh- 7 lakh"<<endl<<"3.7 lakh - 9 lakh\n";
    cout<<"4.9 - 12 lakh"<<endl;
    cout<<"Enter your choice: ";
    cout<<"Enter your choice : ";
    int choice;
    string ch;
    cin>>choice;
        if(choice==1)
        {
            fstream my_file;
        my_file.open("C:\\project university hunt txt files\\Search files\\cost\\1-5.txt", ios::in);
        if (!my_file)
        {
            cout << "File missing from database";
        }
        else
        {
            while(getline(my_file,ch))
            {
                cout<<"______________________________________________________________"<<
            "__________________________________________________________"<<endl;
                cout<<ch<<endl;
            }
        }
        my_file.close();
        cout<<endl<<endl<<"1.View details"<<endl<<"0. Go back"<<endl<<"10. main menu"<<endl<<"100. exit"<<endl<<endl<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            searchbyname();
            break;
        case 0:
            find_university();
            break;
        case 10:
            first_menu();
            break;
        case 100:
            exit(1);
            break;
        }
        }
        if(choice==2)
        {
            fstream my_file;
        my_file.open("C:\\project university hunt txt files\\Search files\\cost\\5-7.txt", ios::in);
        if (!my_file)
        {
            cout << "File missing from database";
        }
        else
        {
            while(getline(my_file,ch))
            {
                cout<<"______________________________________________________________"<<
            "__________________________________________________________"<<endl;
                cout<<ch<<endl;
            }
        }
        my_file.close();
        cout<<endl<<endl<<"1.View details"<<endl<<"0. Go back"<<endl<<"10. main menu"<<endl<<"100. exit"<<endl<<endl<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            searchbyname();
            break;
        case 0:
            find_university();
            break;
        case 10:
            first_menu();
            break;
        case 100:
            exit(1);
            break;
        }
        }
        if(choice==3)
        {
            fstream my_file;
        my_file.open("C:\\project university hunt txt files\\Search files\\cost\\7-9.txt", ios::in);
        if (!my_file)
        {
            cout << "File missing from database";
        }
        else
        {
            while(getline(my_file,ch))
            {
                cout<<"______________________________________________________________"<<
            "__________________________________________________________"<<endl;
                cout<<ch<<endl;
            }
        }
        my_file.close();
        cout<<endl<<endl<<"1.View details"<<endl<<"0. Go back"<<endl<<"10. main menu"<<endl<<"100. exit"<<endl<<endl<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            searchbyname();
            break;
        case 0:
            find_university();
            break;
        case 10:
            first_menu();
            break;
        case 100:
            exit(1);
            break;
        }
        }
        if(choice==4)
        {
            fstream my_file;
        my_file.open("C:\\project university hunt txt files\\Search files\\cost\\9-12.txt", ios::in);
        if (!my_file)
        {
            cout << "File missing from database";
        }
        else
        {
            while(getline(my_file,ch))
            {
                cout<<"______________________________________________________________"<<
            "__________________________________________________________"<<endl;
                cout<<ch<<endl;
            }
        }
        my_file.close();
        cout<<endl<<endl<<"1.View details"<<endl<<"0. Go back"<<endl<<"10. main menu"<<endl<<"100. exit"<<endl<<endl<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            searchbyname();
            break;
        case 0:
            find_university();
            break;
        case 10:
            first_menu();
            break;
        case 100:
            exit(1);
            break;
        }
        }
    cout<<endl<<endl<<"0. Go back"<<endl<<"10. main menu"<<endl<<"100. exit"<<endl<<endl<<"Enter your choice: ";
    cout<<"Enter your choice: ";
    cin>>choice;
    switch(choice)
    {

    case 0:
        find_university();
        break;
    case 10:
        first_menu();
        break;
    case 100:
        exit(1);
        break;
    }
}

void searchbylocation()
{

    cout<<"1.Dhaka"<<endl<<"2.Sylhet"<<endl<<"3.Rangpur"<<endl<<"4.Rajshahi"<<endl<<"5.Mymensingh"<<endl<<"6.Khulna"<<endl;
    cout<<"7.Chittagong"<<endl<<"8.Barisal"<<endl;
    cout<<endl<<endl<<"0. Go back"<<endl<<"10. main menu"<<endl<<"100. exit"<<endl<<endl<<"Enter your choice: ";
    int choice;
    string data;
    cin>>choice;
    if(choice==1)
    {
        fstream my_file;
        my_file.open("C:\\project university hunt txt files\\Search files\\Location\\dhaka.txt", ios::in);
        if (!my_file)
        {
            cout << "File missing from database";
        }
        else
        {
            while(getline(my_file,data))
            {
                cout<<"______________________________________________________________"<<
            "__________________________________________________________"<<endl;
                cout<<data<<endl;
            }

        }
        my_file.close();
        cout<<endl<<endl<<"1.View details"<<endl<<"0. Go back"<<endl<<"10. main menu"<<endl<<"100. exit"<<endl<<endl<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            searchbyname();
            break;
        case 0:
            find_university();
            break;
        case 10:
            first_menu();
            break;
        case 100:
            exit(1);
            break;
        }
    }
    if(choice==2)
    {
        fstream my_file;
        my_file.open("C:\\project university hunt txt files\\Search files\\Location\\sylhet.txt", ios::in);
        if (!my_file)
        {
            cout << "File missing from database";
        }
        else
        {
            while(getline(my_file,data))
            {
                cout<<"______________________________________________________________"<<
            "__________________________________________________________"<<endl;
                cout<<data<<endl;
            }

        }
        my_file.close();
        cout<<endl<<endl<<"1.View details"<<endl<<"0. Go back"<<endl<<"10. main menu"<<endl<<"100. exit"<<endl<<endl<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            searchbyname();
            break;
        case 0:
            find_university();
            break;
        case 10:
            first_menu();
            break;
        case 100:
            exit(1);
            break;
        }
    }
    if(choice==3)
    {
        fstream my_file;
        my_file.open("C:\\project university hunt txt files\\Search files\\Location\\rangpur.txt", ios::in);
        if (!my_file)
        {
            cout << "File missing from database";
        }
        else
        {
            while(getline(my_file,data))
            {
                cout<<"______________________________________________________________"<<
            "__________________________________________________________"<<endl;
                cout<<data<<endl;
            }

        }
        my_file.close();
        cout<<endl<<endl<<"1.View details"<<endl<<"0. Go back"<<endl<<"10. main menu"<<endl<<"100. exit"<<endl<<endl<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            searchbyname();
            break;
        case 0:
            find_university();
            break;
        case 10:
            first_menu();
            break;
        case 100:
            exit(1);
            break;
        }
    }
    if(choice==4)
    {
        fstream my_file;
        my_file.open("C:\\project university hunt txt files\\Search files\\Location\\rajshahi.txt", ios::in);
        if (!my_file)
        {
            cout << "File missing from database";
        }
        else
        {
            while(getline(my_file,data))
            {
                cout<<"______________________________________________________________"<<
            "__________________________________________________________"<<endl;
                cout<<data<<endl;
            }

        }
        my_file.close();
        cout<<endl<<endl<<"1.View details"<<endl<<"0. Go back"<<endl<<"10. main menu"<<endl<<"100. exit"<<endl<<endl<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            searchbyname();
            break;
        case 0:
            find_university();
            break;
        case 10:
            first_menu();
            break;
        case 100:
            exit(1);
            break;
        }
    }
    if(choice==5)
    {
        fstream my_file;
        my_file.open("C:\\project university hunt txt files\\Search files\\Location\\mymensingh.txt", ios::in);
        if (!my_file)
        {
            cout << "File missing from database";
        }
        else
        {
            while(getline(my_file,data))
            {
                cout<<"______________________________________________________________"<<
            "__________________________________________________________"<<endl;
                cout<<data<<endl;
            }

        }
        my_file.close();
        cout<<endl<<endl<<"1.View details"<<endl<<"0. Go back"<<endl<<"10. main menu"<<endl<<"100. exit"<<endl<<endl<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            searchbyname();
            break;
        case 0:
            find_university();
            break;
        case 10:
            first_menu();
            break;
        case 100:
            exit(1);
            break;
        }
    }
    if(choice==6)
    {
        fstream my_file;
        my_file.open("C:\\project university hunt txt files\\Search files\\Location\\khulna.txt", ios::in);
        if (!my_file)
        {
            cout << "File missing from database";
        }
        else
        {
            while(getline(my_file,data))
            {
                cout<<"______________________________________________________________"<<
            "__________________________________________________________"<<endl;
                cout<<data<<endl;
            }

        }
        my_file.close();
        cout<<endl<<endl<<"1.View details"<<endl<<"0. Go back"<<endl<<"10. main menu"<<endl<<"100. exit"<<endl<<endl<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            searchbyname();
            break;
        case 0:
            find_university();
            break;
        case 10:
            first_menu();
            break;
        case 100:
            exit(1);
            break;
        }
    }
    if(choice==7)
    {
        fstream my_file;
        my_file.open("C:\\project university hunt txt files\\Search files\\Location\\chittagong.txt", ios::in);
        if (!my_file)
        {
            cout << "File missing from database";
        }
        else
        {
            while(getline(my_file,data))
            {
                cout<<"______________________________________________________________"<<
            "__________________________________________________________"<<endl;
                cout<<data<<endl;
            }

        }
        my_file.close();
        cout<<endl<<endl<<"1.View details"<<endl<<"0. Go back"<<endl<<"10. main menu"<<endl<<"100. exit"<<endl<<endl<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            searchbyname();
            break;
        case 0:
            find_university();
            break;
        case 10:
            first_menu();
            break;
        case 100:
            exit(1);
            break;
        }
    }
    if(choice==8)
    {
        fstream my_file;
        my_file.open("C:\\project university hunt txt files\\Search files\\Location\\barishal.txt", ios::in);
        if (!my_file)
        {
            cout << "File missing from database";
        }
        else
        {
            while(getline(my_file,data))
            {
                cout<<"______________________________________________________________"<<
            "__________________________________________________________"<<endl;
                cout<<data<<endl;
            }

        }
        my_file.close();
        cout<<endl<<endl<<"1.View details"<<endl<<"0. Go back"<<endl<<"10. main menu"<<endl<<"100. exit"<<endl<<endl<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            searchbyname();
            break;
        case 0:
            find_university();
            break;
        case 10:
            first_menu();
            break;
        case 100:
            exit(1);
            break;
        }
    }





    switch(choice)
    {

    case 0:
        find_university();
        break;
    case 10:
        first_menu();
        break;
    case 100:
        exit(1);
        break;
    }
}

void searchbyname()
{
    string ser;
    string data;
    cout<<endl<<"\t\t\t";
    cout<<"Enter University name: ";
    cin.ignore();
    getline(cin,ser);
    std::for_each(ser.begin(), ser.end(), [](char & c)
    {
        c = ::tolower(c);
    });
    if(ser=="bubt")
    {
        ser="bangladesh university of business and technology";
    }
    if(ser=="du")
    {
        ser="dhaka university";
    }
    if(ser=="ru")
    {
        ser="rajshahi university";
    }
    if(ser=="cu")
    {
        ser="chittagong university";
    }
    if(ser=="ju")
    {
        ser="jahangirnagar university";
    }
    if(ser=="iu")
    {
        ser="islamic university";
    }
    if(ser=="ku")
    {
        ser="khulna university";
    }
    if(ser=="jnu")
    {
        ser="jagannath university";
    }
    if(ser=="cou")
    {
        ser="comilla university";
    }
    if(ser=="bup")
    {
        ser="bangladesh university of professionals";
    }
    if(ser=="bu")
    {
        ser="barisal university";
    }
    if(ser=="bsmru")
    {
        ser="bangabandhu sheikh mujibur rahman university";
    }
    if(ser=="bsmmu")
    {
        ser="bangladesh sheikh mujib medical university";
    }
    if(ser=="rmu")
    {
        ser="rajshahi medical university";
    }
    if(ser=="cmu")
    {
        ser="chittagong medical university";
    }
    if(ser=="smu")
    {
        ser="sylhet medical university";
    }
    if(ser=="shmu")
    {
        ser="sheikh hasina medical university";
    }
    if(ser=="sust")
    {
        ser="shahjalal university of science and technology";
    }
    if(ser=="buet")
    {
        ser="bangladesh university of engineering and technology";
    }
    if(ser=="kuet")
    {
        ser="khulna university of engineering and technology";
    }
    if(ser=="cuet")
    {
        ser="chittagong university of engineering and technology";
    }
    if(ser=="ruet")
    {
        ser="rajshahi university of engineering and technology";
    }
    if(ser=="duet")
    {
        ser="dhaka university of engineering and technology";
    }
    if(ser=="aiub")
    {
        ser="american international university bangladesh";
    }
    if(ser=="diu")
    {
        ser="dhaka international university";
    }
    if(ser=="nsu")
    {
        ser="north south university";
    }
    if(ser=="su")
    {
        ser="stamford university";
    }
    if(ser=="uiu")
    {
        ser="united international university";
    }
    if(ser=="du")
    {
        ser="dhaka university";
    }
    if(ser=="iut")
    {
        ser="islamic university of technology";
    }
    ifstream read("C:\\project university hunt txt files\\Search files\\"+ser+".txt");
    {
        while(getline(read,data))
        {
            cout<<"______________________________________________________________"<<
            "__________________________________________________________"<<endl;
            cout<<data<<endl;
        }
    }
    read.close();
    cout<<endl<<endl<<"0. Go back"<<endl<<"010. main menu"<<endl<<"100. exit"<<endl<<endl<<"Enter your choice: ";
    int choice;
    cin>>choice;
    switch(choice)
    {

    case 0:
        find_university();
        break;
    case 010:
        first_menu();
        break;
    case 100:
        exit(1);
        break;


    }
}


void find_university()
{
    system("cls");
    nametemplate();
    int choice;

cout <<"\t\t\t\t\t   "<< char(186) << "  Search University  " << char(186) << endl;

cout <<"\t\t\t\t"<< char(218);  for(int i=0; i<21; i++){cout << char(205);}  cout << char(194);  for(int i=0; i<21; i++){cout << char(205);}  cout << char(191) << endl;
cout <<"\t\t\t\t"<< char(186) << "1.Search by name     " << char(186) << "2.Search by location " << char(186) << endl;
cout <<"\t\t\t\t"<< char(186) << "                     " << char(186) << "                     " << char(186) << endl;
cout <<"\t\t\t\t"<< char(195);  for(int i=0; i<21; i++){cout << char(205);}  cout << char(197);  for(int i=0; i<21; i++){cout << char(205);}  cout << char(185) << endl;
cout <<"\t\t\t\t"<< char(186) << "3.Search by cost     " << char(186) << "4.Search by GPA      " << char(186) << endl;
cout <<"\t\t\t\t"<< char(186) << "                     " << char(186) << "                     " << char(186) << endl;
cout <<"\t\t\t\t"<< char(192);  for(int i=0; i<21; i++){cout << char(205);}  cout << char(193);  for(int i=0; i<21; i++){cout << char(205);}  cout << char(217) << endl;

cout <<"\t\t\t\t    "<< char(218);      for(int i=0; i<32; i++){cout << char(196);}      cout << char(191) << endl;
cout <<"\t\t\t\t    "<< char(179) << "5.All University in the database" << char(179) << endl;
cout <<"\t\t\t\t    "<< char(192);      for(int i=0; i<32; i++){cout << char(196);}      cout << char(217) << endl;

    cout<<endl<<endl<<"0. Go back"<<endl<<"10. main menu"<<endl<<"100. exit";
    cout<<endl<<endl<<"Enter your choice: ";
    cin>>choice;
    if(choice==1)
    {
        searchbyname();
    }
    if(choice==2)
    {
        searchbylocation();
    }

    if(choice==3)
    {
        searchbycost();
    }

    if(choice==4)
    {
        searchbygpa();
    }
    if(choice==5)
    {
        string name;
        cout<<"Here are all the University we have in our database right now: "<<endl;
        ifstream read("C:\\project university hunt txt files\\University all list\\all list.txt");
        while(getline(read,name))
        {
            cout<<name<<endl;
        }
        read.close();
        cout<<endl<<endl<<"1.View details"<<endl<<endl<<"0. Go back"<<endl<<"010. main menu"<<endl<<"100. exit"<<endl<<endl<<"Enter your choice: ";
        int choice;
        cin>>choice;
        if(choice==1)
        {
            searchbyname();
        }
        switch(choice)
        {

        case 0:
            find_university();
            break;
        case 010:
            first_menu();
            break;
        case 100:
            exit(1);
            break;


        }

    }
    switch(choice)
    {

    case 0:
        first_menu();
        break;
    case 010:
        first_menu();
        break;
    case 100:
        exit(1);
        break;


    }
}

void ask_university()
{
    string u_name,notes,ufname;
    cout<<"Enter a your username name :";
    cin.ignore();
    getline(cin,ufname);
    cout<<"Enter the University name you want to know about: ";
    cin.ignore();
    getline(cin,u_name);
    cout<<"Add a massage for admins regarding, the information you need about this university: ";
    getline(cin,notes);

    ofstream file;
    file.open("C:\\project university hunt txt files\\Requested university\\"+ufname+".txt");
    file<< u_name <<endl<<notes;
    file.close();
    cout<<endl<<"The information you asked has been sent to the admin please wait for the update"<<endl;

    system("pause");
    char c;
    ifstream read("C:\\project university hunt txt files\\counter.txt");
    {
        read>>c;
    }
    read.close();
    int k=(int)c-48;
    k++;
    ofstream file2;
    file2.open("C:\\project university hunt txt files\\counter.txt");
    file2<<k;
    file2.close();
    cout<<endl<<endl<<"1.main menu \n2.Exit\nEnter your choice: ";
    int choice;
    cin>>choice;
    if(choice==2)
    {
        exit(1);
    }
    if(choice==1)
    {
        first_menu();
    }
}

void addinformation()
{
    string u_name,rank1,location,vc,ft,tution,gpa,ex,name;
    cout<<endl<<"University name: ";
    cin.ignore();
    getline(cin,u_name);
    cout<<"\nRank: ";
    getline(cin,rank1);
    cout<<"\nLocation: ";
    getline(cin,location);
    cout<<"\nName of the VC: ";
    getline(cin,vc);
    cout<<"\nFaculty: ";
    getline(cin,ft);
    cout<<"\nEstimated tution fee: ";
    getline(cin,tution);
    cout<<"\nEstimated minimum gpa: ";
    getline(cin,gpa);
    cout<<"\nExtra facilities: ";
    getline(cin,ex);
    cout<<"Your name: ";
    cin>>name;

    ofstream file;
    file.open("C:\\project university hunt txt files\\New added information\\"+name+".txt");
    file<< u_name<<endl<<rank1<<endl<<location<<endl<<vc<<endl<<ft<<endl<<tution<<endl<<gpa<<endl<<ex<<endl<<endl<<"by : "<<name;
    file.close();

    system("pause");
    char c;
    ifstream read("C:\\project university hunt txt files\\counter2.txt");
    {
        read>>c;
    }
    read.close();
    int k=(int)c-48;
    k++;
    ofstream file2;
    file2.open("C:\\project university hunt txt files\\counter2.txt");
    file2<<k;
    file2.close();
    fstream file3;
    file3.open("C:\\project university hunt txt files\\approve\\approve names",ios::in | ios::out | ios::app);
    file3<<endl<<name;
    file3.close();
    cout<<endl<<endl<<"1.main menu \n2.Exit\nEnter your choice: ";
    int choice;
    cin>>choice;
    if(choice==2)
    {
        exit(1);
    }
    if(choice==1)
    {
        first_menu();
    }
}

void

add_university()
{

    system("cls");
    cout<<"\n\t\t1.Enter the university name you want to know about\n\t\t2.Add information yourself\n\n\n0.Return to main menu\n100.Exit\n\n";
    cout<<"Enter your choice: ";
    int choice;
    cin>>choice;
    switch(choice)
    {

    case 1:
        ask_university();
        break;
    case 2:
        addinformation();
        break;
    case 0:
        first_menu();
        break;
    case 100:
        exit(1);
        break;


    }
}

bool login()
{
    string username, password, un,pw;

    cout<<"Enter your username: ";
    cin>>username;
    cout<<"Enter your Password: ";
    cin>>password;

    ifstream read("C:\\project university hunt txt files\\" + username +".txt");

    getline(read, un);
    getline(read,pw);

    if(un== username && pw== password)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int newaccount()
{
    string username, password;

    cout<< "Select a username: ";
    cin>> username;
    cout<<"Select a password: ";
    cin>> password;

    ofstream file;
    file.open("C:\\project university hunt txt files\\"+username+".txt");//jekhane file rakhbi sob sekhaner location dibi.
    file<<username<<endl<<password;
    file.close();

    cout<<"\n\t\t\t--------------- account created successfully ----------------\n\n";
    cout<<"\n\t\t\t---------------------- please login -------------------------\n\n";
    system("pause");

    return 1;
}

void nametemplate()
{
    printf("\t\t\t------------------------------------------------------------\n");
    printf("\t\t\t\t           BANGLADESH UNIVERSITY HUNT\n");
    printf("\t\t\t------------------------------------------------------------\n\n");
}

void getCurrentTime()
{
    system("COLOR CE");
    time_t rawtime;
    struct tm * timeinfo;

    time(&rawtime);
    timeinfo = localtime(&rawtime);
    printf("Current Time and Date: %s\n", asctime(timeinfo));
}


void first_menu()
{
    system("cls");
    nametemplate();
    system("COLOR 3F");
cout <<"\t\t\t\t\t      "<< char(186) << "   DASHBOARD   " << char(186) << endl<<endl;

    cout <<"\t\t\t\t"<< char(218);  for(int i=0; i<21; i++){cout << char(205);}  cout << char(194);  for(int i=0; i<21; i++){cout << char(205);}  cout << char(191) << endl;
cout <<"\t\t\t\t"<< char(186) << "1.Search University  " << char(186) << "2.Add university info" << char(186) << endl;
cout <<"\t\t\t\t"<< char(186) << "                     " << char(186) << "                     " << char(186) << endl;
cout <<"\t\t\t\t"<< char(195);  for(int i=0; i<21; i++){cout << char(205);}  cout << char(197);  for(int i=0; i<21; i++){cout << char(205);}  cout << char(185) << endl;
cout <<"\t\t\t\t"<< char(186) << "   3.Latest News     " << char(186) << "   4.Subject review  " << char(186) << endl;
cout <<"\t\t\t\t"<< char(186) << "                     " << char(186) << "                     " << char(186) << endl;
cout <<"\t\t\t\t"<< char(192);  for(int i=0; i<21; i++){cout << char(205);}  cout << char(193);  for(int i=0; i<21; i++){cout << char(205);}  cout << char(217) << endl;

cout <<"\t\t\t\t\t   "<< char(218);      for(int i=0; i<21; i++){cout << char(196);}      cout << char(191) << endl;
cout <<"\t\t\t\t\t   "<< char(179) << "        5.Exit       " << char(179) << endl;
cout <<"\t\t\t\t\t   "<< char(192);      for(int i=0; i<21; i++){cout << char(196);}      cout << char(217) << endl;
    int choice;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    printf("Enter your user choice: ");
    cin>>choice;
    system("COLOR 3F");
    switch(choice)
    {

    case 1:
        find_university();
        break;
    case 2:
        add_university();
        break;
    case 3:
        news();
        break;
    case 4:
        subject_review();
        break;
    case 5:
        exit(1);
        break;


    }
}

void Admin_login()
{
    string name1,pass1;
    cout<<"Enter Admin username: ";
    string name="admin";
    cin>>name1;
    cout<<"Enter Admin password: ";
    string pass="admin";
    cin>>pass1;
    if(name1==name && pass1==pass)
    {
        system("cls");
        system("COLOR 3F");
        printf("\t\t\t-----------------------------------------------------------\n\n");
        printf("\t\t\t\t        WELCOME TO YOUR ADMIN PALEN\n");
        printf("\t\t\t-------------------------------------------------------------\n\n\n");

        cout <<"\t\t\t\t"<< char(218);  for(int i=0; i<24; i++){cout << char(205);}  cout << char(194);  for(int i=0; i<24; i++){cout << char(205);}  cout << char(191) << endl;
cout <<"\t\t\t\t"<< char(186) << "       1. Add news      " << char(186) << "2.New added info counter" << char(186) << endl;
cout <<"\t\t\t\t"<< char(186) << "                        " << char(186) << "                        " << char(186) << endl;
cout <<"\t\t\t\t"<< char(195);  for(int i=0; i<24; i++){cout << char(205);}  cout << char(197);  for(int i=0; i<24; i++){cout << char(205);}  cout << char(185) << endl;
cout <<"\t\t\t\t"<< char(186) << "3.approve new added info" << char(186) << "         4.Exit         " << char(186) << endl;
cout <<"\t\t\t\t"<< char(186) << "                        " << char(186) << "                        " << char(186) << endl;
cout <<"\t\t\t\t"<< char(192);  for(int i=0; i<24; i++){cout << char(205);}  cout << char(193);  for(int i=0; i<24; i++){cout << char(205);}  cout << char(217) << endl;

        cout<<endl<<endl<<"0. Go back"<<endl<<"10. main menu"<<endl<<"100. exit"<<endl<<endl<<"Enter your choice: ";
        int choice;
        cin>>choice;
        if(choice==1)
        {
            string name;
            cout<<endl<<"Enter the latest news here(for new line use (%)symbol): ";
            cin.ignore();
            getline(cin,name);
            std::ofstream logging;
            logging.open("C:\\project university hunt txt files\\news\\main news.txt");
            int len=name.size();
            for(int i=0; i<len; i++)
            {
                if(name[i]=='%')
                {
                    name[i]='\n';
                }
            }
            logging << name;
            logging.close();
            cout<<endl<<"The News has been updated";
        }
        if(choice==2)
        {
            char c,c1;
            ifstream read("C:\\project university hunt txt files\\counter.txt");
            {
                read>>c;
                cout<<"Number of requested info= "<<c<<endl;
            }
            read.close();
            ifstream read2("C:\\project university hunt txt files\\counter2.txt");
            {
                read2>>c1;
                cout<<"Number of new added info= "<<c1<<endl;
            }
            read2.close();
        }
        if(choice==3)
        {
            string str;
            cout<<"User name of new added info: \n";
            ifstream read3("C:\\project university hunt txt files\\approve\\approve names");
            {
                while(getline(read3,str))
                {
                    cout<<str<<endl;
                }
            }
            cout<<"\n\nEnter the Username to view their added info: ";
            string u_name,rank1,location,vc,ft,tution,gpa,ex,name;
            cin>>name;
            cout<<endl;
            fstream file;
            file.open("C:\\project university hunt txt files\\New added information\\"+name+".txt",ios::in);
            getline(file,u_name);
            getline(file,rank1);
            getline(file,location);
            getline(file,vc);
            getline(file,ft);
            getline(file,tution);
            getline(file,gpa);
            getline(file,ex);
            file.close();
            cout<<"1.University name: "<<u_name<<endl<<"2.Rank: "<<rank1<<endl<<"3.location: "<<location<<endl<<"4.VC name: "
                <<vc<<endl<<"5.Faculty: "<<ft<<endl<<"6.Tution fee: "<<tution<<endl<<"7.Gpa: "<<gpa<<endl<<"8.Extra facilities: "<<ex<<endl;
            cout<<"\n\n1.Approve the information\n2.Edit the information\n\nEnter your choice: ";
            int choice3;
            cin>>choice3;
            if(choice3==1)
            {
                std::for_each(u_name.begin(), u_name.end(), [](char & c)
                {
                    c = ::tolower(c);
                });
                ofstream file2;
                file2.open("C:\\"+u_name+".txt");
                file2<<"University name: "<<u_name<<endl<<"Rank: "<<rank1<<endl<<"location: "<<location<<endl<<"VC name: "
                        <<vc<<endl<<"Faculty: "<<ft<<endl<<"Tution fee: "<<tution<<endl<<"Gpa: "<<gpa<<endl<<"Extra facilities: "<<ex<<endl;
                file2.close();
                cout<<endl<<"Information has been approved."<<endl;
                int choice10;
                cout<<endl<<endl<<"10. main menu"<<endl<<"100. exit";
                cout<<"Enter your choice: ";
                cin>>choice10;
                switch(choice10)
                {
                case 10:
                    first_menu();
                    break;
                case 100:
                    exit(1);
                    break;
                }
            }
            else if(choice3==2)
            {
                int choice2;
                cout<<"Enter the choice you want to edit: ";
                cin>>choice2;
                cout<<endl;
                switch(choice2)
                {

                case 1:
                    cout<<"Edit university name: ";
                    cin>>u_name;
                    break;
                case 2:
                    cout<<"Edit rank: ";
                    cin>>rank1;
                    break;
                case 3:
                    cout<<"Edit location: ";
                    cin>>location;
                    break;
                case 4:
                    cout<<"Edit VC name: ";
                    cin>>vc;
                    break;
                case 5:
                    cout<<"Edit features: ";
                    cin>>ft;
                    break;
                case 6:
                    cout<<"Edit tution: ";
                    cin>>tution;
                    break;
                case 7:
                    cout<<"gpa: ";
                    cin>>gpa;
                    break;
                case 8:
                    cout<<"Edit Extra facilities: ";
                    cin>>ex;
                    break;
                }
                system("pause");
                std::for_each(u_name.begin(), u_name.end(), [](char & c)
                {
                    c = ::tolower(c);
                });
                ofstream file3;
                file3.open("C:\\project university hunt txt files\\Search files\\"+u_name+".txt");
                file3<<"University name: "<<u_name<<endl<<"Rank: "<<rank1<<endl<<"location: "<<location<<endl<<"VC name: "
                        <<vc<<endl<<"Faculty: "<<ft<<endl<<"Tution fee: "<<tution<<endl<<"Gpa: "<<gpa<<endl<<"Extra facilities: "<<ex<<endl;
                file3.close();
                cout<<endl<<"Information has been edited and approved";
                int choice10;
                cout<<endl<<endl<<"10. main menu"<<endl<<"100. exit";
                cout<<"Enter your choice: ";
                cin>>choice10;
                switch(choice10)
                {
                case 10:
                    first_menu();
                    break;
                case 100:
                    exit(1);
                    break;
                }
            }
        }
        switch(choice)
        {

        case 0:
            main();
            break;
        case 10:
            first_menu();
            break;
        case 100:
            exit(1);
            break;
        case 4:
            exit(1);
            break;
        }
    }
}

void change_password()
{
    string username, password,npassword, un,pw;

    cout<<"Enter your username: ";
    cin>>username;
    cout<<"Enter your current Password: ";
    cin>>password;

    ifstream read("C:\\project university hunt txt files\\" + username +".txt");

    getline(read, un);
    getline(read,pw);

    if(un== username && pw== password)
    {
        cout<<"Enter your new password: ";
        cin>>npassword;
        ofstream file;
        file.open("C:\\project university hunt txt files\\" + username +".txt");
        file<< username<<endl<<npassword;
        file.close();
        cout<<"\n\n\tPassword has been changed.";

    }
    else
    {
        cout<<"Current password does not match.\n\n1.Please try again.\nor \n0.exit";
        int n;
        cin>>n;
        if(n==1)
        {
        change_password();
        }
        if(n==0)
        {
            exit(1);
        }
    }
}


int main()
{
    nametemplate();
    getCurrentTime();
    int choice;
    cout<<"\t\t1.Member login\n\t\t2.Admin login\n\t\t3.Create new account\n\t\t4.Change password";
    cout<<"\n\n\t\t5.All university list in the data base\n";

cout<<endl<<"Enter your choice: ";

    cin>>choice;
    if(choice == 1)
    {
        bool status=login();
        if(!status)
        {
            cout<<"Username or password doesnt match the data. Please try again"<<endl;
            main();
        }
        else
        {
            printf("\n\t\t\t--------------------- Login successfully ----------------\n\n");
            first_menu();
        }
    }
    if(choice == 2)
    {
        Admin_login();
    }
    if(choice == 3)
    {
        int restart=newaccount();
        if(restart==1)
        {
            main();
        }
    }
    if(choice==4)
    {
        change_password();
    }
    if(choice==5)
    {
        string ch;
        fstream my_file;
        my_file.open("C:\\project university hunt txt files\\University all list\\all list.txt", ios::in);
        if (!my_file)
        {
            cout << "File missing from database";
        }
        else
        {
            while(getline(my_file,ch))
            {
                cout<<ch<<endl;
            }
        }
        my_file.close();
        SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
        cout<<endl<<"Please create a account and log in to view details and get access to more freature's like"<<endl;
        cout<<"Subject review, university details and more easy ways to find the university you need for your future."<<endl<<endl;
        system("pause");
        system("cls");
        main();
    }
    if(choice!=1 && choice!=2 && choice!=3 && choice!=4)
    {
        cout<<"Wrong input\nPlease restart the program."<<endl;

    }

    return 0;
}


