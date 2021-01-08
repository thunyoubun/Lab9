#include<fstream>
#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
using namespace std;

int main(){
    int count = 0;
    float sum = 0 ;
    float sd = 0 ,mean;
    ifstream source("score.txt");
    string textline;
    while(getline(source,textline))
    {
        sum += atof(textline.c_str());
        sd +=  pow(atof(textline.c_str()),2);
        count++;
    }

    cout << "Number of data = " << count << '\n';
    cout << setprecision(3);
    mean = sum/count;
    cout << "Mean = "<< mean << '\n';
    cout << "Standard deviation = " <<  sqrt((sd/count)-(pow(mean,2)));
    source.close();

return 0;
}