{
private:
    int hour, minute, second;
public:
    Time(int hour, int minute, int second){
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }
	Time(int duration){
        this->hour = duration/3600; //หา ชม. จากsec
        this->minute = duration/60 - hour*60; //หา min จาก sec
        this->second = duration % 60;

        this->hour > 24 ? this->hour -= 24 : this->hour;
    }

    int getHour(){
        return this->hour;
    }
    int getMinute(){
        return this->minute;
    }
    int getSecond(){
        return this->second;
    }
    int getDuration(){
        return (this->hour*3600)+(this->minute*60)+this->second;
    }
    Time add(Time other){
        Time t(this->getDuration() + other.getDuration());
        return t;
    }
    int	subtract(Time other){
        int a = this->getDuration();
        int b = other.getDuration();
        return a >= b ?  a-b : (a+24*3600)-b;
    } 
    int	equals(Time other){
        return this->getDuration() == other.getDuration() ? 1 :  0;
    }
    string	toString(){
        stringstream ss;
        ss << setfill('0') << setw(2) << this->hour << ':' << setw(2) << this->minute << ':' << setw(2) << this->second;
        return ss.str();
    }
};