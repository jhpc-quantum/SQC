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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, 1.3043357435600307, 0);
  sqcRYGate(q, -0.9579109693005456, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.04362615742168147, 0);
  sqcRYGate(q, -1.9949881419166984, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0299871243958236, 2);
  sqcRYGate(q, -2.8612442271632497, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5379626006044758, 2);
  sqcRYGate(q, -1.4438895018493278, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9407215577769557, 4);
  sqcRYGate(q, 0.5805615089589349, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0939998873905898, 4);
  sqcRYGate(q, -2.4386042306236355, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7239566796680963, 6);
  sqcRYGate(q, 0.8068669582324336, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.278670908830205, 6);
  sqcRYGate(q, -3.1035176586246718, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3404073228075841, 1);
  sqcRYGate(q, 0.9105379178225407, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6041010514590577, 1);
  sqcRYGate(q, 1.5194494450476765, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.953281032691173, 3);
  sqcRYGate(q, 1.7732999930444473, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9308587282090022, 3);
  sqcRYGate(q, 2.308566756003177, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.8102102837120722, 5);
  sqcRYGate(q, -3.0795885822609996, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.2552002436120144, 5);
  sqcRYGate(q, -0.3805525712934674, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4896026087180196, 0);
  sqcRYGate(q, -0.5540991760344562, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.38681520595915286, 0);
  sqcRYGate(q, 1.5778813709094726, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.31339884811033775, 2);
  sqcRYGate(q, 0.276805957233238, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2082904996592545, 2);
  sqcRYGate(q, -1.8406368226792764, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5012877936672195, 4);
  sqcRYGate(q, 3.0964624302651425, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.804282087232278, 4);
  sqcRYGate(q, 1.0065251769346608, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8268131467837025, 6);
  sqcRYGate(q, 2.8308896213808827, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.040559202138102, 6);
  sqcRYGate(q, -0.33273115995292013, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6376133732590237, 1);
  sqcRYGate(q, 2.2913449801864783, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.130163518706251, 1);
  sqcRYGate(q, -1.5246327123242327, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0837573008425583, 3);
  sqcRYGate(q, -1.4616893870205188, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.035330161106782, 3);
  sqcRYGate(q, 0.036504910801258283, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.8625977884054992, 5);
  sqcRYGate(q, 0.22312957470810463, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9864053166528945, 5);
  sqcRYGate(q, 2.3662401199004544, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5147009233740958, 0);
  sqcRYGate(q, 1.4960887334944513, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.609491437799625, 0);
  sqcRYGate(q, 2.726445707536327, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.906443544041834, 2);
  sqcRYGate(q, -2.088688751180472, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0442031695390082, 2);
  sqcRYGate(q, -2.143081690646226, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.726609108239958, 4);
  sqcRYGate(q, -0.1012607157853047, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9749275514765907, 4);
  sqcRYGate(q, 0.6295095627982139, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4203045898363396, 6);
  sqcRYGate(q, 2.492515842068616, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.2753162481745486, 6);
  sqcRYGate(q, -1.025089459713821, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3070082783576709, 1);
  sqcRYGate(q, -3.1238477310574795, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7394794956662684, 1);
  sqcRYGate(q, 0.22983812416861674, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.121981922341107, 3);
  sqcRYGate(q, 0.5641226026833237, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.496767082354801, 3);
  sqcRYGate(q, -3.0470603062221238, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.9133472689681845, 5);
  sqcRYGate(q, -1.7803869204167888, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.7704998570391508, 5);
  sqcRYGate(q, -2.033344365784121, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.326481850876297, 0);
  sqcRYGate(q, 0.589130665222525, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5666881965901613, 0);
  sqcRYGate(q, 0.7799965320813644, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7571441639194565, 2);
  sqcRYGate(q, -0.13000673243463184, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8002244243829222, 2);
  sqcRYGate(q, 3.1351644444676467, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.805223177755598, 4);
  sqcRYGate(q, -0.33615209901722576, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.780673956482981, 4);
  sqcRYGate(q, 2.5968122095302304, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.075359027792651, 6);
  sqcRYGate(q, -1.9281389194550662, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.447488051960951, 6);
  sqcRYGate(q, -1.1878074818815252, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.516503311793497, 1);
  sqcRYGate(q, -0.2426837444062489, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5542070967041115, 1);
  sqcRYGate(q, 1.2475337282426295, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6285889638851543, 3);
  sqcRYGate(q, -2.339234899626047, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5431435019875295, 3);
  sqcRYGate(q, 1.6151502794395824, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.418187432593017, 5);
  sqcRYGate(q, -0.441642001093336, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4029736239739048, 5);
  sqcRYGate(q, -0.968208646064499, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.9853742636315794, 0);
  sqcRYGate(q, -0.845842454904853, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7460218120685769, 0);
  sqcRYGate(q, -1.0566258620938234, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1258086903759523, 2);
  sqcRYGate(q, -2.0536543704164907, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.304782598933941, 2);
  sqcRYGate(q, 0.13539201915725954, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6164306506700061, 4);
  sqcRYGate(q, 2.5634938959402054, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.844023081361107, 4);
  sqcRYGate(q, 0.3168905613990898, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.038959562421052, 6);
  sqcRYGate(q, 0.5634603450822508, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8407781764168376, 6);
  sqcRYGate(q, 1.2709740330395072, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.19702610600347797, 1);
  sqcRYGate(q, -1.65156629712693, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.03505866970158103, 1);
  sqcRYGate(q, -1.2044850133932208, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.164687604037691, 3);
  sqcRYGate(q, 0.8298310419697429, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.02256069100879099, 3);
  sqcRYGate(q, -3.0097567542721424, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.34989293891363554, 5);
  sqcRYGate(q, -0.3025261674916635, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.789518686344919, 5);
  sqcRYGate(q, 1.0059064810338914, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.0301166619199175, 0);
  sqcRYGate(q, -0.4015456768382632, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3594240241819749, 0);
  sqcRYGate(q, 2.204572743043995, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.13409804696397565, 2);
  sqcRYGate(q, -2.6106076469676056, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2900435357883198, 2);
  sqcRYGate(q, 0.3773741256977265, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.48929270188967067, 4);
  sqcRYGate(q, -0.7354477060205054, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0655297066916374, 4);
  sqcRYGate(q, -0.12612641981039782, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6766220602680939, 6);
  sqcRYGate(q, 0.3439852915252839, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.72586503343405, 6);
  sqcRYGate(q, -1.9151234023522317, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0481918224715239, 1);
  sqcRYGate(q, 0.6014660453660614, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1847114346928724, 1);
  sqcRYGate(q, -0.561613835045665, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.072885035851578, 3);
  sqcRYGate(q, -1.9602135712496578, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5616629162043303, 3);
  sqcRYGate(q, -0.5998778222065546, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.8658945599444792, 5);
  sqcRYGate(q, -1.0195207375232709, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5845789840535387, 5);
  sqcRYGate(q, -2.5147983687607383, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.5195373882758748, 0);
  sqcRYGate(q, 0.06521289426743761, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1342830582211465, 0);
  sqcRYGate(q, 1.5440318638145696, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.114676162091866, 2);
  sqcRYGate(q, -0.5086011505899626, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1406857141331224, 2);
  sqcRYGate(q, 0.02670766513751905, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.07162239255554192, 4);
  sqcRYGate(q, -1.6406723548068198, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5633083999069175, 4);
  sqcRYGate(q, 0.00014670981657511305, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.09528485066997304, 6);
  sqcRYGate(q, -2.9269138839085165, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.127809055431819, 6);
  sqcRYGate(q, -0.8039741002412087, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2740739848230704, 1);
  sqcRYGate(q, 0.03827417242628339, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8569738130047995, 1);
  sqcRYGate(q, 2.5461738198729877, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.35516376205284317, 3);
  sqcRYGate(q, -3.0660664630577137, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.169594349397997, 3);
  sqcRYGate(q, 2.512968210194825, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5729120993859294, 5);
  sqcRYGate(q, -2.7441576354169785, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5768530482543834, 5);
  sqcRYGate(q, -2.0158463023796136, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.7869556811667193, 0);
  sqcRYGate(q, 0.5340366536165879, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2571666230607064, 0);
  sqcRYGate(q, -1.8291598566336493, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2321602208084892, 2);
  sqcRYGate(q, 1.37915098932468, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1413032819880207, 2);
  sqcRYGate(q, -0.3399316316165453, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7616778154065242, 4);
  sqcRYGate(q, -1.5701499879497316, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6033513888040332, 4);
  sqcRYGate(q, -0.0035274282231650515, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5586463653096772, 6);
  sqcRYGate(q, 2.8116573144961623, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5828781392506286, 6);
  sqcRYGate(q, -2.0100207214535297, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.16878846485341104, 1);
  sqcRYGate(q, -1.8299550102822384, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.978976327341624, 1);
  sqcRYGate(q, -1.6358089773279159, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2678716062723199, 3);
  sqcRYGate(q, 2.941510130518048, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.0060002378878691075, 3);
  sqcRYGate(q, -0.06747824501436561, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5760035706754412, 5);
  sqcRYGate(q, 1.5649734859978757, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.2221868342116644, 5);
  sqcRYGate(q, 1.5670349199978395, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9900078502085217, 0);
  sqcRYGate(q, -1.8223347182529916, 1);
  sqcRYGate(q, 0.44858476884942444, 2);
  sqcRYGate(q, 1.315383764163661, 3);
  sqcRYGate(q, -1.558161612577197, 4);
  sqcRYGate(q, 1.570392813839544, 5);
  sqcRYGate(q, -0.000993417250633415, 6);
  sqcRYGate(q, -1.5654968252456274, 7);

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
