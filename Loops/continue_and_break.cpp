 #include<iostream>
 using namespace std;

//Continue = Skip to the next iternation of the loop
//Break = Terminate the loop

//logic of this program is : if even day then continue, if have no money then break.
int main(){
    int Money=1000;
    for(int date=1; date<=30; date++){
        if(date%2==0){
            continue;
        }
        if(Money <= 0){
            break;
        }
        cout<<"Go out today"<<endl;
        Money = Money - 100;
    }
} 