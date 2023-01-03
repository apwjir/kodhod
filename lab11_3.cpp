#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <fstream>
#include <cstdlib>
using namespace std;
int num = 0;
float sum = 0 ,sums = 0;
int main(){
    ifstream source;
    source.open("score.txt");
    string textline;
    while(getline(source,textline)){
        num += 1;
        sum += atof(textline.c_str());
        sums += pow(atof(textline.c_str()),2);
    }
    float mean = sum/num;
    float sd = sqrt(sums/num - pow(mean,2));

    cout << "Number of data = " << num << "\n";
    cout << setprecision(3);
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << sd;
}