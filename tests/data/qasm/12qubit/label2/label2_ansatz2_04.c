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

  sqcRYGate(q, -1.5707955334865251, 0);
  sqcRZGate(q, -1.8802102508420833, 0);
  sqcRYGate(q, -1.5707921725050424, 1);
  sqcRZGate(q, 3.1415602275058783, 1);
  sqcRYGate(q, -1.570796405505923, 2);
  sqcRZGate(q, 3.141589997547358, 2);
  sqcRYGate(q, -1.5707960060826605, 3);
  sqcRZGate(q, 3.141264648273438, 3);
  sqcRYGate(q, -7.591210072883577e-06, 4);
  sqcRZGate(q, 0.26929242775463, 4);
  sqcRYGate(q, 0.0002075802501488866, 5);
  sqcRZGate(q, 0.360467762510337, 5);
  sqcRYGate(q, -3.1415844447430565, 6);
  sqcRZGate(q, 1.470993526531272, 6);
  sqcRYGate(q, 1.5708031097149782, 7);
  sqcRZGate(q, 1.5707950267603792, 7);
  sqcRYGate(q, 5.180525866482088e-07, 8);
  sqcRZGate(q, -0.9978113916346123, 8);
  sqcRYGate(q, -3.0930760578529677, 9);
  sqcRZGate(q, -1.5707567498830528, 9);
  sqcRYGate(q, -1.6642839577585278e-06, 10);
  sqcRZGate(q, 2.243676763233559, 10);
  sqcRYGate(q, -1.838647254093217e-05, 11);
  sqcRZGate(q, 2.4833667002983315, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 3.141591682383823, 0);
  sqcRZGate(q, -1.7525449546672416, 0);
  sqcRYGate(q, 2.09138332687896, 1);
  sqcRZGate(q, -2.384817062083045, 1);
  sqcRYGate(q, -0.9673399219126421, 2);
  sqcRZGate(q, 1.5707965829011012, 2);
  sqcRYGate(q, -2.689297953347235, 3);
  sqcRZGate(q, -1.5710888158080483, 3);
  sqcRYGate(q, -1.5707951040387234, 4);
  sqcRZGate(q, 3.061019985289609, 4);
  sqcRYGate(q, 1.570795508438005, 5);
  sqcRZGate(q, 1.3387410772032167, 5);
  sqcRYGate(q, 1.5707963755545518, 6);
  sqcRZGate(q, -0.5369163299142273, 6);
  sqcRYGate(q, 1.5707966466720076, 7);
  sqcRZGate(q, 0.554422930218215, 7);
  sqcRYGate(q, 1.6204232535048144, 8);
  sqcRZGate(q, 3.8112076428120645e-07, 8);
  sqcRYGate(q, 1.570796309681329, 9);
  sqcRZGate(q, 2.993111681618192, 9);
  sqcRYGate(q, -3.1414010306022275, 10);
  sqcRZGate(q, -0.17914368258769106, 10);
  sqcRYGate(q, -3.0919242273844705, 11);
  sqcRZGate(q, 3.141547309033265, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 1.285730495722854e-07, 0);
  sqcRZGate(q, -0.1276708140313243, 0);
  sqcRYGate(q, -3.5903837594483998e-06, 1);
  sqcRZGate(q, -0.7566942620074806, 1);
  sqcRYGate(q, 1.2789605932104113, 2);
  sqcRZGate(q, -1.570778703181574, 2);
  sqcRYGate(q, -1.862625250747535, 3);
  sqcRZGate(q, 0.3635640687679995, 3);
  sqcRYGate(q, -3.1415912166932984, 4);
  sqcRZGate(q, 3.0610283776323217, 4);
  sqcRYGate(q, 2.0365742187525656e-08, 5);
  sqcRZGate(q, 1.8499207599725767, 5);
  sqcRYGate(q, -1.9211880909687458e-06, 6);
  sqcRZGate(q, -0.981804073548513, 6);
  sqcRYGate(q, 1.5478316441885907e-06, 7);
  sqcRZGate(q, 2.5816285386763433, 7);
  sqcRYGate(q, 1.570760526588956, 8);
  sqcRZGate(q, -1.7751533503118504, 8);
  sqcRYGate(q, -3.1415554345641428, 9);
  sqcRZGate(q, 1.422312820412806, 9);
  sqcRYGate(q, -1.5707976732393716, 10);
  sqcRZGate(q, 0.00014388484231009357, 10);
  sqcRYGate(q, -1.57084001606355, 11);
  sqcRZGate(q, -3.0953732999874655, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 1.0292907756120826, 0);
  sqcRZGate(q, 0.010612980421043972, 0);
  sqcRYGate(q, 2.8434320867885945, 1);
  sqcRZGate(q, 0.8753339066674704, 1);
  sqcRYGate(q, -0.8399226372760044, 2);
  sqcRZGate(q, 2.8085311133032835, 2);
  sqcRYGate(q, 0.0005833539567374758, 3);
  sqcRZGate(q, -0.49025468603540184, 3);
  sqcRYGate(q, 1.5707303333856506, 4);
  sqcRZGate(q, 1.570226744936647, 4);
  sqcRYGate(q, 1.5546419480218077, 5);
  sqcRZGate(q, 0.28291631905588455, 5);
  sqcRYGate(q, -1.8625653624936758, 6);
  sqcRZGate(q, -3.080366430358067, 6);
  sqcRYGate(q, -1.570802357739761, 7);
  sqcRZGate(q, -0.8968350686682841, 7);
  sqcRYGate(q, -3.1415205828761446, 8);
  sqcRZGate(q, 2.9445492490274248, 8);
  sqcRYGate(q, 1.5799210211628991, 9);
  sqcRZGate(q, 0.3483483451177669, 9);
  sqcRYGate(q, 1.5749195312196393, 10);
  sqcRZGate(q, 2.666944375208189, 10);
  sqcRYGate(q, -3.137468788705841, 11);
  sqcRZGate(q, -0.48812475132202154, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -3.141592417665439, 0);
  sqcRZGate(q, -3.0740801827884074, 0);
  sqcRYGate(q, 1.9023570087229764e-06, 1);
  sqcRZGate(q, -0.8759539714868945, 1);
  sqcRYGate(q, -3.141591782307683, 2);
  sqcRZGate(q, -1.9036755769547375, 2);
  sqcRYGate(q, -1.8713558835870005e-06, 3);
  sqcRZGate(q, 0.10468457832200591, 3);
  sqcRYGate(q, 1.5707942536855377, 4);
  sqcRZGate(q, -1.1205075984588724, 4);
  sqcRYGate(q, 1.5707962187241549, 5);
  sqcRZGate(q, 1.093394815801851, 5);
  sqcRYGate(q, -1.570790960593044, 6);
  sqcRZGate(q, 0.5052483692968618, 6);
  sqcRYGate(q, -1.570783067482959, 7);
  sqcRZGate(q, -3.141586897317757, 7);
  sqcRYGate(q, 0.04653881836631424, 8);
  sqcRZGate(q, -2.5726787415421186, 8);
  sqcRYGate(q, -3.1415919949458067, 9);
  sqcRZGate(q, -2.793252178886912, 9);
  sqcRYGate(q, 3.1386887915738324, 10);
  sqcRZGate(q, -0.41043427532388005, 10);
  sqcRYGate(q, -0.002974090561274283, 11);
  sqcRZGate(q, 1.7401998947640558, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 1.0671443991765832, 0);
  sqcRZGate(q, -1.597820576832731, 0);
  sqcRYGate(q, -2.405409765498095, 1);
  sqcRZGate(q, 1.5214052512886136, 1);
  sqcRYGate(q, 1.5715298660816197, 2);
  sqcRZGate(q, 0.22530425402473067, 2);
  sqcRYGate(q, 1.615482734191339, 3);
  sqcRZGate(q, -0.45764095950248157, 3);
  sqcRYGate(q, 2.290303696916851e-06, 4);
  sqcRZGate(q, -2.1970460317983846, 4);
  sqcRYGate(q, -3.141591525251124, 5);
  sqcRZGate(q, -1.7059717696875112, 5);
  sqcRYGate(q, 3.1415900819737708, 6);
  sqcRZGate(q, -1.2058502663284467, 6);
  sqcRYGate(q, -1.5707874873302774, 7);
  sqcRZGate(q, -0.6261086899213382, 7);
  sqcRYGate(q, 3.141578691403551, 8);
  sqcRZGate(q, -2.949542164431086, 8);
  sqcRYGate(q, 1.5707821937287543, 9);
  sqcRZGate(q, 1.1504611468100485, 9);
  sqcRYGate(q, 1.4648352220092422e-06, 10);
  sqcRZGate(q, -1.3327738406935046, 10);
  sqcRYGate(q, 1.0592231491912685e-06, 11);
  sqcRZGate(q, 0.2108471530545675, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 1.5608976841075828, 0);
  sqcRZGate(q, 1.7119147811151219, 0);
  sqcRYGate(q, -0.009920375394362859, 1);
  sqcRZGate(q, 2.1456769383076635, 1);
  sqcRYGate(q, -1.5707971331323232, 2);
  sqcRZGate(q, 3.1372245813585202, 2);
  sqcRYGate(q, 1.5707936192003644, 3);
  sqcRZGate(q, -0.2639123065400377, 3);
  sqcRYGate(q, 1.0637298353977756e-06, 4);
  sqcRZGate(q, -2.966620776941259, 4);
  sqcRYGate(q, -3.1415905804171924, 5);
  sqcRZGate(q, 0.0548457665179054, 5);
  sqcRYGate(q, 3.1415925230498605, 6);
  sqcRZGate(q, -1.28723659145944, 6);
  sqcRYGate(q, -8.188859926679144e-07, 7);
  sqcRZGate(q, 2.198726991269191, 7);
  sqcRYGate(q, 3.1415898351049694, 8);
  sqcRZGate(q, -2.411352179791743, 8);
  sqcRYGate(q, -1.1586185629344023e-06, 9);
  sqcRZGate(q, 1.9938807434125936, 9);
  sqcRYGate(q, 7.253321270717094e-06, 10);
  sqcRZGate(q, -0.27795909204561836, 10);
  sqcRYGate(q, 3.141585487625755, 11);
  sqcRZGate(q, -2.5601327678857695, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 3.14157524853557, 0);
  sqcRZGate(q, -2.8291094495729454, 0);
  sqcRYGate(q, 3.141566014732251, 1);
  sqcRZGate(q, -2.4442170699411307, 1);
  sqcRYGate(q, 1.555036129340948, 2);
  sqcRZGate(q, -1.3994555717999368, 2);
  sqcRYGate(q, -3.125245459250652, 3);
  sqcRZGate(q, 1.4781832033294904, 3);
  sqcRYGate(q, -1.5740467096655442, 4);
  sqcRZGate(q, 0.8322169255074616, 4);
  sqcRYGate(q, 0.0033922183457762707, 5);
  sqcRZGate(q, -2.021997396378133, 5);
  sqcRYGate(q, 3.1395917268359566, 6);
  sqcRZGate(q, 1.255946980908406, 6);
  sqcRYGate(q, 1.5715994739774302, 7);
  sqcRZGate(q, -0.7383774684768792, 7);
  sqcRYGate(q, -0.001941545665801847, 8);
  sqcRZGate(q, 1.2885610368050324, 8);
  sqcRYGate(q, -0.6748313022005189, 9);
  sqcRZGate(q, 2.4008347394049494, 9);
  sqcRYGate(q, -3.1415788773949105, 10);
  sqcRZGate(q, -0.7143419810805108, 10);
  sqcRYGate(q, -7.945752050330457e-06, 11);
  sqcRZGate(q, 1.6674238974026343, 11);

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
