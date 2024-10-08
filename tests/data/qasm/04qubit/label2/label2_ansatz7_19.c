#include "sqc_api.h"
#include <stdlib.h>
#include <string.h>

#if defined(FAKE_PROVIDER) 
#define KIND (Fake20QV1)
#ifndef OPT_LEVEL
sqcFakeProviderOption opt = {0};
#else
sqcFakeProviderOption opt = {OPT_LEVEL};
#endif
#elif defined(IBM_PROVIDER)
#fatal /* Not Implemented */
#else /* other */
#fatal 
#endif

int main(int argc, char *argv[])
{
  sqcInitialize();

  sqcQC* q;
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, 2.012469709414458, 0);
  sqcRYGate(q, 1.3326732249703372, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9048419444874156, 0);
  sqcRYGate(q, 1.5130810204113745, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.617206092604411, 0);
  sqcRYGate(q, -2.358670656952643, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3179473971537683, 0);
  sqcRYGate(q, 1.9965075831278654, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4783516143744233, 0);
  sqcRYGate(q, 1.024294570641132, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.11830751932012618, 0);
  sqcRYGate(q, -1.4841422250166425, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.562694496698076, 1);
  sqcRYGate(q, 1.611998991932498, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.808982635646422, 1);
  sqcRYGate(q, 1.7906980100984864, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.10452841391080633, 1);
  sqcRYGate(q, -1.8628587767506413, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.915757076829944, 1);
  sqcRYGate(q, 2.5936311418560676, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7660736512950321, 2);
  sqcRYGate(q, -0.8812576835735089, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9823353142077806, 2);
  sqcRYGate(q, 0.732053823882679, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8707218925886044, 0);
  sqcRYGate(q, -2.4988082835895926, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1491462743054877, 0);
  sqcRYGate(q, 0.5539679778318867, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2431215097017454, 0);
  sqcRYGate(q, -1.6191680629842589, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.39530489940943614, 0);
  sqcRYGate(q, -2.2912251196827595, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6300346809484898, 0);
  sqcRYGate(q, 2.9019966803649675, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.4769939267463874, 0);
  sqcRYGate(q, -2.9306210714403647, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.8748880171030358, 1);
  sqcRYGate(q, -0.6632381867145292, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6090229829202567, 1);
  sqcRYGate(q, 1.9370319081470582, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9598872345283533, 1);
  sqcRYGate(q, 0.6898834248419066, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6579400047346624, 1);
  sqcRYGate(q, 2.9196980552801586, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8923324380185087, 2);
  sqcRYGate(q, 2.340673805760984, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.54980115949661, 2);
  sqcRYGate(q, 0.3868761993063492, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5269845748720408, 0);
  sqcRYGate(q, -1.701418655899011, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6968812784291338, 0);
  sqcRYGate(q, -0.8528828232963086, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.734502029992242, 0);
  sqcRYGate(q, -3.1074814258845436, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5460811081469585, 0);
  sqcRYGate(q, -0.9522352253075046, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.533496609764783, 0);
  sqcRYGate(q, 2.977222202335293, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.694222169009085, 0);
  sqcRYGate(q, -0.8967631665618363, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.548312245790769, 1);
  sqcRYGate(q, 2.250063461468411, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0871727466656333, 1);
  sqcRYGate(q, -1.835053816164617, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9772943011507298, 1);
  sqcRYGate(q, -1.6341515582745048, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2989194767977326, 1);
  sqcRYGate(q, -1.0226564885083436, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9094989934527717, 2);
  sqcRYGate(q, -0.23561946142163237, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.556547488834719, 2);
  sqcRYGate(q, -1.088003024899364, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2752730770421097, 0);
  sqcRYGate(q, 2.874089263844969, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0874466608254876, 0);
  sqcRYGate(q, -2.8869649272292075, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9862560223612418, 0);
  sqcRYGate(q, -0.11971131874542822, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9753481781070024, 0);
  sqcRYGate(q, -1.2009298070384056, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8163271928089015, 0);
  sqcRYGate(q, -2.921940985496699, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.2053467752749336, 0);
  sqcRYGate(q, 2.6683675259325437, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.4496843815470943, 1);
  sqcRYGate(q, 0.8931144279548983, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.862112597942238, 1);
  sqcRYGate(q, 1.5936099820545353, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.222243779040236, 1);
  sqcRYGate(q, -2.5459921324055776, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4988663816024825, 1);
  sqcRYGate(q, -2.8217558650504486, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1534055804727137, 2);
  sqcRYGate(q, -0.176631676360417, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.053635485768245, 2);
  sqcRYGate(q, 1.3031722233389988, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6104552591292581, 0);
  sqcRYGate(q, -2.912940447650559, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6911779575872874, 0);
  sqcRYGate(q, -2.8062384331341113, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0924185048613366, 0);
  sqcRYGate(q, 2.9737895897129127, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4143055872029033, 0);
  sqcRYGate(q, -0.7930739902248503, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5687300517360454, 0);
  sqcRYGate(q, -2.9054618079304437, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.4566754592393622, 0);
  sqcRYGate(q, 1.734779475467624, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8311544889948257, 1);
  sqcRYGate(q, -1.721615645744266, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6063381188709693, 1);
  sqcRYGate(q, 0.44877977090461574, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.701679983129744, 1);
  sqcRYGate(q, 1.9212973273088767, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.221411047757912, 1);
  sqcRYGate(q, 1.9481918544796935, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2231495039619675, 2);
  sqcRYGate(q, -2.6449276480988018, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5218788858739254, 2);
  sqcRYGate(q, 0.6576962571017526, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0989393593859662, 0);
  sqcRYGate(q, -1.3369943820841685, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7599339035582042, 0);
  sqcRYGate(q, -2.494091584965953, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.347182387167445, 0);
  sqcRYGate(q, -0.40175393971306006, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.405620144849431, 0);
  sqcRYGate(q, -2.9188776962645417, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.894452731862299, 0);
  sqcRYGate(q, -1.9256245236000042, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.2824033625088904, 0);
  sqcRYGate(q, 0.977864246250261, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9298054367694029, 1);
  sqcRYGate(q, 0.8406965107030039, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8761921714425425, 1);
  sqcRYGate(q, 0.7930632746120415, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1822079731358457, 1);
  sqcRYGate(q, 1.936887096456629, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.078267025136265, 1);
  sqcRYGate(q, -2.33848257115311, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6027631490565626, 2);
  sqcRYGate(q, 2.285022255376105, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9589000341832525, 2);
  sqcRYGate(q, 1.246445174235732, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3748232294729403, 0);
  sqcRYGate(q, -2.557305002457181, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.49339516090529045, 0);
  sqcRYGate(q, 0.1274359227259252, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1208314141478732, 0);
  sqcRYGate(q, 2.9261451473728792, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5324952445872396, 0);
  sqcRYGate(q, -1.048392981626647, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1940504337836946, 0);
  sqcRYGate(q, -2.3688173510515265, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3950441133165226, 0);
  sqcRYGate(q, -1.3327647949816077, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.082551867195524, 1);
  sqcRYGate(q, -2.121733173087195, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.30021619374836916, 1);
  sqcRYGate(q, -0.3034564438280591, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4541722845295588, 1);
  sqcRYGate(q, -0.1783277530443934, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.529663771178973, 1);
  sqcRYGate(q, 2.302818866787576, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3888897659337367, 2);
  sqcRYGate(q, -0.4974116587158308, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3908049164472747, 2);
  sqcRYGate(q, -0.6268506432272343, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8397850367456363, 0);
  sqcRYGate(q, 1.749441595758183, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8913763716376217, 0);
  sqcRYGate(q, 1.2704244423062125, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6773136814017229, 0);
  sqcRYGate(q, 2.8299878904643214, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.438960477428671, 0);
  sqcRYGate(q, 0.7521181917267787, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8703190946777264, 0);
  sqcRYGate(q, 1.4401700197858345, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.6484846710451757, 0);
  sqcRYGate(q, -0.16610846192762363, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8444055927295561, 1);
  sqcRYGate(q, 1.5583218873050875, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.559868162829176, 1);
  sqcRYGate(q, -0.6483684284890142, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.432298573952617, 1);
  sqcRYGate(q, 1.2072890680839345, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.19556339848014287, 1);
  sqcRYGate(q, 2.2687939640186308, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5010932412479168, 2);
  sqcRYGate(q, 1.6884478120295439, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.26989609008174503, 2);
  sqcRYGate(q, 2.5886498401742384, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.628527383732532, 0);
  sqcRYGate(q, -1.6566587959229335, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4472298735930256, 0);
  sqcRYGate(q, 0.4573195925453309, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.39631161763885103, 0);
  sqcRYGate(q, 0.6834876483414636, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4679693820077029, 0);
  sqcRYGate(q, -2.123919239858253, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8315885627806996, 0);
  sqcRYGate(q, 0.6312324821723537, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.04975529453246886, 0);
  sqcRYGate(q, 0.8694685188970902, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.1964350553189271, 1);
  sqcRYGate(q, 1.1854812009532834, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0498252705381628, 1);
  sqcRYGate(q, -1.8764277997678371, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.16020357575805, 1);
  sqcRYGate(q, -2.9453633917677315, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7996206016115044, 1);
  sqcRYGate(q, 2.43921835315365, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1537720743182824, 2);
  sqcRYGate(q, 1.48855088717207, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5918483251267306, 2);
  sqcRYGate(q, -0.759428490396238, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.17656012698477053, 0);
  sqcRYGate(q, 1.7068583070957768, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.478037844555684, 0);
  sqcRYGate(q, -1.565642748332511, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3371546066698006, 0);
  sqcRYGate(q, 1.2820310667015002, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7372839029634601, 0);
  sqcRYGate(q, 1.3830499685273125, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7911950151246054, 0);
  sqcRYGate(q, -0.3101194459763471, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.011710854484784509, 0);
  sqcRYGate(q, 0.5231902129458208, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.33577534988683944, 1);
  sqcRYGate(q, 2.318613068725647, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6506179741342226, 1);
  sqcRYGate(q, -1.3563108451098258, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2406524078148076, 1);
  sqcRYGate(q, -1.879111077064752, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4379130381067322, 1);
  sqcRYGate(q, 0.71170135245813, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9206909042775298, 2);
  sqcRYGate(q, 1.475535372859603, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.608390153434736, 2);
  sqcRYGate(q, 0.4885574917760592, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5496601488149753, 0);
  sqcRYGate(q, -1.825432293140378, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.215280742017608, 0);
  sqcRYGate(q, 2.1520381487449534, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3353744689880525, 0);
  sqcRYGate(q, 1.5238810800235632, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9652987007028975, 0);
  sqcRYGate(q, 0.8824473768283481, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.933915347265018, 0);
  sqcRYGate(q, 2.1726818818517977, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.4398406718031938, 0);
  sqcRYGate(q, -0.4634743161125785, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.0762564651567812, 1);
  sqcRYGate(q, -1.0226949212122565, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9413991570742084, 1);
  sqcRYGate(q, -0.23952626292929846, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9996502433805763, 1);
  sqcRYGate(q, -0.048398632970595566, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.15576761977538034, 1);
  sqcRYGate(q, 0.25498576376191456, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2109195868529392, 2);
  sqcRYGate(q, -2.469551075586921, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4340060596012414, 2);
  sqcRYGate(q, -2.4631100032713853, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.053324363835616805, 0);
  sqcRYGate(q, 0.45077485036323145, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8526130007922212, 0);
  sqcRYGate(q, -0.3149286131589619, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9587334081491647, 0);
  sqcRYGate(q, -1.8625554817860515, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5164978446471834, 0);
  sqcRYGate(q, 1.037313594262546, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5225991608096359, 0);
  sqcRYGate(q, -2.5386764426758353, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.28115344238027795, 0);
  sqcRYGate(q, -0.8083006864882665, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2862399820529618, 1);
  sqcRYGate(q, -2.093730559602999, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0373990533243536, 1);
  sqcRYGate(q, 2.8031862598552792, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.906306316188173, 1);
  sqcRYGate(q, 1.862376329452003, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.675390646214894, 1);
  sqcRYGate(q, -0.41875284387864736, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5627230258432165, 2);
  sqcRYGate(q, -2.959000857450927, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9956947812807186, 2);
  sqcRYGate(q, -1.5932265320900354, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2386086678113921, 0);
  sqcRYGate(q, 2.926751266939698, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.38683494944882346, 0);
  sqcRYGate(q, -1.979284584375644, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0592950567212531, 0);
  sqcRYGate(q, -2.820042142368687, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.19849464288131277, 0);
  sqcRYGate(q, -2.372497790356589, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3609090635598446, 0);
  sqcRYGate(q, 2.9278051408439953, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.47713146134811, 0);
  sqcRYGate(q, 2.3996281920156624, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.7543684856868713, 1);
  sqcRYGate(q, -0.9575167515506495, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8316926944196399, 1);
  sqcRYGate(q, -1.4453563210987364, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5758975552635133, 1);
  sqcRYGate(q, 3.065809122255202, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.24314664932321947, 1);
  sqcRYGate(q, 2.003032504572646, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.1906491915123132, 2);
  sqcRYGate(q, -2.0547254606965515, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5080640694927787, 2);
  sqcRYGate(q, 2.9139891142971166, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.356307357817678, 0);
  sqcRYGate(q, -1.6558672182423981, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6433167332414031, 0);
  sqcRYGate(q, -1.9008697093818134, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0409833845120944, 0);
  sqcRYGate(q, 2.7232531972804335, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7949488781802305, 0);
  sqcRYGate(q, 1.2156196399216903, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8102937120038782, 0);
  sqcRYGate(q, 2.372721739978927, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.518850920160726, 0);
  sqcRYGate(q, -2.6550016252756072, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.42075573797131666, 1);
  sqcRYGate(q, -1.0857601947388005, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.065261166495718, 1);
  sqcRYGate(q, -0.538258415522642, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.255302354213598, 1);
  sqcRYGate(q, 2.075369514537953, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4013492311718592, 1);
  sqcRYGate(q, 2.738729688313731, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4248843376467661, 2);
  sqcRYGate(q, -0.5862343437694646, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.274948538812617, 2);
  sqcRYGate(q, 0.8968515059728475, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.859668014461235, 0);
  sqcRYGate(q, 2.065583518719104, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8194565605149917, 0);
  sqcRYGate(q, 0.03178109602761261, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.134862182465696, 0);
  sqcRYGate(q, 3.014505019258612, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7579058353885113, 0);
  sqcRYGate(q, 2.1054314268562226, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.023282428575662734, 0);
  sqcRYGate(q, 1.5180740289360366, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.9781936072057655, 0);
  sqcRYGate(q, -0.08465911175619123, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.4928661860466698, 1);
  sqcRYGate(q, 1.8078800078937414, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.486634093753216, 1);
  sqcRYGate(q, -2.656972361568322, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1492310078480314, 1);
  sqcRYGate(q, 2.0615627814646684, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5285501249085284, 1);
  sqcRYGate(q, 1.999317540214802, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0687131485954118, 2);
  sqcRYGate(q, -2.618575961143074, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2582526069178304, 2);
  sqcRYGate(q, -2.5303268262264056, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.33923145145272304, 0);
  sqcRYGate(q, 1.6118308539875095, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4259743597805663, 0);
  sqcRYGate(q, -3.0702292768703074, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0626275937452583, 0);
  sqcRYGate(q, 0.5142763547796793, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.280541619368236, 0);
  sqcRYGate(q, -0.034118844329684705, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3278915255716015, 0);
  sqcRYGate(q, -0.5410755470940823, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8220034554067714, 0);
  sqcRYGate(q, -1.9742778069276357, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.009041798467518, 1);
  sqcRYGate(q, 1.5985132244281512, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5424079350701116, 1);
  sqcRYGate(q, -1.035322394556256, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7769673698194944, 1);
  sqcRYGate(q, -2.047698424076609, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6394629577101735, 1);
  sqcRYGate(q, 1.2866067212560486, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.770777591557997, 2);
  sqcRYGate(q, 1.757706513282658, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.06964563233374221, 2);
  sqcRYGate(q, -1.0947132267209163, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2319322412038813, 0);
  sqcRYGate(q, -1.847601798616604, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4888616646961408, 0);
  sqcRYGate(q, -0.4228900357152372, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0261381704588919, 0);
  sqcRYGate(q, 2.3731448680761265, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.55334943348806, 0);
  sqcRYGate(q, -1.391394956524369, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.533109294767729, 0);
  sqcRYGate(q, 1.135991426433587, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.6967251052355127, 0);
  sqcRYGate(q, 3.1134975567963425, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7377610257607525, 1);
  sqcRYGate(q, 1.9732304494200261, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.971663597102499, 1);
  sqcRYGate(q, 2.3959672135616183, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0359283473365246, 1);
  sqcRYGate(q, 1.7204444489448874, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8545112241115194, 1);
  sqcRYGate(q, -0.10672765419696251, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5615461555202464, 2);
  sqcRYGate(q, 3.1116992498035545, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6237157747021143, 2);
  sqcRYGate(q, -0.49370679285353547, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5148190638866543, 0);
  sqcRYGate(q, -2.001625985210669, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9374495312422875, 0);
  sqcRYGate(q, -0.8632237672307248, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9501640937602772, 0);
  sqcRYGate(q, 2.3362056021023294, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.0406408958216025, 0);
  sqcRYGate(q, 2.5662531528974917, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6505538195543747, 0);
  sqcRYGate(q, 1.970391788689891, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.532521959049592, 0);
  sqcRYGate(q, 0.3191976662707319, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.23952042780889826, 1);
  sqcRYGate(q, -1.629151204248803, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7949595350560723, 1);
  sqcRYGate(q, -1.5977756563308008, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.23735973059276727, 1);
  sqcRYGate(q, 2.2144698727968612, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8071078156340237, 1);
  sqcRYGate(q, 2.1576531414175184, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1294872516522947, 2);
  sqcRYGate(q, -0.06961781545979932, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7989212036343778, 2);
  sqcRYGate(q, 1.8438135788657197, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.379263264600177, 0);
  sqcRYGate(q, -2.446943253343294, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9425498760804625, 0);
  sqcRYGate(q, -0.2829857338261602, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1271509927975125, 0);
  sqcRYGate(q, 2.956807690425004, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.529780516348712, 0);
  sqcRYGate(q, 1.2628227687890767, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3829612273736656, 0);
  sqcRYGate(q, -1.3564804035084284, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.9845648437477177, 0);
  sqcRYGate(q, 3.0412050188733617, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3556200941942032, 1);
  sqcRYGate(q, 2.144960799755677, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.1656410607401046, 1);
  sqcRYGate(q, -1.1100918955247898, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.101215312781707, 1);
  sqcRYGate(q, -1.6786471818058128, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.34583366678434935, 1);
  sqcRYGate(q, 2.172689392023542, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5932704569080096, 2);
  sqcRYGate(q, -0.23051489432724195, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6670806900613924, 2);
  sqcRYGate(q, 2.428026615046185, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5666012184931952, 0);
  sqcRYGate(q, -1.1271324124627977, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6752789421407366, 0);
  sqcRYGate(q, -0.6241161994423612, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5111667007773039, 0);
  sqcRYGate(q, 0.5439647075043537, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2008184959829071, 0);
  sqcRYGate(q, 2.4531163439053607, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7895430008116062, 0);
  sqcRYGate(q, 3.042943498382181, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.1244492925592677, 0);
  sqcRYGate(q, 2.6751888568342954, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.1065869501207901, 1);
  sqcRYGate(q, 0.04243197229387974, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8414086114416834, 1);
  sqcRYGate(q, -2.2365943033598077, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.276725052950013, 1);
  sqcRYGate(q, -2.8524932693308083, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4128774691638775, 1);
  sqcRYGate(q, 0.19655239776998812, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7741304439760118, 2);
  sqcRYGate(q, -0.7950602911263509, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0081008138571903, 2);
  sqcRYGate(q, -0.24748980964978365, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9927583201206692, 0);
  sqcRYGate(q, -2.29456696169859, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.896550314544134, 0);
  sqcRYGate(q, -0.7325885014718982, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5458620983678646, 0);
  sqcRYGate(q, -1.759899929256636, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.76852689728172, 0);
  sqcRYGate(q, 3.0508069542437672, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0940482286713427, 0);
  sqcRYGate(q, -2.9025017451789403, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2924889675772528, 0);
  sqcRYGate(q, 1.7108868276949432, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.2940394192306501, 1);
  sqcRYGate(q, -2.3120792454920074, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4104632639924972, 1);
  sqcRYGate(q, -0.10234123785356883, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5362867421948274, 1);
  sqcRYGate(q, -0.8861825919905123, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8646874387713948, 1);
  sqcRYGate(q, 1.0008016123670957, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.13913692998689786, 2);
  sqcRYGate(q, 0.3107941920212376, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.1878312835049116, 2);
  sqcRYGate(q, -0.8510601287181672, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.015635112674718, 0);
  sqcRYGate(q, 2.089025071674728, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4994204389226979, 0);
  sqcRYGate(q, -0.10810046889458277, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1673930097313017, 0);
  sqcRYGate(q, -3.0656970983760607, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.227908859077997, 0);
  sqcRYGate(q, -1.5230423247414822, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.1620384816182106, 0);
  sqcRYGate(q, -0.8180548732052814, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.692763569404704, 0);
  sqcRYGate(q, -1.869854773318342, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3243850033374986, 1);
  sqcRYGate(q, -0.3604122014158113, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.45757197247952686, 1);
  sqcRYGate(q, -2.3858306296366125, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6072948738384474, 1);
  sqcRYGate(q, -1.9710417134387406, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8719822407903477, 1);
  sqcRYGate(q, -2.4677112427470584, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3959024274703885, 2);
  sqcRYGate(q, -0.4650217776895438, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9090686873367639, 2);
  sqcRYGate(q, 0.08617840436045007, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3235061538362096, 0);
  sqcRYGate(q, 0.5345771060180609, 1);
  sqcRYGate(q, 2.0210872426586253, 2);
  sqcRYGate(q, 1.6402792426088302, 3);

  FILE * IR_file = NULL;
  IR_file = fopen(__FILE__"_IR.txt", "w");
  sqcStoreQC(q, IR_file);
  fclose(IR_file);

  sqcTranspile(q, KIND, &opt);

  FILE * Transpile_file = NULL;
  Transpile_file = fopen(__FILE__"_TP.txt", "w");
  sqcStoreQC(q, Transpile_file);
  fclose(Transpile_file);

  sqcDestroyQuantumCircuit(q);
  sqcFinalize();
  return 0;
}
