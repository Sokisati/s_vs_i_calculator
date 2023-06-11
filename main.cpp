#include <iostream>
#include <cmath>
using namespace std;

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


int probFunction(int s, int i)
{

int result = 0;
int flawless = 0;
int summatation = 0;

for(int n=i-1; n>0; n--)
{
    summatation = summatation + (factorialFunction(2*(i-n)))/(pow(factorialFunction(i-n),2)) *  (factorialFunction(s-(2*(i-n+1))))/factorialFunction(s-2*(i+1-n)-n)*factorialFunction(n);
}


  cout<<summatation<<" summatation: "<<endl;
 flawless = (factorialFunction(2*i))/(pow(factorialFunction(i),2));
 cout<<flawless<<" flawless"<<endl;
 cout<<"dividing by: "<< ( factorialFunction(s) / (  (factorialFunction(s-i) ) * factorialFunction(i) )  )<<endl;

  result = (summatation + flawless) / ( factorialFunction(s) / (  (factorialFunction(s-i) ) * factorialFunction(i) )  );

 return result;
}


int main()
{

    cout<<probFunction(8,3);

    return 0;
}
