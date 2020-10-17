/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
 

#include <iostream>

using namespace std;

int main()
{
    string holiday, noun, place, person, adjective, plural, verb, food, pluralNoun;

cout << "Enter holiday: ";
cin >> holiday;

cout << "Enter noun: ";
cin >> noun;

cout << "Enter place: ";
cin >> place;

cout << "Enter person: ";
cin >> person;

cout << "Enter adjective: ";
cin >> adjective;

cout << "Enter body part (plural): ";
cin >> plural;

cout << "Enter verb: ";
cin >> verb;

cout << "Enter adjective: ";
cin >> adjective;

cout << "Enter noun: ";
cin >> noun;

cout << "Enter food: ";
cin >> food;

cout << "Enter pluralNoun: ";
cin >> pluralNoun;


cout << "I can't believe it's already " << holiday << "! I can't wait to put on my " << noun << " and visit every " << place << " in my neighborhood. This year, I am going to dress up as (a) " << person << " with " << adjective << " " << plural << endl;
cout <<". Before I " << verb << ", I make sure to graph my " << adjective << " " << noun << " to hold all of my " << food << ". Finally, all of my " << pluralNoun << " are ready to go!" << endl;

}
