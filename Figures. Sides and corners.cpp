#include <iostream>
#include <string>


class Figures {
protected:
    std::string Name_of_figure;
public:
    void Show_name() {
        std::cout <<"\n" << "\n" << Name_of_figure << ": ";
    }
     virtual void Show_figure() {
       
    }
};


class Triangle : public Figures {
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
        Name_of_figure = "Треугольник";
    };
    Triangle(int a, int b, int c, int A, int B, int C) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
        Name_of_figure = "Треугольник";
    }
    void Show_figure() override{
        std::cout << "\n" << "Стороны: " << a <<" " << b <<" " << c << "\n";
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
        Name_of_figure = "Правильный треугольник";
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
        Name_of_figure = "Равнобедренный треугольник";
    }
};

class Equilateral_triangle : public Triangle {
public:
    Equilateral_triangle(int a) {
        this->a = a;
        b = c = a;
        A = B = C = 60;
        Name_of_figure = "Равносторонний треугольник";

    }
};


class Quadrangle : public Figures {
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
        Name_of_figure = "Четырёхугольник";
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
        Name_of_figure = "Четырёхугольник";
    }
    void Show_figure() override {
        std::cout << "\n" << "Стороны: " << a << " " << b << " " << c << " " << d << "\n";
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
        Name_of_figure = "Параллелограмм";
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
        Name_of_figure = "Прямоугольник";
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
        Name_of_figure = "Ромб";
    }
};


class Quadrate : public Rhomb {
public:
    Quadrate(int a) {
        this->a = a;
        b = c = d = a;
        B = C = D = A = 90;
        Name_of_figure = "Квадрат";
    }
};


void print_info(Figures* figure) {
    figure->Show_figure();
}


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
    
    triangle.Show_name();
    print_info(&triangle);
    right_triangle.Show_name();
    print_info(&right_triangle);
    isosceles_triangle.Show_name();;
    print_info(&isosceles_triangle);
    equilateral_triangle.Show_name();
    print_info(&equilateral_triangle);

    quadrangle.Show_name();
    print_info(&quadrangle);
    rectangle.Show_name();
    print_info(&rectangle);
    quadrate.Show_name();
    print_info(&quadrate);
    parallelogram.Show_name();
    print_info(&parallelogram);
    rhomb.Show_name();
    print_info(&rhomb);
    std::cout << "\n";
    return 0;

}