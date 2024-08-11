# include <bits/stdc++.h>
using namespace std;
#include <vector>
int main(){
vector <int> name;
// Intializer list 
vector <int> vector1={1,2,3,9,5};

// Uniform initialization 
vector<int> vector2{1,2,3,,5};

// Method 2
vector<int > vector3(5,12);
// Also explaining upper line 
//vector<int> vector3={12,12,12,12,12};

//this is method provide information how to print vector
for (int i: vector1){
	cout<<i<<" ";
}

cout<<endl;
for (int i: vector2){
	cout<<i<<" ";
}

cout<<endl;
for (int i: vector3){
	cout<<i<<" ";
}
// Adding element in vector
// first create a vector 
cout <<"there is show of insert method"<<endl;
vector <int> num;
 num.push_back(6);
 num.push_back(7);

 // for(int i : num){
 // 	cout<<i<<" ";
 // }

 //num.insert(1,3);

 for(int i : vector1){
 	cout<<vector1.at(4)<<endl;
 	// cout<<vector1.at(3)<<endl;
 	// cout<<vector1.at(1)<<endl;

//  }
// change the element 
	vector<int> num2;
	num2.push_back(3);
	num2.push_back(9);
    num2.push_back(90);
    cout<<"first element in num2: "<<num2.at(1);
    num2.at(1)=89;
    cout<<endl;
    cout<<num2.at(1);
// delete the element ;
    cout<<endl;
    vector<int>prime_number{2,3,7,11};
    for (int i : prime_number){
    	cout<<i<<",";

    }
    cout<<endl;
    // pop opretion
    prime_number.pop_back();
   for (int i: prime_number){
   	cout<<i<<",";
   }
   int x=vector1.capacity();
   int y=vector2.capacity();
   int u=vector3.capacity();
   int z=prime_number.capacity();
   cout<<endl;
   cout<<x;
   cout<<endl;
   cout<<y;
   cout<<endl;
   cout<<z;
   cout<<endl;
   cout<<u; 
}

}