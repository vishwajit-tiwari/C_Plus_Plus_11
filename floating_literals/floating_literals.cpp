/**
 * @brief A program to demo Float, double, long double Literals
 * @author Vishwajit Tiwari
 * @date 05/05/2024
*/

#include <iostream>

using namespace std;


int main()
{
    cout<<"Inside "<<__FUNCTION__<<"()"<<endl;

    //**************** FLoat, double, long double Literals ***********************
    float d = 23.4;
    long double f = 23.4L;

    cout<<"size of 23.4 is: "<<sizeof(23.4)<<endl;
    cout<<"size of 23.4 is: "<<sizeof(23.4f)<<endl;
    cout<<"size of 23.4 is: "<<sizeof(23.4F)<<endl;
    cout<<"size of 23.4 is: "<<sizeof(23.4l)<<endl;
    cout<<"size of 23.4 is: "<<sizeof(23.4L)<<endl;
    
    cout<<"size of 23.4 is: "<<sizeof(d)<<endl;
    cout<<"size of 23.4 is: "<<sizeof(f)<<endl;

    return 0;
}