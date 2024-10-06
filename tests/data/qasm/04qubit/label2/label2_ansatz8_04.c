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

  sqcRYGate(q, 0.04494198125347992, 0);
  sqcRYGate(q, 0.6057340902014188, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4944146830199694, 0);
  sqcRYGate(q, 1.4931812060599592, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4113957621600863, 2);
  sqcRYGate(q, 0.0378741967249153, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.968659658816553, 2);
  sqcRYGate(q, -3.044848296656658, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6556562228437999, 0);
  sqcRYGate(q, -0.5581647973995416, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.37757271801137776, 0);
  sqcRYGate(q, -2.8151260251209895, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0395037476473203, 1);
  sqcRYGate(q, -0.028009117796096945, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.183459894724691, 1);
  sqcRYGate(q, -1.5751046365431922, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8098246238371978, 0);
  sqcRYGate(q, 1.5072078233567572, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0578948448889864, 0);
  sqcRYGate(q, -2.850164168197396, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4319957866485427, 2);
  sqcRYGate(q, -2.3107615853325836, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8846931192992287, 2);
  sqcRYGate(q, 0.790377608442836, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5622038676856542, 0);
  sqcRYGate(q, 1.8756494579526086, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3046035050205784, 0);
  sqcRYGate(q, -0.6503645550150101, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.13913112048492798, 1);
  sqcRYGate(q, -1.906877983511559, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3804604402660634, 1);
  sqcRYGate(q, 0.8055145280538589, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9597728486942034, 0);
  sqcRYGate(q, 2.799054449730447, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.851506404043237, 0);
  sqcRYGate(q, -2.601478443217905, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3561521401665528, 2);
  sqcRYGate(q, -1.659276152789165, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.075964998342153, 2);
  sqcRYGate(q, 0.2508294405461222, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6168837388048685, 0);
  sqcRYGate(q, -2.7270704023186343, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0531761459231097, 0);
  sqcRYGate(q, 1.9641366954352382, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8382131898439598, 1);
  sqcRYGate(q, -2.5644696379183833, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.101647464411562, 1);
  sqcRYGate(q, -1.650808382614067, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.14831794334812898, 0);
  sqcRYGate(q, 0.5083120831762304, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3898139469913042, 0);
  sqcRYGate(q, -2.3664001230320255, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.20886381992661462, 2);
  sqcRYGate(q, -2.3925755668912774, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9166810194538586, 2);
  sqcRYGate(q, 1.2632317935764792, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7052290704784023, 0);
  sqcRYGate(q, -1.6953188572352937, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5116911029097952, 0);
  sqcRYGate(q, -1.8075284477553908, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8957685960282884, 1);
  sqcRYGate(q, 0.2121005314215424, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3862723521172406, 1);
  sqcRYGate(q, -1.4694630424232313, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.11543340163052258, 0);
  sqcRYGate(q, -0.3389638706509053, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.789356401205695, 0);
  sqcRYGate(q, -2.634298968040143, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8056978305750113, 2);
  sqcRYGate(q, 1.8870044997294366, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.621864493471719, 2);
  sqcRYGate(q, 2.6989098174867214, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6098215983013926, 0);
  sqcRYGate(q, 2.57412336828707, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2638899535389254, 0);
  sqcRYGate(q, -2.9189272656955794, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.788074476139292, 1);
  sqcRYGate(q, 2.1095068912945507, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.784667845946438, 1);
  sqcRYGate(q, 0.05403630295837658, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.49041793477539, 0);
  sqcRYGate(q, -1.6581836468050462, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3156450623874436, 0);
  sqcRYGate(q, -1.5790980277351303, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7794259170419435, 2);
  sqcRYGate(q, -2.4470365852968508, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.82285764464507, 2);
  sqcRYGate(q, -0.9128433395580977, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3024015043523791, 0);
  sqcRYGate(q, 0.4963563865908309, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2311994693146895, 0);
  sqcRYGate(q, 2.5796515603498484, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.390171898597382, 1);
  sqcRYGate(q, -2.1001453760193556, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2379368884892432, 1);
  sqcRYGate(q, -1.25828301828257, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.305821819226681, 0);
  sqcRYGate(q, -2.3329892122127442, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7157879951193844, 0);
  sqcRYGate(q, -2.2928414443560032, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.694858989495355, 2);
  sqcRYGate(q, 1.201937650504167, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.0021796124128750072, 2);
  sqcRYGate(q, 2.4354262190470473, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1583930644711034, 0);
  sqcRYGate(q, 2.638659284298363, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9105636685330016, 0);
  sqcRYGate(q, -1.076034224526789, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.602741975639756, 1);
  sqcRYGate(q, 1.7352366059495228, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6062931031747643, 1);
  sqcRYGate(q, 1.982680436026202, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0930432120182898, 0);
  sqcRYGate(q, 1.9895382234393233, 1);
  sqcRYGate(q, 2.29729632909835, 2);
  sqcRYGate(q, 0.09915653342146147, 3);

  FILE * IR_file = NULL;
  IR_file = fopen(__FILE__"_IR.txt", "w");
  sqcStoreQC(q, IR_file, storeQCStop);
  fclose(IR_file);

  sqcTranspile(q, KIND, &opt);

  FILE * Transpile_file = NULL;
  Transpile_file = fopen(__FILE__"_TP.txt", "w");
  sqcStoreQC(q, Transpile_file, storeQCStop);
  fclose(Transpile_file);

  sqcDestroyQuantumCircuit(q);
  sqcFinalize();
  return 0;
}
