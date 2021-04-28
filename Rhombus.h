#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class Rhombus {

private:
    
    /** \brief	Координата точки пересечения диагоналей по x */
    double x0;

    /** \brief	Координата точки пересечения диагоналей по y */
    double y0;

    /** \brief	Длина диагонали, параллельной оси Ox */
    double diag_x;

    /** \brief	Длина диагонали, параллельной оси Oy */
    double diag_y;

    /**
     \brief	Сеттер диагоналей с проверкой длины
     \param 	x0	  	Координата точки пересечения диагоналей по x.
     \param 	y0	  	Координата точки пересечения диагоналей по y.
     \param 	diag_x	Длина диагонали, параллельной оси Ox.
     \param 	diag_y	Длина диагонали, параллельной оси Oy.
     */
    void set_diagonals(double x0, double y0, double diag_x, double diag_y);
public:

   /**
    \brief	Конструктор с параметрами
    \param 	x0	  	Координата точки пересечения диагоналей по x.
    \param 	y0	  	Координата точки пересечения диагоналей по y.
    \param 	diag_x	Длина диагонали, параллельной оси Ox.
    \param 	diag_y	Длина диагонали, параллельной оси Oy.
     */
   explicit Rhombus(double x0, double y0, double diag_x, double diag_y);

    /**
     \brief	Конструктор копирования по умолчанию
     */
    Rhombus(const Rhombus&) = default;

    /**
     \brief	Конструктор присвоения по умолчанию
     */
    Rhombus& operator=(const Rhombus&) = default;
    /**
     \brief	Деструктор по умолчанию
     */

    ~Rhombus() = default;

    /**
     \brief	Возвращает верхную верщину ромба по координате x.
     \returns	return x0.
     */
    double get_up_vertex_rhombus_x1();

    /**
     \brief	Возвращает верхную верщину ромба по координате y.
     \returns	return y0 + diag_y / 2.
     */
    double get_up_vertex_rhombus_y1();

    /**
     \brief	Возвращает нижнюю верщину ромба по координате x.
     \returns	return x0.
     */
    double get_down_vertex_rhombus_x2();

    /**
     \brief	Возвращает нижнюю верщину ромба по координате y.
     \returns	return y0 - diag_y / 2.
     */
    double get_down_vertex_rhombus_y2();

    /**
     \brief	Возвращает левую верщину ромба по координате x.
     \returns	return x0 - diag_x / 2.
     */
    double get_left_vertex_rhombus_x3();

    /**
     \brief	Возвращает левую верщину ромба по координате y.
     \returns	return y0.
     */
    double get_left_vertex_rhombus_y3();

    /**
     \brief	Возвращает правую верщину ромба по координате x.
     \returns	return x0 + diag_x / 2.
     */
    double get_right_vertex_rhombus_x4();

    /**
     \brief	Возвращает правую верщину ромба по координате y.
     \returns	return y0.
     */
    double get_right_vertex_rhombus_y4();

    /**
     \brief	Считает площадь.
     \returns	return abs(0.5 * diag_x * diag_y).
     */
    double get_area();

    /**
     \brief	Считает периметр.
     \returns	return abs(4 * (sqrt((pow(diag_x / 2, 2)) + (pow(diag_y / 2, 2))))).
     */
    double get_perimeter();

    /**
     \brief	Возвращает измененную координату x1.
     \returns	return x0 + diag_y / 2.
     */
    double get_inverted_rhombus_coordinate_x1();

    /**

     \brief	Возвращает измененную координату y1.
     \returns	return y0.
     */
    double get_inverted_rhombus_coordinate_y1();

    /**
     \brief	Возвращает измененную координату x2.
     \returns	return x0 - diag_y / 2;.
     */
    double get_inverted_rhombus_coordinate_x2();

    /**
     \brief	Возвращает измененную координату y2.
     \returns	return y0.
     */
    double get_inverted_rhombus_coordinate_y2();

    /**
     \brief	Возвращает измененную координату x3.
     \returns	return x0.
     */
    double get_inverted_rhombus_coordinate_x3();

    /**
     \brief	Возвращает измененную координату y3.
     \returns	return y0 + diag_x / 2.
     */
    double get_inverted_rhombus_coordinate_y3();

    /**
     \brief	Возвращает измененную координату x4.
     \returns	return x0.
     */
    double get_inverted_rhombus_coordinate_x4();

    /**
     \brief	Возвращает измененную координату y4.
     \returns	return y0 - diag_x / 2.
     */
    double get_inverted_rhombus_coordinate_y4();
};