# Vertex-Color-algorithm
Vertex Color Algorithm with applications in games like Sudoku, Tic Tac Toe
We were given the problem of graph coloring using optimal number of colors so that each vertex gets unique color and can be distinctly identified.
Based on the reading from various sources we have proposed the following
algorithm :-
1. Color any vertex of the graph ,
2. Now for all the vertices of the graph
for( i=0; i<numverts; i++)
{
Color[i]=1;
// set the color of the ith node as 1;
for (j=0 ; j<i ; j++)
{
// for all vertices from the first till the ith vertex
If ( adj[i][j] !=0 AND color[i] == color[j] )
// If the ith and jth vertex are connected AND have the same color
Then
Color[i]=color[j]+1;
// ith vertex color = jth vertex color +1
} end j loop
} end i loop
1
 0  1  2 3 4  5
Did not enter j for loop
1 1
 0   1  2 3 4  5
Connected ? yes , same color?
Yes color of 1 = color of 0 + 1 = 1 + 1 = 2
1 2 1
 0   1  2 3 4  5
Connected? No but same color (for 0th and 2nd indices) 
Connected? Yes but not same color (for 1st and 2nd indices)
The complexity can be arrived at by noticing the number of nodes , total time taken to go to the next corresponding color is O(nm) , where
n= number of tuples/rows, m= chromaticity or the distinct number of colors used to color the vertices. \


The graph coloring analogy can be seen through the Sudoku puzzle game where there is an n x n grid and the player has to fill in unique numbers
from 1-9 such that each adjacent column and row should not get the same number being filled. Similarly, In the graph coloring problem one has to meticulously see that
whether the adjacent vertices are not getting filled with same color , the main aim of vertex coloring is that each vertex should get a unique color
and can be distinctly identified. Therefore, based upon the above findings we propose the following solution(another approach) :-'
Hence, the graph coloring can also be performed efficiently using greedy algorithm, which is stated as follows –

A greedy algorithm is an algorithm that follows the problem solving of making the locally optimal choice at each stage with the hope of finding a
global optimum. 
Greedy algorithms look for simple, easy-to-implement solutions to complex, multi-step problems by deciding which next step will provide the
most obvious benefit. Such algorithms are called greedy because while the optimal solution to each smaller instance will provide an immediate
output, the algorithm doesn’t consider the larger problem as a whole. Once a decision has been made, it is never reconsidered.
In graph coloring problem, the greedy Algorithm is used to assign colors. It doesn’t guarantee to use minimum colors, but it guarantees an upper
bound on the number of colors. The basic algorithm never uses more than d+1 colors where d is the maximum degree of a vertex in the given graph.

ALGORITHM
1. Color first vertex with first color.
2. Do following for remaining V-1 vertices.
Consider the currently picked vertex and color it with the  lowest numbered color that has not been used on any previously colored vertices adjacent to it. If all previously used colors
 appear on vertices adjacent to v, assign a new color to it. We make the following assumption incase of the above proposed algorithm Here d is the maximum degree in the given graph. Since d is maximum degree, a vertex cannot be attached to more than d vertices. When we color
a vertex, at most d colors could have already been used by its adjacent. To color this vertex, we need to pick the smallest numbered color that is not used by the adjacent vertices. If colors are numbered like 1, 2, …., then the value of such smallest number must be between 1 to d+1 (Note that d
numbers are already picked by adjacent vertices).

So, the final crux of the graph coloring problem states that we have to use optimal number of colors to color the consequent edges of vertices of the
given graph. Also we would initially check whether the graph is fully connected or partially , Incase of a fully connected graph , let us say we have n vertices
then we have to use n number of distinct colors so that no two vertices get the same color. Incase of a partially connected graph we are allowed to use same colors but
again it should be kept in mind that no two adjacent edges should be given the same colors.
