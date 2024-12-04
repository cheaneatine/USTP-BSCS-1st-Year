// Jimenez, Cherry Lee H.
// CS1B LAB 4 EXERCISE

//A convex 4-vertex polygon is divided into four triangles with vertices v1, v2, v3, and v4 in clockwise order.
// Calculate the area of a triangle given its vertices in increasing order

#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

double calc_slope(double x1, double y1, double x2, double y2);
double calc_yIntercept(double x1, double y1, double x2, double y2);
double calc_area(double x1, double y1, double x2, double y2, double x3, double y3);

int main () 
{
    double x1, y1, x2, y2, x3, y3, x4, y4, xmid, ymid;
    double slope1, slope2, yIntercept1, yIntercept2;

    cout << "Enter x1, y1, x2, y2, x3, y3, x4, y4: ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    // find the middle vertex by computing the intersection of the diagonals
    slope1 = calc_slope(x1, y1, x3, y3);
    slope2 = calc_slope(x2, y2, x4, y4);

    yIntercept1 = calc_yIntercept(x1, y1, x3, y3);
    yIntercept2 = calc_yIntercept(x2, y2, x4, y4);

    // compute for the middle vertex
    xmid = (yIntercept2 - yIntercept1) / (slope1 - slope2);
    ymid = slope1 * xmid + yIntercept1;

    // display middle vertex
    printf("The middle vertex is (%.2f, %.2f)\n", xmid, ymid);

    // compute the area of each triangle
    double area[4];
    area[0] = calc_area(x1, y1, x2, y2, xmid, ymid);
    area[1] = calc_area(x2, y2, x3, y3, xmid, ymid);
    area[2] = calc_area(x3, y3, x4, y4, xmid, ymid);
    area[3] = calc_area(x4, y4, x1, y1, xmid, ymid);

    // sort and print the area of each triangle in acending order using bubble sort
    double temp;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (area[j] > area[j + 1])
            {
                temp = area[j];
                area[j] = area[j + 1];
                area[j + 1] = temp;
            }
        }
    }

    cout << "The areas are: ";
    for (int i = 0; i < 4; i++)
    {
        printf("%.3f ", area[i]);
    }

    printf("\nTotal area is %.3f", area[0] + area[1] + area[2] + area[3]);

    return 0;
}

// compute for the slope function
double calc_slope(double x1, double y1, double x2, double y2)
{
    double slope;
    slope = (y2 - y1) / (x2 - x1);
    return slope;
}

// compute for the y-intercept function
double calc_yIntercept(double x1, double y1, double x2, double y2)
{
    double yIntercept;
    yIntercept = y1 - calc_slope(x1, y1, x2, y2) * x1;
    return yIntercept;
}

// compute for the area function
double calc_area(double x1, double y1, double x2, double y2, double x3, double y3)
{
    double area;
    area = 0.5 * abs((x1 - x3) * (y2 - y1) - (x2 - x1) * (y1 - y3));
    return area;
}
