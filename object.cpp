// Write your Student class here
class Student{
    int scores[5];
    public:
        void input()
        {
            for(int j=0;j<5;j++)
            {
                cin>>scores[j];
            }
        }
    int calculateTotalScore()
    {
        int sum=0;
        for(int j=0;j<5;j++)
            {
                sum=sum+scores[j];
            }
        return sum;
    }
};