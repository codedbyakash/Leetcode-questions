#include<iostream>
class player{
    public:
    int score;
    int health;
};
using namespace std;
int main(){
    // ignore these lines
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    player akash ;
    akash.score=350;
    akash.health=72;
    cout<<akash.score<<endl;
    cout<<akash.health<<endl;

    player yadav;
    yadav.score=109;
    yadav.health=89;
    cout<<akash.score<<endl;
    cout<<akash.health<<endl;
}