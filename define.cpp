#include<iostream>
using namespace std;
class hero
{
    public:
    int health;
    char grade;
    int level;
    
};
int main(){
    //creation of an object
    hero kaniska;
    cout<<sizeof(kaniska);
    cout<<kaniska.health<<" ";
    cout<<kaniska.level<<" ";


}