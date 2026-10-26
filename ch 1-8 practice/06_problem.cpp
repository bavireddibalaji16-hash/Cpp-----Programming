#include<iostream>
using namespace std ;

// comparing temp btw diff cities , day , interval

int main(){
int city,day,interval;
int avgtemp;

cin >> city ;
cin >>day;
cin >> interval;

int arr[city][day][interval];

for(int i=0;i<city;i++){
    for(int j=0;j<day;j++){
        for(int k=0;k<interval;k++){
            cin>>arr[i][j][k] ;
            cout<<endl; 
        }
    }
}

int highcity=0;
int highavgtemp=0;

for(int i=0;i<city;i++){
    int sum =0;
    for(int j=0;j<day;j++){
        for(int k=0;k<interval;k++){
        sum=sum+arr[i][j][k];
        }
    }
    avgtemp=sum/(day*interval);

    if(avgtemp > highavgtemp){
        highavgtemp = avgtemp;
        highcity = i+1;
    }
}

cout << "city with high avg temp "<< highcity << endl;
cout << "avg temp of city " << avgtemp << endl;

return 0;
}

