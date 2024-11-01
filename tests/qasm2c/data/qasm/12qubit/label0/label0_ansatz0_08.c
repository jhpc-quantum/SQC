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

  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.016645400619521453, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.013675746166738261, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.015260002016076113, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.058125053532360596, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.001668029320950095, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.06349529861893667, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.06817651772659031, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.07552538437446023, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.06985211063622723, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -0.014795649317895832, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.029638562602449264, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.3346204832132811, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.7263702608317383, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.0019143372742352353, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.9337166607500008, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 1.5540697011774969, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.502799737118276, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 1.042708301009244, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.6630444950346511, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, 0.8641608383949533, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, 0.5615181521131506, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, 0.935915439776722, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, 1.0799224998763546, 11);
  sqcHGate(q, 11);
  sqcRZGate(q, -0.4891572195626697, 0);
  sqcRZGate(q, -0.5394792175044487, 1);
  sqcRZGate(q, -0.534182439683013, 2);
  sqcRZGate(q, -0.6885729059635757, 3);
  sqcRZGate(q, -0.18659260824078305, 4);
  sqcRZGate(q, -0.5694531274993395, 5);
  sqcRZGate(q, -0.6881736519655052, 6);
  sqcRZGate(q, -0.2824258397423954, 7);
  sqcRZGate(q, -0.3270593266135589, 8);
  sqcRZGate(q, -0.10394434868457815, 9);
  sqcRZGate(q, -0.17608774870006072, 10);
  sqcRZGate(q, -0.09763558571376928, 11);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.32983541295600477, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.304778871214538, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.30418788557994064, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.5764793461012052, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.3937369638657534, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.031569912193057, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.024796463544911114, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.06937447758525828, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 0.11649283327331571, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -0.39605928193689527, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.30061120825140303, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.44845364219866823, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.5742812014369336, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.5282483100475573, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.9858995295588877, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.23293308281809924, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.7616580974892952, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.5820552306514062, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.6804687129234941, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, 0.5956027944437833, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, 0.5800416169558673, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, 0.9544142845226946, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.600486082459488, 11);
  sqcHGate(q, 11);
  sqcRZGate(q, -0.40881600949829894, 0);
  sqcRZGate(q, -0.5115521147517554, 1);
  sqcRZGate(q, -0.8215273582433114, 2);
  sqcRZGate(q, -0.36051803235999436, 3);
  sqcRZGate(q, -0.6320202610389584, 4);
  sqcRZGate(q, -1.095175315720082, 5);
  sqcRZGate(q, -0.8964015136173702, 6);
  sqcRZGate(q, -0.7003572225751906, 7);
  sqcRZGate(q, -0.6492676675717468, 8);
  sqcRZGate(q, -0.4359906870639851, 9);
  sqcRZGate(q, -0.046487147944172476, 10);
  sqcRZGate(q, -0.20859955150719392, 11);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.08553811179022935, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.01411385007975895, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.5603539795666429, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.5903195168555074, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.07183399617293684, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.06554155943783603, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.19655068625920225, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.001556845391948045, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.17766701568095652, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 0.06875619023947173, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.4950719974519378, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.37430661995261205, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.5228419962437685, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.7231404144377865, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.36852163851461917, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.611241205055504, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 1.0345113045806476, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.4309421763336077, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.24946726101906877, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, 0.002023374209538474, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, 0.17235680102615197, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, 0.44574422169744554, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.124439036232685, 11);
  sqcHGate(q, 11);
  sqcRZGate(q, -0.44009924319802857, 0);
  sqcRZGate(q, -0.2764793324831893, 1);
  sqcRZGate(q, -0.4870650369321563, 2);
  sqcRZGate(q, 0.01759362120423342, 3);
  sqcRZGate(q, 0.17156171024838013, 4);
  sqcRZGate(q, -0.22009410359108286, 5);
  sqcRZGate(q, -0.133228115989148, 6);
  sqcRZGate(q, -0.529266035830382, 7);
  sqcRZGate(q, -0.4821192857790166, 8);
  sqcRZGate(q, -0.5526226211406046, 9);
  sqcRZGate(q, 0.25604615846834256, 10);
  sqcRZGate(q, -0.05099393130642698, 11);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.023920536090813786, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.08761760246510829, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.04854032454544122, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.7015438461190627, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.15629278650645084, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.43267968394213785, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.33642713298066823, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.23001026978906242, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.09034446043935639, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 0.02624768063251252, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.372449105602581, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.10214475099143001, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.43554776772884807, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.597740972734993, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.7646171504378767, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.2865411833266574, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.03994011840317407, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.9716852160156616, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.23775342980302097, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, -0.5220117562755875, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, 0.23700797335911059, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, 0.16690376146815006, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, -0.022297555480608446, 11);
  sqcHGate(q, 11);
  sqcRZGate(q, -0.19891270754397528, 0);
  sqcRZGate(q, -0.08628418181284622, 1);
  sqcRZGate(q, -0.4614907358098203, 2);
  sqcRZGate(q, -0.008466614441817882, 3);
  sqcRZGate(q, -0.016210479028738997, 4);
  sqcRZGate(q, -0.2417428129578141, 5);
  sqcRZGate(q, 9.820217197170737e-05, 6);
  sqcRZGate(q, -0.11392272433771107, 7);
  sqcRZGate(q, -0.17771815549567027, 8);
  sqcRZGate(q, -0.5164322150047476, 9);
  sqcRZGate(q, 0.0911089784088636, 10);
  sqcRZGate(q, -0.0935837079282427, 11);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.13451619033970652, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -1.130441952769891, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.15627288507021564, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.3096610923640045, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.348709587457529, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.13419189546356902, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.2992215137257322, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.020963219935253824, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 0.17913359341160193, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -0.03761460964511815, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.28874470058597856, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.06268227085805694, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.39543669252174474, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.3673672780608767, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.34642640674692116, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.3516649990521421, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.5529378751821192, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.8240827677009832, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.291851038324641, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, -1.1515005485880474, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, -0.7579389136437296, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, -0.007629920704208978, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, -0.2512139832813501, 11);
  sqcHGate(q, 11);
  sqcRZGate(q, -0.13198784378059938, 0);
  sqcRZGate(q, -0.12536133589808676, 1);
  sqcRZGate(q, -0.01872474574372527, 2);
  sqcRZGate(q, -0.0597326374230707, 3);
  sqcRZGate(q, -0.1116818248612651, 4);
  sqcRZGate(q, -0.03213874015274273, 5);
  sqcRZGate(q, -0.02672479040467084, 6);
  sqcRZGate(q, -0.12637925144473983, 7);
  sqcRZGate(q, -0.14244630123053656, 8);
  sqcRZGate(q, 0.05585179861705155, 9);
  sqcRZGate(q, -0.26665390093103725, 10);
  sqcRZGate(q, 0.03534591675970045, 11);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.13315538337282742, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.42657834062651273, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.3157429367359346, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.3121208722663004, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.2676657865521966, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 1.0021531510073207, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.09528805721672297, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.6420497198053399, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 0.1575011454019411, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 0.2524810439078586, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.09491841259943129, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.2543764563715952, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.37204160527778174, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.4253587598110209, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.5416792269887575, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.4520084599818682, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.2733730927059876, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.3566281365148307, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.3841240714280176, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, 0.06307400364253057, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, -0.9722519527172507, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, 0.44320913154089586, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, -0.15266401040100308, 11);
  sqcHGate(q, 11);
  sqcRZGate(q, -0.10827873754587379, 0);
  sqcRZGate(q, -0.03366943940221259, 1);
  sqcRZGate(q, -0.033620183464757564, 2);
  sqcRZGate(q, -0.07282737717227741, 3);
  sqcRZGate(q, -0.016836174893899217, 4);
  sqcRZGate(q, 0.17746913338435882, 5);
  sqcRZGate(q, -0.039145993120167304, 6);
  sqcRZGate(q, -0.0885975411740925, 7);
  sqcRZGate(q, 0.09859092168895862, 8);
  sqcRZGate(q, 0.02451702834551208, 9);
  sqcRZGate(q, -0.17126945178966, 10);
  sqcRZGate(q, 0.049285819245449815, 11);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.10468896146496191, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.3251084989077935, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.25897199328083825, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.2828081200932163, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.24570823646236714, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.5975022599615786, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.45911044079110674, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.8425601737889794, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.094523838422072, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 0.21988386772776408, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.019098779158200532, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.38070717861344244, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.2928890766909295, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.33298078675042764, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.07394627938096372, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.20093488553521516, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.11575597794895115, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.04410362045381642, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.5548157464040737, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, -0.7536747427604755, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, -0.9436645821161977, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, 0.18194707269033544, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, -0.2569949778100997, 11);
  sqcHGate(q, 11);
  sqcRZGate(q, -0.12804640889748511, 0);
  sqcRZGate(q, -0.1328660995353317, 1);
  sqcRZGate(q, 0.09164569900745802, 2);
  sqcRZGate(q, -0.006674804854855836, 3);
  sqcRZGate(q, -0.014028167108035701, 4);
  sqcRZGate(q, -0.04039257356477014, 5);
  sqcRZGate(q, 0.06434619466588135, 6);
  sqcRZGate(q, 0.0216480211790624, 7);
  sqcRZGate(q, 0.3504377616103173, 8);
  sqcRZGate(q, 0.23695468409003906, 9);
  sqcRZGate(q, 0.19013411109125192, 10);
  sqcRZGate(q, 0.09749656834332122, 11);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.09646865922339457, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.9079440805525042, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.03451009661817668, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.20911945505056057, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.054884903579313915, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.21333290157980261, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.04022275496949679, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.16785992462464677, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 0.07236917788228016, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 0.5961102970359072, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.10715878660617817, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.4607082636347485, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.5716249542658406, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.3281057680115982, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.04968645325511783, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.2512154180888775, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.007138827491087418, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.07074014057726406, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.5034105230389289, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, -0.7078009977812475, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, -1.6120205927540026, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, 0.3989726901014985, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, -0.42389746415667273, 11);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.038170133175345074, 0);
  sqcRZGate(q, 0.04430519503985508, 1);
  sqcRZGate(q, -0.09357058943745653, 2);
  sqcRZGate(q, 0.07562592946142392, 3);
  sqcRZGate(q, -0.05783780922980004, 4);
  sqcRZGate(q, -0.08725281351605207, 5);
  sqcRZGate(q, 0.11236709534248693, 6);
  sqcRZGate(q, -0.02902299257646681, 7);
  sqcRZGate(q, 0.0011954988532547868, 8);
  sqcRZGate(q, -0.1935611518445911, 9);
  sqcRZGate(q, -0.2539164992901476, 10);
  sqcRZGate(q, 0.17224745238575545, 11);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.2762481842745726, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.29659265964054105, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.14051124201926563, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.10034324967604036, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.11164039184701902, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.2011788388500422, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.5447874040638869, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.16288877036181332, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 0.23001237809269506, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 0.31330179153085214, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.36333028105911175, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.5120484251428492, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.44797699031482047, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.6893509694621475, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.2228236511916131, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.3291745134248591, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.12632320040318154, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.027541652613475347, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -1.0864830539695236, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, 0.03769617890379212, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, -1.1846247215070915, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, 0.0945903251751784, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, -0.581320383789678, 11);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.11019842007288053, 0);
  sqcRZGate(q, 0.04209761449365567, 1);
  sqcRZGate(q, -0.028642303309173518, 2);
  sqcRZGate(q, 0.0375435758070006, 3);
  sqcRZGate(q, 0.019505438228743118, 4);
  sqcRZGate(q, 0.02110482168400737, 5);
  sqcRZGate(q, -0.09060677404796469, 6);
  sqcRZGate(q, 0.2769418179403167, 7);
  sqcRZGate(q, -0.22557998194643028, 8);
  sqcRZGate(q, 0.007861356556878333, 9);
  sqcRZGate(q, 0.19292707459866812, 10);
  sqcRZGate(q, 0.5840402164348935, 11);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.30923244652585785, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.16849381241254408, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.05272857237632779, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.2685760186833093, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.14365829378113928, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.005359894533505275, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.3510868175222735, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.05559437845081026, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.813499136495853, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 0.35923099386401963, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.46431294089230696, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.49287672510946856, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.002855541708201797, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.2475099414372513, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -1.6028066609484592, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.7979071153375507, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.25672748985914545, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.2507292496258111, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -1.2496864978454396, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, 0.05128987631364095, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, -0.8327147871295928, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, -1.184288209889481, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, -0.6432767131800534, 11);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.2253691001064535, 0);
  sqcRZGate(q, -0.04559351338312961, 1);
  sqcRZGate(q, 0.05198123422353717, 2);
  sqcRZGate(q, -0.014301486356290725, 3);
  sqcRZGate(q, -0.3457272334880415, 4);
  sqcRZGate(q, -0.14328402386638128, 5);
  sqcRZGate(q, -0.12530444018765827, 6);
  sqcRZGate(q, -0.5708534933683692, 7);
  sqcRZGate(q, 0.20755248016985908, 8);
  sqcRZGate(q, -0.04534845735149438, 9);
  sqcRZGate(q, -0.010667002787201956, 10);
  sqcRZGate(q, 0.7915159694835378, 11);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.6642425226153793, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.005157365271179605, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.31773552031434116, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.07532659699813014, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.05336290032179515, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.9445264962191142, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.13487403423762978, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.04804629332768064, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 0.4910521857427769, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 0.5296341788135792, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -1.3065898715805613, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.4084369909501579, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.3180156680329362, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -1.3163352930252201, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.19489454933709172, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.08277534363566211, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.2591264297897962, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.031656998466482275, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.5187311736338941, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, 0.04252802513039893, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, -0.5674561040344335, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, 1.4285702730747496, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, -1.6030344284628926, 11);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.30537113652315057, 0);
  sqcRZGate(q, 0.00606777234243914, 1);
  sqcRZGate(q, -0.025821576900675786, 2);
  sqcRZGate(q, 0.039535306516164874, 3);
  sqcRZGate(q, 0.3393417126124785, 4);
  sqcRZGate(q, 0.11057626677549662, 5);
  sqcRZGate(q, 0.08206497103286849, 6);
  sqcRZGate(q, 0.37371533391980793, 7);
  sqcRZGate(q, -0.16078169572519319, 8);
  sqcRZGate(q, 0.038975853580572324, 9);
  sqcRZGate(q, -0.02807639333010881, 10);
  sqcRZGate(q, 0.3946531970042361, 11);

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
