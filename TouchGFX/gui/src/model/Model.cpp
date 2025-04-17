#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include <stdint.h>
#include <cstdio>

extern "C" {
    extern uint32_t TEMP_SENSOR_GetValue(void);
    extern uint32_t HUMI_SENSOR_GetValue(void);
    extern uint32_t ACCEL_SENSOR_GetValue(void);
    extern uint32_t ALARME_SENSOR_GetValue(void);
    extern uint32_t MESURE_DISTANCE(void);
}

Model::Model()
    : modelListener(0), tickCounter(0),scanJunctionTemp(false), scanJunctionHumi(false),scanJunctionAccel(false), scanJunctionPosi(false), scanJunctionDist(false)
{
}

void Model::tick()
{
    tickCounter++;

    if (((tickCounter % 20) == 0) && (scanJunctionTemp))
    {
        if (modelListener != 0)
        {
            modelListener->newJunctionTempValue(getTempValue());
        }
    }

    if (((tickCounter % 20) == 0) && (scanJunctionHumi))
    {
        if (modelListener != 0)
        {
            modelListener->newJunctionHumiValue(getHumiValue());
        }
    }

    if (((tickCounter % 20) == 0) && (scanJunctionAccel))
    {
        if (modelListener != 0)
        {
            modelListener->newJunctionAccelValue(getAccelValue());
        }
    }

    if (((tickCounter % 20) == 0) && (scanJunctionPosi))
    {
        if (modelListener != 0)
        {
            modelListener->newJunctionPosiValue(getPosiValue());
        }
    }
    if (((tickCounter % 20) == 0) && (scanJunctionDist))
	{
		if (modelListener != 0)
		{
			modelListener->newJunctionDistValue(getDistValue());
		}
	}
}

void Model::setScanJunctionTemp(bool scanEnabled)
{
    scanJunctionTemp = scanEnabled;
}

int Model::getTempValue()
{
    return TEMP_SENSOR_GetValue();
}

void Model::setScanJunctionHumi(bool scanEnabled)
{
    scanJunctionHumi = scanEnabled;
}

int Model::getHumiValue()
{
    return HUMI_SENSOR_GetValue();
}

void Model::setScanJunctionAccel(bool scanEnabled)
{
    scanJunctionAccel = scanEnabled;
}

int Model::getAccelValue()
{
    return ACCEL_SENSOR_GetValue();
}

void Model::setScanJunctionPosi(bool scanEnabled)
{
    scanJunctionPosi = scanEnabled;
}

int Model::getPosiValue()
{
    return ALARME_SENSOR_GetValue();
}

void Model::setScanJunctionDist(bool scanEnabled)
{
    scanJunctionDist = scanEnabled;
}

int Model::getDistValue()
{
    return MESURE_DISTANCE();
}


