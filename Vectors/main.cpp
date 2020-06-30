#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int> vector1;
    vector<int> vector2;
    
    int score_1 {0};
    int score_2 {0};
    
    cout<<"Enter the first number that you want to add in vector1: ";
    cin >> score_1;
    vector1.push_back(score_1);
    cout <<"\nEnter the second number that you want to add in vector1: ";
    cin >> score_2;
    vector1.push_back(score_2);
    
    cout <<"\nThe contents of vector1 are as follows"<<endl;
    cout <<"---------------------------------------"<<endl;
    cout <<vector1.at(0)<<endl;
    cout <<vector1.at(1)<<endl;
    
    cout << "\nThe size of vector1 currently is " << vector1.size() << endl;
    
    int score_3 = 100;
    int score_4 =200;
    
    vector2.push_back(score_3);
    vector2.push_back(score_4);
    
    cout <<"\nThe contents of vector2 are as follows" <<endl;
    cout <<"----------------------------------------"<<endl;
    
    cout <<vector2.at(0)<<endl;
    cout << vector2.at(1)<<endl;
    
    cout <<"\nThe size of vector2 currently is " << vector2.size()<<endl;
    
    vector <vector<int>> vector_2d;
    
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    cout <<"\nThe 2-D vector prints out something like this:"<<endl;
    cout <<"----------------------------------------------"<<endl;
    cout << vector_2d.at(0).at(0) <<endl;
    cout << vector_2d.at(0).at(1) <<endl;
    cout << vector_2d.at(1).at(0)<<endl;
    cout << vector_2d.at(1).at(1)<<endl;
    
    vector1.at(0) =1000;
    
    cout <<"\nThe updated 2-D vector prints out something like this:"<<endl;
    cout <<"----------------------------------------------"<<endl;
    cout << vector_2d.at(0).at(0) <<endl;
    cout << vector_2d.at(0).at(1) <<endl;
    cout << vector_2d.at(1).at(0)<<endl;
    cout << vector_2d.at(1).at(1)<<endl;
    
    
    cout <<"\nThe contents of vector1 are currently as follows"<<endl;
    cout <<"---------------------------------------"<<endl;
    cout <<vector1.at(0)<<endl;
    cout <<vector1.at(1)<<endl;
    
    
    
	return 0;
}
