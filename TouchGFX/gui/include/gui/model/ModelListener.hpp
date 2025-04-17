#ifndef MODELLISTENER_HPP
#define MODELLISTENER_HPP

#include <gui/model/Model.hpp>

class ModelListener
{
public:
    ModelListener() : model(0) {}

    virtual ~ModelListener() {}

    void bind(Model* m)
    {
        model = m;
    }

    virtual void newJunctionTempValue(int value) {}
    virtual void newJunctionHumiValue(int value) {}
    virtual void newJunctionAccelValue(int value) {}
    virtual void newJunctionPosiValue(int value) {}
    virtual void newJunctionDistValue(int value) {}

protected:
    Model* model;
};

#endif // MODELLISTENER_HPP
