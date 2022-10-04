// Given two numbers, hour and minutes, return the smaller angle (in degrees) formed between the hour and the minute hand.

// Answers within 10-5 of the actual value will be accepted as correct.


class Solution {
public:
    double angleClock(int hour, int minutes) {
        
//      angle of hour hand
        double hr_deg = hour*30 + minutes*0.5;
        
//      angle of minute hand
        double min_deg = minutes*6;
        
        double ans; 
        
        ans = abs(hr_deg - min_deg);
        return (ans<180?ans:360-ans);
    }
};
