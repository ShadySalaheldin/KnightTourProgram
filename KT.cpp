//Shady Salaheldin
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
                   
bool function(int[][8],int,int,int,bool[8][8]);
int main(int argc, char *argv[])
{
    int moves[8][8];
    
    bool visited[8][8];
    for(int i = 0;i<8;i++)
            for(int u = 0;u<8;u++)
                    visited[i][u] = false;
    
    function( moves,1,0,0,visited);
   
    
    for (int z = 0;z<8;z++)
    {
        cout<< endl;
        for(int a=0;a<8;a++)
         cout<<setw(2)<<setfill('0')<< moves[z][a]<<"  ";
    }
    //return 0;          
    system("PAUSE");
    return EXIT_SUCCESS;    
}
bool function(int moves[8][8],int count,int x,int y,bool visited[8][8])
{
     visited[y][x] = true;
     moves[y][x] = count;
     
    if (count == 64)
    {
        return true;
    }
     if (count < 64 )
     {
               
               if((x+1)<8 && (y+2)<8 && visited[y+2][x+1] == false)
                   { 
                   
                   if(function(moves,count+1,x+1,y+2,visited))
                   {
                       return true;
                   }
                   
                   }
                 if((x+2)<8 && (y+1)<8 && visited[y+1][x+2] == false)
                   {
                   
                   if(function(moves,count+1,x+2,y+1,visited))
                   {
                       return true;
                   }
                   
                   }
                 if((x+2)<8 && (y-1)>(-1) && visited[y-1][x+2] == false)
                   {
                   
                   if(function(moves,count+1,x+2,y-1,visited))
                   {
                       return true;
                   }
                   
                   }
                 if((x+1)<8 && (y-2)>(-1) && visited[y-2][x+1] == false)
                   {
                   
                   if(function(moves,count+1,x+1,y-2,visited))
                   {
                       return true;
                   }
                  
                   }
                  if((x-1)>(-1) && (y-2)>(-1) && visited[y-2][x-1] == false)
                   {
                   
                   if(function(moves,count+1,x-1,y-2,visited))
                   {
                       return true;
                   }
                   
                   }
                 if((x-2)>(-1) && (y-1)>(-1) && visited[y-1][x-2] == false)
                   {
                   
                   if(function(moves,count+1,x-2,y-1,visited))
                   {
                       return true;
                   }
                                
                   }
                 if((x-2)>(-1) && (y+1)<8 && visited[y+1][x-2] == false)
                   {
                   
                   if(function(moves,count+1,x-2,y+1,visited))
                   {
                       return true;
                   }
                   
                   }
                 if((x-1)>(-1) && (y+2)<8 && visited[y+2][x-1] == false)
                   {
                   
                   if(function(moves,count+1,x-1,y+2,visited))
                   {
                       return true;
                   }
                   
                   }
                   
                 
                   
                   
                  
                 
                   
                 
                             
                
                  
        }
        visited[y][x] = false;
        moves[y][x] = 0;
        return false;
        
        
        
}
