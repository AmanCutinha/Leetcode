class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int sHours=stoi(startTime.substr(0,2));
        int sMins=stoi(startTime.substr(3,2));
        int sSec=stoi(startTime.substr(6,2));

        int eHours=stoi(endTime.substr(0,2));
        int eMins=stoi(endTime.substr(3,2));
        int eSec=stoi(endTime.substr(6,2));

        int totalStartSec=((sHours*60*60)+(sMins*60)+sSec);
        int totalEndSec=((eHours*60*60)+(eMins*60)+eSec);

        return totalEndSec-totalStartSec;
    }
};