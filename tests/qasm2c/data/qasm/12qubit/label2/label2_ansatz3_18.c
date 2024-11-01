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

  sqcRYGate(q, 0.6697465528368546, 0);
  sqcRZGate(q, -0.2821820218906961, 0);
  sqcRYGate(q, -0.01824444549479739, 1);
  sqcRZGate(q, 2.536544891597043, 1);
  sqcRYGate(q, 0.4310792359728488, 2);
  sqcRZGate(q, -2.6705590623588527, 2);
  sqcRYGate(q, 3.1001626014793633, 3);
  sqcRZGate(q, 0.3999947836025986, 3);
  sqcRYGate(q, 0.29116510561802406, 4);
  sqcRZGate(q, -0.833642991307741, 4);
  sqcRYGate(q, -3.1184506107706746, 5);
  sqcRZGate(q, -1.3122851446460717, 5);
  sqcRYGate(q, 3.1403525743378458, 6);
  sqcRZGate(q, 2.075314471135258, 6);
  sqcRYGate(q, 3.1412268774051144, 7);
  sqcRZGate(q, 0.19827217188121793, 7);
  sqcRYGate(q, 0.3163701680218403, 8);
  sqcRZGate(q, 2.371292808639788, 8);
  sqcRYGate(q, -2.4748589870009607, 9);
  sqcRZGate(q, -1.7674013594213056, 9);
  sqcRYGate(q, 2.8221541319481642, 10);
  sqcRZGate(q, -2.9543576809493515, 10);
  sqcRYGate(q, 3.1306781680425586, 11);
  sqcRZGate(q, -2.277588417353563, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -3.0621130373827903, 0);
  sqcRZGate(q, 2.873946088426351, 0);
  sqcRYGate(q, 2.873273597858274, 1);
  sqcRZGate(q, 3.114285020690341, 1);
  sqcRYGate(q, -0.09196980923855212, 2);
  sqcRZGate(q, 0.723548262937803, 2);
  sqcRYGate(q, -0.03679791212709183, 3);
  sqcRZGate(q, -0.6344786366202779, 3);
  sqcRYGate(q, -0.414515895250503, 4);
  sqcRZGate(q, 2.9891967419580965, 4);
  sqcRYGate(q, -1.3845044949462808, 5);
  sqcRZGate(q, 0.7211180808130733, 5);
  sqcRYGate(q, 3.1407981145379065, 6);
  sqcRZGate(q, 1.6520007484787973, 6);
  sqcRYGate(q, -3.141423733581933, 7);
  sqcRZGate(q, -0.13843892813262304, 7);
  sqcRYGate(q, 0.47424766098568427, 8);
  sqcRZGate(q, -3.1144606975002325, 8);
  sqcRYGate(q, -0.8651330586621022, 9);
  sqcRZGate(q, 1.9665585223377395, 9);
  sqcRYGate(q, 0.4154426158269944, 10);
  sqcRZGate(q, 1.8189770176938111, 10);
  sqcRYGate(q, -0.682207821766232, 11);
  sqcRZGate(q, -2.1172751844422173, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 2.228981944985507, 0);
  sqcRZGate(q, 1.478105457579483, 0);
  sqcRYGate(q, -0.20054816470567793, 1);
  sqcRZGate(q, -0.7693986467448478, 1);
  sqcRYGate(q, 0.5334195679330049, 2);
  sqcRZGate(q, -1.3969954414148011, 2);
  sqcRYGate(q, -0.3950821477807862, 3);
  sqcRZGate(q, -2.8870696833791025, 3);
  sqcRYGate(q, 0.004909369596628466, 4);
  sqcRZGate(q, 0.2911387430089146, 4);
  sqcRYGate(q, 0.16092564722800073, 5);
  sqcRZGate(q, -2.211613150029741, 5);
  sqcRYGate(q, -1.9387394040839157, 6);
  sqcRZGate(q, -1.4963137375481945, 6);
  sqcRYGate(q, 0.00016336853089082837, 7);
  sqcRZGate(q, -1.7947262034464, 7);
  sqcRYGate(q, -0.054821664038353646, 8);
  sqcRZGate(q, -1.4912534477630186, 8);
  sqcRYGate(q, 0.5889915243902255, 9);
  sqcRZGate(q, -1.28185553601506, 9);
  sqcRYGate(q, 2.7776717261357358, 10);
  sqcRZGate(q, 2.778529188408313, 10);
  sqcRYGate(q, -1.4034966272324167, 11);
  sqcRZGate(q, -1.014642840454847, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -2.668203457302463, 0);
  sqcRZGate(q, 0.21617979216178218, 0);
  sqcRYGate(q, 0.0373668388259949, 1);
  sqcRZGate(q, 1.9600117576263623, 1);
  sqcRYGate(q, -0.4175682541019874, 2);
  sqcRZGate(q, 0.9716168933172229, 2);
  sqcRYGate(q, 3.130775690239227, 3);
  sqcRZGate(q, 2.7913962009478306, 3);
  sqcRYGate(q, -3.1312472665642868, 4);
  sqcRZGate(q, -0.9455068112995777, 4);
  sqcRYGate(q, 0.27075846358426325, 5);
  sqcRZGate(q, -0.16134945855701763, 5);
  sqcRYGate(q, -0.001122847437209806, 6);
  sqcRZGate(q, 1.4952002057217855, 6);
  sqcRYGate(q, 3.14147224756847, 7);
  sqcRZGate(q, 2.875094194689369, 7);
  sqcRYGate(q, 3.1409513783273644, 8);
  sqcRZGate(q, 0.39094413085301943, 8);
  sqcRYGate(q, -2.3122647228896045, 9);
  sqcRZGate(q, 0.7251384921460069, 9);
  sqcRYGate(q, 2.8743559960829193, 10);
  sqcRZGate(q, 2.847287288658187, 10);
  sqcRYGate(q, 0.6482012291528667, 11);
  sqcRZGate(q, -1.9417101286807092, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.0998329051697278, 0);
  sqcRZGate(q, 2.9458720828170892, 0);
  sqcRYGate(q, -1.5872933356675762, 1);
  sqcRZGate(q, 0.6229244688509886, 1);
  sqcRYGate(q, -0.010330093652306402, 2);
  sqcRZGate(q, 2.3103909005105043, 2);
  sqcRYGate(q, 3.1280934766604473, 3);
  sqcRZGate(q, -2.8219917118601994, 3);
  sqcRYGate(q, 3.070099175673965, 4);
  sqcRZGate(q, 2.184348167176372, 4);
  sqcRYGate(q, 2.8724394018376924, 5);
  sqcRZGate(q, 1.891893089065987, 5);
  sqcRYGate(q, 1.201844957059266, 6);
  sqcRZGate(q, 1.674877829844049, 6);
  sqcRYGate(q, -3.140647673366286, 7);
  sqcRZGate(q, -2.487834001527524, 7);
  sqcRYGate(q, -1.8525492437655098, 8);
  sqcRZGate(q, -1.848922590270694, 8);
  sqcRYGate(q, -2.9377999730820097, 9);
  sqcRZGate(q, 1.2904798807005875, 9);
  sqcRYGate(q, 2.9050509441681185, 10);
  sqcRZGate(q, -0.16346955740055508, 10);
  sqcRYGate(q, -1.5416884319794113, 11);
  sqcRZGate(q, 0.9946882436898294, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.5163693112154313, 0);
  sqcRZGate(q, 0.018474522762375937, 0);
  sqcRYGate(q, 2.959360108478572, 1);
  sqcRZGate(q, -2.2910096884887894, 1);
  sqcRYGate(q, 3.083642202359657, 2);
  sqcRZGate(q, -2.6537779567853237, 2);
  sqcRYGate(q, 3.1382470800666344, 3);
  sqcRZGate(q, -2.496320718819598, 3);
  sqcRYGate(q, -1.3488776792709585, 4);
  sqcRZGate(q, -0.5580731735720895, 4);
  sqcRYGate(q, 2.8864075433219996, 5);
  sqcRZGate(q, 2.929034893410603, 5);
  sqcRYGate(q, 0.0004309763539175507, 6);
  sqcRZGate(q, -2.489823563359296, 6);
  sqcRYGate(q, 3.141295574952212, 7);
  sqcRZGate(q, -1.4770730453641123, 7);
  sqcRYGate(q, -1.7203956251314223, 8);
  sqcRZGate(q, -1.2316018817225451, 8);
  sqcRYGate(q, -1.442395651509397, 9);
  sqcRZGate(q, 3.094652102275001, 9);
  sqcRYGate(q, -2.573622122510123, 10);
  sqcRZGate(q, -3.0624797306867295, 10);
  sqcRYGate(q, -1.277883257762249, 11);
  sqcRZGate(q, -2.682926668161414, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.0615912745961587, 0);
  sqcRZGate(q, -0.009729652082584472, 0);
  sqcRYGate(q, 2.426405762035724, 1);
  sqcRZGate(q, 2.502205682879082, 1);
  sqcRYGate(q, 0.8287037425699557, 2);
  sqcRZGate(q, -2.7427021856295255, 2);
  sqcRYGate(q, -0.12734049224946695, 3);
  sqcRZGate(q, 2.7298338597303866, 3);
  sqcRYGate(q, 1.1310272063267368, 4);
  sqcRZGate(q, 2.4063369612985865, 4);
  sqcRYGate(q, 0.7024253160746318, 5);
  sqcRZGate(q, -1.7508641559494398, 5);
  sqcRYGate(q, -0.05484017237083183, 6);
  sqcRZGate(q, -0.026345080295033796, 6);
  sqcRYGate(q, -3.1411313715680858, 7);
  sqcRZGate(q, 2.636082147535985, 7);
  sqcRYGate(q, 2.7849377368773047, 8);
  sqcRZGate(q, 0.3046570493396361, 8);
  sqcRYGate(q, 0.0734445933200849, 9);
  sqcRZGate(q, 0.5247253844660502, 9);
  sqcRYGate(q, 2.796487494863293, 10);
  sqcRZGate(q, -2.927423885917505, 10);
  sqcRYGate(q, 0.4767316003273341, 11);
  sqcRZGate(q, 0.8921550311691152, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -3.13620418815263, 0);
  sqcRZGate(q, -2.8822228344973357, 0);
  sqcRYGate(q, -3.066594505146748, 1);
  sqcRZGate(q, 1.7054471466546703, 1);
  sqcRYGate(q, 0.18977479000197398, 2);
  sqcRZGate(q, 1.4501239477423482, 2);
  sqcRYGate(q, 0.0021672500392782013, 3);
  sqcRZGate(q, -1.581557580396673, 3);
  sqcRYGate(q, 0.04590978149591036, 4);
  sqcRZGate(q, 0.8145604883166397, 4);
  sqcRYGate(q, 2.7388796314965234, 5);
  sqcRZGate(q, -1.1811438748899266, 5);
  sqcRYGate(q, 9.762277627789474e-05, 6);
  sqcRZGate(q, -2.8394981080925055, 6);
  sqcRYGate(q, -0.00032409174979439854, 7);
  sqcRZGate(q, 1.9491175177864892, 7);
  sqcRYGate(q, 1.3288741764877194, 8);
  sqcRZGate(q, 1.4221833487177031, 8);
  sqcRYGate(q, -1.3402172486036745, 9);
  sqcRZGate(q, -2.306858579309586, 9);
  sqcRYGate(q, 0.6755996292550036, 10);
  sqcRZGate(q, 3.0163951374361564, 10);
  sqcRYGate(q, 2.266433649146496, 11);
  sqcRZGate(q, -2.4339091835578093, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 0.01401862549729671, 0);
  sqcRZGate(q, -0.10049036642345756, 0);
  sqcRYGate(q, -0.5446597675973611, 1);
  sqcRZGate(q, 1.5984986192227872, 1);
  sqcRYGate(q, 0.6772385166769688, 2);
  sqcRZGate(q, -2.9098156149946295, 2);
  sqcRYGate(q, -1.7969137824734798, 3);
  sqcRZGate(q, 2.8833744612039283, 3);
  sqcRYGate(q, -1.0826428085118103, 4);
  sqcRZGate(q, -0.008672153571922081, 4);
  sqcRYGate(q, 2.2707869997395416, 5);
  sqcRZGate(q, 0.9009096176401816, 5);
  sqcRYGate(q, 3.117704249329747, 6);
  sqcRZGate(q, 0.7182550987890339, 6);
  sqcRYGate(q, -1.6899990762300077, 7);
  sqcRZGate(q, -1.401148908210503, 7);
  sqcRYGate(q, 1.8198655782870246, 8);
  sqcRZGate(q, 1.5805668939675588, 8);
  sqcRYGate(q, 3.108812934273951, 9);
  sqcRZGate(q, -0.8100541621740007, 9);
  sqcRYGate(q, -1.3616649427463459, 10);
  sqcRZGate(q, -0.9904014572001544, 10);
  sqcRYGate(q, 1.042901702457426, 11);
  sqcRZGate(q, 1.2114260788387348, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 0.0038001645882266293, 0);
  sqcRZGate(q, -3.011727812489784, 0);
  sqcRYGate(q, 0.02449985370928175, 1);
  sqcRZGate(q, 0.1546995740623558, 1);
  sqcRYGate(q, -1.4274276205322733, 2);
  sqcRZGate(q, 1.0954808704131267, 2);
  sqcRYGate(q, 3.1362948361359795, 3);
  sqcRZGate(q, -1.4442173890514791, 3);
  sqcRYGate(q, 0.04195452286786021, 4);
  sqcRZGate(q, -0.9517769312582621, 4);
  sqcRYGate(q, 3.664275291992425e-05, 5);
  sqcRZGate(q, -2.255539134331726, 5);
  sqcRYGate(q, -3.1415737936689916, 6);
  sqcRZGate(q, -2.151721912063193, 6);
  sqcRYGate(q, -0.07237472306955564, 7);
  sqcRZGate(q, 1.3978826833419982, 7);
  sqcRYGate(q, 1.648700764723304, 8);
  sqcRZGate(q, 2.7707714136665995, 8);
  sqcRYGate(q, -3.1413046398610454, 9);
  sqcRZGate(q, -2.0487273844204728, 9);
  sqcRYGate(q, -0.22453274626881914, 10);
  sqcRZGate(q, 1.5075280692224382, 10);
  sqcRYGate(q, -0.4441080980565139, 11);
  sqcRZGate(q, 0.08685927883794876, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -3.1410941807103754, 0);
  sqcRZGate(q, -2.137802759812196, 0);
  sqcRYGate(q, 1.6340188019026645, 1);
  sqcRZGate(q, -1.4398548862224896, 1);
  sqcRYGate(q, -3.0644147983426646, 2);
  sqcRZGate(q, 0.1445649677375549, 2);
  sqcRYGate(q, 1.181788578123457, 3);
  sqcRZGate(q, 2.6939168142341106, 3);
  sqcRYGate(q, 2.534615169197091, 4);
  sqcRZGate(q, 0.2123846397110274, 4);
  sqcRYGate(q, -3.124039812761026, 5);
  sqcRZGate(q, -0.13314052053109957, 5);
  sqcRYGate(q, -3.1352005131791265, 6);
  sqcRZGate(q, 0.6833948391705897, 6);
  sqcRYGate(q, -1.4519445915834805, 7);
  sqcRZGate(q, 2.5553455950743964, 7);
  sqcRYGate(q, 0.3846808339737881, 8);
  sqcRZGate(q, -0.7708375129455657, 8);
  sqcRYGate(q, -1.6070890224342618, 9);
  sqcRZGate(q, 1.873243324581136, 9);
  sqcRYGate(q, -0.31894863428911524, 10);
  sqcRZGate(q, 0.7803900263721735, 10);
  sqcRYGate(q, 1.4450135520411802, 11);
  sqcRZGate(q, 0.07485663298192247, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.4967049583826695, 0);
  sqcRZGate(q, -0.744977188562194, 0);
  sqcRYGate(q, 0.00010622162129525493, 1);
  sqcRZGate(q, 2.1264610519727984, 1);
  sqcRYGate(q, -0.14197081594045732, 2);
  sqcRZGate(q, -1.4791775894586419, 2);
  sqcRYGate(q, 3.1411837450690228, 3);
  sqcRZGate(q, -2.5536263669715, 3);
  sqcRYGate(q, -3.0885504742493683, 4);
  sqcRZGate(q, 2.4613613543920176, 4);
  sqcRYGate(q, 0.0095277633969868, 5);
  sqcRZGate(q, -2.5292759246936636, 5);
  sqcRYGate(q, 0.00037526226286947165, 6);
  sqcRZGate(q, 0.4953896568588999, 6);
  sqcRYGate(q, -1.5706232808201042, 7);
  sqcRZGate(q, 0.7420119357304449, 7);
  sqcRYGate(q, -0.07926847064842324, 8);
  sqcRZGate(q, 2.852805793661498, 8);
  sqcRYGate(q, -3.0807118988672864, 9);
  sqcRZGate(q, -2.841110180836094, 9);
  sqcRYGate(q, -1.3397670091954426, 10);
  sqcRZGate(q, 2.58831041912691, 10);
  sqcRYGate(q, -3.1384796432131057, 11);
  sqcRZGate(q, 2.5917762357205816, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.00331956336316086, 0);
  sqcRZGate(q, 2.963271192388438, 0);
  sqcRYGate(q, 0.6217659427723468, 1);
  sqcRZGate(q, 1.278694567764198, 1);
  sqcRYGate(q, 1.834913802669912, 2);
  sqcRZGate(q, -1.126278252919862, 2);
  sqcRYGate(q, 1.411241241585161, 3);
  sqcRZGate(q, 1.0004812117202044, 3);
  sqcRYGate(q, 1.1572467255386174, 4);
  sqcRZGate(q, -2.685610730075987, 4);
  sqcRYGate(q, -4.517030496728091e-05, 5);
  sqcRZGate(q, -2.9167018516083725, 5);
  sqcRYGate(q, 1.5706107101737912, 6);
  sqcRZGate(q, -3.1088906415634345, 6);
  sqcRYGate(q, 0.003265091229249807, 7);
  sqcRZGate(q, -1.5553886253658886, 7);
  sqcRYGate(q, -0.28938125478081156, 8);
  sqcRZGate(q, 3.060945522223381, 8);
  sqcRYGate(q, 1.5695131220868817, 9);
  sqcRZGate(q, -3.126705237989104, 9);
  sqcRYGate(q, 2.5833281768143963, 10);
  sqcRZGate(q, 2.6371633696123262, 10);
  sqcRYGate(q, -2.2427499730182356, 11);
  sqcRZGate(q, 1.6268046982578197, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.6959036164716952, 0);
  sqcRZGate(q, 3.0079582478603584, 0);
  sqcRYGate(q, -1.5718829327582355, 1);
  sqcRZGate(q, 1.5772354413219611, 1);
  sqcRYGate(q, 1.5816327119157716, 2);
  sqcRZGate(q, -3.092670838601655, 2);
  sqcRYGate(q, 0.001990774439829105, 3);
  sqcRZGate(q, 2.7461949518882665, 3);
  sqcRYGate(q, -1.757513445862732, 4);
  sqcRZGate(q, -3.141583020640747, 4);
  sqcRYGate(q, 0.24870101298161176, 5);
  sqcRZGate(q, 2.6809708580757166, 5);
  sqcRYGate(q, 0.00014293915900776, 6);
  sqcRZGate(q, -3.1405814796831155, 6);
  sqcRYGate(q, -0.018278012443797363, 7);
  sqcRZGate(q, -0.25511321169046575, 7);
  sqcRYGate(q, 1.5708947251855052, 8);
  sqcRZGate(q, 1.562478642206866, 8);
  sqcRYGate(q, 0.6350743125380705, 9);
  sqcRZGate(q, 1.5252401279176715, 9);
  sqcRYGate(q, -2.3336267312240397, 10);
  sqcRZGate(q, 1.6922178469674525, 10);
  sqcRYGate(q, -0.0005423847696817026, 11);
  sqcRZGate(q, -3.0051296789369446, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.7668354131599946, 0);
  sqcRZGate(q, 1.4383666172228455, 0);
  sqcRYGate(q, -1.5691072082650206, 1);
  sqcRZGate(q, 3.140273310097874, 1);
  sqcRYGate(q, 2.616511573765657, 2);
  sqcRZGate(q, 2.511374014472836, 2);
  sqcRYGate(q, 3.137160698175112, 3);
  sqcRZGate(q, 2.262204556046568, 3);
  sqcRYGate(q, 1.4662032978445332, 4);
  sqcRZGate(q, 1.895496925850602, 4);
  sqcRYGate(q, -3.141579506757083, 5);
  sqcRZGate(q, 2.636471368040479, 5);
  sqcRYGate(q, -3.1415336215869156, 6);
  sqcRZGate(q, -0.4768588089170356, 6);
  sqcRYGate(q, 3.141459010772262, 7);
  sqcRZGate(q, -2.511285067895714, 7);
  sqcRYGate(q, -1.563487574603795, 8);
  sqcRZGate(q, -1.7211082544630738, 8);
  sqcRYGate(q, -1.5704244182019744, 9);
  sqcRZGate(q, 1.5706554498226997, 9);
  sqcRYGate(q, 0.017043650846733788, 10);
  sqcRZGate(q, 0.013147407881788182, 10);
  sqcRYGate(q, -2.1376142849278503, 11);
  sqcRZGate(q, 2.599183477587523, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.00040577454336038335, 0);
  sqcRZGate(q, 1.586207502160081, 0);
  sqcRYGate(q, 1.6276466699595369, 1);
  sqcRZGate(q, 1.2279950877751875, 1);
  sqcRYGate(q, 3.141072255895456, 2);
  sqcRZGate(q, 2.4699381214440406, 2);
  sqcRYGate(q, 3.0902933652713998, 3);
  sqcRZGate(q, 3.0533133472333245, 3);
  sqcRYGate(q, -0.6003332192262829, 4);
  sqcRZGate(q, -0.387394413570445, 4);
  sqcRYGate(q, 2.4886369492195906, 5);
  sqcRZGate(q, -0.8503895286682961, 5);
  sqcRYGate(q, -3.141587883656361, 6);
  sqcRZGate(q, 2.3670455984969725, 6);
  sqcRYGate(q, -1.561291374308906, 7);
  sqcRZGate(q, -1.3118013028496698, 7);
  sqcRYGate(q, 1.6073740416618527, 8);
  sqcRZGate(q, 1.5649072809307667, 8);
  sqcRYGate(q, -1.573407843295036, 9);
  sqcRZGate(q, 1.036186687513636, 9);
  sqcRYGate(q, 3.124421890093897, 10);
  sqcRZGate(q, 2.540453881203273, 10);
  sqcRYGate(q, -3.141376352934364, 11);
  sqcRZGate(q, -2.053951697190463, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -2.815032724541725, 0);
  sqcRZGate(q, 0.9415977663234453, 0);
  sqcRYGate(q, -0.0011537043307265904, 1);
  sqcRZGate(q, 0.4273945987642716, 1);
  sqcRYGate(q, 1.1265408976044664, 2);
  sqcRZGate(q, -2.956624692953508, 2);
  sqcRYGate(q, -1.6001218668796178, 3);
  sqcRZGate(q, -0.2260290440622841, 3);
  sqcRYGate(q, -1.5706929640991634, 4);
  sqcRZGate(q, -2.6774718021846033, 4);
  sqcRYGate(q, -3.1415559476865353, 5);
  sqcRZGate(q, 2.4638104199221744, 5);
  sqcRYGate(q, 3.141466795008008, 6);
  sqcRZGate(q, -0.7799762575863199, 6);
  sqcRYGate(q, 3.6567692834971364e-05, 7);
  sqcRZGate(q, -0.2602433773337429, 7);
  sqcRYGate(q, 1.561809479590597, 8);
  sqcRZGate(q, 1.5430026891393203, 8);
  sqcRYGate(q, -1.5654932958927772, 9);
  sqcRZGate(q, 3.057007996706449, 9);
  sqcRYGate(q, -1.5581376752532428, 10);
  sqcRZGate(q, 1.33297596822233, 10);
  sqcRYGate(q, 3.1266954857731863, 11);
  sqcRZGate(q, 3.0740490809260805, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 0.00015804439708055895, 0);
  sqcRZGate(q, 1.4652114044996432, 0);
  sqcRYGate(q, 1.5601997011632376, 1);
  sqcRZGate(q, -1.585326974882602, 1);
  sqcRYGate(q, -3.1086296342428437, 2);
  sqcRZGate(q, 0.1532046760462383, 2);
  sqcRYGate(q, 1.5782764326215801, 3);
  sqcRZGate(q, 3.130288605853368, 3);
  sqcRYGate(q, -1.80976760324032, 4);
  sqcRZGate(q, -1.384849379498454, 4);
  sqcRYGate(q, -2.779131084595734, 5);
  sqcRZGate(q, 2.192259761711726, 5);
  sqcRYGate(q, -2.021943389005725, 6);
  sqcRZGate(q, -1.2588375118922333, 6);
  sqcRYGate(q, 1.572023707046693, 7);
  sqcRZGate(q, 0.6166966707945898, 7);
  sqcRYGate(q, -0.00014988322805820073, 8);
  sqcRZGate(q, 0.20451932429004138, 8);
  sqcRYGate(q, 1.6193948525937882, 9);
  sqcRZGate(q, -1.0471854280516135, 9);
  sqcRYGate(q, -1.0873813314221763, 10);
  sqcRZGate(q, -3.0029348719889435, 10);
  sqcRYGate(q, -0.13356377255749133, 11);
  sqcRZGate(q, 2.918159260574548, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -2.0068486430081354, 0);
  sqcRZGate(q, -3.0747866747055643, 0);
  sqcRYGate(q, 0.9012781207478975, 1);
  sqcRZGate(q, 1.5686644213462169, 1);
  sqcRYGate(q, -1.5512091368464036, 2);
  sqcRZGate(q, 2.5509579559933324, 2);
  sqcRYGate(q, 0.0019018048762813324, 3);
  sqcRZGate(q, 2.3975477716904803, 3);
  sqcRYGate(q, 8.47609628033023e-05, 4);
  sqcRZGate(q, 3.1069326145177727, 4);
  sqcRYGate(q, -0.00012286826786920017, 5);
  sqcRZGate(q, -2.1469890482200493, 5);
  sqcRYGate(q, 0.0002856913888102869, 6);
  sqcRZGate(q, -0.6530889088414638, 6);
  sqcRYGate(q, -3.1415332775344176, 7);
  sqcRZGate(q, -0.367128090372721, 7);
  sqcRYGate(q, -0.0019208311929850973, 8);
  sqcRZGate(q, -1.455455409254503, 8);
  sqcRYGate(q, 1.4970128092410828, 9);
  sqcRZGate(q, 0.29429533733102176, 9);
  sqcRYGate(q, 0.024449464564851905, 10);
  sqcRZGate(q, 1.5834177376367038, 10);
  sqcRYGate(q, -0.050054500973321855, 11);
  sqcRZGate(q, -3.141590266578136, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.35209289139833794, 0);
  sqcRZGate(q, 0.3671107281507932, 0);
  sqcRYGate(q, 3.0178326644804487, 1);
  sqcRZGate(q, 1.1918979567317942, 1);
  sqcRYGate(q, -0.16687301375807453, 2);
  sqcRZGate(q, 0.8307024057217447, 2);
  sqcRYGate(q, -2.0423354384540087, 3);
  sqcRZGate(q, -0.506600514680385, 3);
  sqcRYGate(q, -1.4870143910114875, 4);
  sqcRZGate(q, -2.404078397738823, 4);
  sqcRYGate(q, -2.5087655789705754, 5);
  sqcRZGate(q, -1.0744668746296928, 5);
  sqcRYGate(q, 2.256121345056216, 6);
  sqcRZGate(q, 1.3669628896502288, 6);
  sqcRYGate(q, 0.02774446478703574, 7);
  sqcRZGate(q, -1.5361713208839347, 7);
  sqcRYGate(q, 3.1414063049750687, 8);
  sqcRZGate(q, -1.0202851373623059, 8);
  sqcRYGate(q, 0.08025804314577732, 9);
  sqcRZGate(q, 2.959561522621046, 9);
  sqcRYGate(q, -1.3623818218714183, 10);
  sqcRZGate(q, -0.5040151364662887, 10);
  sqcRYGate(q, -1.586228257465924, 11);
  sqcRZGate(q, -1.913388494657382, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -2.6464242276685557, 0);
  sqcRZGate(q, 0.2191289241867299, 0);
  sqcRYGate(q, -0.019745819329995425, 1);
  sqcRZGate(q, -1.9801891377669953, 1);
  sqcRYGate(q, 3.141382013723983, 2);
  sqcRZGate(q, 2.161954576942387, 2);
  sqcRYGate(q, 3.141252785769359, 3);
  sqcRZGate(q, -2.0165601602588885, 3);
  sqcRYGate(q, -3.1412449853840245, 4);
  sqcRZGate(q, -1.9981244470178856, 4);
  sqcRYGate(q, -6.862005033880791e-05, 5);
  sqcRZGate(q, 1.8953007628982104, 5);
  sqcRYGate(q, -0.00010040172109202523, 6);
  sqcRZGate(q, 3.000056220294866, 6);
  sqcRYGate(q, 0.0001299135754596767, 7);
  sqcRZGate(q, -1.1007916158286397, 7);
  sqcRYGate(q, -3.1398594916118734, 8);
  sqcRZGate(q, 1.2635797331652734, 8);
  sqcRYGate(q, -1.7077964191671153, 9);
  sqcRZGate(q, -2.625171241199835, 9);
  sqcRYGate(q, -1.5694362390700034, 10);
  sqcRZGate(q, 0.4590544883965028, 10);
  sqcRYGate(q, 1.5833618403882836, 11);
  sqcRZGate(q, 1.789556121727604, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.1901290168726075, 0);
  sqcRZGate(q, 1.4042010316130353, 0);
  sqcRYGate(q, -2.9335340325562895, 1);
  sqcRZGate(q, -2.546293203389886, 1);
  sqcRYGate(q, 2.9354082136903177, 2);
  sqcRZGate(q, -0.8682265336809033, 2);
  sqcRYGate(q, 1.6375005371280331, 3);
  sqcRZGate(q, -2.7138112171823976, 3);
  sqcRYGate(q, -2.808899305271849, 4);
  sqcRZGate(q, 2.9114334812648095, 4);
  sqcRYGate(q, 2.824589422190201, 5);
  sqcRZGate(q, -1.216975468326412, 5);
  sqcRYGate(q, 2.620418506419359, 6);
  sqcRZGate(q, -2.530370016315486, 6);
  sqcRYGate(q, 0.410889696240612, 7);
  sqcRZGate(q, 1.00887073430685, 7);
  sqcRYGate(q, -0.23435175772891356, 8);
  sqcRZGate(q, -0.4276679408837252, 8);
  sqcRYGate(q, 1.7789971402401994, 9);
  sqcRZGate(q, -2.5631419055173894, 9);
  sqcRYGate(q, 1.4883850151533258, 10);
  sqcRZGate(q, -1.5361709443081675, 10);
  sqcRYGate(q, -0.4670200880629798, 11);
  sqcRZGate(q, -0.15787912427020478, 11);

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
