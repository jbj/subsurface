#include "devicedetails.h"

// This can probably be done better by someone with better c++-FU
const struct gas zero_gas = {0};
const struct setpoint zero_setpoint = {0};

DeviceDetails::DeviceDetails(QObject *parent) :
	QObject(parent),
	data(0),
	serialNo(""),
	firmwareVersion(""),
	customText(""),
	model(""),
	syncTime(false),
	gas1(zero_gas),
	gas2(zero_gas),
	gas3(zero_gas),
	gas4(zero_gas),
	gas5(zero_gas),
	dil1(zero_gas),
	dil2(zero_gas),
	dil3(zero_gas),
	dil4(zero_gas),
	dil5(zero_gas),
	sp1(zero_setpoint),
	sp2(zero_setpoint),
	sp3(zero_setpoint),
	sp4(zero_setpoint),
	sp5(zero_setpoint),
	setPointFallback(0),
	ccrMode(0),
	calibrationGas(0),
	diveMode(0),
	decoType(0),
	ppO2Max(0),
	ppO2Min(0),
	futureTTS(0),
	gfLow(0),
	gfHigh(0),
	aGFLow(0),
	aGFHigh(0),
	aGFSelectable(0),
	saturation(0),
	desaturation(0),
	lastDeco(0),
	brightness(0),
	units(0),
	samplingRate(0),
	salinity(0),
	diveModeColor(0),
	language(0),
	dateFormat(0),
	compassGain(0),
	pressureSensorOffset(0),
	flipScreen(0),
	safetyStop(0),
	maxDepth(0),
	totalTime(0),
	numberOfDives(0),
	altitude(0),
	personalSafety(0),
	timeFormat(0),
	lightEnabled(false),
	light(0),
	alarmTimeEnabled(false),
	alarmTime(0),
	alarmDepthEnabled(false),
	alarmDepth(0),
	leftButtonSensitivity(0),
	rightButtonSensitivity(0),
	bottomGasConsumption(0),
	decoGasConsumption(0),
	modWarning(false),
	dynamicAscendRate(false),
	graphicalSpeedIndicator(false),
	alwaysShowppO2(false),
	tempSensorOffset(0),
	safetyStopLength(0),
	safetyStopStartDepth(0),
	safetyStopEndDepth(0),
	safetyStopResetDepth(0)
{
}
