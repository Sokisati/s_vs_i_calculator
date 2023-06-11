#include <iostream>
#include <cmath>
using namespace std;



int intPow(int x, int y){
    return (int)pow(x,y);
}


int factorialFunction(int number)
{

    int sum=1;

    for(int i=number; i>0; i--)
    {
    sum = sum * number;
    number--;
    }

    return sum;

}


double probFunction(int s, int i)
{

double result = 0;
int flawless = 0;
int summatation = 0;

for(int n=i-1; n>0; n--)
{
    int q = ((factorialFunction(2*(i-n)))/(intPow(factorialFunction(i-n),2)));
    int w=((factorialFunction(s-(2*(i-n+1))))/(factorialFunction(s-2*(i+1-n)-n)*factorialFunction(n)));
    int currentIteration= q*  w;
    cout << currentIteration << endl;
    summatation = summatation + currentIteration;
}


  cout<<summatation<<" summatation: "<<endl;
 flawless = (factorialFunction(2*i))/(intPow(factorialFunction(i),2));
 cout<<flawless<<" flawless"<<endl;
 cout<<"dividing by: "<< ( factorialFunction(s) / (  (factorialFunction(s-i) ) * factorialFunction(i) )  )<<endl;

  result =  ((double)(summatation + flawless))/((double) ( factorialFunction(s) / (  (factorialFunction(s-i) ) * factorialFunction(i) )  ));

 return result;
}




int main()
{

    cout << factorialFunction(10) << endl;

    cout<<probFunction(8,3);

    return 0;
}
