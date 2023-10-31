#include <iostream>


class Triangle  {
protected:
    int a;
    int b;
    int c;
    int A;
    int B;
    int C;

public:
    Triangle() {
        a = 0;
        b = 0;
        c = 0;
        A = 0;
        B = 0;
        C = 0;
    };
    Triangle(int a, int b, int c, int A, int B, int C) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    }
    void Show_triangle() {
        std::cout << "Стороны: " << a <<" " << b <<" " << c << "\n";
        std::cout << "Углы: " << A << " " << B  << " " << C;
    }
};

class Right_triangle : public Triangle {
public:
    Right_triangle(int a, int b, int c, int A, int B) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        C = 90;
    }
};

class Isosceles_triangle : public Triangle {
public:
    Isosceles_triangle(int a, int b, int A, int B) {
        this->a = a;
        this->b = b;
        this->A = A;
        this->B = B;
        c = a;
        C = A;
    }
};

class Equilateral_triangle : public Triangle {
public:
    Equilateral_triangle(int a) {
        this->a = a;
        b = c = a;
        A = B = C = 60;

    }
};


class Quadrangle {
protected:
    int a;
    int b;
    int c;
    int d;
    int A;
    int B;
    int C;
    int D;

public:
    Quadrangle() {
        a = 0;
        b = 0;
        c  = 0;
        d = 0;
        A = 0;
        B = 0;
        C = 0;
        D = 0;
    };
    Quadrangle(int a, int b, int c,int d, int A, int B, int C, int D) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    }
    void Show_quadrangle() {  
        std::cout << "Стороны: " << a << " " << b << " " << c << " " << d << "\n";
        std::cout << "Углы: " << A << " " << B << " " << C << " " << D;
    }
};

class Parallelogram : public Quadrangle {
public: 
    Parallelogram() {};
    Parallelogram(int a,int b, int A, int B) {
        this->a = a;
        this->b = b;
        this->A = A;
        this->B = B;
        c = a;
        d = b;
        C = A;
        D = B;
    }
};

class Rectangle : public Parallelogram {
public:
    Rectangle(int a, int b ) {
        this->a = a;
        this->b = b;
        c = a;
        d = b;
        B = C = D = A = 90;
    }
};




class Rhomb : public Parallelogram {
public:
    Rhomb() {};
    Rhomb(int a,int A, int B) {
        this->a = a;
        this->A = A;
        this->B = B;
        b = c = d = a;
        C = A;
        D = B;
    }
};


class Quadrate : public Rhomb {
public:
    Quadrate(int a) {
        this->a = a;
        b = c = d = a;
        B = C = D = A = 90;
    }
};

int main()
{
    setlocale(LC_ALL, "russian");

    Triangle triangle(15,25,30,60,40,80);
    Quadrangle quadrangle(10,20,30,40,80,90,50,60);
    Right_triangle right_triangle(10, 20, 30, 30, 50);
    Isosceles_triangle isosceles_triangle(20, 30, 50, 60);
    Equilateral_triangle equilateral_triangle(10);
    Parallelogram parallelogram(10, 20, 30, 40);
    Rectangle rectangle(20, 30);
    Rhomb rhomb(30, 20, 30);
    Quadrate quadrate(20);
    
    
    std::cout << "\nТреугольник: " << "\n";
    triangle.Show_triangle();
    std::cout << "\n\nПрямоугольный треугольник: " << "\n";
    right_triangle.Show_triangle();
    std::cout << "\n\nРавнобедренный треугольник: " << "\n";
    isosceles_triangle.Show_triangle();
    std::cout << "\n\nРавносторонний треугольник: " << "\n";
    equilateral_triangle.Show_triangle();

    std::cout << "\n\nЧетырёхугольник: " << "\n";
    quadrangle.Show_quadrangle();
    std::cout << "\n\nПрямоугольник: " << "\n";
    rectangle.Show_quadrangle();
    std::cout << "\n\nКвадрат: " << "\n";
    quadrate.Show_quadrangle();
    std::cout << "\n\nПараллелограмм: " << "\n";
    parallelogram.Show_quadrangle();
    std::cout << "\n\nРомб: " << "\n";
    rhomb.Show_quadrangle();
    std::cout << "\n";
    return 0;

}