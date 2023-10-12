#include<iostream>
using namespace std;

class Box
{
    public:
    double width, height, depth;
    Box(double w, double h, double d)
    {
        width = w;
        height = h;
        depth = d;
    }
  
    Box()
    {
        width = height = depth = 0;
    }
  
    Box(double len)
    {
        width = height = depth = len;
    }
  
    double volume()
    {
        return width * height * depth;
    }
};
int main()
    {
        double h,d,l,c;
        cin>>h>>d>>l;
        Box mybox1;
        Box mybox2(h, d, l);
        
        cin>>c;
        Box mycube(c);
  
        double vol;
  
        vol = mybox1.volume();
        cout<<"Volume of mybox1 is "<<vol<<endl;
  
        vol = mybox2.volume();
        cout<<"Volume of mybox2 is "<<vol<<endl;
  
        
  
        vol = mycube.volume();
        cout<<"Volume of mycube is "<<vol<<endl;

}