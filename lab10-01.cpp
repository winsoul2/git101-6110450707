class Hero{
private:
    string name;
    int level;
public:
    Hero(string str,int vel){
        name = str;
        level = vel;
    }
    string getName(){
        return name;
    }
    int getLevel(){
        return level;
    }
};