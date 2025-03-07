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
  q = sqcQuantumCircuit(4);

  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.07232694160832057, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.05189563282321073, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.06428003825765662, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.3952899343671851, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.23356998315143582, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.3800310569890716, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.35393169114283246, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.02736075697164661, 0);
  sqcRZGate(q, -0.01741794972350616, 1);
  sqcRZGate(q, -0.1388316723605471, 2);
  sqcRZGate(q, -0.04744231015026251, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.05819954854663638, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.17298749971457408, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.05078246379263562, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.37582908764892947, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.14923843426173136, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.21099181299637063, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.46183680556110807, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.09920027915674076, 0);
  sqcRZGate(q, -0.03420486795474584, 1);
  sqcRZGate(q, -0.15157012434031, 2);
  sqcRZGate(q, -0.06139314847418873, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.11657715165965496, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.31342376175265035, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.00547844194618833, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.2570317390638088, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.01808572467540108, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.015773649332599497, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.44082273169409436, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.008105883731627182, 0);
  sqcRZGate(q, -0.021946216890971242, 1);
  sqcRZGate(q, -0.10822371122530003, 2);
  sqcRZGate(q, -0.09822168998714279, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.24541264800805096, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.2657965162106865, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.047069750060248765, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.2205547856302162, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.04728692883811505, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.12810933841148542, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.4247594306478715, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.005299520819932574, 0);
  sqcRZGate(q, -0.035727911774541904, 1);
  sqcRZGate(q, 0.000254468948121712, 2);
  sqcRZGate(q, -0.05423161767233705, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.2567446733201903, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.1822971915291673, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.0001929721506938039, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.13577948764880227, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.10045927187050864, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.06232358565349477, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.40797840952145686, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.06847173162069996, 0);
  sqcRZGate(q, -0.11960294221297016, 1);
  sqcRZGate(q, -0.02330629090754615, 2);
  sqcRZGate(q, 0.06403262270033727, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.22148123595810268, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.17886824373236143, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.08985491126849798, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.03676018881249692, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.18587105591532194, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.0634442919808745, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.3839467843486871, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.13058572420120976, 0);
  sqcRZGate(q, -0.08394917241664067, 1);
  sqcRZGate(q, -0.06737211242083765, 2);
  sqcRZGate(q, 0.017531241446356, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.21768410327024368, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.08152943228727867, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.29118764390766755, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.058543968199196786, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.1486095549462208, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.06097964697541268, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.2320274798520383, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.20376209806166834, 0);
  sqcRZGate(q, -0.09673564983405694, 1);
  sqcRZGate(q, -0.0345637843024679, 2);
  sqcRZGate(q, 0.07755506073309623, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.31733983939632954, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.07625854232843679, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.30289981178594544, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.06571144069308078, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.022398701363676592, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.02672156075830252, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.22460190598281732, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.29079395425045335, 0);
  sqcRZGate(q, -0.156237593430561, 1);
  sqcRZGate(q, -0.058169913743614715, 2);
  sqcRZGate(q, 0.11524533663215718, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.24234695928408148, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.08641856444175433, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.21147542113455242, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.01834511713447132, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.16714809632606045, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.020781989225239675, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.23299534215058273, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.28932498030083026, 0);
  sqcRZGate(q, -0.20048685986477577, 1);
  sqcRZGate(q, -0.0731217909211236, 2);
  sqcRZGate(q, 0.041614706570475064, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.2249525376495426, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.1883148938836021, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.05435781027983045, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.00812946392982286, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.4198061157517099, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.006616036606650099, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.23618718199820937, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.2709738024038565, 0);
  sqcRZGate(q, -0.17749060191766036, 1);
  sqcRZGate(q, -0.015029017530047595, 2);
  sqcRZGate(q, 0.05440208964477232, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.12503647601034243, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.20676914234268517, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.04650415799208802, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.03461741089364345, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.5942389569174241, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.04652266877295576, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.25558895607546417, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.2657273338601123, 0);
  sqcRZGate(q, -0.17629231696693562, 1);
  sqcRZGate(q, 0.05291109768788009, 2);
  sqcRZGate(q, -0.037689787114404814, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.0885418171722175, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.2565775068269346, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.0910843406215844, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.08224292376130148, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.5884970095052124, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.07871964422795456, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.1703123395330741, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.3073784361567156, 0);
  sqcRZGate(q, -0.24534999811506666, 1);
  sqcRZGate(q, -0.01684993308143483, 2);
  sqcRZGate(q, 0.04852164190810427, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.07778445387969209, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.42428254386347786, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.08156566407813748, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.11980900196084145, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.4222256558291808, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.29860395360899433, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.15934735791468344, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.3067837310436306, 0);
  sqcRZGate(q, -0.22178086498877994, 1);
  sqcRZGate(q, 0.2580792451312921, 2);
  sqcRZGate(q, 0.04764128199568062, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.03922978530444482, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.041754550898844896, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.13284191395610795, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.16299498357377726, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.4441457213786769, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.18168214777443123, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.1840264503853079, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.3922093240742001, 0);
  sqcRZGate(q, -0.17057240915198327, 1);
  sqcRZGate(q, 0.276403207343414, 2);
  sqcRZGate(q, 0.07198214237191349, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.016995322019995634, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.0845598312977672, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.14681643489615986, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.17504985670591575, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.4464941549713899, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.3389144039886749, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.14566389396615712, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.39194868527969146, 0);
  sqcRZGate(q, -0.04700740801009027, 1);
  sqcRZGate(q, 0.3780041339765356, 2);
  sqcRZGate(q, 0.07569644953750214, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.12325055806158461, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.13158499757998798, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.07550352665123317, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.29761754617138625, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.5094897896212823, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.490652243943086, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.13335211228439214, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.5019934690187241, 0);
  sqcRZGate(q, -0.0248112748955756, 1);
  sqcRZGate(q, 0.2474261881717791, 2);
  sqcRZGate(q, 0.13689461118890403, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.03696898211596907, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.10634987197842824, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.12105845235075316, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.253548917477622, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.5297910485337866, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.5972071981078582, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.1148852668382877, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.6009784522595375, 0);
  sqcRZGate(q, 0.06435121952132182, 1);
  sqcRZGate(q, 0.2199946263968561, 2);
  sqcRZGate(q, 0.17997974784870102, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.2232352219935031, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.09792998467592676, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.07453719891884633, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.0470834662427707, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.5600873812283962, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.39337511675810877, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.06403475957221784, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.6574008285004694, 0);
  sqcRZGate(q, 0.04854281255896638, 1);
  sqcRZGate(q, 0.06900962561556112, 2);
  sqcRZGate(q, 0.252622500328466, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.34122262543636, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.20824927842525504, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.16308903825051468, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.10398962354151528, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.5541644801918316, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.24150469134762334, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.04276808970723298, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.6489083557430428, 0);
  sqcRZGate(q, 0.017823347511485062, 1);
  sqcRZGate(q, 0.11367357224837879, 2);
  sqcRZGate(q, 0.26716265178493387, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.081281468345496, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.23301349618639236, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.37285461392465574, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.2533409803413434, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.6220482738367435, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.0011607035882729416, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.19597418123109767, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.606703198921828, 0);
  sqcRZGate(q, -0.06900567024308656, 1);
  sqcRZGate(q, 0.17441811714494102, 2);
  sqcRZGate(q, 0.22995301123436349, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.5589119796520131, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.04594743143837018, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.21804014232301233, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.450071997268605, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.4436953934885577, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.22329563909766928, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.41941919350378054, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.396682249317896, 0);
  sqcRZGate(q, 0.0310062415077181, 1);
  sqcRZGate(q, 0.05122921180619359, 2);
  sqcRZGate(q, 0.12819608088319534, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.19317519473162098, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.04928820767724611, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.5081777121432844, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -1.2903528850208288, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.29552569899817094, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.3467775140152499, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.06280789384014612, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.3160780701712731, 0);
  sqcRZGate(q, 0.0926600873267249, 1);
  sqcRZGate(q, 0.18351307749975956, 2);
  sqcRZGate(q, 0.11162817223684672, 3);

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
