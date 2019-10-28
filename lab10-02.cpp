string name_;
    int vel;

    cin >> name_ >> vel;

    Hero h(name_, vel);

    cout << h.getName() << ' ' << h.getLevel() <<endl;