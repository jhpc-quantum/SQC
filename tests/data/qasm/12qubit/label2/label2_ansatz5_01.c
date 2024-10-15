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
  sqcInitialize(NULL, NULL);

  sqcQC* q;
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, -0.5753522506847542, 0);
  sqcRYGate(q, -0.49902202387272343, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5887553484684735, 0);
  sqcRYGate(q, 0.8739124577162355, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8018711757608266, 2);
  sqcRYGate(q, 1.7589983606172668, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0203244664859237, 2);
  sqcRYGate(q, -2.9044184876823973, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8471855953405206, 4);
  sqcRYGate(q, 0.17872909057224573, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.3247698130727183, 4);
  sqcRYGate(q, 1.1028622717534464, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.865752858815533, 6);
  sqcRYGate(q, -1.786449437180527, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.3108776870003602, 6);
  sqcRYGate(q, -3.078203162125367, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1365591768110006, 8);
  sqcRYGate(q, 2.527087675179768, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.879536555908573, 8);
  sqcRYGate(q, 2.156124621666814, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.689751548850003, 10);
  sqcRYGate(q, 1.6981452641685677, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.0457310252641863, 10);
  sqcRYGate(q, 2.9816897096344523, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.7194760074844258, 1);
  sqcRYGate(q, -1.3105095094186494, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0119751874941247, 1);
  sqcRYGate(q, -0.9135156369857808, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2324109774573593, 3);
  sqcRYGate(q, 0.22350828841731918, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5589328198323962, 3);
  sqcRYGate(q, 1.5345872243914371, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.034462965549179, 5);
  sqcRYGate(q, -2.6416755518519026, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.0118325177117935, 5);
  sqcRYGate(q, 0.026728136893050976, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7553874244701717, 7);
  sqcRYGate(q, 2.1688357337672413, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.6712460394491364, 7);
  sqcRYGate(q, -2.6336795861939146, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.834020566169276, 9);
  sqcRYGate(q, 0.40433059484974265, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.315648694924711, 9);
  sqcRYGate(q, 0.04192274104727111, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.0567708981484154, 0);
  sqcRYGate(q, -1.30896939749897, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6720953996227435, 0);
  sqcRYGate(q, -1.5960212549671633, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8503369075188916, 2);
  sqcRYGate(q, 2.3517401146311077, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.076706924224468, 2);
  sqcRYGate(q, -2.9641112007276744, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8961500843633334, 4);
  sqcRYGate(q, -1.1270025757240958, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.05692985065475664, 4);
  sqcRYGate(q, -0.46383991063192553, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6317111523093981, 6);
  sqcRYGate(q, -2.7263084483240143, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.303061311736861, 6);
  sqcRYGate(q, -0.6127097847369312, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.2382919392174325, 8);
  sqcRYGate(q, -1.5921148123555195, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.1776086341638408, 8);
  sqcRYGate(q, 0.8765071046556816, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.9262975363583306, 10);
  sqcRYGate(q, 3.021412407292066, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.8795741451279804, 10);
  sqcRYGate(q, -0.25424358977222283, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.6251728141631503, 1);
  sqcRYGate(q, 2.1391529995848275, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.055134557028508, 1);
  sqcRYGate(q, -2.9088865767769185, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1565019098212126, 3);
  sqcRYGate(q, -1.9539305779760585, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.1046673385007093, 3);
  sqcRYGate(q, 0.13741853122807265, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.9241941218895314, 5);
  sqcRYGate(q, 1.7646502220824714, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.747899630730423, 5);
  sqcRYGate(q, -2.919565508867223, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5296142633626095, 7);
  sqcRYGate(q, 1.5098084426843181, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.0997065539682254, 7);
  sqcRYGate(q, 3.008420104603421, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.7085589598078652, 9);
  sqcRYGate(q, 1.2827148204480199, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.44139725257215523, 9);
  sqcRYGate(q, -0.011050319802147435, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.1148114462775137, 0);
  sqcRYGate(q, 2.8800180166242497, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.312916185416901, 0);
  sqcRYGate(q, 2.35280049866374, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8668824030613798, 2);
  sqcRYGate(q, -2.275133208120624, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.459258517825983, 2);
  sqcRYGate(q, -0.807907184192884, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0660326938093627, 4);
  sqcRYGate(q, 0.9714054537607135, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.08236557593671588, 4);
  sqcRYGate(q, 1.4753744260249837, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6151693662718453, 6);
  sqcRYGate(q, -1.8977307441774152, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.101415103649111, 6);
  sqcRYGate(q, 0.09963758750439426, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.0891457011720123, 8);
  sqcRYGate(q, 1.179074429860834, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.5871307964254755, 8);
  sqcRYGate(q, 1.3434013399261888, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.1196651039914554, 10);
  sqcRYGate(q, 2.0956081848749344, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.6884785416797802, 10);
  sqcRYGate(q, 1.5005069773411825, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.181802532786773, 1);
  sqcRYGate(q, 0.6479195473109857, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6082990588849796, 1);
  sqcRYGate(q, 2.3674419668127338, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6580030400773906, 3);
  sqcRYGate(q, 1.8057904214592702, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1376908920035875, 3);
  sqcRYGate(q, 0.049345672447214106, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.1444176852452035, 5);
  sqcRYGate(q, 0.6832376988547024, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6760447902783255, 5);
  sqcRYGate(q, 3.070775817630423, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.658789856270901, 7);
  sqcRYGate(q, 1.7217224143271352, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.0248376736963019, 7);
  sqcRYGate(q, -0.1166838998660263, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.093686019550023, 9);
  sqcRYGate(q, 1.1957910487347583, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.3201625706565965, 9);
  sqcRYGate(q, -0.0643448984840413, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.4974106307926305, 0);
  sqcRYGate(q, -0.4762078735466021, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.07754081485613022, 0);
  sqcRYGate(q, -2.2458559214662115, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2905613598463475, 2);
  sqcRYGate(q, -1.8520445872889235, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1125936924532986, 2);
  sqcRYGate(q, -0.02634879408740491, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3417611117384647, 4);
  sqcRYGate(q, 1.6414795508426405, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8941515532575308, 4);
  sqcRYGate(q, 1.409142064331884, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.018838537520074278, 6);
  sqcRYGate(q, -1.3425155189264895, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5587129688892374, 6);
  sqcRYGate(q, 2.3971707230585024, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.07281859401194779, 8);
  sqcRYGate(q, 2.881042111824896, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.9000364948881874, 8);
  sqcRYGate(q, -2.841372390147466, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.10690531488356814, 10);
  sqcRYGate(q, -0.9035551407480048, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.5721893657145256, 10);
  sqcRYGate(q, 1.2029558911951845, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.49131937425171796, 1);
  sqcRYGate(q, -1.2755885297725065, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5955255221996606, 1);
  sqcRYGate(q, 2.644025500186253, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6580195441710597, 3);
  sqcRYGate(q, 0.13898874964012825, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.04718309137355714, 3);
  sqcRYGate(q, 0.05187667090893555, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.7071128444906645, 5);
  sqcRYGate(q, 0.7213365790897209, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.04413249871229012, 5);
  sqcRYGate(q, -3.078515265772112, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.48358240418925647, 7);
  sqcRYGate(q, 1.160583403790442, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.04874814463859156, 7);
  sqcRYGate(q, -3.1100356776142277, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.0688798492133327, 9);
  sqcRYGate(q, 2.47254252931304, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.951885423694132, 9);
  sqcRYGate(q, -0.03421326242463856, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.20657216258897027, 0);
  sqcRYGate(q, 1.857681305066845, 1);
  sqcRYGate(q, 1.3022120685584024, 2);
  sqcRYGate(q, 1.6750688361414194, 3);
  sqcRYGate(q, 2.800073692377734, 4);
  sqcRYGate(q, 0.730109674606343, 5);
  sqcRYGate(q, -0.27186214084722343, 6);
  sqcRYGate(q, 2.712570525034893, 7);
  sqcRYGate(q, 1.4535194693648057, 8);
  sqcRYGate(q, -2.753989738615203, 9);
  sqcRYGate(q, 2.959995702638866, 10);
  sqcRYGate(q, -2.7212057985243656, 11);

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
