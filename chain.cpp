    class Student{
    public:
        void makeMove(int Record[5][6], int Max[5][6], Color color[5][6], Color inputColor){
			Color enemy;
			if(inputColor==Red)
				enemy = Blue;
			else
				enemy = Red;

			x=0; y=0; int a = 0;
			while(x != 5)
			{
				a = 0;
				if(color[x+1][y] == black)a++;
				if(color[x-1][y] == black)a++;
				if(color[x][y+1] == black)a++;
				if(color[x][y-1] == black)a++;
				if( (color[x][y] == inputColor 
					&& Record[x][y] == Max[x][y] - 1 && a != 3 )
 					&&(color[x+1][y] == enemy  
					||  color[x-1][y] == enemy  
					||  color[x][y+1] == enemy 
					||  color[x][y-1] == enemy) )
				{
					return;
				}
				if(y==5){ y=0; x++; }
				else { y++; } 
			}		
			
			x=0; y=0;
			while(x != 5)
			{
				if( (color[x][y] ==White || color[x][y] ==inputColor)
					&&( (color[x+1][y] == enemy && Record[x+1][y] != Max[x+1][y] - 1 )
					||  (color[x-1][y] == enemy && Record[x-1][y] != Max[x-1][y] - 1 )  
					||  (color[x][y+1] == enemy && Record[x][y+1] != Max[x][y+1] - 1 )
					||  (color[x][y-1] == enemy && Record[x][y-1] != Max[x][y-1] - 1 ) ) 
				  )
				{
					return;
				}
				if(y==5){ y=0; x++; }
				else { y++; } 
			}
			
		
			
				
				for(int i = 0; i <= 4; i++ )
					for(int j = 0; j <= 5; j++ )
					{
						if(color[i][j]==inputColor){ x = i; y = j; return;} 
					}
			
				for(int i = 0; i <= 4; i++ )
					for(int j = 0; j <= 5; j++ )
					{
						if(color[i][j]==White&&Record[x][y] != Max[x][y] - 1){ x = i; y = j; return;} 
					}

		}
	    int getX(){
            return x;
        }
        int getY(){
            return y;
        }
    private:
        int x;
        int y;
    };
