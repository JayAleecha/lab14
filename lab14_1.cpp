#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}
void stat(const double A[],int N,double B[]){
    double sum;
    double sd2=0;
    double gmn=1;
    double hms=0;
    double max=A[0];
    double min=A[0];
    for(int i=0;i<N;i++){
      sum+=A[i]/N;
      gmn*=A[i];
      hms+=1/A[i];
      }
    for(int i=0;i<N;i++){
      sd2+=pow((A[i]-sum),2)/N; 
      if(max<=A[i]){
       max=A[i];
       }else if(min>=A[i]){
       min=A[i];
       }
      
    }
    B[0]=sum;
    B[1]=sqrt(sd2);
    B[2]=pow(gmn,1.0/N);
    B[3]=N/hms;
    B[4]=max;
    B[5]=min;
}
      