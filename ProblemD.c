#include<stdio.h>

int main(){
	int n, m, dOne , dTwo;
	scanf("%d %d %d %d", &n,&m,&dOne,&dTwo);
	char mat [n][m];
	int days[n][m];	// create a secondary array to store days per passenger
	int distinction = 0; // to calculate the number of possible combinations
	//input and initialising distinction to 0
	for(int i = 0 ; i < n ; i++)
		for(int j = 0 ; j < m ; j++){
				scanf("%c",&mat[i][j]);
				days[i][j] = 0;
		}
	



	for(int i = 0 ; i < n ; i++)
	{
		for(int j = 0 ; j < m ; j++)
		{
				// adjacent not corner cells
			if(mat[i][j] == 'V' && i < n-1 && i > 0 && j > 0 && j < m-1)
			{
				days[i][j] = dOne; 
				if(mat[i-1][j-1] != 'V') // -1,-1
					days[i-1][j-1] = 3;
				if(mat[i][j-1] != 'V') // 0,-1
					days[i][j-1] = 3;
				if(mat[i+1][j-1] != 'V') // 1,-1
					days[i+1][j-1] = 3;
				if(mat[i+1][j] != 'V')//1,0
					days[i+1][j] = 3;
				if(mat[i+1][j+1] != 'V')//1,1
					days[i+1][j+1] = 3;
				if(mat[i][j+1] != 'V')//0,1
					days[i][j+1] = 3;
				if(mat[i-1][j-1] != 'V')//-1,1
					days[i-1][j-1] = 3;
				if(mat[i-1][j] != 'V')//-1,0
					days[i-1][j] = 3;
			}
			if(mat[i][j] == 'V' && i = 0 && j != 0 && j != m)
			{
				days[i][j] = dOne; 
				if(mat[i][j-1] != 'V') // 0,-1
					days[i][j-1] = 3;
				if(mat[i+1][j-1] != 'V') // 1,-1
					days[i+1][j-1] = 3;
				if(mat[i+1][j] != 'V')//1,0
					days[i+1][j] = 3;
				if(mat[i+1][j+1] != 'V')//1,1
					days[i+1][j+1] = 3;
				if(mat[i][j+1] != 'V')//0,1
					days[i][j+1] = 3;
			}
			if(mat[i][j] == 'V' && i = n-1 && j > 0 && j < m-1)
			{
				days[i][j] = dOne; 
				if(mat[i-1][j-1] != 'V') // -1,-1
					days[i-1][j-1] = 3;
				if(mat[i][j-1] != 'V') // 0,-1
					days[i][j-1] = 3;
				if(mat[i+1][j] != 'V')//1,0
					days[i+1][j] = 3;
				if(mat[i][j+1] != 'V')//0,1
					days[i][j+1] = 3;
				if(mat[i-1][j-1] != 'V')//-1,1
					days[i-1][j-1] = 3;
				if(mat[i-1][j] != 'V')//-1,0
					days[i-1][j] = 3;
			}
			if(mat[i][j] == 'V' && i < n-1 && i > 0 && j = 0)
			{
				days[i][j] = dOne; 
				if(mat[i+1][j] != 'V')//1,0
					days[i+1][j] = 3;
				if(mat[i+1][j+1] != 'V')//1,1
					days[i+1][j+1] = 3;
				if(mat[i][j+1] != 'V')//0,1
					days[i][j+1] = 3;
				if(mat[i-1][j-1] != 'V')//-1,1
					days[i-1][j-1] = 3;
				if(mat[i-1][j] != 'V')//-1,0
					days[i-1][j] = 3;
			}
			if(mat[i][j] == 'V' && i < n-1 && i > 0 && j = m-1)
			{
				days[i][j] = dOne; 
				if(mat[i-1][j-1] != 'V') // -1,-1
					days[i-1][j-1] = 3;
				if(mat[i][j-1] != 'V') // 0,-1
					days[i][j-1] = 3;
				if(mat[i+1][j-1] != 'V') // 1,-1
					days[i+1][j-1] = 3;
				if(mat[i+1][j] != 'V')//1,0
					days[i+1][j] = 3;
				if(mat[i-1][j] != 'V')//-1,0
					days[i-1][j] = 3;
			}
			
			// cornor cells
			if(mat[0][0] == 'V')
			days[0][0] = dOne;
		}
	}
}