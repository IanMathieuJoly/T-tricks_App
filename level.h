#include <math.h>
class Level
{

    public:
        Level();
        void next();
        void update(int linesCleared);
        int getLevelNumber();
        int getTickTime();
        int getScore(int lines);
		void setTickTime(int entree) { tickTime = entree; };
   private:
        int levelNumber;
        int tickTime;
        
};