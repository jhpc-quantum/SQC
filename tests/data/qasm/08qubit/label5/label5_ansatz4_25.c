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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, 0.264174792070194, 0);
  sqcRZGate(q, 1.4590595890687053, 0);
  sqcRYGate(q, 1.2195382301445328, 1);
  sqcRZGate(q, -2.644092691937249, 1);
  sqcRYGate(q, 1.8483202913341845, 2);
  sqcRZGate(q, 1.6301968803873077, 2);
  sqcRYGate(q, 0.2054768846149555, 3);
  sqcRZGate(q, 0.1260807681450613, 3);
  sqcRYGate(q, -1.0005959623298823, 4);
  sqcRZGate(q, 0.8345282924546166, 4);
  sqcRYGate(q, -2.857013850002045, 5);
  sqcRZGate(q, 1.8411938829686656, 5);
  sqcRYGate(q, -2.2989052951714735, 6);
  sqcRZGate(q, 0.39982626364054136, 6);
  sqcRYGate(q, -2.2644896356631095, 7);
  sqcRZGate(q, 0.6797831883650439, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.3532832737017788, 0);
  sqcRZGate(q, -2.698041819267645, 0);
  sqcRYGate(q, -0.25824554952387185, 1);
  sqcRZGate(q, 0.49142162759871744, 1);
  sqcRYGate(q, -1.5582996926091675, 2);
  sqcRZGate(q, 3.0307074894038055, 2);
  sqcRYGate(q, 0.46638790129280233, 3);
  sqcRZGate(q, 2.4957664223994116, 3);
  sqcRYGate(q, 0.07803472003621792, 4);
  sqcRZGate(q, 2.102228260439401, 4);
  sqcRYGate(q, -0.8149831089009348, 5);
  sqcRZGate(q, 2.2067122887821187, 5);
  sqcRYGate(q, -0.44302988911917135, 6);
  sqcRZGate(q, -1.4104180804276656, 6);
  sqcRYGate(q, -1.5957910489753868, 7);
  sqcRZGate(q, -1.3050936428131765, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.8396163471147626, 0);
  sqcRZGate(q, 0.6128637959726033, 0);
  sqcRYGate(q, 2.485997853072567, 1);
  sqcRZGate(q, -0.22014733234185524, 1);
  sqcRYGate(q, 2.567602470569186, 2);
  sqcRZGate(q, -1.8761823432557034, 2);
  sqcRYGate(q, 0.6740484296729119, 3);
  sqcRZGate(q, 0.242378373680201, 3);
  sqcRYGate(q, 2.2954134209426065, 4);
  sqcRZGate(q, 1.2794026204486348, 4);
  sqcRYGate(q, 0.7712245044590517, 5);
  sqcRZGate(q, -2.4362001741782047, 5);
  sqcRYGate(q, 1.025400537305309, 6);
  sqcRZGate(q, -1.4775765753439745, 6);
  sqcRYGate(q, -2.254495985920928, 7);
  sqcRZGate(q, -0.6039114043676755, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.8106180814284825, 0);
  sqcRZGate(q, 0.47237518777696347, 0);
  sqcRYGate(q, 2.4849463087066623, 1);
  sqcRZGate(q, -2.4983952667343434, 1);
  sqcRYGate(q, 1.0667878091553848, 2);
  sqcRZGate(q, -0.348303217274711, 2);
  sqcRYGate(q, -0.9252405962252754, 3);
  sqcRZGate(q, 2.285727123558655, 3);
  sqcRYGate(q, -2.31176499464146, 4);
  sqcRZGate(q, -0.7727827018266566, 4);
  sqcRYGate(q, 1.3941513450247631, 5);
  sqcRZGate(q, 0.17692640254985825, 5);
  sqcRYGate(q, 0.30574269912703356, 6);
  sqcRZGate(q, 0.7586925770755863, 6);
  sqcRYGate(q, -2.620251003024555, 7);
  sqcRZGate(q, 2.2345352389991984, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.0857237925025727, 0);
  sqcRZGate(q, 3.0017813458838463, 0);
  sqcRYGate(q, -2.612938180565784, 1);
  sqcRZGate(q, 2.3181590044576974, 1);
  sqcRYGate(q, -0.7385250780579753, 2);
  sqcRZGate(q, 1.6201032519601792, 2);
  sqcRYGate(q, 2.5299829251415513, 3);
  sqcRZGate(q, -2.0973267770973623, 3);
  sqcRYGate(q, 2.7547444821762523, 4);
  sqcRZGate(q, 0.7816577324177609, 4);
  sqcRYGate(q, -2.795972140454938, 5);
  sqcRZGate(q, 0.8113530923496122, 5);
  sqcRYGate(q, -1.5349495959806196, 6);
  sqcRZGate(q, 2.9149875184108733, 6);
  sqcRYGate(q, -2.1843490179892413, 7);
  sqcRZGate(q, 2.285600095390226, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.169952660352676, 0);
  sqcRZGate(q, 2.1345577962995503, 0);
  sqcRYGate(q, 0.25162966459057545, 1);
  sqcRZGate(q, -2.2887943909185835, 1);
  sqcRYGate(q, -1.4602096025722267, 2);
  sqcRZGate(q, 1.2162190160309525, 2);
  sqcRYGate(q, 2.4056541932185915, 3);
  sqcRZGate(q, -3.0150071474183773, 3);
  sqcRYGate(q, 1.2446528239905783, 4);
  sqcRZGate(q, -2.237717916295132, 4);
  sqcRYGate(q, 0.5610078889311323, 5);
  sqcRZGate(q, 0.19186663497345524, 5);
  sqcRYGate(q, 0.8376318516295047, 6);
  sqcRZGate(q, 2.0538325315977746, 6);
  sqcRYGate(q, 0.5106739379968177, 7);
  sqcRZGate(q, -0.49807931421439205, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.6582126702362123, 0);
  sqcRZGate(q, -1.1898156067530783, 0);
  sqcRYGate(q, 0.7526964900730373, 1);
  sqcRZGate(q, -0.17947371572913262, 1);
  sqcRYGate(q, 1.1124926330550742, 2);
  sqcRZGate(q, 0.49621933218332087, 2);
  sqcRYGate(q, -1.1706096974659173, 3);
  sqcRZGate(q, -1.9655472831440928, 3);
  sqcRYGate(q, -3.0433203478603517, 4);
  sqcRZGate(q, -2.3170928448532595, 4);
  sqcRYGate(q, -0.8963112251234441, 5);
  sqcRZGate(q, 1.764107317059623, 5);
  sqcRYGate(q, -0.40085898427481315, 6);
  sqcRZGate(q, -2.3896332268607776, 6);
  sqcRYGate(q, -2.5625180376780934, 7);
  sqcRZGate(q, -1.6251433089741574, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.0984838832449317, 0);
  sqcRZGate(q, -2.7184275712814574, 0);
  sqcRYGate(q, -1.9970793462007395, 1);
  sqcRZGate(q, -0.2572815537859571, 1);
  sqcRYGate(q, 1.8495420784416305, 2);
  sqcRZGate(q, 0.721735953211872, 2);
  sqcRYGate(q, 2.442089025551703, 3);
  sqcRZGate(q, 0.8074899377711535, 3);
  sqcRYGate(q, 1.6504996207658984, 4);
  sqcRZGate(q, -2.2320368176615446, 4);
  sqcRYGate(q, -0.6420543830101941, 5);
  sqcRZGate(q, -0.2266922653823773, 5);
  sqcRYGate(q, 0.4851621780581574, 6);
  sqcRZGate(q, -0.8752873225332047, 6);
  sqcRYGate(q, -1.0791948798729187, 7);
  sqcRZGate(q, 0.16382725056247124, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.6752780312213682, 0);
  sqcRZGate(q, 1.34296666438307, 0);
  sqcRYGate(q, 2.022706403622069, 1);
  sqcRZGate(q, -1.2385397563431588, 1);
  sqcRYGate(q, -0.23924720903993088, 2);
  sqcRZGate(q, 1.9333387885048083, 2);
  sqcRYGate(q, 2.0707101174064597, 3);
  sqcRZGate(q, 1.4879266670032476, 3);
  sqcRYGate(q, 2.7146399091595548, 4);
  sqcRZGate(q, 3.039218382166995, 4);
  sqcRYGate(q, 1.8629994567438046, 5);
  sqcRZGate(q, -1.7490180573062586, 5);
  sqcRYGate(q, 2.37199816234535, 6);
  sqcRZGate(q, -0.3735951362399357, 6);
  sqcRYGate(q, 0.6376755782701717, 7);
  sqcRZGate(q, -1.5887447961738272, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.8465831009120408, 0);
  sqcRZGate(q, -0.9742627255743337, 0);
  sqcRYGate(q, 2.393872756648436, 1);
  sqcRZGate(q, -1.6567237171752913, 1);
  sqcRYGate(q, 2.499335700942441, 2);
  sqcRZGate(q, 2.405433173450231, 2);
  sqcRYGate(q, -0.6607301090101302, 3);
  sqcRZGate(q, 1.5363492868343325, 3);
  sqcRYGate(q, -1.52534035427868, 4);
  sqcRZGate(q, -2.5832261236770755, 4);
  sqcRYGate(q, -2.3945171358489525, 5);
  sqcRZGate(q, 0.3320371387119279, 5);
  sqcRYGate(q, -0.4269609431809126, 6);
  sqcRZGate(q, 0.8203923470104719, 6);
  sqcRYGate(q, 0.8534610551076153, 7);
  sqcRZGate(q, -1.8564170364893662, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.9995095734597248, 0);
  sqcRZGate(q, 3.091451211345986, 0);
  sqcRYGate(q, -0.6686886509620825, 1);
  sqcRZGate(q, -3.09139181391957, 1);
  sqcRYGate(q, 1.2948730409354068, 2);
  sqcRZGate(q, -0.3595394442797989, 2);
  sqcRYGate(q, 0.6416857192024633, 3);
  sqcRZGate(q, -2.37908163713992, 3);
  sqcRYGate(q, -2.498982691256986, 4);
  sqcRZGate(q, 1.7840886419402193, 4);
  sqcRYGate(q, -1.1880414965153803, 5);
  sqcRZGate(q, 2.7825584668491303, 5);
  sqcRYGate(q, 0.4274939912898219, 6);
  sqcRZGate(q, 2.9341985987017183, 6);
  sqcRYGate(q, -2.0551545491399077, 7);
  sqcRZGate(q, 1.286052902178878, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.162469008934905, 0);
  sqcRZGate(q, -2.782125811107134, 0);
  sqcRYGate(q, -2.6649935641610623, 1);
  sqcRZGate(q, 1.06778704762033, 1);
  sqcRYGate(q, 2.481602449255696, 2);
  sqcRZGate(q, -1.6211448379906832, 2);
  sqcRYGate(q, -2.838455691291374, 3);
  sqcRZGate(q, -0.6258448680392599, 3);
  sqcRYGate(q, 2.2581603615226227, 4);
  sqcRZGate(q, 0.1090613542961867, 4);
  sqcRYGate(q, 1.293915325301355, 5);
  sqcRZGate(q, 2.251722887836565, 5);
  sqcRYGate(q, -0.39763997548576624, 6);
  sqcRZGate(q, 2.291381049117089, 6);
  sqcRYGate(q, -0.947066031854951, 7);
  sqcRZGate(q, -2.0207353018782723, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.6955248525764537, 0);
  sqcRZGate(q, -0.7998126302576314, 0);
  sqcRYGate(q, -1.380769266845977, 1);
  sqcRZGate(q, 2.9397263759045478, 1);
  sqcRYGate(q, 0.532242684761318, 2);
  sqcRZGate(q, 2.820384466183201, 2);
  sqcRYGate(q, 1.3549891344379843, 3);
  sqcRZGate(q, -1.2978163748545546, 3);
  sqcRYGate(q, 1.0658424562439237, 4);
  sqcRZGate(q, 1.5842908146413774, 4);
  sqcRYGate(q, 2.2277904233932846, 5);
  sqcRZGate(q, 1.3710830781384704, 5);
  sqcRYGate(q, -2.579036706708609, 6);
  sqcRZGate(q, -1.4347530709846636, 6);
  sqcRYGate(q, 2.2824376230917487, 7);
  sqcRZGate(q, 2.262779104063349, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.2227310323265854, 0);
  sqcRZGate(q, 2.837651413790566, 0);
  sqcRYGate(q, -2.5473779125684457, 1);
  sqcRZGate(q, -1.1324604653207562, 1);
  sqcRYGate(q, -0.6886128040275092, 2);
  sqcRZGate(q, 2.7087050924290987, 2);
  sqcRYGate(q, -0.20378860105846225, 3);
  sqcRZGate(q, -2.5837586122073612, 3);
  sqcRYGate(q, 1.28976943505117, 4);
  sqcRZGate(q, -1.2526962628887177, 4);
  sqcRYGate(q, 2.377628365495459, 5);
  sqcRZGate(q, -1.4531582643023058, 5);
  sqcRYGate(q, -1.7870698766151503, 6);
  sqcRZGate(q, -0.13388694574129903, 6);
  sqcRYGate(q, -1.8082909902470452, 7);
  sqcRZGate(q, -1.144764171941457, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.396180032249634, 0);
  sqcRZGate(q, -0.4330937415993352, 0);
  sqcRYGate(q, -1.0129290276961616, 1);
  sqcRZGate(q, -1.744983733394606, 1);
  sqcRYGate(q, -1.3021373352143142, 2);
  sqcRZGate(q, -1.141779579967061, 2);
  sqcRYGate(q, 2.450361358681241, 3);
  sqcRZGate(q, -0.04323427587050518, 3);
  sqcRYGate(q, 2.1390294469451563, 4);
  sqcRZGate(q, -2.222154328854021, 4);
  sqcRYGate(q, 2.3844844970044403, 5);
  sqcRZGate(q, 1.8252058914978833, 5);
  sqcRYGate(q, -2.321369493421223, 6);
  sqcRZGate(q, 1.919563076610645, 6);
  sqcRYGate(q, -1.066668907068891, 7);
  sqcRZGate(q, 0.006533384849086332, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.12475847327517976, 0);
  sqcRZGate(q, -2.5141888299064146, 0);
  sqcRYGate(q, 1.904029687490035, 1);
  sqcRZGate(q, 1.523466464871569, 1);
  sqcRYGate(q, -2.093520841164386, 2);
  sqcRZGate(q, 0.4087861846740469, 2);
  sqcRYGate(q, 0.33295319819735986, 3);
  sqcRZGate(q, -2.6946216230200806, 3);
  sqcRYGate(q, 0.17218106420711532, 4);
  sqcRZGate(q, 0.959158499774186, 4);
  sqcRYGate(q, -1.8646553356624294, 5);
  sqcRZGate(q, -0.3291926465703936, 5);
  sqcRYGate(q, -2.117090957684182, 6);
  sqcRZGate(q, 0.24596740386299484, 6);
  sqcRYGate(q, -0.49923068904745055, 7);
  sqcRZGate(q, -2.792709352877074, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.2399464523087821, 0);
  sqcRZGate(q, 2.6763901407221757, 0);
  sqcRYGate(q, 2.2005369738954634, 1);
  sqcRZGate(q, -0.25143626241826933, 1);
  sqcRYGate(q, -2.762005465643077, 2);
  sqcRZGate(q, -2.3259527110356863, 2);
  sqcRYGate(q, 1.0560807838863298, 3);
  sqcRZGate(q, -2.462733264417746, 3);
  sqcRYGate(q, -1.4404889897595732, 4);
  sqcRZGate(q, -1.6019930818758255, 4);
  sqcRYGate(q, 2.4135399095869343, 5);
  sqcRZGate(q, -1.6370735240868866, 5);
  sqcRYGate(q, 2.5992131931693314, 6);
  sqcRZGate(q, -1.4313078535252721, 6);
  sqcRYGate(q, -3.129284947820686, 7);
  sqcRZGate(q, -0.26180478748123986, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.12687528414482419, 0);
  sqcRZGate(q, 2.98609715266696, 0);
  sqcRYGate(q, -1.9344733833219911, 1);
  sqcRZGate(q, -1.71497857021855, 1);
  sqcRYGate(q, -2.734811685151781, 2);
  sqcRZGate(q, -0.9310017503669306, 2);
  sqcRYGate(q, 1.2891635974756366, 3);
  sqcRZGate(q, -2.518065790990914, 3);
  sqcRYGate(q, 1.0410888598366865, 4);
  sqcRZGate(q, 1.7391762210076134, 4);
  sqcRYGate(q, 2.212915157935427, 5);
  sqcRZGate(q, -1.1116907232026936, 5);
  sqcRYGate(q, -2.683899351116466, 6);
  sqcRZGate(q, -0.5356033564637217, 6);
  sqcRYGate(q, -0.7571717401697214, 7);
  sqcRZGate(q, 1.9899801936220811, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.226640641071147, 0);
  sqcRZGate(q, -3.097031514916391, 0);
  sqcRYGate(q, -0.2949565246658811, 1);
  sqcRZGate(q, -2.3144300548826937, 1);
  sqcRYGate(q, 2.2941993185576357, 2);
  sqcRZGate(q, -2.3019944736459608, 2);
  sqcRYGate(q, -1.2151540393237747, 3);
  sqcRZGate(q, 1.7301616890251816, 3);
  sqcRYGate(q, 0.9492421404388324, 4);
  sqcRZGate(q, -1.1205542117788312, 4);
  sqcRYGate(q, -1.0879271076563937, 5);
  sqcRZGate(q, 0.4335284749123627, 5);
  sqcRYGate(q, 1.4329849994508808, 6);
  sqcRZGate(q, 0.14304600151672897, 6);
  sqcRYGate(q, -1.3000801180173358, 7);
  sqcRZGate(q, -1.2654015992268195, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.4545096363989427, 0);
  sqcRZGate(q, -0.27131966931595747, 0);
  sqcRYGate(q, 0.29111513796725813, 1);
  sqcRZGate(q, 1.70860896430644, 1);
  sqcRYGate(q, -1.8534225902532668, 2);
  sqcRZGate(q, -1.5552319056014976, 2);
  sqcRYGate(q, 2.5904811807542094, 3);
  sqcRZGate(q, -1.7148264905347084, 3);
  sqcRYGate(q, 0.9705232648059103, 4);
  sqcRZGate(q, 0.5679549042490962, 4);
  sqcRYGate(q, 0.7358425907046148, 5);
  sqcRZGate(q, -1.512508203126175, 5);
  sqcRYGate(q, 1.918776877391004, 6);
  sqcRZGate(q, 0.17763777768448283, 6);
  sqcRYGate(q, 2.1620755913342093, 7);
  sqcRZGate(q, -0.06997237313931079, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.378654668694702, 0);
  sqcRZGate(q, 2.0363553250647017, 0);
  sqcRYGate(q, -0.7772563038999047, 1);
  sqcRZGate(q, 2.3760950751575205, 1);
  sqcRYGate(q, 0.5174335980305578, 2);
  sqcRZGate(q, 1.1657661707416596, 2);
  sqcRYGate(q, -0.7960896595516989, 3);
  sqcRZGate(q, -2.5028837730294518, 3);
  sqcRYGate(q, -2.485206377282501, 4);
  sqcRZGate(q, 2.9610210959316703, 4);
  sqcRYGate(q, 0.6590009388129454, 5);
  sqcRZGate(q, -2.41766825343647, 5);
  sqcRYGate(q, -1.4140606389492953, 6);
  sqcRZGate(q, -0.49392858459137123, 6);
  sqcRYGate(q, -1.103150570223387, 7);
  sqcRZGate(q, -1.6963751307982535, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.1589207548349343, 0);
  sqcRZGate(q, 2.041992571429012, 0);
  sqcRYGate(q, -1.302888500428157, 1);
  sqcRZGate(q, 0.8049811762911308, 1);
  sqcRYGate(q, 1.1626687191496916, 2);
  sqcRZGate(q, 2.7591426718431546, 2);
  sqcRYGate(q, 0.8744723421018472, 3);
  sqcRZGate(q, -2.087408257902243, 3);
  sqcRYGate(q, 2.790080222218357, 4);
  sqcRZGate(q, 2.716919680123464, 4);
  sqcRYGate(q, 0.4063432959175763, 5);
  sqcRZGate(q, 0.3640347098016233, 5);
  sqcRYGate(q, -1.325556933685431, 6);
  sqcRZGate(q, 0.5026968144256604, 6);
  sqcRYGate(q, -0.19136214250319264, 7);
  sqcRZGate(q, 0.2990568376917615, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.493260095521327, 0);
  sqcRZGate(q, 1.2435901283703998, 0);
  sqcRYGate(q, 1.9223194921304065, 1);
  sqcRZGate(q, 0.8468949517773559, 1);
  sqcRYGate(q, 2.9263843906149622, 2);
  sqcRZGate(q, 1.188632374895528, 2);
  sqcRYGate(q, 3.0743986291973244, 3);
  sqcRZGate(q, 3.1030199438148047, 3);
  sqcRYGate(q, -0.3122686527014631, 4);
  sqcRZGate(q, -1.5671982809304315, 4);
  sqcRYGate(q, 0.9516966396141447, 5);
  sqcRZGate(q, -1.91846343876418, 5);
  sqcRYGate(q, 1.5083683596153294, 6);
  sqcRZGate(q, 0.8845035567695269, 6);
  sqcRYGate(q, 0.4387769690240732, 7);
  sqcRZGate(q, -2.424288405817012, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.3095729404514573, 0);
  sqcRZGate(q, 2.3617880444908717, 0);
  sqcRYGate(q, 0.9801260033996542, 1);
  sqcRZGate(q, 2.338378790415084, 1);
  sqcRYGate(q, 2.8175908887810275, 2);
  sqcRZGate(q, 2.40644935229532, 2);
  sqcRYGate(q, -0.28885799592688066, 3);
  sqcRZGate(q, 1.9924732205007016, 3);
  sqcRYGate(q, 2.6335647126930493, 4);
  sqcRZGate(q, 2.4732236965239944, 4);
  sqcRYGate(q, -1.1243967175831726, 5);
  sqcRZGate(q, 2.9951588634623456, 5);
  sqcRYGate(q, -0.36110523630643954, 6);
  sqcRZGate(q, 0.5637244205540788, 6);
  sqcRYGate(q, -0.8845621435429055, 7);
  sqcRZGate(q, 1.7047679145612364, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.0649847610959613, 0);
  sqcRZGate(q, -1.6130341869290945, 0);
  sqcRYGate(q, 1.9266398028567084, 1);
  sqcRZGate(q, 2.7983582222125487, 1);
  sqcRYGate(q, 0.1352201025971791, 2);
  sqcRZGate(q, 1.0391772039119909, 2);
  sqcRYGate(q, 1.987428478264072, 3);
  sqcRZGate(q, 0.09876390994808039, 3);
  sqcRYGate(q, -1.6508232302777242, 4);
  sqcRZGate(q, -2.068983848665641, 4);
  sqcRYGate(q, -2.8359496920204177, 5);
  sqcRZGate(q, 3.088761700723153, 5);
  sqcRYGate(q, 0.42293088679737245, 6);
  sqcRZGate(q, -0.6011051721957371, 6);
  sqcRYGate(q, 2.453628079730136, 7);
  sqcRZGate(q, -2.791198706663733, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.085755853269112, 0);
  sqcRZGate(q, 1.636086891287799, 0);
  sqcRYGate(q, -3.0268721990634337, 1);
  sqcRZGate(q, 0.02587902409010436, 1);
  sqcRYGate(q, -1.6299311839928983, 2);
  sqcRZGate(q, -0.7839323924043858, 2);
  sqcRYGate(q, -2.2750483467599674, 3);
  sqcRZGate(q, -1.6216616788161253, 3);
  sqcRYGate(q, -0.667728034671299, 4);
  sqcRZGate(q, 2.8144831461685516, 4);
  sqcRYGate(q, -1.8083886136452652, 5);
  sqcRZGate(q, -1.6323108929257215, 5);
  sqcRYGate(q, -1.4707589672345547, 6);
  sqcRZGate(q, -2.68106084000475, 6);
  sqcRYGate(q, 1.031867108210455, 7);
  sqcRZGate(q, 0.44971333118254814, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.81271630800174, 0);
  sqcRZGate(q, -3.083327018675239, 0);
  sqcRYGate(q, -2.037231407137493, 1);
  sqcRZGate(q, -3.0157384913297687, 1);
  sqcRYGate(q, -1.4726420620579126, 2);
  sqcRZGate(q, -0.20368192272615993, 2);
  sqcRYGate(q, 1.2240044738591185, 3);
  sqcRZGate(q, -0.3085302282278546, 3);
  sqcRYGate(q, -1.6149563991282436, 4);
  sqcRZGate(q, -2.697368271650433, 4);
  sqcRYGate(q, -0.08358472659022098, 5);
  sqcRZGate(q, -0.4698468762776534, 5);
  sqcRYGate(q, 0.31479431493483795, 6);
  sqcRZGate(q, 1.1630931644738827, 6);
  sqcRYGate(q, -2.406752450854308, 7);
  sqcRZGate(q, 0.29518892740327246, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.43971317201508775, 0);
  sqcRZGate(q, -2.0579357799335742, 0);
  sqcRYGate(q, -0.3741957210707674, 1);
  sqcRZGate(q, 2.3319130863297803, 1);
  sqcRYGate(q, 2.048191788311553, 2);
  sqcRZGate(q, 0.13791587588098242, 2);
  sqcRYGate(q, -0.9337543508019515, 3);
  sqcRZGate(q, -0.9988891866518059, 3);
  sqcRYGate(q, -2.7745095329280973, 4);
  sqcRZGate(q, -0.9173901789937773, 4);
  sqcRYGate(q, -0.4293657455462055, 5);
  sqcRZGate(q, -0.5618287523823905, 5);
  sqcRYGate(q, -2.4589819334163017, 6);
  sqcRZGate(q, 0.2846022496521617, 6);
  sqcRYGate(q, 1.6609671566955129, 7);
  sqcRZGate(q, 2.739024019369735, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.7021303670019914, 0);
  sqcRZGate(q, -3.0354005725198383, 0);
  sqcRYGate(q, -0.48566090467876855, 1);
  sqcRZGate(q, -2.4243403495950293, 1);
  sqcRYGate(q, 2.4972476901242224, 2);
  sqcRZGate(q, 2.175604656725489, 2);
  sqcRYGate(q, 1.398553386199681, 3);
  sqcRZGate(q, 1.1179307993157561, 3);
  sqcRYGate(q, 1.2497612304266497, 4);
  sqcRZGate(q, -0.1209938226606857, 4);
  sqcRYGate(q, -2.2681692416983976, 5);
  sqcRZGate(q, 2.999676143464329, 5);
  sqcRYGate(q, 1.588343585894093, 6);
  sqcRZGate(q, 0.6133962546506275, 6);
  sqcRYGate(q, -0.7583106950878442, 7);
  sqcRZGate(q, -0.4990561473278667, 7);

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
