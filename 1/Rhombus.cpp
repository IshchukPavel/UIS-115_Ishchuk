#include <iostream>
#include "Rhombus.h"
using namespace std;
void Rhombus::set_diagonals(double x0, double y0, double diag_x, double diag_y)
{
    if (diag_x && diag_y > 0)
    {
        this->x0 = x0;
        this->y0 = y0;
        this->diag_x = diag_x;
        this->diag_y = diag_y;
    }
    else
    {
        throw invalid_argument("ƒиагонали меньше нул¤");
    }
}
Rhombus::Rhombus(double x0, double y0, double diag_x, double diag_y)
{
    set_diagonals(x0, y0, diag_x, diag_y);
}
ostream& operator<<(std::ostream& out, Rhombus& F)
{
    return out << F.get_up_vertex_rhombus_x1() << " | " << F.get_down_vertex_rhombus_x2() << " | " << F.get_left_vertex_rhombus_x3() << " | " << F.get_right_vertex_rhombus_x4();
    return out << F.get_up_vertex_rhombus_y1() << " | " << F.get_down_vertex_rhombus_y2() << " | " << F.get_left_vertex_rhombus_y3() << " | " << F.get_right_vertex_rhombus_y4();
}
double Rhombus::get_up_vertex_rhombus_x1() { return x0; }
double Rhombus::get_up_vertex_rhombus_y1() { return y0 + diag_y / 2; }
double Rhombus::get_down_vertex_rhombus_x2() { return x0; }
double Rhombus::get_down_vertex_rhombus_y2() { return y0 - diag_y / 2; }
double Rhombus::get_left_vertex_rhombus_x3() { return x0 - diag_x / 2; }
double Rhombus::get_left_vertex_rhombus_y3() { return y0; }
double Rhombus::get_right_vertex_rhombus_x4() { return x0 + diag_x / 2; }
double Rhombus::get_right_vertex_rhombus_y4() { return y0; }
double Rhombus::get_area() { return abs(0.5 * diag_x * diag_y); }
double Rhombus::get_perimeter() { return abs(4 * (sqrt((pow(diag_x / 2, 2)) + (pow(diag_y / 2, 2))))); }
double Rhombus::get_inverted_rhombus_coordinate_x1() { return x0 + diag_y / 2; }
double Rhombus::get_inverted_rhombus_coordinate_y1() { return y0; }
double Rhombus::get_inverted_rhombus_coordinate_x2() { return x0 - diag_y / 2; }
double Rhombus::get_inverted_rhombus_coordinate_y2() { return y0; }
double Rhombus::get_inverted_rhombus_coordinate_x3() { return x0; }
double Rhombus::get_inverted_rhombus_coordinate_y3() { return y0 + diag_x / 2; }
double Rhombus::get_inverted_rhombus_coordinate_x4() { return x0; }
double Rhombus::get_inverted_rhombus_coordinate_y4() { return y0 - diag_x / 2; }

