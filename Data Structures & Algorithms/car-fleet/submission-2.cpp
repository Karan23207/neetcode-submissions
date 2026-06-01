class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector< pair<int,double> > cars;

        for(int i=0; i<position.size(); i++){
            double time = double((target - position[i]) )/ speed[i];
            cars.push_back({position[i] , time});
        }

        sort(cars.begin(), cars.end(),
        [](auto &a, auto &b){
            return a.first > b.first;
        });

        int fleet = 0;
        double t =  0;
        for(int i=0; i<cars.size(); i++){
            if(cars[i].second > t){
                t = cars[i].second;
                fleet++;
            }
        }
        return fleet;
    }
};
