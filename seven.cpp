#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

#include <numeric>

std::vector<int> Range(int start, int max, int step);
int main()
{
std::cout<<"how tall is the tree:";
int treeheight =0, spaces = 0, hashes = 1,stumpspaces = 0;
std::cin>>treeheight;
spaces = treeheight-1;
stumpspaces = treeheight - 1;

while(treeheight != 0){
    for(auto x: Range(1, spaces, 1))
    std::cout <<  " ";

   for(auto x: Range(1, hashes, 1))
   std::cout << "#"; 

   std::cout << "/n";
   spaces -= 1;
   hashes += 2;
   treeheight -= 1;
}
for(auto x: Range(1, stumpspaces, 1))
   std::cout << "";
   std::cout<<"#";

return 0;
}



