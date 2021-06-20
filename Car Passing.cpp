#include<iostream>

using namespace std;
class TollBooth
{
    private:
        int carPays,carNotPays;
        float cents,total,total1;

    public :
        TollBooth()
        {
            carPays=0;
            carNotPays=0;
            cents=0.00;
            total=0.00;
        }

        void setData()
        {
            cout<<"Please Enter the number of cars that pays --> ";
            cin>>carPays;

            cout<<"Please Enter the number of cars that don't pays --> ";
            cin>>carNotPays;
        }

        void getData()
        {
            cents=0.50;

            total=carPays*cents;

            total1=carNotPays*cents;

            cout<<"Total Car passes in a day is --> "<<carNotPays+carPays<<endl;

            cout<<"Total Toll Pays --> "<<total<<endl;

            cout<<"Total Toll of those that does't pay --> "<<total1<<endl;

        }
};

int main()
{
    TollBooth obj1,obj2;

    obj1.setData();
    obj1.getData();

    obj2.setData();
    obj2.getData();

    return 0;
}


