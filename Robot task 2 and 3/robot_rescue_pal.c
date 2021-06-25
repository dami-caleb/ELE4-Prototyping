#include "robot_rescue_pal.h"

// IMPLEMET THIS FUNCTION
// ALLOWED RETURN VALUES:
// 1: North, 2: East, 3: South, 4: West, 5: Toggle watern/land mode



int move(char *world) {
    int Robot=0;
    int Target=0;
    bool visited[200];
    int queue[ ];
    int direction[4]={1,-1.21,-21};
    int previous[ ];
    int current_position;
    int path[ ];
    int repath[ ];
    int b=0;
 
 
 for (Robot = 0; world[Robot] != 'R'; Robot++)
    {
    }
    for (Target = 0; world[Target] != 'T'; Target++)
    {
       
    }
   
   
    int Horizontal_T;
    Horizontal_T= Target/21;
   
   
    int Horizontal_R;
    Horizontal_R= Robot/21;

   int difference_H = Horizontal_T - Horizontal_R;// Column difference
   
   int Vertical_T=Target % 21;
   int Vertical_R=Robot % 21;
   
   int difference_V=Vertical_T-Vertical_R;// row difference
   
   for (int i=0; i<200;i++)
    {
      visted[i]=false;
    
    }
   
  current_position=R;
  
  queue[o]=current_position;
  int y =0;
  int counter=1;
  int p=0;
   
   for(queue[counter] != Target;)
  { 
  } 
for (int d=0; d<4;d++) 
   { 
       if (< 0 ||queue[current_position] + direction[d] Y > 200)
   {
       
   }
   else if(world[current_position] + direction[d]=='#' || world[current_position]+ direction[d])
    {
       
    }
   }
   
}
