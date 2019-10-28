class Circle{
private:
    point p;
    double radius;
public:
    Circle(point p2, double r){
        this->p.xPosition = p2.xPosition;
        this->p.yPosition = p2.yPosition;
        this->radius = r;
    }

    double area(){
    return M_PI*pow(this->radius, 2);
    }

    double distanceFromCenter(point pt){
        return sqrt(pow(pt.xPosition - p.xPosition, 2) + pow(pt.yPosition - p.yPosition, 2));
    }

    int contains(point pt){
        double count = sqrt(pow(pt.xPosition - p.xPosition, 2) + pow(pt.yPosition - p.yPosition, 2));
        if(count > this->radius) return 0;
        else return 1;
    }
};