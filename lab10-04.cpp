point pt, p1;
    double r, x, y;

    cout << "Center of Circle: ";
    cin >> p1.xPosition >> p1.yPosition;
    cout << "Radius of Circle: ";
    cin >> r;

    cout << "Point to Check: ";
    cin >> pt.xPosition >> pt.yPosition;

    Circle c(p1, r);
    
    x = pt.xPosition;
    y = pt.yPosition;
    cout << "Area of Circle is " << c.area() << endl;
    cout << "Distance from Center to Point (" << x << ", " << y << ") is " << c.distanceFromCenter(pt) << endl;
    if (c.contains(pt) == 1) cout << "This circle contains this point." << endl;
    else cout << "This point is not in this circle." << endl;