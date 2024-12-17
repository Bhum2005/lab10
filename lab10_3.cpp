//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;
int main(){
    float count=0,sum1=0,std,sum2=0,mean;
    ifstream source;
    source.open("score.txt");
    string textline;
    while(getline(source,textline)){
        sum1+=atof(textline.c_str());
        sum2+=(atof(textline.c_str())*atof(textline.c_str()));
        count++;
    }
    mean=sum1/count;
    std=sqrt((sum2/count)-(mean*mean));
    cout << "Number of data = "<<count<<endl;
    cout << setprecision(3);
    cout << "Mean = "<<mean<<endl;
    cout << "Standard deviation = "<<std<<endl;
}