    class Student{
    public:
    	Student(){ c=0; } 
		void makeMove(int Record[5][6], int Max[5][6],Color color[5][6], Color inputColor){
				/*	
			//敵人顏色初始化 
			if(inputColor==Red)
				enemy = Blue;
			else
				enemy = Red;
				*/
			//第一步 			
			/*if(color[0][0]==White&& c!=100) 
			{
				x=0; y=0; c = 100;
			}				
			if(color[4][5]==White&& c!=100)
			{
				
					x=4; y=5; c = 100;  
			}*/

			/*		
			//旁邊有人且可以爆他 
			condition = 0; x=0; y=0;
			while(condition == 0 && y != 6)
			{
				if( color[x][y] == inputColor 
					&& Record[x][y] == Max[x][y] - 1  
 					&& color[x+1][y] == enemy  
					&& color[x-1][y] == enemy  
					&& color[x][y+1] == enemy 
					&& color[x][y-1] == enemy )
				{
					condition = 1;
				}
				if(y==5){ y=0; x++; }
				else { y++; } 
			}			
			
			//囤積實力
			x=0; y=0;
			while(condition == 0 && y != 6)
			{
				if( color[x][y] == inputColor 
					&& Record[x][y] != Max[x][y] - 1  
 					&& color[x+1][y] == enemy  
					&& color[x-1][y] == enemy  
					&& color[x][y+1] == enemy 
					&& color[x][y-1] == enemy )
				{
					return;
				}
				if(y==5){ y=0; x++; }
				else { y++; } 
			}			 
			
			//壓制敵人擴張
			x=0; y=0;
			while(x != 5)
			{
				if( ( color[x+1][y+1] == enemy
					|| color[x+2][y] == enemy
					|| color[x][y+2] == enemy
					|| color[x-1][y-1] == enemy 
					|| color[x-2][y] == enemy 
					|| color[x][y-2] == enemy
					|| color[x-1][y+1] == enemy  
					|| color[x+1][y-1] == enemy ) 
					&& color[x+1][y] ==White 
					&& color[x-1][y] ==White 
					&& color[x][y+1] ==White
					&& color[x][y-1] ==White )
				{
					return;
				}
				if(y==5){ y=0; x++; }
				else { y++; } 
			}
			
			//沒事幹的時候
			x=0; y=0;
			while(x != 5)
			{
				if( ( color[x+1][y+1] == inputColor
					|| color[x+2][y] == inputColor
					|| color[x][y+2] == inputColor
					|| color[x-1][y-1] == inputColor 
					|| color[x-2][y] == inputColor 
					|| color[x][y-2] == inputColor
					|| color[x-1][y+1] == inputColor  
					|| color[x+1][y-1] == inputColor ) 
					&& color[x+1][y] == White  
					&& color[x-1][y] == White  
					&& color[x][y+1] == White 
					&& color[x][y-1] == White )
				{
					return;
				}
				if(y==5){ y=0; x++; }
				else { y++; } 
			}			*/
			
			//避免無法下棋
			
				for(int i = 0; i <= 4; i++ )
					for(int j = 0; j <= 5; j++ )
					{
						if(color[x][y]==inputColor){ x = i; y = j; condition = 100; return;} 
					}
			
				for(int i = 0; i <= 4; i++ )
					for(int j = 0; j <= 5; j++ )
					{
						if(color[x][y]==inputColor){ x = i; y = j; condition = 100; return;} 
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
        int c;
        int condition;
        Color enemy; 
    };
