#define _ARMA_

//Class config.bin{
class CfgPatches
{
 class yourtag_yourproject
 {
  units[] = {"yourtag_yourproject"};
  weapons[] = {};
  requiredVersion = 1.0;
  requiredaddons[]={"A3_Map_Stratis"};
  version = "25/01/2015";
  fileName = "yourtag_yourproject.pbo";
  author = "your_username";
 };
};
class CfgWorlds
{
 class CAWorld;
 class Stratis: CAWorld
 {
  class Grid;
  class DefaultClutter;
 };
 class yourtag_yourproject: Stratis
 {
  cutscenes[] = {};
  author = "your_username";
  description = "yourproject";
  pictureMap = "yourtag\yourtag_yourproject\data\imagery\yourtag_yourproject_pictureMap.paa"; 
  worldName = "yourtag\yourtag_yourproject\yourtag_yourproject.wrp";
  startTime = "11:00";
  startDate = "05/03/2001";
  startWeather = 0.2;
  startFog = 0.0;
  forecastWeather = 0.6;
  forecastFog = 0.0;
  centerPosition[] = {1024,1024,500};
  seagullPos[] = {1024,1024,500};
  longitude = 65;
  latitude = -34;
  elevationOffset = 5;
  envTexture = "A3\Data_f\env_land_ca.tga";
  minTreesInForestSquare = 2;
  minRocksInRockSquare = 2;
  newRoadsShape = "\yourtag\yourtag_yourproject\data\roads\roads.shp";
  ilsPosition[] = {1024,1024};
  ilsDirection[] = {0.5075,0.08,-0.8616};
  ilsTaxiIn[] = {};
  ilsTaxiOff[] = {};
  drawTaxiway = 0;
 class SecondaryAirports {};
class Sea
  {
   seaTexture = "a3\data_f\seatexture_co.paa";
   seaMaterial = "#water";
   shoreMaterial = "#shore";
   shoreFoamMaterial = "#shorefoam";
   shoreWetMaterial = "#shorewet";
   WaterMapScale = 20;
   WaterGrid = 50;
   MaxTide = 0;
   MaxWave = 0;
   SeaWaveXScale = "2.0/50";
   SeaWaveZScale = "1.0/50";
   SeaWaveHScale = 2.0;
   SeaWaveXDuration = 5000;
   SeaWaveZDuration = 10000;
  };
  class Grid: Grid
  {
   offsetX = 0;
   offsetY = 5120;
   class Zoom1
   {
    zoomMax = 0.15;
    format = "XY";
    formatX = "000";
    formatY = "000";
    stepX = 100;
    stepY = -100;
   };
   class Zoom2
   {
    zoomMax = 0.85;
    format = "XY";
    formatX = "00";
    formatY = "00";
    stepX = 1000;
    stepY = -1000;
   };
   class Zoom3
   {
    zoomMax = 1e+030.0;
    format = "XY";
    formatX = "0";
    formatY = "0";
    stepX = 10000;
    stepY = -10000;
   };
  };
#include "cfgClutter.hpp"
		class Names
		{
			#include "yourtag_yourproject.hpp"
		};
 };
};
class CfgWorldList
{
 class yourtag_yourproject{};
};
class CfgMissions
{
 class Cutscenes
 {
 
 };
};


//SURFACES
#include "cfgSurfaces.hpp"

