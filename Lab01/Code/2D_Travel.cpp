#include <iostream>

using namespace std;

int main()
{
    int path[] = {1, 2, 1, 3, 1, 2, 2, 1, 3, 2, 4, 1, 2, 3, 1, 4, 1, 2, 1, 3, 1, 2, 1, 1, 4};
    int pos[2] = {0, 0};
    for (int i : path)
    {
        if (i == 1)
            pos[1] += 1;
        else if (i == 2)
            pos[0] -= 1;
        else if (i == 3)
            pos[1] -= 1;
        else if (i == 4)
            pos[0] += 1;
        // switch (i)
        // {
        // case 1:
        //     pos[1] += 1;
        //     break;
        // case 2:
        //     pos[0] -= 1;
        //     break;
        // case 3:
        //     pos[1] -= 1;
        //     break;
        // case 4:
        //     pos[0] += 1;
        //     break;
        // default:
        //     break;
        // }
    }
    if (pos[0] == 0 && pos[0] == pos[1])
    {
        cout << "Reach 0,0 warp to 1,1";
        pos[0] = 1;
        pos[1] = 1;
    }
    else
    {
        cout << "Reach " << pos[0] << "," << pos[1];
    }
    return 0;
}
