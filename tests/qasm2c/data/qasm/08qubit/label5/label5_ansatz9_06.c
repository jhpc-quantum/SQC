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

  sqcRYGate(q, -2.186852148966984, 0);
  sqcRYGate(q, -0.8881342269693118, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.862268150891416, 0);
  sqcRYGate(q, 0.28435727837059893, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3577982791455654, 2);
  sqcRYGate(q, 0.7798007832826709, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5965314298798923, 2);
  sqcRYGate(q, -0.4347821335547535, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.72711699579388, 4);
  sqcRYGate(q, -2.462484962285319, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0512234492754544, 4);
  sqcRYGate(q, 0.28106057423159964, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.6240855940746273, 6);
  sqcRYGate(q, -1.272507152512282, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3359400533458432, 6);
  sqcRYGate(q, -0.6851589518461376, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.3206423436164112, 0);
  sqcRYGate(q, -0.004411782351025018, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2915071542114833, 0);
  sqcRYGate(q, 1.1900533416005006, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.816424669142392, 2);
  sqcRYGate(q, -2.3046883053675926, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.9534373861458825, 2);
  sqcRYGate(q, 2.2415840257163024, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.6332885757246594, 4);
  sqcRYGate(q, 0.3619287196833545, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.880046956313569, 4);
  sqcRYGate(q, -2.035068697833277, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.058182903465581, 1);
  sqcRYGate(q, 1.6090818336557815, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.334065538950315, 1);
  sqcRYGate(q, 0.7221368874468529, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.540166512189138, 3);
  sqcRYGate(q, 1.0756706995942444, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.24026923206983122, 3);
  sqcRYGate(q, -0.4406417830005802, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.13139907643510804, 5);
  sqcRYGate(q, 2.930801221862828, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.5661212555990973, 5);
  sqcRYGate(q, -1.9669422857401127, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.4685863094304699, 0);
  sqcRYGate(q, 0.17900076246520852, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.496031786707836, 0);
  sqcRYGate(q, 2.507886918180055, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.0741587330908389, 1);
  sqcRYGate(q, -3.114535153350208, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.659573441657547, 1);
  sqcRYGate(q, -2.4044060280235624, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7250443983214179, 2);
  sqcRYGate(q, -1.6294458507386855, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.1030279709157353, 2);
  sqcRYGate(q, -1.148408813956932, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.2922108449429768, 3);
  sqcRYGate(q, -0.659303651635099, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.4046406088438324, 3);
  sqcRYGate(q, -2.855445991221806, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.06287215134652, 4);
  sqcRYGate(q, 2.2450187357843, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.121371551544203, 4);
  sqcRYGate(q, -0.45331023754284594, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 3.125563644794384, 5);
  sqcRYGate(q, 0.8209246946700448, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5623357255164425, 5);
  sqcRYGate(q, -1.5115190634404914, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.30607798529226, 0);
  sqcRYGate(q, -0.1687382646085922, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6654804689347924, 0);
  sqcRYGate(q, -1.8438800461326048, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1366608603409523, 2);
  sqcRYGate(q, 3.0071928871335145, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.430399220690101, 2);
  sqcRYGate(q, -0.1846459770466223, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6600928072254124, 4);
  sqcRYGate(q, -0.9334534983091357, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.814421910558922, 4);
  sqcRYGate(q, -0.14030903153448265, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.7246449865385536, 6);
  sqcRYGate(q, -1.7850380659775738, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.2612673564156447, 6);
  sqcRYGate(q, -0.6968931003549939, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.06006634334953, 0);
  sqcRYGate(q, 2.908543878206575, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.4842091102364456, 0);
  sqcRYGate(q, 2.863793865591973, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0197307517640226, 2);
  sqcRYGate(q, -0.12141075316869779, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.46671852192800145, 2);
  sqcRYGate(q, -1.700705803520604, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.2470543004493697, 4);
  sqcRYGate(q, -1.6794682851366882, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.11763774808606325, 4);
  sqcRYGate(q, -0.8009675168109833, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.5142326833474549, 1);
  sqcRYGate(q, -1.2390105897011419, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8412354616192703, 1);
  sqcRYGate(q, -0.21890244071891374, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4757357571729943, 3);
  sqcRYGate(q, -0.8322329770511919, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.4361336439389812, 3);
  sqcRYGate(q, -1.5397001110148283, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.21287476152649276, 5);
  sqcRYGate(q, -2.5907649161512327, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.9527703196371142, 5);
  sqcRYGate(q, 1.8383116468659573, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.8244320583338944, 0);
  sqcRYGate(q, -2.2344164342585833, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.1959127296195275, 0);
  sqcRYGate(q, -0.37777900834462014, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.1362189176471376, 1);
  sqcRYGate(q, -2.0838157696664465, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3908300307061783, 1);
  sqcRYGate(q, -2.9494903786655082, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4035874371424846, 2);
  sqcRYGate(q, 2.6843676579208164, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.20498662296190007, 2);
  sqcRYGate(q, 2.6611794239554594, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.35731513734104, 3);
  sqcRYGate(q, 1.15384226338704, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8543511648019166, 3);
  sqcRYGate(q, 1.6585279512772235, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6042119316770052, 4);
  sqcRYGate(q, -2.8007391117863456, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.8834475459259727, 4);
  sqcRYGate(q, 0.24361672565741752, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 3.1146226081242094, 5);
  sqcRYGate(q, -0.5122713782663197, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.901773071103043, 5);
  sqcRYGate(q, 2.279138266630384, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.030718249692447, 0);
  sqcRYGate(q, -0.29613074187951405, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.501397141675794, 0);
  sqcRYGate(q, 0.8193158108080676, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7937610619726683, 2);
  sqcRYGate(q, 2.511644570740206, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.617963195116696, 2);
  sqcRYGate(q, 0.47049715503691125, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.972676139048351, 4);
  sqcRYGate(q, 1.2580224878001256, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6118658754130895, 4);
  sqcRYGate(q, 1.1994090120955478, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.957488036912366, 6);
  sqcRYGate(q, 0.8029417748340845, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.41645815917367734, 6);
  sqcRYGate(q, -1.2586937873121604, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.0578428702916085, 0);
  sqcRYGate(q, -1.6640410167141753, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.1418020535407063, 0);
  sqcRYGate(q, -0.163802902384929, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0265710616995682, 2);
  sqcRYGate(q, -2.977749480655606, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.44078563917507774, 2);
  sqcRYGate(q, -0.055303933604848865, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.5799383988212803, 4);
  sqcRYGate(q, 1.346142364848835, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.8562833926207138, 4);
  sqcRYGate(q, 1.8558660407870273, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.6942006601188265, 1);
  sqcRYGate(q, -1.0589997649212162, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8612965818871405, 1);
  sqcRYGate(q, 1.6389186227826642, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5811371349949237, 3);
  sqcRYGate(q, -2.051285621379648, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.2033158477831005, 3);
  sqcRYGate(q, -0.02393535863970181, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.8957896072560239, 5);
  sqcRYGate(q, -2.5434706385748727, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.5779677356836199, 5);
  sqcRYGate(q, -2.969686259403134, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.8175009590674573, 0);
  sqcRYGate(q, 1.0035732088398808, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.9346163360897584, 0);
  sqcRYGate(q, -0.04018362878178355, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.6327942461658809, 1);
  sqcRYGate(q, 1.93931983579847, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.706435242026951, 1);
  sqcRYGate(q, -1.6077023121829201, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3258390351510093, 2);
  sqcRYGate(q, 0.3699328046781752, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.0549054603147394, 2);
  sqcRYGate(q, -1.2475525020381388, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.161726553044588, 3);
  sqcRYGate(q, 1.2694421129454976, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.9035260936944987, 3);
  sqcRYGate(q, 1.2869259276187535, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5932362344321165, 4);
  sqcRYGate(q, 1.117400811381217, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.298734411456993, 4);
  sqcRYGate(q, -0.4594968401531059, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.351558645806203, 5);
  sqcRYGate(q, 1.3069155800797851, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6312786364623317, 5);
  sqcRYGate(q, 2.5170702045640523, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8525551028169882, 0);
  sqcRYGate(q, 1.1112384882763358, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2555410350472955, 0);
  sqcRYGate(q, -1.4334501303187548, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1014312738010301, 2);
  sqcRYGate(q, 2.258107684366636, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2671313374703803, 2);
  sqcRYGate(q, 1.0022170068942187, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6202989026747243, 4);
  sqcRYGate(q, 1.7875311793437583, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.747149233227832, 4);
  sqcRYGate(q, 1.3747795252596824, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2476740903711172, 6);
  sqcRYGate(q, 0.5395444799603206, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1033092682106354, 6);
  sqcRYGate(q, 1.8898790216583947, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7186240818257791, 0);
  sqcRYGate(q, -1.0700881968778555, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9851908222064916, 0);
  sqcRYGate(q, -1.6431171760984427, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.006056227701531, 2);
  sqcRYGate(q, -2.2162234904174767, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.4459662760407583, 2);
  sqcRYGate(q, -1.8461920047375557, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.385830646452896, 4);
  sqcRYGate(q, 1.1002087543147674, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.418988507556189, 4);
  sqcRYGate(q, -2.457263350115261, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.134283479777318, 1);
  sqcRYGate(q, -2.7151343791269458, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.354865847110588, 1);
  sqcRYGate(q, 1.296598847223593, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7630598162028424, 3);
  sqcRYGate(q, -0.8160820414935053, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.2283888167467212, 3);
  sqcRYGate(q, -1.6324262649656212, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.8814132763859197, 5);
  sqcRYGate(q, 1.8374544858080046, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.794420723280777, 5);
  sqcRYGate(q, 0.71556701315565, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.7429296929094495, 0);
  sqcRYGate(q, -2.0789671844954043, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.9563096287202124, 0);
  sqcRYGate(q, 1.4881551208847887, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.8361572620327262, 1);
  sqcRYGate(q, 0.6392648398739695, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5224733294864037, 1);
  sqcRYGate(q, -1.7079926674283752, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2236301925818909, 2);
  sqcRYGate(q, 1.2077523568275845, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.8670789821762463, 2);
  sqcRYGate(q, 0.2834827647326046, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.539554543324769, 3);
  sqcRYGate(q, -2.679722723852211, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5423929893528472, 3);
  sqcRYGate(q, 0.1509030186353355, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7668475722746075, 4);
  sqcRYGate(q, -2.104618492608675, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.6605797373827302, 4);
  sqcRYGate(q, 0.13551194769593114, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.5292994470642467, 5);
  sqcRYGate(q, 1.3210054630988703, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.3961830126078687, 5);
  sqcRYGate(q, -0.9299255961100049, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.9854736335162846, 0);
  sqcRYGate(q, 1.226036295817938, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4271553899087057, 0);
  sqcRYGate(q, -2.8293281835859743, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.947459540420248, 2);
  sqcRYGate(q, -1.7330201655635709, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1157506152258776, 2);
  sqcRYGate(q, -1.2049634601341044, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.14547474242973557, 4);
  sqcRYGate(q, 1.4064207291492523, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.41989019016257256, 4);
  sqcRYGate(q, -2.1487190546900647, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.503812070394848, 6);
  sqcRYGate(q, 0.41596998895628673, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.363874949776557, 6);
  sqcRYGate(q, -1.6542523979539727, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2245425758479955, 0);
  sqcRYGate(q, -1.1130158456460082, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.672826001555151, 0);
  sqcRYGate(q, -0.42612649579483386, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.487670047703355, 2);
  sqcRYGate(q, 0.8140621954581272, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.2257096003868977, 2);
  sqcRYGate(q, 1.5618643479038818, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.8997605503674377, 4);
  sqcRYGate(q, 0.7332011886922267, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.797954124488871, 4);
  sqcRYGate(q, -2.4666037528880347, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.327616619261081, 1);
  sqcRYGate(q, -3.111904081114876, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.314428650712481, 1);
  sqcRYGate(q, 1.2473819405718078, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3740946186758892, 3);
  sqcRYGate(q, 0.0024399428850321314, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.9636953961279312, 3);
  sqcRYGate(q, 1.455390514437374, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.081930651587642, 5);
  sqcRYGate(q, 0.8824624880185387, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.47254228932020303, 5);
  sqcRYGate(q, 1.6013770561915488, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.273951067418805, 0);
  sqcRYGate(q, 1.6027995843656369, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.7689692553239951, 0);
  sqcRYGate(q, 0.6768880400293648, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.1249672394801418, 1);
  sqcRYGate(q, -2.716767862048341, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4832290836373345, 1);
  sqcRYGate(q, -0.10004466295647982, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.868029377089278, 2);
  sqcRYGate(q, 3.050221573533565, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.582900942303354, 2);
  sqcRYGate(q, 2.662592043377081, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.44724989968048234, 3);
  sqcRYGate(q, 1.3842183195618443, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.045679815227517566, 3);
  sqcRYGate(q, 1.0926364824030197, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.43701812915532423, 4);
  sqcRYGate(q, -1.8535988470290885, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.165257292567986, 4);
  sqcRYGate(q, -2.1892212811118426, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.5262812378031159, 5);
  sqcRYGate(q, 2.891675208929504, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.2869994464117245, 5);
  sqcRYGate(q, -3.059279413272038, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4545678577931653, 0);
  sqcRYGate(q, -2.0530907888159673, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6305361594980297, 0);
  sqcRYGate(q, 1.044707767746006, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.169446982773292, 2);
  sqcRYGate(q, -0.12051682518673434, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.83509354205523, 2);
  sqcRYGate(q, 1.865692835034007, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9134677149903552, 4);
  sqcRYGate(q, -1.1859939354835305, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.778628975482982, 4);
  sqcRYGate(q, -0.982874956882727, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9744884554885993, 6);
  sqcRYGate(q, -2.9995173349750903, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.851783540024334, 6);
  sqcRYGate(q, -1.7706140115877247, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.33183565985779406, 0);
  sqcRYGate(q, 2.8134290224138416, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.20254850706465533, 0);
  sqcRYGate(q, 0.6554036692854103, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.533904078249127, 2);
  sqcRYGate(q, -0.15209906808935808, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.2127852943982456, 2);
  sqcRYGate(q, 0.9285177715829178, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.9134307603123304, 4);
  sqcRYGate(q, -0.5597892245756473, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.7558494330976107, 4);
  sqcRYGate(q, -1.2772844372515777, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.23611507304219972, 1);
  sqcRYGate(q, -0.5749888351895169, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.647429221924744, 1);
  sqcRYGate(q, 2.316324268087595, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.165670994606206, 3);
  sqcRYGate(q, -0.34508879816078913, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.0355551251779036, 3);
  sqcRYGate(q, 2.9113224550046652, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.3186507929378906, 5);
  sqcRYGate(q, 2.039301011206389, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.2552324242073665, 5);
  sqcRYGate(q, -0.45337263484392043, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.7538348720475153, 0);
  sqcRYGate(q, 1.6632951685205029, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.205962072558542, 0);
  sqcRYGate(q, -3.14043862878156, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9316409693884474, 1);
  sqcRYGate(q, -0.4495110247770322, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.507290273566264, 1);
  sqcRYGate(q, -1.8031729695408298, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5052068159009364, 2);
  sqcRYGate(q, -2.364408462867215, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.1011089490588404, 2);
  sqcRYGate(q, -2.2337977261851076, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.5768565629346012, 3);
  sqcRYGate(q, 0.5467190398617299, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.2953599890020053, 3);
  sqcRYGate(q, 0.5797993012306035, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5559640592163055, 4);
  sqcRYGate(q, -2.747767879525449, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.15089756138986665, 4);
  sqcRYGate(q, 0.9351464622206107, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.8687679285011753, 5);
  sqcRYGate(q, -2.3537400406001106, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.2905384465778997, 5);
  sqcRYGate(q, 2.2275871687492206, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.7126379148743224, 0);
  sqcRYGate(q, 0.5256699067613901, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7527673794304545, 0);
  sqcRYGate(q, -0.17678784338873693, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9142817795768523, 2);
  sqcRYGate(q, -2.6235350586086734, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.14755230321005985, 2);
  sqcRYGate(q, -2.7830781173147554, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7763802153799855, 4);
  sqcRYGate(q, 1.9323457316549453, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0326927022168872, 4);
  sqcRYGate(q, 1.3083484263666036, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.120093531826158, 6);
  sqcRYGate(q, -1.153036945502786, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0100039405115284, 6);
  sqcRYGate(q, -2.4858338703637113, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.40197829663671936, 0);
  sqcRYGate(q, 0.995076994457406, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8623670955072633, 0);
  sqcRYGate(q, -1.6871408459532438, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7751970153734837, 2);
  sqcRYGate(q, -2.747908249025083, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.806126791606053, 2);
  sqcRYGate(q, 1.4875649595855638, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.4702962357435805, 4);
  sqcRYGate(q, -2.65925670252355, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.8345764967822755, 4);
  sqcRYGate(q, -2.1542206078281105, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.9055687498771912, 1);
  sqcRYGate(q, -2.3856206671381965, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7248933349388038, 1);
  sqcRYGate(q, 0.724955241519658, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.906940792441904, 3);
  sqcRYGate(q, 2.110371892710989, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.004606342166326924, 3);
  sqcRYGate(q, 3.0183828452979466, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.2171431156995869, 5);
  sqcRYGate(q, 1.6555288564867299, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.756550777314556, 5);
  sqcRYGate(q, -2.5608314490317183, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.7450948208951016, 0);
  sqcRYGate(q, 1.2743572494094428, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.4930233865699345, 0);
  sqcRYGate(q, 2.1578738858950226, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.049680902135874, 1);
  sqcRYGate(q, 1.9008661410697865, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7508587841235537, 1);
  sqcRYGate(q, 2.896916765762089, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5373367568598035, 2);
  sqcRYGate(q, 2.270799146199969, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.7484153560982474, 2);
  sqcRYGate(q, 0.2141283300379154, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.2788077758314893, 3);
  sqcRYGate(q, 1.9056660727640677, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.4242742865836743, 3);
  sqcRYGate(q, 0.7316176789617677, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9488029353576117, 4);
  sqcRYGate(q, -0.26156494085308185, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.5930373727939804, 4);
  sqcRYGate(q, -2.3506098384663954, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.6620835073836133, 5);
  sqcRYGate(q, -0.2611126630413866, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.819705455417743, 5);
  sqcRYGate(q, 2.9250338002458767, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.0968393174829654, 0);
  sqcRYGate(q, -1.0617050181761627, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.842168226553328, 0);
  sqcRYGate(q, -2.3381612816738775, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8925630527985051, 2);
  sqcRYGate(q, 0.17928109619370683, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.940565395458283, 2);
  sqcRYGate(q, 2.032107359265983, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5034084448519331, 4);
  sqcRYGate(q, -0.2833282373370478, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9831480432278141, 4);
  sqcRYGate(q, -0.7091952173535305, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.9890066926131267, 6);
  sqcRYGate(q, 1.5920158916726292, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5860295843864503, 6);
  sqcRYGate(q, -2.515393214495023, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7427810631561389, 0);
  sqcRYGate(q, 0.5844504367191012, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.25754085639545987, 0);
  sqcRYGate(q, -0.1676611380048438, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.17680800809103836, 2);
  sqcRYGate(q, 0.4247563736287109, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.1277599074705282, 2);
  sqcRYGate(q, -0.7164618542935931, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.13604884035931875, 4);
  sqcRYGate(q, -0.4262965372730365, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.7189375473070152, 4);
  sqcRYGate(q, 0.815573953001831, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.914755780491129, 1);
  sqcRYGate(q, 1.2970779755695534, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9294116250057047, 1);
  sqcRYGate(q, -1.8899788087650722, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.1269725660577836, 3);
  sqcRYGate(q, -1.4963942070676426, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.09234747510333847, 3);
  sqcRYGate(q, 2.3182054847565814, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.19672519065951388, 5);
  sqcRYGate(q, -1.1846374056419853, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.5839036497779553, 5);
  sqcRYGate(q, 0.36749047688127234, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.6831832142469327, 0);
  sqcRYGate(q, -1.8815959504545932, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.4912351902434517, 0);
  sqcRYGate(q, 2.0063117858013566, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.0961591377471533, 1);
  sqcRYGate(q, 2.564272966974756, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.18658085892133713, 1);
  sqcRYGate(q, -0.07985685718167089, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7595508183240947, 2);
  sqcRYGate(q, 2.3099503882108734, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.416099527184817, 2);
  sqcRYGate(q, -2.972454232496186, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.1624749495417692, 3);
  sqcRYGate(q, 1.877312598871331, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.39660728690817315, 3);
  sqcRYGate(q, -2.4892623749102576, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9198220138128015, 4);
  sqcRYGate(q, 2.123620212725072, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 3.005151953957777, 4);
  sqcRYGate(q, -1.3764399930732136, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.3659416431734215, 5);
  sqcRYGate(q, 2.2866969502431704, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.0977886833023485, 5);
  sqcRYGate(q, -2.382983393852903, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.8470648832072682, 0);
  sqcRYGate(q, 0.28021785756320716, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0681891823273222, 0);
  sqcRYGate(q, 0.3737987148753641, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7891843220191719, 2);
  sqcRYGate(q, -0.6123152175579971, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.006715944948141582, 2);
  sqcRYGate(q, -1.0742415408148274, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7968850280385418, 4);
  sqcRYGate(q, 0.17533112497725684, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0470904629679696, 4);
  sqcRYGate(q, -0.2962782374550761, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8206885078659, 6);
  sqcRYGate(q, 1.6995887757287298, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.739339859191478, 6);
  sqcRYGate(q, 1.0464372030234435, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.7962802630832364, 0);
  sqcRYGate(q, 2.2149431153419528, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1022882466183603, 0);
  sqcRYGate(q, 0.3845708389775485, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0132456350995556, 2);
  sqcRYGate(q, -0.8752305699160541, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.9190371743632326, 2);
  sqcRYGate(q, 2.9917553524743967, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.8883195724328046, 4);
  sqcRYGate(q, -1.02028512577342, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.5615231252490587, 4);
  sqcRYGate(q, 0.9638705574684908, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.4158395101573555, 1);
  sqcRYGate(q, -2.97146471749072, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4241618592900538, 1);
  sqcRYGate(q, -1.4435181354962587, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3113235696438286, 3);
  sqcRYGate(q, -0.4829424004606393, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.13740876875996477, 3);
  sqcRYGate(q, -0.02775397402466595, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.131620629978833, 5);
  sqcRYGate(q, 2.673211124288902, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.38098539125738545, 5);
  sqcRYGate(q, -3.1385927386097734, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.821563833079665, 0);
  sqcRYGate(q, 3.071279576171795, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.211445732425533, 0);
  sqcRYGate(q, 2.539253582742537, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.4605229930825474, 1);
  sqcRYGate(q, 2.9972598743784196, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6580059894832466, 1);
  sqcRYGate(q, -1.3432747235153748, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.10580250464435549, 2);
  sqcRYGate(q, 2.3201084189451144, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.24715719101426864, 2);
  sqcRYGate(q, 2.0269514434113063, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.4478834235550813, 3);
  sqcRYGate(q, 1.2395685185093424, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2889455688383205, 3);
  sqcRYGate(q, 2.677900955422233, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.17485717551652, 4);
  sqcRYGate(q, -0.7587888013514901, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.0273393892324547, 4);
  sqcRYGate(q, -0.6890604455997913, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.15014839497424995, 5);
  sqcRYGate(q, -1.521335712135467, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.68638198285222, 5);
  sqcRYGate(q, 2.2594930421456034, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.11004188452829841, 0);
  sqcRYGate(q, -0.6106245643529125, 1);
  sqcRYGate(q, 2.1128426854947024, 2);
  sqcRYGate(q, -1.0941223282341248, 3);
  sqcRYGate(q, -0.47052267992986163, 4);
  sqcRYGate(q, 0.45250224769122144, 5);
  sqcRYGate(q, -0.5105934195979104, 6);
  sqcRYGate(q, -0.29426811526911223, 7);

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
