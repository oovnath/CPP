 #include<iostream>
 using namespace std;
//if input 0 or lessthen 0 then loop termineted. 
int main(){
    int n;
    cin>>n;

    do{
        cout<<n<<endl;
        cin>>n;
    }while(n>0);
}