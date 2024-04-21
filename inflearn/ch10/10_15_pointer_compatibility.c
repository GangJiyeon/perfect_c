/*
10.15. pointer compatibility
*/

int main()
{
    int n = 5;
    double x = n;   //auto promotion

    int *p1 = &n;
    double *pd = &x;

    //warining
    //pd = p1;

    int *pt;
    int (*pa)[3];
    int ar1[2][3] = {3, };
    int ar2[3][2] = {7, };
    int **p2;

    pt = &ar1[0][0];
    pt = ar1[0];
    //pt = ar1;

    //pa = ar1;
    p2 = &pt;
    return 0;
}