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

  sqcRYGate(q, -2.729745199846052, 0);
  sqcRYGate(q, 1.3275399681130204, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.815063771443229, 0);
  sqcRYGate(q, 0.08355880892480627, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8437042503611574, 2);
  sqcRYGate(q, -1.9772410686649107, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.08641714142693413, 2);
  sqcRYGate(q, -3.1408685794183016, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8965836397422806, 0);
  sqcRYGate(q, -2.6394416814013084, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1040894997444504, 0);
  sqcRYGate(q, 1.9253102608511528, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4579985233760406, 1);
  sqcRYGate(q, 0.3742374619004319, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.317329873855167, 1);
  sqcRYGate(q, -2.058146876578461, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.07607613274146653, 0);
  sqcRYGate(q, -2.540298403717334, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.33053370989018194, 0);
  sqcRYGate(q, -1.0505189787853817, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.1641000419019916, 1);
  sqcRYGate(q, 1.5928971870697062, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.011716557323312, 1);
  sqcRYGate(q, 1.2343524225987206, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4524943350467332, 0);
  sqcRYGate(q, 0.6131926726963037, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6625032843452683, 0);
  sqcRYGate(q, -1.857441943408464, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.039912055514613, 2);
  sqcRYGate(q, 3.1310071620331215, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1116051402350537, 2);
  sqcRYGate(q, -1.825211819111802, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0494793040532864, 0);
  sqcRYGate(q, -2.7032510945994095, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.1077793347634057, 0);
  sqcRYGate(q, 2.806826038471557, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.04895277111883445, 1);
  sqcRYGate(q, -2.8732448581092793, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4090358133949037, 1);
  sqcRYGate(q, 1.2493004980472566, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.42007913670126223, 0);
  sqcRYGate(q, -0.9145673725467935, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.04634977354519165, 0);
  sqcRYGate(q, 1.2018546586147, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.6613047149612302, 1);
  sqcRYGate(q, -1.038224999901239, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.79462378869464, 1);
  sqcRYGate(q, 1.277933025585727, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8581978534875137, 0);
  sqcRYGate(q, 2.931371895241849, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.449007626551571, 0);
  sqcRYGate(q, -2.8445866034672926, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7736456176124474, 2);
  sqcRYGate(q, -0.8875684219940183, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7376220077504392, 2);
  sqcRYGate(q, 2.0387410804764308, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9041684238535623, 0);
  sqcRYGate(q, -0.06413484597930577, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2293114506980114, 0);
  sqcRYGate(q, -0.2117034476948528, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.206415006682918, 1);
  sqcRYGate(q, 0.23442317315219263, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3759397104123057, 1);
  sqcRYGate(q, 2.0329356547813022, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.35447448754873906, 0);
  sqcRYGate(q, 0.7757719128778857, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.876124873638414, 0);
  sqcRYGate(q, 1.221263685793681, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.7872381719834867, 1);
  sqcRYGate(q, -0.7058915286447309, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.470443180117745, 1);
  sqcRYGate(q, -0.9763933112519222, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6878378638579644, 0);
  sqcRYGate(q, -1.6279363082326705, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.235769742495745, 0);
  sqcRYGate(q, -2.3635632196453447, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4944757015307926, 2);
  sqcRYGate(q, -0.28933428859986227, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1179973995814456, 2);
  sqcRYGate(q, 0.6273754596350801, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8370063337995772, 0);
  sqcRYGate(q, 3.030176242730105, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.409045993072655, 0);
  sqcRYGate(q, -1.5690966783285665, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.943938604027586, 1);
  sqcRYGate(q, 2.4645277599083917, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.601930786676497, 1);
  sqcRYGate(q, -1.4040185154492848, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9653710197330154, 0);
  sqcRYGate(q, -1.1832862469307852, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.060495003029542596, 0);
  sqcRYGate(q, -0.4322962731749803, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.3256413495776718, 1);
  sqcRYGate(q, 0.46330062211595924, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9336331541104549, 1);
  sqcRYGate(q, 2.378571359407648, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7287016945038518, 0);
  sqcRYGate(q, -3.105381069100912, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.556100301812588, 0);
  sqcRYGate(q, -0.8938618167370191, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3377128276720454, 2);
  sqcRYGate(q, -1.8978533245015603, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.435173191675674, 2);
  sqcRYGate(q, -0.6930311797612223, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.26399497920265325, 0);
  sqcRYGate(q, 1.2523995598479596, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.8354651845293337, 0);
  sqcRYGate(q, -0.6257255425738114, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0042384882401594, 1);
  sqcRYGate(q, 1.2496263858109817, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3846896375983224, 1);
  sqcRYGate(q, 1.0862326473277202, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0355209830950356, 0);
  sqcRYGate(q, 1.6311490833771993, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.003742942886926, 0);
  sqcRYGate(q, 0.19933982149725954, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6051664059217383, 1);
  sqcRYGate(q, 2.0643992016536012, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.800452030906662, 1);
  sqcRYGate(q, -1.019387829936809, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4544593729178605, 0);
  sqcRYGate(q, 0.3932116082662178, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2539215683678287, 0);
  sqcRYGate(q, 1.1802154365603093, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.343787677728775, 2);
  sqcRYGate(q, -1.7217999168738058, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8343100252545605, 2);
  sqcRYGate(q, 0.3194431701680891, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2104350200106637, 0);
  sqcRYGate(q, -1.5103883317819977, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7609208141534505, 0);
  sqcRYGate(q, -0.3523209890880913, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.857770446298408, 1);
  sqcRYGate(q, -0.9093191899898408, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9569448889028191, 1);
  sqcRYGate(q, 2.968854891425929, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.442996004503353, 0);
  sqcRYGate(q, 3.031113085067031, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.11148891333820785, 0);
  sqcRYGate(q, 2.741722854477621, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.814127229616811, 1);
  sqcRYGate(q, -2.9519350495354706, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5320636973208277, 1);
  sqcRYGate(q, 0.2557831863137988, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7888888506725182, 0);
  sqcRYGate(q, -1.1802373189121598, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6226015263665808, 0);
  sqcRYGate(q, -0.9745062742871795, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.31342299962486975, 2);
  sqcRYGate(q, 1.4744330725528565, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5858059020729423, 2);
  sqcRYGate(q, 0.9078678655501927, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1353394598384834, 0);
  sqcRYGate(q, 3.08667535690993, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2247115825117272, 0);
  sqcRYGate(q, -0.037400523314791226, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.712562191115008, 1);
  sqcRYGate(q, 1.4457199311312339, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.964850119799993, 1);
  sqcRYGate(q, -2.4399424608018463, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.09372373018415243, 0);
  sqcRYGate(q, 0.799027978098818, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.7346135191603977, 0);
  sqcRYGate(q, 1.5704917942120291, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5859561811576436, 1);
  sqcRYGate(q, -1.503997249103743, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2829104185378535, 1);
  sqcRYGate(q, -2.260063541033612, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.667272572153335, 0);
  sqcRYGate(q, 2.526411682336965, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3976446576838595, 0);
  sqcRYGate(q, 0.04524592267131489, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9585783387840126, 2);
  sqcRYGate(q, 1.5122934280093403, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9983604254837815, 2);
  sqcRYGate(q, -0.7935131722489689, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2572263571581823, 0);
  sqcRYGate(q, -0.12135554722531694, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8205795648595666, 0);
  sqcRYGate(q, -2.3873316267026037, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.13784069697308, 1);
  sqcRYGate(q, -3.0373374411689946, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.65881403704924, 1);
  sqcRYGate(q, 0.6885596601769288, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4401040379067515, 0);
  sqcRYGate(q, -0.6707887261536379, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.0809279537885623, 0);
  sqcRYGate(q, -0.9987550211929755, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.075089061554263, 1);
  sqcRYGate(q, -0.18786062845932108, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1242390710855323, 1);
  sqcRYGate(q, 1.6473684935535384, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0588502475345882, 0);
  sqcRYGate(q, 1.6714248098668518, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2095295542051474, 0);
  sqcRYGate(q, -0.35959839085416156, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4839689861734568, 2);
  sqcRYGate(q, -2.672684170328739, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3221343149446771, 2);
  sqcRYGate(q, 1.3532952161045433, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6022683303241134, 0);
  sqcRYGate(q, -0.42657034605445593, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9371208240826006, 0);
  sqcRYGate(q, 3.0335692518728687, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.794223553806798, 1);
  sqcRYGate(q, 2.2158744524408607, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.17175943086364934, 1);
  sqcRYGate(q, -2.6384111319736965, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.160953274061197, 0);
  sqcRYGate(q, 1.0874295751396668, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.9857826001103156, 0);
  sqcRYGate(q, -0.9386218218170069, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.180526075660902, 1);
  sqcRYGate(q, 2.342755511211502, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0298194663869316, 1);
  sqcRYGate(q, 1.8223477865191549, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7117048803635728, 0);
  sqcRYGate(q, 0.5583724985885308, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7035743854556604, 0);
  sqcRYGate(q, 2.5341179789405017, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0462971096901847, 2);
  sqcRYGate(q, 3.139853993850789, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.056071424344757766, 2);
  sqcRYGate(q, 2.0653307712623548, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4810467022965961, 0);
  sqcRYGate(q, -1.4120709865738954, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.844452305306279, 0);
  sqcRYGate(q, 0.8002294735649742, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.1500310894368013, 1);
  sqcRYGate(q, 0.4607622338213806, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.051269956284165, 1);
  sqcRYGate(q, 2.896310013241033, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8009127949297756, 0);
  sqcRYGate(q, 1.0769444617144446, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.008039966350797075, 0);
  sqcRYGate(q, -0.2941168827301138, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.7136147791116243, 1);
  sqcRYGate(q, 1.8859541029495994, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.47231968307167627, 1);
  sqcRYGate(q, 0.9262548816963768, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5381755328251185, 0);
  sqcRYGate(q, -3.021387719731751, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2182023969415559, 0);
  sqcRYGate(q, 2.547464918585812, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2731651545697162, 2);
  sqcRYGate(q, -2.0470923155510947, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.213024944514346, 2);
  sqcRYGate(q, -2.436330296199953, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5499865623780456, 0);
  sqcRYGate(q, 0.2571409877493872, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6870940184052223, 0);
  sqcRYGate(q, -2.787908222069243, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5188984759385296, 1);
  sqcRYGate(q, 0.2326232790298697, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9173990261494742, 1);
  sqcRYGate(q, 0.18143122219757668, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3926384142573447, 0);
  sqcRYGate(q, 2.9858230890706174, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.090350284835324, 0);
  sqcRYGate(q, 2.993540660382516, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.20225585161816953, 1);
  sqcRYGate(q, 0.9675918742072637, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8817786322097447, 1);
  sqcRYGate(q, 1.9808713690373674, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5844351135667383, 0);
  sqcRYGate(q, -0.969447812053704, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5025744668642154, 0);
  sqcRYGate(q, -1.3103800764209845, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8623972375597724, 2);
  sqcRYGate(q, 1.180161007021952, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.631993077754816, 2);
  sqcRYGate(q, -0.8812465936671585, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1379839659889526, 0);
  sqcRYGate(q, 0.4703769653223482, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5583890564425378, 0);
  sqcRYGate(q, -2.920050824680518, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4877667397239387, 1);
  sqcRYGate(q, -2.7233275777819106, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1556651084579563, 1);
  sqcRYGate(q, -0.9406891468208425, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5944819239504247, 0);
  sqcRYGate(q, -0.22820080045015967, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.4403396431604891, 0);
  sqcRYGate(q, 2.2322233929504245, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.0565991755460828, 1);
  sqcRYGate(q, 2.950263174719881, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.059496776390918, 1);
  sqcRYGate(q, 1.282180176034171, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1198638326776624, 0);
  sqcRYGate(q, -1.0547898383862089, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.45269961963303174, 0);
  sqcRYGate(q, 0.018384823322033166, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0168907353617618, 2);
  sqcRYGate(q, -2.9216934387138704, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.374822042846505, 2);
  sqcRYGate(q, -1.6142409307099508, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.1848891202719285, 0);
  sqcRYGate(q, -1.2315182681385384, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7793973725056604, 0);
  sqcRYGate(q, 0.4506934746076281, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3248420651638506, 1);
  sqcRYGate(q, -1.058135533937073, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8050407491628168, 1);
  sqcRYGate(q, -2.969914904440175, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0152191828872015, 0);
  sqcRYGate(q, 0.6297536859496793, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.8709948614243386, 0);
  sqcRYGate(q, -1.5385865279474484, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.1094806483312825, 1);
  sqcRYGate(q, 2.2215509505036817, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.18876253759666195, 1);
  sqcRYGate(q, -0.21184182401998886, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.45951297328069635, 0);
  sqcRYGate(q, 0.5366056928842404, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.43035981561746, 0);
  sqcRYGate(q, 2.9335739649238515, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8902022642926593, 2);
  sqcRYGate(q, 2.1355116138580184, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5796833932155643, 2);
  sqcRYGate(q, -1.8104056236815076, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5384014562636475, 0);
  sqcRYGate(q, -1.0959402205130901, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.991472414217503, 0);
  sqcRYGate(q, 3.0856227474978244, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7187239842537696, 1);
  sqcRYGate(q, 3.0440884077737915, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0005117404917714, 1);
  sqcRYGate(q, 0.4153125284045869, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7567214516605119, 0);
  sqcRYGate(q, -3.100436681793233, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.4982193737090788, 0);
  sqcRYGate(q, 2.8745199927093026, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.5087691481031813, 1);
  sqcRYGate(q, 1.530437625806007, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5515679411449805, 1);
  sqcRYGate(q, -2.865944816877424, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.32802038225293195, 0);
  sqcRYGate(q, -1.5076529273290096, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8533709342339741, 0);
  sqcRYGate(q, 0.31246809965978345, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5780057994096103, 2);
  sqcRYGate(q, 1.2429602398933188, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8291877532726857, 2);
  sqcRYGate(q, 3.001019546031766, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0681374219844053, 0);
  sqcRYGate(q, 1.2017057664711115, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1847927245656702, 0);
  sqcRYGate(q, -0.44854232286438683, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.9009344862750917, 1);
  sqcRYGate(q, 0.2766347779976791, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.1076306509038774, 1);
  sqcRYGate(q, -0.5910983969847472, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1353064996731757, 0);
  sqcRYGate(q, -2.588294651108125, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.581117503140164, 0);
  sqcRYGate(q, 2.9253762667277527, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.754375768925235, 1);
  sqcRYGate(q, -2.9763743552933564, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8369036759125787, 1);
  sqcRYGate(q, -2.3879336495503236, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7614456110506813, 0);
  sqcRYGate(q, -2.233782645529544, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.715837196478658, 0);
  sqcRYGate(q, -2.941447899211331, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.648262434239747, 2);
  sqcRYGate(q, 2.5063213340328456, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.12353121236605451, 2);
  sqcRYGate(q, -0.30040489255006836, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4574450874166045, 0);
  sqcRYGate(q, -0.7153919789753884, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.772580851441338, 0);
  sqcRYGate(q, -2.53985603572612, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6029241319952952, 1);
  sqcRYGate(q, 1.2532581455148037, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8281481999909888, 1);
  sqcRYGate(q, -2.7796632943855997, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7007472624478024, 0);
  sqcRYGate(q, 0.7671713020114463, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.5379016271920034, 0);
  sqcRYGate(q, 0.67450584472169, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.6979817378343856, 1);
  sqcRYGate(q, 1.2480904055766548, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5438484541125588, 1);
  sqcRYGate(q, -0.33972825317712374, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.10132525085379296, 0);
  sqcRYGate(q, -1.5350269712153706, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9631731446884655, 0);
  sqcRYGate(q, -1.0061240320991525, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.399911946823749, 2);
  sqcRYGate(q, 0.055675443788586514, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0138505816598706, 2);
  sqcRYGate(q, 2.3847087477790625, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.37833780548980306, 0);
  sqcRYGate(q, -0.8670287947174177, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.342974096037513, 0);
  sqcRYGate(q, 2.1049825074292405, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7683754941930361, 1);
  sqcRYGate(q, -0.9912955999064527, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.389070552463321, 1);
  sqcRYGate(q, -1.8894434299165221, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6816415950757198, 0);
  sqcRYGate(q, 0.6999677879470587, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.278706258590925, 0);
  sqcRYGate(q, -0.736412102593357, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.2220111070598807, 1);
  sqcRYGate(q, 1.7600895033332522, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3935890900222216, 1);
  sqcRYGate(q, -2.5668193597421105, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3042689681277484, 0);
  sqcRYGate(q, 2.058777638196436, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.01515183644880924, 0);
  sqcRYGate(q, 0.2194681573377771, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6171988110805358, 2);
  sqcRYGate(q, -1.0665960128028606, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7840327670122358, 2);
  sqcRYGate(q, -0.2736567823503442, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1055031414298844, 0);
  sqcRYGate(q, 1.7665910450919255, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.04760678198661868, 0);
  sqcRYGate(q, 0.4364223513023182, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9785270001638566, 1);
  sqcRYGate(q, -1.3854210124129689, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6231098604151839, 1);
  sqcRYGate(q, 1.0983862466050178, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.979485842138092, 0);
  sqcRYGate(q, -2.679526798018302, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.8912976219102093, 0);
  sqcRYGate(q, 1.2864924328905967, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3760985739277904, 1);
  sqcRYGate(q, 0.23137401479496855, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.625759237959941, 1);
  sqcRYGate(q, -3.124781857387031, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5228236932788319, 0);
  sqcRYGate(q, -1.9472708823905114, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6464340129652104, 0);
  sqcRYGate(q, -0.32983714991213364, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7400027360646454, 2);
  sqcRYGate(q, -2.4958516321953614, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5910155431599518, 2);
  sqcRYGate(q, 1.4147601833951073, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0689390230398497, 0);
  sqcRYGate(q, 0.8231317069103876, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8744592754427141, 0);
  sqcRYGate(q, -0.23139139065118286, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4265152718873995, 1);
  sqcRYGate(q, 2.5371020106592024, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.385857684311333, 1);
  sqcRYGate(q, -2.726713427095843, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2593149048400187, 0);
  sqcRYGate(q, 2.636607398339793, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6244803834780832, 0);
  sqcRYGate(q, 0.6451929238953077, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.22176017965715933, 1);
  sqcRYGate(q, -1.9568420635344852, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0586838981302442, 1);
  sqcRYGate(q, -0.37201258300292306, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5861327543258037, 0);
  sqcRYGate(q, -1.9369943940351773, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0473449041613843, 0);
  sqcRYGate(q, -2.124615515195484, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9038021674767498, 2);
  sqcRYGate(q, -2.3821088321440103, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.43001122215970145, 2);
  sqcRYGate(q, 0.562662258859393, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.881895056249132, 0);
  sqcRYGate(q, 0.470215378238726, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.117704094316264, 0);
  sqcRYGate(q, 1.5105190292739925, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3254467897718743, 1);
  sqcRYGate(q, 1.545043155587429, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7757663456257007, 1);
  sqcRYGate(q, -0.13518447268325462, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.227172462937867, 0);
  sqcRYGate(q, -1.888728101043475, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.3290014231805563, 0);
  sqcRYGate(q, 1.2598448767339412, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.39425327253323794, 1);
  sqcRYGate(q, 2.3840651634627132, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.665569014872878, 1);
  sqcRYGate(q, -1.0376444580387136, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.749954201754047, 0);
  sqcRYGate(q, -1.8559108109340245, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5749612161414417, 0);
  sqcRYGate(q, -2.35635585094021, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1396044077189111, 2);
  sqcRYGate(q, -1.1451353411471885, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3286274672937539, 2);
  sqcRYGate(q, -1.9403672350907923, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4926692703164344, 0);
  sqcRYGate(q, -0.3606304136460964, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9730542575379204, 0);
  sqcRYGate(q, 0.9293347951314241, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5336531132765066, 1);
  sqcRYGate(q, -0.15959748582290265, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1628941122850063, 1);
  sqcRYGate(q, -1.4837921716367788, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.1941783789072913, 0);
  sqcRYGate(q, 0.5950336747659319, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.440657693456839, 0);
  sqcRYGate(q, -2.3780652935292403, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.5727754976765516, 1);
  sqcRYGate(q, 2.3105772853391406, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.04059910293905727, 1);
  sqcRYGate(q, 1.0299558221566167, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6847391230897217, 0);
  sqcRYGate(q, 2.8381927213201408, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3664153760792552, 0);
  sqcRYGate(q, 1.1474843837542315, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.507492839052063, 2);
  sqcRYGate(q, -1.3323072724907994, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.23682660864407476, 2);
  sqcRYGate(q, -2.3660036429123172, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7810217038941946, 0);
  sqcRYGate(q, 2.266108906820616, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8956953750672847, 0);
  sqcRYGate(q, -2.0276914423413013, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1363803455815729, 1);
  sqcRYGate(q, -0.8011196352307041, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1998852799524773, 1);
  sqcRYGate(q, 2.5229106598155084, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.03523486150437625, 0);
  sqcRYGate(q, 2.9781604030120343, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.5335856721881465, 0);
  sqcRYGate(q, -0.20459965261643553, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.980003396523744, 1);
  sqcRYGate(q, -1.176075274647235, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5276979706054168, 1);
  sqcRYGate(q, -1.439141295984439, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5016180002616829, 0);
  sqcRYGate(q, 0.06409102265382427, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9125094547349701, 0);
  sqcRYGate(q, -1.2121122014154109, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.891625563176825, 2);
  sqcRYGate(q, -1.9002185703686276, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1642542679582926, 2);
  sqcRYGate(q, -1.0825421876854542, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.982961822700405, 0);
  sqcRYGate(q, -1.9927257730862262, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7516957300268599, 0);
  sqcRYGate(q, -2.679345920317094, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.19764512242495727, 1);
  sqcRYGate(q, -2.8088406388047913, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8482693506956306, 1);
  sqcRYGate(q, -0.4603983453641929, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9511051533881183, 0);
  sqcRYGate(q, 0.8632305128092242, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.2133840131432745, 0);
  sqcRYGate(q, 0.7762789674176902, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.011679049356933646, 1);
  sqcRYGate(q, -0.4326886551290904, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1130372215100475, 1);
  sqcRYGate(q, 0.6648714262805141, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.005514531631611, 0);
  sqcRYGate(q, 1.8143707130279463, 1);
  sqcRYGate(q, -2.9446547357743746, 2);
  sqcRYGate(q, -1.4467335963512058, 3);

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
