//QUESTION NO 4 .

// Randomly generates 10 integer vectors of 3 dimensions and stores in a 2D array of (3X10) dimension as V= {𝒗 ̅𝟏,𝒗 ̅𝟐,𝒗 ̅𝟑,𝒗 ̅𝟒,𝒗 ̅𝟓,𝒗 ̅𝟔,𝒗 ̅𝟕,𝒗 ̅𝟖,𝒗 ̅𝟗,𝒗 ̅𝟏𝟎}. Find another randomly generated integer vector of 3 dimensions (𝒗 ̅) and determine individual distance d= {𝒅𝟏,𝒅𝟐,𝒅𝟑,𝒅𝟒,𝒅𝟓,𝒅𝟔,𝒅𝟕,𝒅𝟖,𝒅𝟗,𝒅𝟏𝟎} between (𝒗 ̅ − 𝒗 ̅𝒊) whereas 𝟏 ≤ 𝒊 ≤ 𝟏𝟎 using Euclidean distance. Finally, find out the smallest distance 𝒅𝒊 between 𝒗 ̅ and 𝒗 ̅𝒊. 

#include<stdio.h>//the main header file for execution of the program.
#include<stdlib.h>//header file to use functions like (rand(),system())
#include<math.h>//math header file to use fuctions like (pow(),sqrt())
#include<time.h>//to use time function

//function to find the euclidean distance 
float edis(int j,int vectorarr[][10],int vector[])
{
    float dis=0;//using float as sqrt() might not give a perfect integer value 
    for (int  a = 0; a < 3; a++)//loop 3 time for i , j and k in each iteration
    {
        dis+=(pow(vector[a]-vectorarr[a][j],2));//add the sum of square of the differnce in the coordinates for all i,j and k  
    }
    dis=sqrt(dis);//as in euclidean distance we under root the sum of square of the differnce in the coordinates 
    return dis;//returning an individual distance that is to be added in the distance array
}

int main()
{
    system("cls");//clearing the terminal 

    int vectorarr[3][10];//2d array 
    printf("THE RANDOMYLY GENERATED 2D VECTOR ARRAY IS :- \n\n");
    //generating and printing the 2d array (3 x 10)
    srand(time(0));
    for (int  i = 0; i < 3; i++)
    {
        for (int j=0;j<10;j++)
        {
            vectorarr[i][j]=rand()%10000-5000; 

            printf("%d\e[32m\t",vectorarr[i][j]);//\e[32m IS TO GET GREEN COLOR IN THE CONSOL
        }
        printf("\n");
    }
    printf("\n\n");

    //generating and printing the vector 
    printf("THE RANDOMYLY GENERATED VECTOR IS :- ");
    int vector[3];
    for (int i = 0; i < 3; i++)
    {
        vector[i]=rand();//adding random valuse to the vector array
        printf("%d ",vector[i]);//printing the randomly generated values
    }
    printf("\n\n");
    
    //calculating the euclidean distance using the defined fuction edis()
    printf("THE CALCULATED DISTANCES ARE :- \n");
    float min=36000.0000;
    float distance[10];//an array that stores all the calculated distance 
    for (int i = 0; i < 10; i++)
    {
        distance[i]=edis(i,vectorarr,vector);//function call and storing its returned value 
        printf("%0.1f ",distance[i]); //printing the returned value

        //a code to find the minimum value among all the calculated distace using a simple loop 
        if(distance[i]<min)
        {
            min=distance[i];
        }
    }
    printf("\n\n");

    printf("THE SMALLEST DISTANCE IS : %f units \n\n\n --THANK YOU--\n",min);//the smallest distance is than printed
    

    return 0;
}