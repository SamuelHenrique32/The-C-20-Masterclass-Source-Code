#ifndef POINT_H
#define POINT_H
#include <fmt/format.h>


class Point
{
	friend std::ostream& operator<<(std::ostream& os, const Point& p);
	friend Point operator+(const Point& left , const Point& right);
	friend Point operator-(const Point& left , const Point& right);
	
public:
	Point() = default;
	Point(double x, double y) : 
		m_x(x), m_y(y){
	}
	~Point() = default;

	void print_info(){
		fmt::println( "Point [ x : {}{}{}{}" , m_x , ", y : " , m_y , "]" );
	}

private: 
	double length() const;   // Function to calculate distance from the point(0,0)

private : 
	double m_x{}; 
	double m_y{}; 
};

inline std::ostream& operator<<(std::ostream& os, const Point& p){
	os << "Point [ x : " << p.m_x << ", y : " << p.m_y << "]";	
	return os;
}

inline Point operator+(const Point& left , const Point& right){
	return Point( left.m_x + right.m_x, left.m_y + right.m_y);
}

inline Point operator-(const Point& left , const Point& right){
	return Point( left.m_x - right.m_x, left.m_y - right.m_y);
}


#endif // POINT_H
