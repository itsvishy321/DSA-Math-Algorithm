// Given the coordinates of four points in 2D space p1, p2, p3 and p4, return true if the four points construct a square.

// The coordinate of a point pi is represented as [xi, yi]. The input is not given in any order.

// A valid square has four equal sides with positive length and four equal angles (90-degree angles).


class Solution {
public:
    
    
    // Function for calculating distance between 2 points
    double dist(vector<int> p1 , vector<int> p2)
    {
        return (p2[1]-p1[1])*(p2[1]-p1[1]) + (p2[0]-p1[0])*(p2[0]-p1[0]);
    }
    
    
    // Checking if a square is valid or not
    bool check_square(vector<int> p1 , vector<int> p2 , vector<int> p3 , vector<int> p4)
    {
        return (dist(p1,p2) > 0 && dist(p1,p2) == dist(p2,p3) && dist(p2,p3) == dist(p3,p4) && dist(p3,p4) == dist(p4,p1) && dist(p1,p3) == dist(p2,p4));
        
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        
        if(dist(p1,p2) == 0 || dist(p2,p3) == 0 || dist(p3,p4) == 0 || dist(p4,p1) == 0 || dist(p1,p3) == 0 || dist(p2,p4) == 0)
            return false;
        
        return check_square(p1,p2,p3,p4) || check_square(p1,p3,p2,p4) || check_square(p1,p2,p4,p3) ;
    }
};
