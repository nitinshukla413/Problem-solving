int hurdleRace(int k, vector<int> height) {
    int max=*max_element(height.begin(),height.end());;
    int diff=max-k;
    if(diff<0)
    {
        return 0;
    }
    else {
        return diff;
    }


}
