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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 0.11709805374839455, 0);
  sqcRYGate(q, -2.6033515331066535, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8454939086942252, 0);
  sqcRYGate(q, -1.4373490820039334, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6694020466639867, 2);
  sqcRYGate(q, 0.3233400410627105, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9532666455876981, 2);
  sqcRYGate(q, 2.052590213308628, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4111507607590186, 4);
  sqcRYGate(q, 2.9908770734421966, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.617994979010077, 4);
  sqcRYGate(q, -2.9644184533307367, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.9540733214858155, 6);
  sqcRYGate(q, 2.8030866722755494, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6231125733782725, 6);
  sqcRYGate(q, -0.3656798086980367, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.9858951284989756, 8);
  sqcRYGate(q, -0.12726755832389802, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.024468657543205572, 8);
  sqcRYGate(q, 0.14305722844421087, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.8281764938558838, 10);
  sqcRYGate(q, 2.0724257483267285, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.706369641654862, 10);
  sqcRYGate(q, -2.611142638612958, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.5037840661595469, 1);
  sqcRYGate(q, 0.009594781023233523, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3921285170668403, 1);
  sqcRYGate(q, -0.4235462506873873, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5528699279712255, 3);
  sqcRYGate(q, -2.7828388079932247, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4501742727941314, 3);
  sqcRYGate(q, 1.7206717813371553, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.5292923825800386, 5);
  sqcRYGate(q, -1.9821457600197512, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.0289126840629228, 5);
  sqcRYGate(q, 0.20618820508236338, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5002484233324562, 7);
  sqcRYGate(q, -1.397073340070862, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.2166271490760545, 7);
  sqcRYGate(q, 1.5754841843388292, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.9081321088949126, 9);
  sqcRYGate(q, 0.9839386408043982, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.021541363834439, 9);
  sqcRYGate(q, -0.9699661741519219, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.6335254168198319, 0);
  sqcRYGate(q, -2.9824648277160213, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4238641539234216, 0);
  sqcRYGate(q, 2.2429902516480746, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5402599896311981, 2);
  sqcRYGate(q, -2.3624080121931863, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6551938174197218, 2);
  sqcRYGate(q, -3.133536957163015, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5619078283192165, 4);
  sqcRYGate(q, -3.04230440858088, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7303820156393572, 4);
  sqcRYGate(q, -1.4850296539076417, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7877023626830875, 6);
  sqcRYGate(q, 2.7740508534604658, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9606575158929884, 6);
  sqcRYGate(q, -1.5146890714093004, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.742340551080189, 8);
  sqcRYGate(q, -1.4953221939463859, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5690816715875147, 8);
  sqcRYGate(q, 1.4911619846929887, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.46971143421335, 10);
  sqcRYGate(q, -0.38092924238970216, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.1668096427475403, 10);
  sqcRYGate(q, -3.135757364823129, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.446098632495131, 1);
  sqcRYGate(q, 0.47074546333585765, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.033826546860322, 1);
  sqcRYGate(q, -2.042084254766863, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4516310395530807, 3);
  sqcRYGate(q, 0.20678427728718238, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.112613783416736, 3);
  sqcRYGate(q, -1.7931094600606856, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.719411471936417, 5);
  sqcRYGate(q, 3.0571792009639167, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.060719904373743, 5);
  sqcRYGate(q, 0.10241456065406614, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4175356060039819, 7);
  sqcRYGate(q, -0.29721446487474934, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.0001893052832713238, 7);
  sqcRYGate(q, -3.1383533281795866, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.9806152639514227, 9);
  sqcRYGate(q, -0.01556135394251612, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.5298101479791861, 9);
  sqcRYGate(q, 1.4671986784265854, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.7023891286501183, 0);
  sqcRYGate(q, 3.0551857256523642, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8473823517504537, 0);
  sqcRYGate(q, -0.9718448227501986, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.204741039084842, 2);
  sqcRYGate(q, 2.863823263144949, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.903194252236299, 2);
  sqcRYGate(q, 2.681731175286099, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.75131658047137, 4);
  sqcRYGate(q, 1.6094817934672818, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2437350668537466, 4);
  sqcRYGate(q, 0.01038820492141605, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6951417515071405, 6);
  sqcRYGate(q, -2.967870148987795, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.3275991070691253, 6);
  sqcRYGate(q, 2.9167170392416226, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.2115322116905327, 8);
  sqcRYGate(q, 0.2535101621289071, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.021431437129138864, 8);
  sqcRYGate(q, -1.184200062894806, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.0481216729167335, 10);
  sqcRYGate(q, 0.18510123174513948, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.7559669232166177, 10);
  sqcRYGate(q, -1.5331279017697144, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.4743263146573997, 1);
  sqcRYGate(q, -0.8526683132317837, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.092730177148482, 1);
  sqcRYGate(q, -0.6659830115394592, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7815758789664733, 3);
  sqcRYGate(q, -1.2747054260573707, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5446299416835538, 3);
  sqcRYGate(q, 3.0070960616230678, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.024855632735127704, 5);
  sqcRYGate(q, -0.030271029371180834, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5707351792153261, 5);
  sqcRYGate(q, -1.4488481722179352, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.3918980616240804, 7);
  sqcRYGate(q, -1.796847738568308, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.20754522237587986, 7);
  sqcRYGate(q, 1.5757023340880876, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.1169748473881294, 9);
  sqcRYGate(q, 1.5721425365501664, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.6445783653710193, 9);
  sqcRYGate(q, -1.5506018482360906, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.6561821761401802, 0);
  sqcRYGate(q, 2.245271238609818, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5408377756278817, 0);
  sqcRYGate(q, -1.3567897626732197, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.305280627351363, 2);
  sqcRYGate(q, -0.9227740665669193, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7728552074265922, 2);
  sqcRYGate(q, 2.2122494392867433, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.549215910505814, 4);
  sqcRYGate(q, 1.4719491319409546, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7034039954898682, 4);
  sqcRYGate(q, 1.3264867070327675, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6252296668932873, 6);
  sqcRYGate(q, 1.5749591486693424, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1285120961264106, 6);
  sqcRYGate(q, -1.5687895895349193, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5942192679215696, 8);
  sqcRYGate(q, -0.9147791693374309, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.1289918209720877, 8);
  sqcRYGate(q, -0.5151651562605585, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.34271391240874, 10);
  sqcRYGate(q, 1.556786546284583, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.8668319158607574, 10);
  sqcRYGate(q, 2.2971636327309124, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.07545213101452397, 1);
  sqcRYGate(q, 0.322281930078221, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5991483913008244, 1);
  sqcRYGate(q, 1.3668553553439111, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4047257657144436, 3);
  sqcRYGate(q, 1.6571273222799183, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5518243783107604, 3);
  sqcRYGate(q, -2.5448195641258575, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5714461363736572, 5);
  sqcRYGate(q, -3.093187590230977, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.3805574865891745, 5);
  sqcRYGate(q, -1.566605421393973, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5736014588727139, 7);
  sqcRYGate(q, -1.5829226495501878, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.5168157333044823, 7);
  sqcRYGate(q, 2.219353032970125, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.759518243743563, 9);
  sqcRYGate(q, -2.573592425104595, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.2710697801524713, 9);
  sqcRYGate(q, -3.139062405719729, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.5205374031501555, 0);
  sqcRYGate(q, -0.005739313294847115, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.42734666844997543, 0);
  sqcRYGate(q, -2.6681998414993684, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.597209783499041, 2);
  sqcRYGate(q, -1.5304604048944084, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2673267632778518, 2);
  sqcRYGate(q, 1.1349873523994232, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5720472265239493, 4);
  sqcRYGate(q, -0.032518777267593, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.030471412442834023, 4);
  sqcRYGate(q, 1.5791500813183486, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.3543925263999779, 6);
  sqcRYGate(q, -1.4928350673879462, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.0026747488657186125, 6);
  sqcRYGate(q, -0.0004670510136804407, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.558041413474905, 8);
  sqcRYGate(q, -1.4155244043898287, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.514513897066654, 8);
  sqcRYGate(q, -2.3626222382148883, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.2201424761312194, 10);
  sqcRYGate(q, 2.8632998858424283, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.1012819866864043, 10);
  sqcRYGate(q, 1.6532205155794149, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.639727763797739, 1);
  sqcRYGate(q, -1.5708209556668713, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5390866599045914, 1);
  sqcRYGate(q, 1.5218334569944587, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.604366257079322, 3);
  sqcRYGate(q, -1.5707040585285625, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6234849059790557, 3);
  sqcRYGate(q, -1.5745870516807494, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.031959381544552905, 5);
  sqcRYGate(q, -2.940938980665593, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5250127129399038, 5);
  sqcRYGate(q, 1.6068630039472525, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.833636001155612, 7);
  sqcRYGate(q, -0.02818968601561245, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.013109078548935395, 7);
  sqcRYGate(q, -1.5437549296423372, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.8026354137846132, 9);
  sqcRYGate(q, -3.0730368411763034, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5750256458384275, 9);
  sqcRYGate(q, -1.944356962767758, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.2861173641171018, 0);
  sqcRYGate(q, 1.6084845619933863, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.562391813851428, 0);
  sqcRYGate(q, 1.5584047224738633, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5759601963268248, 2);
  sqcRYGate(q, 1.5493442796048267, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.904930925207246, 2);
  sqcRYGate(q, 1.5696711088716155, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5683626163108133, 4);
  sqcRYGate(q, 1.566570282327033, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5766569593854918, 4);
  sqcRYGate(q, 1.563198452752714, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2912648282567867, 6);
  sqcRYGate(q, -2.9788208555988818, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.1371743428273735, 6);
  sqcRYGate(q, 3.105503147840963, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5908071206688232, 8);
  sqcRYGate(q, 1.2232726786143466, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.016779332109445377, 8);
  sqcRYGate(q, -3.1369530614829446, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.2639916346607309, 10);
  sqcRYGate(q, 0.7138981580212304, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.9396646067696661, 10);
  sqcRYGate(q, 3.1402711102544716, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5687276490494908, 1);
  sqcRYGate(q, -0.043818295467506374, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6651573577430092, 1);
  sqcRYGate(q, -1.5482144777947828, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.572621603254003, 3);
  sqcRYGate(q, -1.5755850434872842, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5717601488272344, 3);
  sqcRYGate(q, -1.571656219426726, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5710328853494753, 5);
  sqcRYGate(q, -3.053099509749145, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.44590252863799407, 5);
  sqcRYGate(q, 0.6823663968390745, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.536597477131129, 7);
  sqcRYGate(q, -1.3907419983241824, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.104729372554816, 7);
  sqcRYGate(q, -1.3893138564334506, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.428294443862273, 9);
  sqcRYGate(q, 2.003124793654519, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.1675467357520836, 9);
  sqcRYGate(q, -2.3121038905463984, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5618220321462277, 0);
  sqcRYGate(q, -3.10773741616178, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1036541421802477, 0);
  sqcRYGate(q, 1.5736413815267578, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.582349374271649, 2);
  sqcRYGate(q, -1.618120842336444, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.141257954851822, 2);
  sqcRYGate(q, 3.141256326028289, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5362309375573966, 4);
  sqcRYGate(q, 1.5419250143771965, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.05327235928547491, 4);
  sqcRYGate(q, 3.0996012435515414, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5701637829876258, 6);
  sqcRYGate(q, 2.9937049913017755, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5744385327320911, 6);
  sqcRYGate(q, -1.566100799319745, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1871434323098224, 8);
  sqcRYGate(q, -2.621465085863428, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.7275980465714846, 8);
  sqcRYGate(q, -2.3192028400955054, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.9743173470806976, 10);
  sqcRYGate(q, 1.536851829183898, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5943204038440417, 10);
  sqcRYGate(q, -1.5495636853161874, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.03362039793202154, 1);
  sqcRYGate(q, 1.706142516392049, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6485382306159084, 1);
  sqcRYGate(q, -1.5491921442661403, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.23887179380004842, 3);
  sqcRYGate(q, -3.062745042358123, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.00621203839440554, 3);
  sqcRYGate(q, 0.020643163150016797, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5420463373419082, 5);
  sqcRYGate(q, -1.5743989968494327, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5637504860939229, 5);
  sqcRYGate(q, -1.5753067491132615, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5728465571771126, 7);
  sqcRYGate(q, 1.568079073377568, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5650609467465557, 7);
  sqcRYGate(q, 1.5691059887223577, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.6945068097690736, 9);
  sqcRYGate(q, 1.7182119627596946, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.026449463436258647, 9);
  sqcRYGate(q, 0.0008981178610624398, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.13520036726047, 0);
  sqcRYGate(q, 1.5711523087553472, 1);
  sqcRYGate(q, 1.6401083987590712, 2);
  sqcRYGate(q, -0.28646032921367065, 3);
  sqcRYGate(q, 1.5265017766989635, 4);
  sqcRYGate(q, -1.5710307506263552, 5);
  sqcRYGate(q, 9.213346345476231e-05, 6);
  sqcRYGate(q, -1.5708488545398278, 7);
  sqcRYGate(q, 3.141394045340196, 8);
  sqcRYGate(q, -0.4531702962312618, 9);
  sqcRYGate(q, 2.9913181342985298, 10);
  sqcRYGate(q, -1.8967332718052279, 11);

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
