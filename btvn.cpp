#include <iostream>
#include <math.h>
 using namespace std;

int Max_2_num(float x , float y){
    return(x >= y ? x : y);
}

int Max_3_num(float x, float y, float z){
    float max_2 = Max_2_num(x, y);
    float max_3 = Max_2_num(max_2, z);
    return(max_3);
}

int Two_leg(float x, float y, float z){
    if (Max_3_num(x,y,z) == x)
    {   
        return(pow(y, 2) + pow(z, 2));
    }if (Max_3_num(x,y,z) == y)
    {   
        return(pow(x, 2) + pow(z, 2));
    }if (Max_3_num(x,y,z) == z)
    {   
        return(pow(y, 2) + pow(x, 2));
    }
}

int Kieu_tam_giac(float x, float y, float z,string q){
    if (pow(Max_3_num(x ,y ,z), 2) == Two_leg(x, y, z))
    {
       
        return(q == "tam giac vuong");
    }
//     if (pow(Max_3_num(x ,y ,z), 2) > Two_leg(x, y, z))
//     {
//         printf("tam giac tu");
//     }if (pow(Max_3_num(x ,y ,z), 2) < Two_leg(x, y, z))
//     {
//         printf("tam giac nhon");
//     }
//     return ;
// }

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    printf("%f", Kieu_tam_giac(a, b, c));
    return 0;
}