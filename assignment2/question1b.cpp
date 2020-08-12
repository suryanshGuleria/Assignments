#include <bits/stdc++.h> 
using namespace std; 
void printPattern(int radius) { 
 
float dist; 
for (int i = 0; i <= 2 * radius; i++) { 

	for (int j = 0; j <= 2 * radius; j++) { 
	dist = sqrt((i - radius) * (i - radius) + 
				(j - radius) * (j - radius));  
	if (dist > radius - 0.5 && dist < radius + 0.5) 
		cout << "*"; 
	else
		cout << " ";	 
	} 

	cout << "\n"; 
} 
} 

// Driver Code 
int main() { 
int radius = 3; 
printPattern(radius); 
return 0; 
} 
