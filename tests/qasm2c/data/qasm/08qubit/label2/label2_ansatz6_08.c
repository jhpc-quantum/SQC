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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, 1.9160381607957442, 0);
  sqcRYGate(q, -1.2143995849917888, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3967186904911595, 0);
  sqcRYGate(q, 0.2501831652176776, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.62563320739966, 1);
  sqcRYGate(q, -0.6137006648548438, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2683332496107687, 1);
  sqcRYGate(q, 3.0340362707119075, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4937554339317163, 2);
  sqcRYGate(q, 2.9417124699435226, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7908471051687838, 2);
  sqcRYGate(q, -0.4589317105234129, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.519422350600382, 3);
  sqcRYGate(q, -1.1698209665653247, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.0918216988796372, 3);
  sqcRYGate(q, 0.2552610982306138, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8498295682542691, 4);
  sqcRYGate(q, 2.90640623077345, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.766258512198524, 4);
  sqcRYGate(q, 0.001624661970219516, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9135349739149288, 5);
  sqcRYGate(q, 2.009315453362798, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.6918014433918693, 5);
  sqcRYGate(q, 0.05793112624519246, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4294271265235823, 6);
  sqcRYGate(q, -2.9291452378347684, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8008105939062684, 6);
  sqcRYGate(q, 3.0459641627754204, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.8157999963247399, 0);
  sqcRYGate(q, 1.7905214026730996, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.890890990423995, 0);
  sqcRYGate(q, 0.42043663289293304, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2516952717086953, 1);
  sqcRYGate(q, 0.4741201082216131, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.21868243052107683, 1);
  sqcRYGate(q, -0.4547786897161545, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5749379654074973, 2);
  sqcRYGate(q, 0.2674941658688375, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1510703091673724, 2);
  sqcRYGate(q, -0.6666018710933975, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.879830397119272, 3);
  sqcRYGate(q, 0.8866432065627307, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.0001589906260583973, 3);
  sqcRYGate(q, 3.0066214739911055, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.4566668310345658, 4);
  sqcRYGate(q, -0.9397318852471725, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.9289137426645855, 4);
  sqcRYGate(q, 3.1406454142063813, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.127383582479745, 5);
  sqcRYGate(q, -1.367591830947278, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.449641806157334, 5);
  sqcRYGate(q, -0.21922020847199508, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.2137379091846343, 6);
  sqcRYGate(q, 0.5355511427071397, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.9815241084274059, 6);
  sqcRYGate(q, -1.9808329915092324, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.4540258419440569, 0);
  sqcRYGate(q, -0.6867498061487517, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6373185456143746, 0);
  sqcRYGate(q, -2.2370910025843114, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.45351522047413334, 1);
  sqcRYGate(q, -1.196339515221486, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5039237709163702, 1);
  sqcRYGate(q, -2.7673142012231806, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.02111374329870131, 2);
  sqcRYGate(q, -0.19849706261280242, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4305552503736078, 2);
  sqcRYGate(q, 1.036964764825255, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4058322256501175, 3);
  sqcRYGate(q, 0.6242174939257428, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1400773227385175, 3);
  sqcRYGate(q, 1.3175588645673315, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4833324994398505, 4);
  sqcRYGate(q, -0.3870197848323036, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.49448291735549965, 4);
  sqcRYGate(q, -9.695468327603163e-05, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4231336978240845, 5);
  sqcRYGate(q, 2.3465281717064057, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.7205594626110923, 5);
  sqcRYGate(q, -0.20561456697419433, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6529863407565273, 6);
  sqcRYGate(q, 2.970944068557184, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.623465696523515, 6);
  sqcRYGate(q, 1.4741633934928435, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.4028130093487041, 0);
  sqcRYGate(q, 1.5003797142579467, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0328045615001957, 0);
  sqcRYGate(q, 2.8587966353129333, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.720337008938999, 1);
  sqcRYGate(q, 0.1761382463777395, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1148626102086001, 1);
  sqcRYGate(q, -2.763134334144331, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8319066993128574, 2);
  sqcRYGate(q, 0.9741064949650872, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3194513104511636, 2);
  sqcRYGate(q, 0.060402374028223356, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5354995213994362, 3);
  sqcRYGate(q, -0.05635910240941478, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.0004939534777879118, 3);
  sqcRYGate(q, -1.5295939137602899, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5796666453610246, 4);
  sqcRYGate(q, -2.247873219530545, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0729125006902747, 4);
  sqcRYGate(q, 2.322779118926304, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.1272555592007736, 5);
  sqcRYGate(q, -1.534531476939617, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.6276056335737431, 5);
  sqcRYGate(q, -1.777960682503021e-05, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.962819567021373, 6);
  sqcRYGate(q, 0.5764097618306899, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.842704769659621, 6);
  sqcRYGate(q, -1.3408795887524345, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.579200777959972, 0);
  sqcRYGate(q, -1.8807548712016517, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3635369397635846, 0);
  sqcRYGate(q, -1.3010008599155176, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.16735975211541, 1);
  sqcRYGate(q, 2.393457815649067, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8149128197197264, 1);
  sqcRYGate(q, -0.7515887292317078, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9838571268939913, 2);
  sqcRYGate(q, 2.901335583857279, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.27155981458332556, 2);
  sqcRYGate(q, 0.061665404265586865, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.991419920281319, 3);
  sqcRYGate(q, -0.6867936312673422, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.138874772734144, 3);
  sqcRYGate(q, 3.1405527216970417, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.46408209582422, 4);
  sqcRYGate(q, 2.202353017264426, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9384071963995595, 4);
  sqcRYGate(q, -0.8296121880866606, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.781685207163319, 5);
  sqcRYGate(q, -0.5068770580576931, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.334906919071913, 5);
  sqcRYGate(q, 0.021755485535552167, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.8044924908323479, 6);
  sqcRYGate(q, -0.27797851590264827, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.7680771684829644, 6);
  sqcRYGate(q, 0.3775380885066633, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6660620758027705, 0);
  sqcRYGate(q, 0.04197680746310351, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4388117997088306, 0);
  sqcRYGate(q, -1.3719270919620996, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0605095700846094, 1);
  sqcRYGate(q, 0.7446522796460817, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3072169342243924, 1);
  sqcRYGate(q, 2.21463615494999, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4749826911190294, 2);
  sqcRYGate(q, 0.3737074982808979, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2808824046915666, 2);
  sqcRYGate(q, 0.11113462891445991, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5661429710548047, 3);
  sqcRYGate(q, 2.716836443456075, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.139445118016839, 3);
  sqcRYGate(q, -2.671616323630259, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.4945154184096526, 4);
  sqcRYGate(q, -1.9810487757784307, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6702011276267313, 4);
  sqcRYGate(q, 1.0811614795662106, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.1130826487336374, 5);
  sqcRYGate(q, 1.5912748874293783, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.0126332682739605, 5);
  sqcRYGate(q, 2.218769516415497, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.2605253958144198, 6);
  sqcRYGate(q, -3.0451464733428812, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6417831652457966, 6);
  sqcRYGate(q, -1.6520178916984816, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.58425295105538, 0);
  sqcRYGate(q, 1.4287624916885777, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3441032999309173, 0);
  sqcRYGate(q, 1.3014008356595679, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.25056779650949207, 1);
  sqcRYGate(q, 1.2631883574615435, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3545053623569965, 1);
  sqcRYGate(q, -1.7894940854629284, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6722035710312992, 2);
  sqcRYGate(q, 1.9267949710302634, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9895829009275237, 2);
  sqcRYGate(q, -0.7030222863688523, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5500951140207877, 3);
  sqcRYGate(q, 2.3483679810976206, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5574511523669132, 3);
  sqcRYGate(q, 0.004011054310515076, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.9134879330067687, 4);
  sqcRYGate(q, 1.5955323436460163, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.003552024166390666, 4);
  sqcRYGate(q, 0.006874044333026852, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.482549775921396, 5);
  sqcRYGate(q, 1.545984364898671, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6811068737626816, 5);
  sqcRYGate(q, 0.14334405399479255, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.0279715053018954, 6);
  sqcRYGate(q, -2.2638240388213786, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3762785832232165, 6);
  sqcRYGate(q, -2.5071210559018935, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.07612750662678458, 0);
  sqcRYGate(q, -2.3630959927017905, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.537474025431035, 0);
  sqcRYGate(q, 0.7913936616080628, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0321521179651603, 1);
  sqcRYGate(q, 1.8762917202230514, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3833296327298435, 1);
  sqcRYGate(q, 1.4636120896187048, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0770232971380285, 2);
  sqcRYGate(q, -0.7815884591669937, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.00534528981411686, 2);
  sqcRYGate(q, 2.189664298846664, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6858207159516736, 3);
  sqcRYGate(q, 1.8553368224786833, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.678509053103668, 3);
  sqcRYGate(q, -0.007966932699620295, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.8465209013624544, 4);
  sqcRYGate(q, 2.6911092718058915, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.135012305235476, 4);
  sqcRYGate(q, -3.067006473463871, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.0197291856073685, 5);
  sqcRYGate(q, -3.0589744760115187, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.7424543615641176, 5);
  sqcRYGate(q, -0.0465625165799735, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5917797909540632, 6);
  sqcRYGate(q, 1.678443375020584, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.988952376082635, 6);
  sqcRYGate(q, 1.632862758552409, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.3113725669915022, 0);
  sqcRYGate(q, 2.589498280117262, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.816363150059819, 0);
  sqcRYGate(q, -1.413010930372259, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7111638428931081, 1);
  sqcRYGate(q, -2.9089914842265023, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.13100093713499028, 1);
  sqcRYGate(q, 2.691389153820508, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.1264732608955718, 2);
  sqcRYGate(q, 1.480471171006191, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7279246749850516, 2);
  sqcRYGate(q, -0.4632524276983876, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.02834929869301792, 3);
  sqcRYGate(q, -1.8794046767141765, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.069909205287535, 3);
  sqcRYGate(q, 0.002508018069439011, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.3916468310483319, 4);
  sqcRYGate(q, 2.5590212608243372, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0994751707112163, 4);
  sqcRYGate(q, -2.503605969355848, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8937007450520289, 5);
  sqcRYGate(q, -3.128220184274137, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5804696790944843, 5);
  sqcRYGate(q, -3.065811831243756, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.898080733567886, 6);
  sqcRYGate(q, -2.0623472304104102, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1497850463959152, 6);
  sqcRYGate(q, -1.0300890406783152, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.02699914152824, 0);
  sqcRYGate(q, -2.918862568619523, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.676418321819965, 0);
  sqcRYGate(q, 2.779027080763791, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3805706155492072, 1);
  sqcRYGate(q, -1.1472448369091532, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.04774087563628655, 1);
  sqcRYGate(q, -3.040063421991496, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5744922364368065, 2);
  sqcRYGate(q, 1.8348263821010558, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.08966954108698655, 2);
  sqcRYGate(q, -0.41357187799500217, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7556728537707277, 3);
  sqcRYGate(q, -0.6035390859597276, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.0007457858643418193, 3);
  sqcRYGate(q, 0.002122868000146235, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6291565504137839, 4);
  sqcRYGate(q, -2.679784357525589, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.0406755466714257, 4);
  sqcRYGate(q, 0.7350804815284215, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.42905387421435714, 5);
  sqcRYGate(q, -0.3442635334788469, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.542936065504047, 5);
  sqcRYGate(q, 2.527856086302338, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.09288490902634057, 6);
  sqcRYGate(q, 2.4869595311809043, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9068850333134038, 6);
  sqcRYGate(q, 1.7640405312735534, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.23042325624616275, 0);
  sqcRYGate(q, 2.6156321748780345, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4669806121072761, 0);
  sqcRYGate(q, -2.149787639089307, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2827178750810235, 1);
  sqcRYGate(q, 1.030976730317854, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.02980656414876659, 1);
  sqcRYGate(q, 0.22065614894346552, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.792143729452354, 2);
  sqcRYGate(q, -1.2130658426818122, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6868066128047934, 2);
  sqcRYGate(q, 2.8211379565208667, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.11360798336165878, 3);
  sqcRYGate(q, -2.8603385740792198, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.104763776548952, 3);
  sqcRYGate(q, -3.1082897736870656, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.5440352576004095, 4);
  sqcRYGate(q, 1.7412647564153856, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0636089615966293, 4);
  sqcRYGate(q, -3.1326296461061576, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7598018703561993, 5);
  sqcRYGate(q, 0.3935878760522996, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.2582572415304645, 5);
  sqcRYGate(q, 2.2455779216210656, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.37645166038165345, 6);
  sqcRYGate(q, 2.783112339148831, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.7801573031764573, 6);
  sqcRYGate(q, -2.3125895795079363, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8248365478421866, 0);
  sqcRYGate(q, 1.2018070052165704, 1);
  sqcRYGate(q, -0.8876103008353944, 2);
  sqcRYGate(q, -2.131144335041136, 3);
  sqcRYGate(q, 0.6826057965566507, 4);
  sqcRYGate(q, -1.4124096980223313, 5);
  sqcRYGate(q, 2.7367348289742996, 6);
  sqcRYGate(q, 1.2478359270198842, 7);

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
