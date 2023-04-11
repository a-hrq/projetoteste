#include<iostream>

using namespace std; 

int main(){

int mat[3][4] = { {1, 2, 3, 5},
                  {3, 4, 5, 6},
				  {6, 7, 8, 67} };

int i; 
int n; 
int s = 0;
 
for(i = 0; i < 3; i++){	
 for(n = 0; i < 4; n++){
  cout << mat[i][n];
  cout << endl; 
 }
}

system("pause");
return 0; 
}
