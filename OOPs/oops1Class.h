using namespace std;

class Sum
{
private:
    int a, b;
public:
    Sum(){
        
    }
    Sum(int a, int b){
        this->a=a;
        this->b=b;
        cout<<"s1: a:"<<this->a<<" s1: b:"<<this->b<<endl;
    };

    ~Sum(){
        cout<<"Destructor Called"<<endl;
    };

    int getSum(){
        return a+b;
    }
};

