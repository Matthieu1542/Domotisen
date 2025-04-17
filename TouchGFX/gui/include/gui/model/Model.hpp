#ifndef MODEL_HPP
#define MODEL_HPP

#include <stdint.h>

class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void tick();

    void setScanJunctionTemp(bool scanEnabled);
    int getTempValue();

    void setScanJunctionHumi(bool scanEnabled);
    int getHumiValue();

    void setScanJunctionAccel(bool scanEnabled);
    int getAccelValue();

    void setScanJunctionPosi(bool scanEnabled);
    int getPosiValue();

    void setScanJunctionDist(bool scanEnabled);
    int getDistValue();


protected:
    ModelListener* modelListener;
    int tickCounter;

    bool scanJunctionTemp;
    bool scanJunctionHumi;
    bool scanJunctionAccel;
    bool scanJunctionPosi;
    bool scanJunctionDist;
};

#endif // MODEL_HPP
