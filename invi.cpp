#include <stdio.h>
#include <iostream>
using namespace std;

float invi(int avgGNI,int upperMiddleClass,int lowerMiddleClass,float HDI,float gini,float eduRate)
{
    float result;
    if (upperMiddleClass > lowerMiddleClass and gini>0 and HDI<1){
        result = (upperMiddleClass - lowerMiddleClass) * HDI * gini * eduRate / avgGNI;
    }else{
        result = -1;
    }
    return result;
}

int main()
{
    int average_gni,UMC,LMC;
    float HumanDevelopmentIndex,GiniCoe,EducationRate,invi_result;
    cout << "\nInvolution Index Calculator\n";
    while(true){
        cout << "Input your region's upper middle class household income line (in US dollar): ";
        cin >> UMC;
        cout << "\nInput your region's lower middle class household income line (in US dollar): "; 
        cin >> LMC;
        cout << "\nInput your region's GNI per capita (not equal to GDP per capita; nominal, in US dollar): ";
        cin >> average_gni;
        cout << "\nInput your region's rate of household average expenditure on education: ";
        cin >> EducationRate;
        cout << "\nInput your region's Gini coefficient (in the form of xx.x): ";
        cin >> GiniCoe;
        cout << "\nInput your region's Human Development Index: ";
        cin >> HumanDevelopmentIndex;
        invi_result = invi(average_gni,UMC,LMC,HumanDevelopmentIndex,GiniCoe,EducationRate);
        cout << "\nThis region's INVI (Involution Index) is: ";
        printf("%lf\n",invi_result);
    }
    return 0;
}
