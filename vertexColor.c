#include <stdio.h>

int Adj[50][50];										                    // Adj : Adjacency matrix
int color[50];										                        // color : List of colors of nodes

void nextValue( int k )	{
   
   int i, j;
   color[k] = 1;  									                        // initially coloring the kth vertex with color 1

   for ( i = 0; i < k; i++ )	{ 							                // checking all k-1 vertices

     if ( ( Adj[i][k] != 0 ) && ( color[k] == color[i] ) )					// if the kth vertex and ith vertex are connected and have the same color
       {
		    printf("\n k = %d , i = %d ", k, i);
			color[k] = color[i] + 1;  								        // assign the kth vertex a color higher than the color of the ith vertex
			printf("\n color[k] after = %d , color[i] after = %d ", color[k], color[i]);
	 }

   }

}

int main()	{

  int numVerts,numEdges;
  int i, j, a, b;										                    // temporary variables and loop variables
  char ch;

 
  printf("Enter no. of vertices : ");
  scanf("%d",&numVerts);  									                // total vertices
 
  printf("Enter no. of edges : ");
  scanf("%d",&numEdges);  									                // total edges

  /* Initialize the cells of the
   * adjacency matrix with 0
   */ 

  for ( i = 0; i < numVerts; i++ )
    for ( j = 0; j < numVerts; j++ )
      Adj[i][j] = 0;  

  printf ( " Enter indexes where value is 1: \n" );
  for ( i = 0; i < numEdges; i++ )	{
    scanf( "%d %d", &a, &b );
    Adj[a - 1][b - 1] = 1;
    Adj[b - 1][a - 1] = 1;
  }

  for ( i = 0; i < numVerts; i++ )
    nextValue( i );  										                 // coloring each vertex

  printf ( " Colors of vertices: \n" );
  for ( i = 0; i < numVerts; i++ )  										 // displaying color of each vertex
    printf ( " Vertex[%d] : %d \n", i + 1, color[i] );

  printf(" Enter any key from the english alphabet to exit... ");
  scanf(" %c", &ch);

  return 0;
  
}
