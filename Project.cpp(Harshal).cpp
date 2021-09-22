#include<iostream>
#include<string>
using namespace std;
int main()
{
	string stud_name[10]={"Rahul","Seeta","Reeta","Seema","Sibu","Krush","Ram","Anvesh","Priti","Vidisha"};
	string course_name[10] = {"Paython", "Java", "Software_testing", "C++","C","Java Script","Machine_learning","Cloud","Android","Full_Stack"};
    char stud_gender[10] = {'M','F','F','F','M','M','M','M','F','F'};
    int stud_age[10] = {22, 19, 21, 24, 23,10,25,15,29,27};
    float course_price[10] = {121.2, 312.2, 310.5, 422.8, 750.50,222.3,888.6,552.6,878.3,521.5,};
    double discount[10] = {10.5, 5.2, 11.45, 40.50, 7.40,4.1,23.9,22.1,21.9,31.8,};
    bool present_absent[10] = {true, false, false, true, false,true,true,false,true,false};
	
	for(int i=0; i<10; i++)
    {
        //printing students name
        cout<<"Information for: "<<stud_name[i]<<endl;

        //checking gender and printing he/she
        if(stud_gender[i] == 'F')
        {
            cout<<"She Enrolled for course: "<<course_name[i]<<endl;
            cout<<"Her age is: "<<stud_age[i]<<endl;
        }
        else
        {
            cout<<"He Enrolled for course: "<<course_name[i]<<endl;
            cout<<"His age is: "<<stud_age[i]<<endl;
        }

        //print course price snd discount
        cout<<"Course price: "<<course_price[i]<<" and Discount: "<<discount[i]<<"%"<<endl;

        //print Boolean for present or absent
        if(present_absent[i] == true)
        {
            cout<<"Today "<<stud_name[i]<<" is Present"<<endl;
        }
        else
        {
            cout<<"Today "<<stud_name[i]<<" is Absent"<<endl;
        }

        cout<<"======================*====================\n\n";
    }

    return 0;
}

