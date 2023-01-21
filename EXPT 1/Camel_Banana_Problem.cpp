#include <iostream>
using namespace std;
int main()
{
    int total,maxcapacity,distance;
    cout<<"Enter the Total Number of Bananas to Transport: ";
    cin>>total;
    cout<<endl<<"Enter the total Distance to Travel: ";
    cin>>distance;
    cout<<endl<<"Enter the Maxcapacity of the Camel: ";
    cin>>maxcapacity;
    int lose =0, start = total;
    for(int i =0; i<distance; i++)
    {
        while(start>0)
        {
            start = start - maxcapacity;
            if(start == 1)
            {
                lose = lose -1;
            }
            lose = lose +2;
        }
        lose = lose -1;
        start = total - lose;
        if(start == 0)
        {
            break;
        }
    }
    cout<<endl<<"Total Bananas delivered after "<<distance<<"Kms : "<<start<<endl;
    return 0;
}