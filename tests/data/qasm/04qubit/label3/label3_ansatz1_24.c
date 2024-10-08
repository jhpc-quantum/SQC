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

  sqcRYGate(q, -2.5696629654396412, 0);
  sqcRZGate(q, 1.2054331328263828, 0);
  sqcRYGate(q, 2.0090695964208383, 1);
  sqcRZGate(q, -2.2895546950254464, 1);
  sqcRYGate(q, -1.8208353099876815, 2);
  sqcRZGate(q, 0.0324006690087284, 2);
  sqcRYGate(q, -2.4863189399792116, 3);
  sqcRZGate(q, 2.268880019844585, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.7952208301030845, 0);
  sqcRZGate(q, 1.8305793824939587, 0);
  sqcRYGate(q, 0.5982203017276259, 1);
  sqcRZGate(q, 0.789995045213109, 1);
  sqcRYGate(q, 0.7578792951416097, 2);
  sqcRZGate(q, -0.674309203773519, 2);
  sqcRYGate(q, -2.13773441214909, 3);
  sqcRZGate(q, -1.4179491797057127, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.6111233338147901, 0);
  sqcRZGate(q, -1.8474202521159988, 0);
  sqcRYGate(q, 0.7072567947457469, 1);
  sqcRZGate(q, -2.641900963186811, 1);
  sqcRYGate(q, -0.10835339804791744, 2);
  sqcRZGate(q, -2.788333932228745, 2);
  sqcRYGate(q, 0.18724581276547436, 3);
  sqcRZGate(q, -1.904847810116728, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.982624426466139, 0);
  sqcRZGate(q, 0.9709629552687835, 0);
  sqcRYGate(q, -2.3579548525680436, 1);
  sqcRZGate(q, 2.9452382441232836, 1);
  sqcRYGate(q, 2.731041008038745, 2);
  sqcRZGate(q, 2.756453114749892, 2);
  sqcRYGate(q, -1.702962117340676, 3);
  sqcRZGate(q, -0.9490495415952144, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.7583387294277344, 0);
  sqcRZGate(q, -1.3252304632876764, 0);
  sqcRYGate(q, 2.4021407359945144, 1);
  sqcRZGate(q, 2.8128884271319485, 1);
  sqcRYGate(q, 0.32152682204663474, 2);
  sqcRZGate(q, -3.0923149344284875, 2);
  sqcRYGate(q, 1.3366682062244841, 3);
  sqcRZGate(q, -0.14348208128856077, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.1198984049229423, 0);
  sqcRZGate(q, 2.6523700719684817, 0);
  sqcRYGate(q, -1.5960752275959642, 1);
  sqcRZGate(q, 2.063762667015064, 1);
  sqcRYGate(q, -0.6360485547458028, 2);
  sqcRZGate(q, 0.5749411564588724, 2);
  sqcRYGate(q, 2.305999151254397, 3);
  sqcRZGate(q, 1.6749510116975186, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.60808509945877, 0);
  sqcRZGate(q, -0.6862744575678993, 0);
  sqcRYGate(q, -1.6940430268375268, 1);
  sqcRZGate(q, 2.1394044636718386, 1);
  sqcRYGate(q, -2.4800021187942507, 2);
  sqcRZGate(q, 2.2477816910650814, 2);
  sqcRYGate(q, -0.26858184986239236, 3);
  sqcRZGate(q, 2.432266457061918, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.4879988814716794, 0);
  sqcRZGate(q, 1.4231076592972545, 0);
  sqcRYGate(q, -1.7134990302719342, 1);
  sqcRZGate(q, 0.7981112349431142, 1);
  sqcRYGate(q, 2.968008726828064, 2);
  sqcRZGate(q, -0.8973984260038191, 2);
  sqcRYGate(q, 1.55840352142629, 3);
  sqcRZGate(q, -2.9765803495451637, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.7746266353297098, 0);
  sqcRZGate(q, -2.2438467546953555, 0);
  sqcRYGate(q, 1.63341876622058, 1);
  sqcRZGate(q, 0.012794978282057765, 1);
  sqcRYGate(q, 0.3180915682761513, 2);
  sqcRZGate(q, 2.542127213238872, 2);
  sqcRYGate(q, -3.0743850951922065, 3);
  sqcRZGate(q, 0.7068390296442207, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.1224100914852784, 0);
  sqcRZGate(q, 0.7114672996143705, 0);
  sqcRYGate(q, 1.3720075915145031, 1);
  sqcRZGate(q, -2.365013083712639, 1);
  sqcRYGate(q, -1.9747091426610082, 2);
  sqcRZGate(q, -0.3861009910117206, 2);
  sqcRYGate(q, 1.4252435178741296, 3);
  sqcRZGate(q, -1.791387763366811, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.6064196728281943, 0);
  sqcRZGate(q, 3.04841118924999, 0);
  sqcRYGate(q, -2.337737520686033, 1);
  sqcRZGate(q, -2.433840268888703, 1);
  sqcRYGate(q, 2.0297856875077436, 2);
  sqcRZGate(q, 2.313074731725617, 2);
  sqcRYGate(q, 1.4963291255049782, 3);
  sqcRZGate(q, -1.0087229103625033, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.6140885144712719, 0);
  sqcRZGate(q, 1.6140461607000183, 0);
  sqcRYGate(q, 0.2350338463950603, 1);
  sqcRZGate(q, -0.5657168425472862, 1);
  sqcRYGate(q, -1.0743544499616366, 2);
  sqcRZGate(q, -2.6105984553055457, 2);
  sqcRYGate(q, 0.5423351207597914, 3);
  sqcRZGate(q, 1.687251864863595, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.0153658182601895, 0);
  sqcRZGate(q, 1.8639716212368844, 0);
  sqcRYGate(q, 1.9065572703688929, 1);
  sqcRZGate(q, 0.881142178827818, 1);
  sqcRYGate(q, -0.3761801083704883, 2);
  sqcRZGate(q, 1.8165889206316503, 2);
  sqcRYGate(q, -0.8811076719876487, 3);
  sqcRZGate(q, -0.7811320275399103, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.1826239211753675, 0);
  sqcRZGate(q, 1.7381755341053384, 0);
  sqcRYGate(q, -2.9558470148651392, 1);
  sqcRZGate(q, -1.1092302066035746, 1);
  sqcRYGate(q, 1.548709005384631, 2);
  sqcRZGate(q, -2.7044929173918186, 2);
  sqcRYGate(q, -1.372397943954705, 3);
  sqcRZGate(q, -1.1826319495169166, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.8405569891994519, 0);
  sqcRZGate(q, -2.1678485325355186, 0);
  sqcRYGate(q, -0.7204198290836397, 1);
  sqcRZGate(q, -1.2127108513832132, 1);
  sqcRYGate(q, 1.0815103582154004, 2);
  sqcRZGate(q, -2.5690341446390352, 2);
  sqcRYGate(q, -2.433910005537377, 3);
  sqcRZGate(q, 2.7373293181405027, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.58835773562915, 0);
  sqcRZGate(q, 2.742443724675702, 0);
  sqcRYGate(q, 1.3082457383354678, 1);
  sqcRZGate(q, 2.615092042777362, 1);
  sqcRYGate(q, 0.7283609990911266, 2);
  sqcRZGate(q, -2.048351700323436, 2);
  sqcRYGate(q, -0.5055279836733222, 3);
  sqcRZGate(q, -1.7239595231772133, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.7971454179836741, 0);
  sqcRZGate(q, -2.3332002672492504, 0);
  sqcRYGate(q, 1.0012730106526844, 1);
  sqcRZGate(q, 1.073973151260609, 1);
  sqcRYGate(q, -2.4006988372158857, 2);
  sqcRZGate(q, -2.5345949658014004, 2);
  sqcRYGate(q, -1.1103603972450902, 3);
  sqcRZGate(q, 1.2875471477363043, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.3152080987666177, 0);
  sqcRZGate(q, -2.7941896429362583, 0);
  sqcRYGate(q, 1.7070675581852228, 1);
  sqcRZGate(q, -1.6613949871418416, 1);
  sqcRYGate(q, 2.3635436274977515, 2);
  sqcRZGate(q, 1.6617344875386668, 2);
  sqcRYGate(q, -1.4565961230142452, 3);
  sqcRZGate(q, 0.3894001210741602, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.1362663555246733, 0);
  sqcRZGate(q, -0.4916115111760986, 0);
  sqcRYGate(q, 0.6723533886402926, 1);
  sqcRZGate(q, -1.3527128380699311, 1);
  sqcRYGate(q, -2.1765697299965288, 2);
  sqcRZGate(q, 2.8716350047206314, 2);
  sqcRYGate(q, -3.03523253710232, 3);
  sqcRZGate(q, -1.6010424128367564, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.0789455477301484, 0);
  sqcRZGate(q, 2.1107287138582698, 0);
  sqcRYGate(q, 1.1932978122176188, 1);
  sqcRZGate(q, -2.158577222745185, 1);
  sqcRYGate(q, 2.7925078041423337, 2);
  sqcRZGate(q, -3.0525956425480274, 2);
  sqcRYGate(q, 0.9931369293722536, 3);
  sqcRZGate(q, -1.3060256039435973, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.3969898714299642, 0);
  sqcRZGate(q, 0.3783840299942947, 0);
  sqcRYGate(q, 0.5044388252817832, 1);
  sqcRZGate(q, 0.7278192378607117, 1);
  sqcRYGate(q, -0.19463185565836771, 2);
  sqcRZGate(q, -0.15775365810064496, 2);
  sqcRYGate(q, 0.8783751224178271, 3);
  sqcRZGate(q, 2.8464674087653568, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.8530199804242723, 0);
  sqcRZGate(q, 1.694541099832442, 0);
  sqcRYGate(q, -1.4488205792389908, 1);
  sqcRZGate(q, 0.40861726572440027, 1);
  sqcRYGate(q, 1.9492686679251487, 2);
  sqcRZGate(q, 0.8958125698733412, 2);
  sqcRYGate(q, 3.109229564804715, 3);
  sqcRZGate(q, 2.8386727649625745, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.4177800186900895, 0);
  sqcRZGate(q, 1.4780995931750538, 0);
  sqcRYGate(q, -2.5524425096804015, 1);
  sqcRZGate(q, -0.0008824747567072049, 1);
  sqcRYGate(q, 1.9861493546329883, 2);
  sqcRZGate(q, 1.6471653458503592, 2);
  sqcRYGate(q, -1.3461783521306823, 3);
  sqcRZGate(q, -2.2193487608391758, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.2190802631766402, 0);
  sqcRZGate(q, -0.13329481770672627, 0);
  sqcRYGate(q, 0.37894846933888204, 1);
  sqcRZGate(q, -2.735111487759154, 1);
  sqcRYGate(q, 0.48273123309945476, 2);
  sqcRZGate(q, -2.5325524057861553, 2);
  sqcRYGate(q, 0.7561833585997517, 3);
  sqcRZGate(q, 0.4973311613675707, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.2008199109225943, 0);
  sqcRZGate(q, 0.6160482977251398, 0);
  sqcRYGate(q, 2.443600889808357, 1);
  sqcRZGate(q, -1.282505931774826, 1);
  sqcRYGate(q, 0.06262710511905577, 2);
  sqcRZGate(q, 2.247768204540805, 2);
  sqcRYGate(q, -1.1549987784091353, 3);
  sqcRZGate(q, -1.0406266442613448, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.8022067515609317, 0);
  sqcRZGate(q, -2.7899829149317608, 0);
  sqcRYGate(q, 3.0187220393991434, 1);
  sqcRZGate(q, -0.08082336560522142, 1);
  sqcRYGate(q, -1.8258682995860251, 2);
  sqcRZGate(q, -2.8627513156988025, 2);
  sqcRYGate(q, 2.5094204254604446, 3);
  sqcRZGate(q, 2.5783539735315912, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.3876639495818344, 0);
  sqcRZGate(q, 0.3458717202525285, 0);
  sqcRYGate(q, -1.2969190681876164, 1);
  sqcRZGate(q, -0.7622313285749005, 1);
  sqcRYGate(q, 1.591826405823248, 2);
  sqcRZGate(q, -0.5026686987374074, 2);
  sqcRYGate(q, 0.2874630470524364, 3);
  sqcRZGate(q, 2.3948997658134745, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.0066617572903027, 0);
  sqcRZGate(q, 1.1366573753475242, 0);
  sqcRYGate(q, -2.047984165480773, 1);
  sqcRZGate(q, -2.988831043930619, 1);
  sqcRYGate(q, -0.22768101992493062, 2);
  sqcRZGate(q, -2.991210536017165, 2);
  sqcRYGate(q, -0.4320507683944653, 3);
  sqcRZGate(q, 0.4857783434979304, 3);

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
