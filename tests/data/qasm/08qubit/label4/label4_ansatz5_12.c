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

  sqcRYGate(q, -2.7180414863811917, 0);
  sqcRYGate(q, -2.012953823397382, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6409927128873543, 0);
  sqcRYGate(q, -1.4882233972943792, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6108424790439119, 2);
  sqcRYGate(q, -2.058454578682687, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0739052037731636, 2);
  sqcRYGate(q, -2.028258606530037, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6749997234380887, 4);
  sqcRYGate(q, -2.692559848020591, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.3710074622194743, 4);
  sqcRYGate(q, -0.20891136614210196, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.532431955607966, 6);
  sqcRYGate(q, -0.17861355086629782, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7304728438091895, 6);
  sqcRYGate(q, -0.5584909204871148, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5456006995824128, 1);
  sqcRYGate(q, -1.2069684227329063, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9524419692310095, 1);
  sqcRYGate(q, 3.0790899318646012, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7683540491937255, 3);
  sqcRYGate(q, -3.018274842567452, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.405406113668824, 3);
  sqcRYGate(q, -0.22920291169784823, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6135129569051907, 5);
  sqcRYGate(q, -3.0133853818197194, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.263088238652027, 5);
  sqcRYGate(q, -1.3236363660491812, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8661356461806129, 0);
  sqcRYGate(q, -1.7551641064931027, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3042574693565743, 0);
  sqcRYGate(q, 0.7342982791191864, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.065248747004806, 2);
  sqcRYGate(q, -0.8647126078793645, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6792837433946484, 2);
  sqcRYGate(q, 2.2134644559888175, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8373526164463024, 4);
  sqcRYGate(q, -0.9921621477025623, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.9338486418994636, 4);
  sqcRYGate(q, 1.2234639906801086, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.886634597965628, 6);
  sqcRYGate(q, 1.910326777972737, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.234404775870054, 6);
  sqcRYGate(q, -0.2953251731501157, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.611230599731843, 1);
  sqcRYGate(q, 2.3551026785335885, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5492788294448507, 1);
  sqcRYGate(q, 0.37166662408606754, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.682471555211024, 3);
  sqcRYGate(q, 0.36435828193226705, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.3763766438344938, 3);
  sqcRYGate(q, 0.872784992026825, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.03296006275569319, 5);
  sqcRYGate(q, 1.3944209575705813, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.1760011097815877, 5);
  sqcRYGate(q, 2.0446582479484112, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5344737018845314, 0);
  sqcRYGate(q, -1.587797026639515, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2969117406857285, 0);
  sqcRYGate(q, -2.8542318904789927, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.413684256520404, 2);
  sqcRYGate(q, 0.616113468272483, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0450680400469374, 2);
  sqcRYGate(q, -1.1430468451921902, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4608183714867176, 4);
  sqcRYGate(q, 0.3977377011289743, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.0468107850674953, 4);
  sqcRYGate(q, -2.293210186818284, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8713347180753885, 6);
  sqcRYGate(q, -1.424548193977359, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3527584218984516, 6);
  sqcRYGate(q, 2.1010262540163174, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.05048737077883115, 1);
  sqcRYGate(q, 1.7248727918506193, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3002425369274833, 1);
  sqcRYGate(q, -1.7241564410146017, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.006621046912917, 3);
  sqcRYGate(q, 1.5611866746572518, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7234750146816058, 3);
  sqcRYGate(q, 1.468290283663987, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.0528878431754736, 5);
  sqcRYGate(q, -0.7185222799592159, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.21142653393794908, 5);
  sqcRYGate(q, 0.007433981318232429, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.9638735337425948, 0);
  sqcRYGate(q, -0.28791412269082933, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7440841309567432, 0);
  sqcRYGate(q, -1.0795708615068993, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9222157850706143, 2);
  sqcRYGate(q, -0.4956067151024435, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4119029439333652, 2);
  sqcRYGate(q, -0.18423187415550227, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.288677718946185, 4);
  sqcRYGate(q, 2.303156255708216, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8624022274373395, 4);
  sqcRYGate(q, -0.8408842524917413, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4348693539904485, 6);
  sqcRYGate(q, -0.02193601925933361, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1427856701223957, 6);
  sqcRYGate(q, -0.9124675282162729, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.9304111610449834, 1);
  sqcRYGate(q, 1.3113181336955613, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6654166583079608, 1);
  sqcRYGate(q, 1.6956083336435392, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4686272043356623, 3);
  sqcRYGate(q, -0.19059063003830623, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.750563044223256, 3);
  sqcRYGate(q, 0.9525492466074275, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.16374545934874, 5);
  sqcRYGate(q, 3.007680393712652, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.8698941635883934, 5);
  sqcRYGate(q, 2.8677244490995304, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.024182710445218292, 0);
  sqcRYGate(q, -2.3465288613175916, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6259496368581072, 0);
  sqcRYGate(q, 1.6807409124617714, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9319041057874876, 2);
  sqcRYGate(q, 0.22822685801404716, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.457748898350288, 2);
  sqcRYGate(q, 1.6430830740220501, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.28681269312819335, 4);
  sqcRYGate(q, -1.1031557732056065, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.899495267641372, 4);
  sqcRYGate(q, -1.8805009939173047, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6049496549384914, 6);
  sqcRYGate(q, 0.20657365042989362, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5010736579873685, 6);
  sqcRYGate(q, 1.4582472280963765, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.802138641046497, 1);
  sqcRYGate(q, -2.9665903429714575, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8338462092809245, 1);
  sqcRYGate(q, 0.047214355029095316, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.04542994693263, 3);
  sqcRYGate(q, -1.119318210074799, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.9400257754928854, 3);
  sqcRYGate(q, -0.96225523918292, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0548608721780193, 5);
  sqcRYGate(q, -1.923385269528635, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.357766473137707, 5);
  sqcRYGate(q, -2.615309192948012, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7955269116092825, 0);
  sqcRYGate(q, 1.5780634937357938, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4616484271578103, 0);
  sqcRYGate(q, -1.6399616272306885, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.090980691788428, 2);
  sqcRYGate(q, 1.0308721063028523, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.18291697426572626, 2);
  sqcRYGate(q, 2.708238984193404, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6966533660504757, 4);
  sqcRYGate(q, -0.899894460592976, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.439326377406154, 4);
  sqcRYGate(q, 0.9600483699171711, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.2292751779090871, 6);
  sqcRYGate(q, -0.7983056713634881, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4898445260825632, 6);
  sqcRYGate(q, 1.7410925548803524, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.1236445716266923, 1);
  sqcRYGate(q, -2.286766277762658, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.882257478126771, 1);
  sqcRYGate(q, -2.2554174845868777, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9880787844582395, 3);
  sqcRYGate(q, -2.267768459096442, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.0100814011801464, 3);
  sqcRYGate(q, -2.0274712131041146, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.969104055396254, 5);
  sqcRYGate(q, -1.4916246064394105, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.5339300489600954, 5);
  sqcRYGate(q, -1.3998546592624068, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.574462084061774, 0);
  sqcRYGate(q, 0.4046098238815121, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.963869678997371, 0);
  sqcRYGate(q, -0.4679696431991909, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8870669907917108, 2);
  sqcRYGate(q, -0.20105941669995095, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2601074488728, 2);
  sqcRYGate(q, 1.260020141128126, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.411235555528041, 4);
  sqcRYGate(q, 2.125262442124992, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.1762670000558915, 4);
  sqcRYGate(q, 1.2872870022052298, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.7258028548203823, 6);
  sqcRYGate(q, -1.190518737646368, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6748326010512213, 6);
  sqcRYGate(q, 2.312352362818106, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9227909913662384, 1);
  sqcRYGate(q, 2.987926356842988, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7191981457453663, 1);
  sqcRYGate(q, -2.195510050786421, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5039404953909843, 3);
  sqcRYGate(q, -0.6381691917832403, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.0830246170111693, 3);
  sqcRYGate(q, 0.34919820046170713, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.9200160754373807, 5);
  sqcRYGate(q, -3.115683602705419, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.7521718868708118, 5);
  sqcRYGate(q, 1.58616018637216, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.99429930783056, 0);
  sqcRYGate(q, 1.4373976712783318, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6318938430301915, 0);
  sqcRYGate(q, -0.0019018751389973817, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8125008780257907, 2);
  sqcRYGate(q, 1.702139229391766, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9529986583539722, 2);
  sqcRYGate(q, -2.7749473709636785, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.064652089440063, 4);
  sqcRYGate(q, -2.5928123631994846, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5334591079846591, 4);
  sqcRYGate(q, -0.2963582773380123, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7663099924307386, 6);
  sqcRYGate(q, 1.1878259265038, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9350772562565672, 6);
  sqcRYGate(q, -2.446600402986071, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7384256754515317, 1);
  sqcRYGate(q, 0.6430899653717125, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.090056928913612, 1);
  sqcRYGate(q, 1.5005761347888908, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.133095832190854, 3);
  sqcRYGate(q, -1.048853228686104, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9645907773802636, 3);
  sqcRYGate(q, 2.6447889529777435, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3028089303646724, 5);
  sqcRYGate(q, -1.563709999410585, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.3344377445142167, 5);
  sqcRYGate(q, 0.18125379985391188, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.084695331328616, 0);
  sqcRYGate(q, 1.615486518830408, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7101528945655522, 0);
  sqcRYGate(q, 1.3353011509284036, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4493265848764727, 2);
  sqcRYGate(q, -0.6574524007970063, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6721861817724353, 2);
  sqcRYGate(q, 1.2445985598085763, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.951484120901191, 4);
  sqcRYGate(q, -3.0154621278904297, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.934240262256352, 4);
  sqcRYGate(q, -2.796831398807481, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.816307132044606, 6);
  sqcRYGate(q, 0.04973386878460124, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.2780522895764888, 6);
  sqcRYGate(q, -3.0672697674904796, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8904248800687182, 1);
  sqcRYGate(q, -2.5412138237553212, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8813649707943008, 1);
  sqcRYGate(q, 0.4939374520668309, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.197300927158002, 3);
  sqcRYGate(q, -2.85980108731957, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.31618165289896, 3);
  sqcRYGate(q, -0.8965806276306861, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1947443502524804, 5);
  sqcRYGate(q, 2.782139913532035, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.45466867314568477, 5);
  sqcRYGate(q, 1.5664383439286134, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.1829526946901359, 0);
  sqcRYGate(q, 1.4202512299058085, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.04467712928073375, 0);
  sqcRYGate(q, -2.028099447807709, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2188879967128035, 2);
  sqcRYGate(q, -0.5016767555090584, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0508877170888884, 2);
  sqcRYGate(q, -2.0238459955346824, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6273559794998427, 4);
  sqcRYGate(q, -2.1125541362752536, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.29655282997023047, 4);
  sqcRYGate(q, 2.0425730097423163, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.01464206348384156, 6);
  sqcRYGate(q, 0.26070680164642734, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6175259054642048, 6);
  sqcRYGate(q, -1.9712781062807627, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3645147485964295, 1);
  sqcRYGate(q, -1.8750592229913972, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.1349900491480953, 1);
  sqcRYGate(q, 2.491313493181085, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4179807857156104, 3);
  sqcRYGate(q, -1.304870385545235, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5725657788370366, 3);
  sqcRYGate(q, 0.39655174597945114, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.9567420270023819, 5);
  sqcRYGate(q, -1.867842442417149, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.089563532383904, 5);
  sqcRYGate(q, 1.34540188639362, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.9414701723665635, 0);
  sqcRYGate(q, -2.038834704094901, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6557863202439336, 0);
  sqcRYGate(q, 1.7288226801026552, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2804836542435094, 2);
  sqcRYGate(q, 1.0794810150174534, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.928964360857946, 2);
  sqcRYGate(q, -2.7937024940584996, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0119406248575171, 4);
  sqcRYGate(q, -1.3864198685765805, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.563717848475041, 4);
  sqcRYGate(q, 1.4219141856569275, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.965927360145054, 6);
  sqcRYGate(q, -0.1917990822264971, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1192039673344611, 6);
  sqcRYGate(q, 1.1356759330118642, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.4329224671130616, 1);
  sqcRYGate(q, -2.4934613246784276, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.478799099379262, 1);
  sqcRYGate(q, 1.8358534779666347, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.10223132582300387, 3);
  sqcRYGate(q, -1.2996376615048528, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.4682368252460236, 3);
  sqcRYGate(q, -0.5835102360661342, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5303560087876127, 5);
  sqcRYGate(q, 2.926370525254691, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.856828832030236, 5);
  sqcRYGate(q, -1.1124239360082155, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.9398719414781336, 0);
  sqcRYGate(q, 0.7933154705708736, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4662511863903847, 0);
  sqcRYGate(q, -0.37248090138348905, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8010164201543963, 2);
  sqcRYGate(q, 2.268857365636744, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.022829390513026532, 2);
  sqcRYGate(q, 3.0048350027738455, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0208164332736405, 4);
  sqcRYGate(q, 1.7247412988182071, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7770402362434201, 4);
  sqcRYGate(q, 1.9043773832718223, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9848212517793388, 6);
  sqcRYGate(q, 0.3506437082067073, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5139187900146389, 6);
  sqcRYGate(q, -1.174789449332691, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.4803818715527584, 1);
  sqcRYGate(q, -2.7689664569743186, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8516002250917607, 1);
  sqcRYGate(q, 2.235601105988092, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.969517571414336, 3);
  sqcRYGate(q, 2.404077078911915, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.9836474154182757, 3);
  sqcRYGate(q, -2.2323747858255674, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6872579271476162, 5);
  sqcRYGate(q, 1.388576232541208, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.4790116758711121, 5);
  sqcRYGate(q, 2.0767338378242273, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.520427500211027, 0);
  sqcRYGate(q, -0.0702058504347942, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9190781289752383, 0);
  sqcRYGate(q, -0.9176370466663016, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.71908870039461, 2);
  sqcRYGate(q, -2.6672659717239298, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.531906405743063, 2);
  sqcRYGate(q, -1.457750974758647, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0545909614005158, 4);
  sqcRYGate(q, 1.729056817987435, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.3210905672458626, 4);
  sqcRYGate(q, -1.1724022439523072, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.4791915142848837, 6);
  sqcRYGate(q, -2.0809897695877644, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6330925691437886, 6);
  sqcRYGate(q, -3.0610634271436057, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2208740454982023, 1);
  sqcRYGate(q, -2.502555889423156, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.002279471218225, 1);
  sqcRYGate(q, 2.0966503154847587, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.688778750501948, 3);
  sqcRYGate(q, 0.2541773858431622, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.9579698808030379, 3);
  sqcRYGate(q, 0.4273528136773894, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6617208832244241, 5);
  sqcRYGate(q, -2.31644984094395, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.9878746409759906, 5);
  sqcRYGate(q, 0.8067613281683226, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.2753670336657796, 0);
  sqcRYGate(q, 2.80028565192801, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9130241167514053, 0);
  sqcRYGate(q, 0.892408437356047, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.34438761584545385, 2);
  sqcRYGate(q, -0.30509979343919, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.05731335413458859, 2);
  sqcRYGate(q, -2.445637029394065, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3234975565155795, 4);
  sqcRYGate(q, -0.7993530012111325, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0970803026299376, 4);
  sqcRYGate(q, -1.4106308528916696, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.06679783159132135, 6);
  sqcRYGate(q, -0.9120197573379282, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.958966846590922, 6);
  sqcRYGate(q, 1.8778647282721366, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8878480882281714, 1);
  sqcRYGate(q, 1.779512298505642, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8276371642518265, 1);
  sqcRYGate(q, -1.5726406619114983, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.24755359694915047, 3);
  sqcRYGate(q, -1.2159966946983396, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.7158582235780093, 3);
  sqcRYGate(q, -1.9670432929347417, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.030344411200085, 5);
  sqcRYGate(q, -1.903765426892397, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2936313204144438, 5);
  sqcRYGate(q, -1.2008129315006484, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.9073518481254492, 0);
  sqcRYGate(q, -1.156975714837888, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2188872349747797, 0);
  sqcRYGate(q, 2.5542861895933613, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9515126235959004, 2);
  sqcRYGate(q, 0.6576509147125167, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0049709927342723, 2);
  sqcRYGate(q, 2.378936068926591, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7026754401745041, 4);
  sqcRYGate(q, -1.615977515015655, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.1622219032441015, 4);
  sqcRYGate(q, -2.9126205935493403, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5876328856953839, 6);
  sqcRYGate(q, 1.7342856399856934, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6498914046845821, 6);
  sqcRYGate(q, 0.5060188776390689, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.8994584368304173, 1);
  sqcRYGate(q, 0.09292073078189002, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.314996949544815, 1);
  sqcRYGate(q, 2.9054093199054734, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7833179082908834, 3);
  sqcRYGate(q, -0.7686520331102225, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.6799941168493087, 3);
  sqcRYGate(q, -0.6461772847002669, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.9583487769957344, 5);
  sqcRYGate(q, -1.9106895293167447, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.3074323627220688, 5);
  sqcRYGate(q, -2.8020542017840286, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.7717331706593025, 0);
  sqcRYGate(q, 1.512482914074253, 1);
  sqcRYGate(q, 2.496886495513121, 2);
  sqcRYGate(q, -0.698734725502979, 3);
  sqcRYGate(q, -1.3152952721283973, 4);
  sqcRYGate(q, -1.5770374811672931, 5);
  sqcRYGate(q, 1.4198419284480386, 6);
  sqcRYGate(q, 1.440034950537318, 7);

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
