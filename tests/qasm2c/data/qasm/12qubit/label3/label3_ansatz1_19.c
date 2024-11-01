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

  sqcRYGate(q, 2.993222812217988, 0);
  sqcRZGate(q, -0.15559598985593226, 0);
  sqcRYGate(q, 1.817411972357963, 1);
  sqcRZGate(q, 0.18510267671124808, 1);
  sqcRYGate(q, 1.490882657489363, 2);
  sqcRZGate(q, -3.0637162263086477, 2);
  sqcRYGate(q, 1.1246412013091645, 3);
  sqcRZGate(q, 1.7736411800213634, 3);
  sqcRYGate(q, 0.012301470156174991, 4);
  sqcRZGate(q, -2.1145195633077876, 4);
  sqcRYGate(q, 1.9386029659183865, 5);
  sqcRZGate(q, 0.3727313433543884, 5);
  sqcRYGate(q, -0.06595478191746373, 6);
  sqcRZGate(q, -1.4567748891426948, 6);
  sqcRYGate(q, -2.669008115192904, 7);
  sqcRZGate(q, 3.084939961423054, 7);
  sqcRYGate(q, 1.786765561899696, 8);
  sqcRZGate(q, -1.634591302063474, 8);
  sqcRYGate(q, 1.4949642911212697, 9);
  sqcRZGate(q, -1.5139452376933322, 9);
  sqcRYGate(q, -1.9117333047086134, 10);
  sqcRZGate(q, -0.7225781637861052, 10);
  sqcRYGate(q, 0.12399604658296133, 11);
  sqcRZGate(q, 3.080927984665206, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.5392668587154219, 0);
  sqcRZGate(q, 1.981839676958673, 0);
  sqcRYGate(q, -1.40290672818886, 1);
  sqcRZGate(q, 1.423112452183398, 1);
  sqcRYGate(q, -1.3809633625518998, 2);
  sqcRZGate(q, -3.014475546508616, 2);
  sqcRYGate(q, 1.159426662952758, 3);
  sqcRZGate(q, -0.14052541612203218, 3);
  sqcRYGate(q, -0.4031344155629362, 4);
  sqcRZGate(q, 1.6495248461690108, 4);
  sqcRYGate(q, 1.302025030066992, 5);
  sqcRZGate(q, 1.5841597923134152, 5);
  sqcRYGate(q, 1.5889853443520343, 6);
  sqcRZGate(q, 0.8161278319298008, 6);
  sqcRYGate(q, 3.0213239122047333, 7);
  sqcRZGate(q, 1.8931311982690868, 7);
  sqcRYGate(q, 1.5331726600697275, 8);
  sqcRZGate(q, -0.30109489964267766, 8);
  sqcRYGate(q, -2.6171378357127515, 9);
  sqcRZGate(q, 3.137884724309325, 9);
  sqcRYGate(q, -0.009476567413601667, 10);
  sqcRZGate(q, -2.4331427772892367, 10);
  sqcRYGate(q, 2.782104500451652, 11);
  sqcRZGate(q, 0.5462558154446777, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.565200323003059, 0);
  sqcRZGate(q, -2.8785884134027024, 0);
  sqcRYGate(q, 1.3415788965121287, 1);
  sqcRZGate(q, 0.3430797915855468, 1);
  sqcRYGate(q, 0.010145544910732163, 2);
  sqcRZGate(q, -1.10037848639276, 2);
  sqcRYGate(q, 1.9303492735716352, 3);
  sqcRZGate(q, -3.1353476228784665, 3);
  sqcRYGate(q, 0.008626665156587165, 4);
  sqcRZGate(q, 2.7844191697484346, 4);
  sqcRYGate(q, 1.564830331213461, 5);
  sqcRZGate(q, 0.00027102359737092373, 5);
  sqcRYGate(q, -0.006089528231591634, 6);
  sqcRZGate(q, -0.722620899400236, 6);
  sqcRYGate(q, -1.8531782453058738, 7);
  sqcRZGate(q, 2.50497801382323, 7);
  sqcRYGate(q, -3.0872080281877756, 8);
  sqcRZGate(q, -0.2806810914633045, 8);
  sqcRYGate(q, -1.6726666560421302, 9);
  sqcRZGate(q, -0.25052752494078695, 9);
  sqcRYGate(q, 1.2881744800736739, 10);
  sqcRZGate(q, -3.10707696230241, 10);
  sqcRYGate(q, -3.100096685122569, 11);
  sqcRZGate(q, -1.0324210409365815, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.3773346771820973, 0);
  sqcRZGate(q, -1.5777204779226217, 0);
  sqcRYGate(q, -1.9895646860704295, 1);
  sqcRZGate(q, 1.1713339726182044, 1);
  sqcRYGate(q, -0.02853413905584201, 2);
  sqcRZGate(q, 1.2939810477620945, 2);
  sqcRYGate(q, 1.254589576740214, 3);
  sqcRZGate(q, -2.3951044826763654, 3);
  sqcRYGate(q, -0.0014423367602570218, 4);
  sqcRZGate(q, -1.2800975043824376, 4);
  sqcRYGate(q, 1.22421986394169, 5);
  sqcRZGate(q, 1.4508891241144461, 5);
  sqcRYGate(q, 1.6834540478746856, 6);
  sqcRZGate(q, 0.18912228260945696, 6);
  sqcRYGate(q, 1.194807034912133, 7);
  sqcRZGate(q, -0.0018624512251186331, 7);
  sqcRYGate(q, -0.9696486046016358, 8);
  sqcRZGate(q, 0.031724520833523104, 8);
  sqcRYGate(q, 1.6069209279144179, 9);
  sqcRZGate(q, 1.4076009787507209, 9);
  sqcRYGate(q, 1.5813055162375074, 10);
  sqcRZGate(q, -3.0133919131370694, 10);
  sqcRYGate(q, -3.1247852392156408, 11);
  sqcRZGate(q, -1.392146974194654, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.9333430694792644, 0);
  sqcRZGate(q, 2.7902724851755445, 0);
  sqcRYGate(q, -1.4372967278516187, 1);
  sqcRZGate(q, -2.5629163066206004, 1);
  sqcRYGate(q, 0.7384123854220217, 2);
  sqcRZGate(q, -0.6142654889900002, 2);
  sqcRYGate(q, -0.47239694704917345, 3);
  sqcRZGate(q, -2.2118086398395898, 3);
  sqcRYGate(q, 1.5791748293827428, 4);
  sqcRZGate(q, -2.613055422808373, 4);
  sqcRYGate(q, 0.005065563117638783, 5);
  sqcRZGate(q, -0.1251703838567278, 5);
  sqcRYGate(q, 0.0026131574685894776, 6);
  sqcRZGate(q, -0.1435699098256469, 6);
  sqcRYGate(q, -1.5351415877497008, 7);
  sqcRZGate(q, 2.6707981399720118, 7);
  sqcRYGate(q, -0.0604955764904687, 8);
  sqcRZGate(q, -1.1271860636317081, 8);
  sqcRYGate(q, -2.7647610784702508, 9);
  sqcRZGate(q, 0.34728076440994116, 9);
  sqcRYGate(q, 1.132538262810971, 10);
  sqcRZGate(q, -2.564049875273916, 10);
  sqcRYGate(q, 1.5921061000947392, 11);
  sqcRZGate(q, 1.542937565400045, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.2179459759247973, 0);
  sqcRZGate(q, -1.8721546656042103, 0);
  sqcRYGate(q, 2.399094656557498, 1);
  sqcRZGate(q, 0.38159062361578583, 1);
  sqcRYGate(q, 1.5849862924428697, 2);
  sqcRZGate(q, -2.6538299935693157, 2);
  sqcRYGate(q, 0.3840045731281121, 3);
  sqcRZGate(q, -0.08579463899366142, 3);
  sqcRYGate(q, -2.2971540853511385e-05, 4);
  sqcRZGate(q, 0.5611352989629941, 4);
  sqcRYGate(q, 1.604727295760376, 5);
  sqcRZGate(q, 1.706011390595419, 5);
  sqcRYGate(q, -1.2544117715957843, 6);
  sqcRZGate(q, -2.055912479185467, 6);
  sqcRYGate(q, -1.912482810888411, 7);
  sqcRZGate(q, 1.3895413779198598, 7);
  sqcRYGate(q, 3.081952342790595, 8);
  sqcRZGate(q, -0.31034011139718626, 8);
  sqcRYGate(q, -0.33322586729256276, 9);
  sqcRZGate(q, -2.136006820430525, 9);
  sqcRYGate(q, -1.9292717937829247, 10);
  sqcRZGate(q, -0.07067726358665016, 10);
  sqcRYGate(q, 1.6443915372490523, 11);
  sqcRZGate(q, -2.1425272502025816, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.6903668816130275, 0);
  sqcRZGate(q, 0.33759796471746156, 0);
  sqcRYGate(q, 1.5654753036139077, 1);
  sqcRZGate(q, -0.1324771899001016, 1);
  sqcRYGate(q, 1.9298407493648675, 2);
  sqcRZGate(q, -1.4323421314452194, 2);
  sqcRYGate(q, -1.0029521726578556, 3);
  sqcRZGate(q, -1.8750998837497086, 3);
  sqcRYGate(q, 3.141410249772537, 4);
  sqcRZGate(q, 1.8166915415337765, 4);
  sqcRYGate(q, -1.5648429656358693, 5);
  sqcRZGate(q, 1.5636257154986928, 5);
  sqcRYGate(q, -3.1345626528470816, 6);
  sqcRZGate(q, 2.2369273563261807, 6);
  sqcRYGate(q, -1.4964740451645289, 7);
  sqcRZGate(q, -2.426101425472897, 7);
  sqcRYGate(q, 3.116977319219883, 8);
  sqcRZGate(q, -2.0900650146744058, 8);
  sqcRYGate(q, 0.0060736311738018856, 9);
  sqcRZGate(q, -2.5340629144633446, 9);
  sqcRYGate(q, 0.8729760656687663, 10);
  sqcRZGate(q, -3.05383737075254, 10);
  sqcRYGate(q, -0.063348023790188, 11);
  sqcRZGate(q, -1.6879127311623239, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.5925774551788026, 0);
  sqcRZGate(q, 0.35679524262716367, 0);
  sqcRYGate(q, 1.9520274118690435, 1);
  sqcRZGate(q, 0.371081652399342, 1);
  sqcRYGate(q, -2.3277293132867674, 2);
  sqcRZGate(q, -2.475799312007303, 2);
  sqcRYGate(q, -2.9441959847472274, 3);
  sqcRZGate(q, 1.6056460987996932, 3);
  sqcRYGate(q, -0.41216658171177273, 4);
  sqcRZGate(q, -1.0117975799375483, 4);
  sqcRYGate(q, -1.615708037987591, 5);
  sqcRZGate(q, -0.12592473345341926, 5);
  sqcRYGate(q, 3.1397811715039965, 6);
  sqcRZGate(q, -2.0058981706847567, 6);
  sqcRYGate(q, 3.099338128280679, 7);
  sqcRZGate(q, -0.8115843101019555, 7);
  sqcRYGate(q, -1.4856764691066564, 8);
  sqcRZGate(q, -3.0725274718170414, 8);
  sqcRYGate(q, -1.3076754388894711, 9);
  sqcRZGate(q, 1.7916638350434617, 9);
  sqcRYGate(q, 3.0002963964880673, 10);
  sqcRZGate(q, 1.4169712273338833, 10);
  sqcRYGate(q, -1.1956248735183532, 11);
  sqcRZGate(q, -2.9449711466990345, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.591151624832151, 0);
  sqcRZGate(q, -0.1073600532409259, 0);
  sqcRYGate(q, 2.9097758356174404, 1);
  sqcRZGate(q, 0.8537132939729777, 1);
  sqcRYGate(q, 1.0161925830430345, 2);
  sqcRZGate(q, -2.3300367860294307, 2);
  sqcRYGate(q, -2.2689778551801507, 3);
  sqcRZGate(q, 1.9766370888208735, 3);
  sqcRYGate(q, 0.0186689555758095, 4);
  sqcRZGate(q, 1.5178571692436087, 4);
  sqcRYGate(q, -0.7653259364284617, 5);
  sqcRZGate(q, -1.9204135567314067, 5);
  sqcRYGate(q, -1.4070859956645183, 6);
  sqcRZGate(q, -0.26132691917067447, 6);
  sqcRYGate(q, -0.026273305576852625, 7);
  sqcRZGate(q, 1.4106254445080264, 7);
  sqcRYGate(q, -0.00250303431504962, 8);
  sqcRZGate(q, -2.371244526606564, 8);
  sqcRYGate(q, -0.5525506926101472, 9);
  sqcRZGate(q, -2.919194549709143, 9);
  sqcRYGate(q, 0.2879863171489765, 10);
  sqcRZGate(q, -0.6556671233403115, 10);
  sqcRYGate(q, -3.1371370782882413, 11);
  sqcRZGate(q, -0.215465041616981, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -3.115683689368103, 0);
  sqcRZGate(q, 1.2090386376857662, 0);
  sqcRYGate(q, 2.809418239192465, 1);
  sqcRZGate(q, -2.2227046190125046, 1);
  sqcRYGate(q, -1.3862273582927995, 2);
  sqcRZGate(q, 3.004089436395939, 2);
  sqcRYGate(q, -0.45225017716288085, 3);
  sqcRZGate(q, -1.7429013547644638, 3);
  sqcRYGate(q, 2.9072942645953956, 4);
  sqcRZGate(q, -2.261371812502034, 4);
  sqcRYGate(q, -0.014320303684157487, 5);
  sqcRZGate(q, -1.0740441392365014, 5);
  sqcRYGate(q, 3.140361231241799, 6);
  sqcRZGate(q, -0.13843468910488707, 6);
  sqcRYGate(q, 1.5987175785011853, 7);
  sqcRZGate(q, 0.0031580439515321856, 7);
  sqcRYGate(q, 3.037830708423567, 8);
  sqcRZGate(q, -1.820235643185561, 8);
  sqcRYGate(q, -1.028681709232885, 9);
  sqcRZGate(q, -3.052326929252013, 9);
  sqcRYGate(q, -3.0800756666515827, 10);
  sqcRZGate(q, -0.8533424020979856, 10);
  sqcRYGate(q, 0.8264052627630946, 11);
  sqcRZGate(q, 1.0356263098686347, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.926581596898762, 0);
  sqcRZGate(q, 2.2878355333211666, 0);
  sqcRYGate(q, -2.304367430859011, 1);
  sqcRZGate(q, 0.8500506612333938, 1);
  sqcRYGate(q, 0.2873525834062445, 2);
  sqcRZGate(q, -0.05134444836888825, 2);
  sqcRYGate(q, 2.128224095904181, 3);
  sqcRZGate(q, 1.4568575431737578, 3);
  sqcRYGate(q, -1.5634609966213326, 4);
  sqcRZGate(q, -0.023127211435175956, 4);
  sqcRYGate(q, 1.382571141754708, 5);
  sqcRZGate(q, 2.431859097545861, 5);
  sqcRYGate(q, 0.7833950009794818, 6);
  sqcRZGate(q, 2.206445310573308, 6);
  sqcRYGate(q, -2.3310408943696355, 7);
  sqcRZGate(q, 0.04667215935951087, 7);
  sqcRYGate(q, -0.0020190567422164176, 8);
  sqcRZGate(q, -2.076085285015125, 8);
  sqcRYGate(q, 0.7480925578592856, 9);
  sqcRZGate(q, 2.924435950085556, 9);
  sqcRYGate(q, 0.487519119282406, 10);
  sqcRZGate(q, 2.943912754824193, 10);
  sqcRYGate(q, -0.038113907146006376, 11);
  sqcRZGate(q, -1.5168840703785487, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -3.1401225589290473, 0);
  sqcRZGate(q, 0.782637808393864, 0);
  sqcRYGate(q, -1.5381692059094825, 1);
  sqcRZGate(q, -1.53029492055853, 1);
  sqcRYGate(q, -1.5106743224038475, 2);
  sqcRZGate(q, -0.5333929243721566, 2);
  sqcRYGate(q, -0.004056650979542317, 3);
  sqcRZGate(q, -1.2407814992494774, 3);
  sqcRYGate(q, -2.93614593327776, 4);
  sqcRZGate(q, 0.4801832420144912, 4);
  sqcRYGate(q, 1.2933825722970478, 5);
  sqcRZGate(q, -3.139772254629554, 5);
  sqcRYGate(q, -3.140204496696682, 6);
  sqcRZGate(q, -0.11228850483214359, 6);
  sqcRYGate(q, -0.5679633450082568, 7);
  sqcRZGate(q, 3.0955580991617557, 7);
  sqcRYGate(q, 1.4446331882812062, 8);
  sqcRZGate(q, -2.0195189810343415, 8);
  sqcRYGate(q, 0.5865359223901975, 9);
  sqcRZGate(q, -0.8227320197803287, 9);
  sqcRYGate(q, -1.5697913602888969, 10);
  sqcRZGate(q, -2.284185795350391, 10);
  sqcRYGate(q, -1.2976582008085131, 11);
  sqcRZGate(q, -1.770292275412615, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.2324894711611165, 0);
  sqcRZGate(q, -0.006945978429321285, 0);
  sqcRYGate(q, -0.7778283178973335, 1);
  sqcRZGate(q, -1.476628123768048, 1);
  sqcRYGate(q, -1.0297528966137266, 2);
  sqcRZGate(q, 0.6586339911947406, 2);
  sqcRYGate(q, 0.8417430049619921, 3);
  sqcRZGate(q, -1.0410422279586784, 3);
  sqcRYGate(q, 0.004468414266493248, 4);
  sqcRZGate(q, 2.7286194132936905, 4);
  sqcRYGate(q, 0.19502936773288734, 5);
  sqcRZGate(q, 3.1404724948416667, 5);
  sqcRYGate(q, -3.141564863269399, 6);
  sqcRZGate(q, 0.524654444095483, 6);
  sqcRYGate(q, 1.3596642499804632, 7);
  sqcRZGate(q, -0.015575187244862931, 7);
  sqcRYGate(q, 3.140069143273109, 8);
  sqcRZGate(q, 1.0888560833632406, 8);
  sqcRYGate(q, -0.5061416754798085, 9);
  sqcRZGate(q, -1.8707912290949533, 9);
  sqcRYGate(q, -1.2264312752536448, 10);
  sqcRZGate(q, -0.6078992253380823, 10);
  sqcRYGate(q, -3.111862267193774, 11);
  sqcRZGate(q, -2.259570105071804, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -3.023473238137349, 0);
  sqcRZGate(q, -0.5216808045001736, 0);
  sqcRYGate(q, 2.810002424655653, 1);
  sqcRZGate(q, -2.085594121798935, 1);
  sqcRYGate(q, -1.5076521801721103, 2);
  sqcRZGate(q, 2.697612867362907, 2);
  sqcRYGate(q, -3.1334407299069644, 3);
  sqcRZGate(q, 2.34339415205888, 3);
  sqcRYGate(q, 0.1673439324780963, 4);
  sqcRZGate(q, 3.0190272851396194, 4);
  sqcRYGate(q, -1.8497312844369314, 5);
  sqcRZGate(q, 2.579700375990172, 5);
  sqcRYGate(q, -3.135685933627873, 6);
  sqcRZGate(q, -3.0994264713470843, 6);
  sqcRYGate(q, 2.4186179584666023, 7);
  sqcRZGate(q, -0.9862274523669035, 7);
  sqcRYGate(q, -0.845072607807765, 8);
  sqcRZGate(q, 2.5168317149419996, 8);
  sqcRYGate(q, 0.2804453939686544, 9);
  sqcRZGate(q, 0.14185923141187118, 9);
  sqcRYGate(q, 1.6282473054270117, 10);
  sqcRZGate(q, -1.2713488045066201, 10);
  sqcRYGate(q, 2.377885000905472, 11);
  sqcRZGate(q, -3.0921356595006944, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.6339018089953653, 0);
  sqcRZGate(q, -2.5610007867621247, 0);
  sqcRYGate(q, 0.8867193733342422, 1);
  sqcRZGate(q, -0.022953160321346165, 1);
  sqcRYGate(q, 1.5510585663372713, 2);
  sqcRZGate(q, -1.7161115175284631, 2);
  sqcRYGate(q, 1.7498972574084717, 3);
  sqcRZGate(q, 0.9274957755507838, 3);
  sqcRYGate(q, -1.5507398366674192, 4);
  sqcRZGate(q, -0.5863093284594632, 4);
  sqcRYGate(q, 3.127188815085913, 5);
  sqcRZGate(q, -2.8755783858630077, 5);
  sqcRYGate(q, 0.35368235989239893, 6);
  sqcRZGate(q, -0.16971964245575236, 6);
  sqcRYGate(q, 1.704353363284941, 7);
  sqcRZGate(q, -1.9644224244441668, 7);
  sqcRYGate(q, -3.13463828539982, 8);
  sqcRZGate(q, -0.3419274693624072, 8);
  sqcRYGate(q, 1.748889890783981, 9);
  sqcRZGate(q, -0.06307939294408271, 9);
  sqcRYGate(q, -0.07610957043822442, 10);
  sqcRZGate(q, 3.048800297874668, 10);
  sqcRYGate(q, -0.12477546808228904, 11);
  sqcRZGate(q, -0.23493804882161481, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.0574850788423239, 0);
  sqcRZGate(q, -0.08484570828213399, 0);
  sqcRYGate(q, 1.3001890449118823, 1);
  sqcRZGate(q, -3.0512115230482983, 1);
  sqcRYGate(q, -2.248503676977669, 2);
  sqcRZGate(q, 2.0315705363733336, 2);
  sqcRYGate(q, 0.3523254200361441, 3);
  sqcRZGate(q, 2.9096594328043803, 3);
  sqcRYGate(q, 0.1177775640776364, 4);
  sqcRZGate(q, -1.68251592850858, 4);
  sqcRYGate(q, -1.385091783914195, 5);
  sqcRZGate(q, -0.004181280046946589, 5);
  sqcRYGate(q, 0.011651621453053984, 6);
  sqcRZGate(q, -3.0959267252045293, 6);
  sqcRYGate(q, -3.1252003450748034, 7);
  sqcRZGate(q, -1.1045883599971893, 7);
  sqcRYGate(q, -0.0012212511560827366, 8);
  sqcRZGate(q, -2.8908680257873276, 8);
  sqcRYGate(q, 0.32576654319667764, 9);
  sqcRZGate(q, -0.009637086603128103, 9);
  sqcRYGate(q, 1.5203296559729274, 10);
  sqcRZGate(q, 1.6076196017134885, 10);
  sqcRYGate(q, -2.1646416339754313, 11);
  sqcRZGate(q, -1.1498429033343438, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.7489925753089506, 0);
  sqcRZGate(q, -1.5462056202981111, 0);
  sqcRYGate(q, 2.4440464492273803, 1);
  sqcRZGate(q, -3.0882715986849867, 1);
  sqcRYGate(q, -2.9542920042408096, 2);
  sqcRZGate(q, 1.8975783022166333, 2);
  sqcRYGate(q, -0.020115198262250618, 3);
  sqcRZGate(q, 2.1444351138967175, 3);
  sqcRYGate(q, -3.020443117339844, 4);
  sqcRZGate(q, -0.48938762951617804, 4);
  sqcRYGate(q, -0.9422918200820742, 5);
  sqcRZGate(q, -0.5577288000767584, 5);
  sqcRYGate(q, 3.0569122444113503, 6);
  sqcRZGate(q, -2.5867224692139192, 6);
  sqcRYGate(q, 1.952370195305848, 7);
  sqcRZGate(q, 1.1117470187497387, 7);
  sqcRYGate(q, 0.02579013971350296, 8);
  sqcRZGate(q, -0.7651415105189844, 8);
  sqcRYGate(q, 1.8245723034778418, 9);
  sqcRZGate(q, 1.5572085939679718, 9);
  sqcRYGate(q, 1.5829248590626366, 10);
  sqcRZGate(q, -1.0887002170150017, 10);
  sqcRYGate(q, -3.0245527478511725, 11);
  sqcRZGate(q, 3.0781864454454344, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.5539787541418377, 0);
  sqcRZGate(q, 1.5814213253667668, 0);
  sqcRYGate(q, -1.6577495112514018, 1);
  sqcRZGate(q, 1.6028193878421482, 1);
  sqcRYGate(q, 1.119273537205453, 2);
  sqcRZGate(q, 1.259015040322278, 2);
  sqcRYGate(q, 3.118885769216285, 3);
  sqcRZGate(q, 0.0457486715882245, 3);
  sqcRYGate(q, 1.3079006246599594, 4);
  sqcRZGate(q, -0.2593465525714272, 4);
  sqcRYGate(q, 2.917990513131842, 5);
  sqcRZGate(q, -0.5932442560392909, 5);
  sqcRYGate(q, -0.21595588577511798, 6);
  sqcRZGate(q, -0.5071761220273507, 6);
  sqcRYGate(q, -2.837188198797868, 7);
  sqcRZGate(q, -0.1587168304431126, 7);
  sqcRYGate(q, -0.012387441435227499, 8);
  sqcRZGate(q, -1.355577777062284, 8);
  sqcRYGate(q, 0.21002055354079285, 9);
  sqcRZGate(q, -0.05767145130127637, 9);
  sqcRYGate(q, 1.698217423377569, 10);
  sqcRZGate(q, -1.6764983363311456, 10);
  sqcRYGate(q, -2.1929559587313294, 11);
  sqcRZGate(q, -3.136626808476333, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.499663925182933, 0);
  sqcRZGate(q, 0.7505522598560592, 0);
  sqcRYGate(q, -1.5765570511650866, 1);
  sqcRZGate(q, -2.6219830791033694, 1);
  sqcRYGate(q, -1.2869095897507679, 2);
  sqcRZGate(q, 2.93367771439142, 2);
  sqcRYGate(q, -3.0868581757534153, 3);
  sqcRZGate(q, 2.252933594949976, 3);
  sqcRYGate(q, -1.6629110787712484, 4);
  sqcRZGate(q, 0.7757218957891435, 4);
  sqcRYGate(q, 0.09156276964541021, 5);
  sqcRZGate(q, 1.4750429334087, 5);
  sqcRYGate(q, 0.014376162418787499, 6);
  sqcRZGate(q, -2.518424676640059, 6);
  sqcRYGate(q, -0.009143909646788342, 7);
  sqcRZGate(q, -0.15552205342445408, 7);
  sqcRYGate(q, 1.5552611827643235, 8);
  sqcRZGate(q, -1.7369385929086043, 8);
  sqcRYGate(q, -1.7234283922736395, 9);
  sqcRZGate(q, -0.4299818359314233, 9);
  sqcRYGate(q, 1.1046724030376618, 10);
  sqcRZGate(q, 0.03592862013766229, 10);
  sqcRYGate(q, 1.683169305582778, 11);
  sqcRZGate(q, -3.136396824545561, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.5601028499916156, 0);
  sqcRZGate(q, 1.548106429934724, 0);
  sqcRYGate(q, -3.134892808649131, 1);
  sqcRZGate(q, -1.0397217647937589, 1);
  sqcRYGate(q, -0.0006975408865388388, 2);
  sqcRZGate(q, 1.9431496611144663, 2);
  sqcRYGate(q, 1.5721959001843775, 3);
  sqcRZGate(q, -1.3435312407688946, 3);
  sqcRYGate(q, 1.2269744612994273, 4);
  sqcRZGate(q, 1.4769271073122123, 4);
  sqcRYGate(q, -0.012730675622492528, 5);
  sqcRZGate(q, 2.888739054728173, 5);
  sqcRYGate(q, 2.9340384661543015, 6);
  sqcRZGate(q, 1.8286311625493807, 6);
  sqcRYGate(q, 0.004185729918168048, 7);
  sqcRZGate(q, -1.8276662314073147, 7);
  sqcRYGate(q, 3.14010347574354, 8);
  sqcRZGate(q, 1.4190867218101721, 8);
  sqcRYGate(q, -1.5728412756891075, 9);
  sqcRZGate(q, -3.1157001895837704, 9);
  sqcRYGate(q, 1.4439896800991139, 10);
  sqcRZGate(q, 3.122258447261261, 10);
  sqcRYGate(q, 2.065242102736236, 11);
  sqcRZGate(q, 3.078625551155991, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.8504999363331265, 0);
  sqcRZGate(q, 3.0760604166299825, 0);
  sqcRYGate(q, -1.5053034955509998, 1);
  sqcRZGate(q, 2.7922651701451806, 1);
  sqcRYGate(q, -1.5705571894077712, 2);
  sqcRZGate(q, -3.0262976935962365, 2);
  sqcRYGate(q, 0.015630231210890588, 3);
  sqcRZGate(q, 1.1599751785477506, 3);
  sqcRYGate(q, 0.9394299729566233, 4);
  sqcRZGate(q, 3.1349997624587957, 4);
  sqcRYGate(q, -3.1163137146691486, 5);
  sqcRZGate(q, -0.46595304911655383, 5);
  sqcRYGate(q, 2.912594347819837, 6);
  sqcRZGate(q, -2.8903961061575814, 6);
  sqcRYGate(q, -3.0305557091368294, 7);
  sqcRZGate(q, 2.9149246095113304, 7);
  sqcRYGate(q, 0.22403828848717888, 8);
  sqcRZGate(q, 2.8138883470041516, 8);
  sqcRYGate(q, 0.061393915313015635, 9);
  sqcRZGate(q, 3.1161278962493433, 9);
  sqcRYGate(q, -1.5685658945257306, 10);
  sqcRZGate(q, 0.001567893591239766, 10);
  sqcRYGate(q, -1.2547970931806418, 11);
  sqcRZGate(q, 1.6013082425415615, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.532267011971518, 0);
  sqcRZGate(q, -2.1023260391111087, 0);
  sqcRYGate(q, 1.5703093641645598, 1);
  sqcRZGate(q, 0.12037948361477967, 1);
  sqcRYGate(q, -3.1328359251213636, 2);
  sqcRZGate(q, -0.06718090816457295, 2);
  sqcRYGate(q, 3.141254244092365, 3);
  sqcRZGate(q, -0.08468605265617318, 3);
  sqcRYGate(q, -0.750060356891294, 4);
  sqcRZGate(q, 2.1796406674209337, 4);
  sqcRYGate(q, 0.007158004054985502, 5);
  sqcRZGate(q, 1.541593128581263, 5);
  sqcRYGate(q, -3.121401850705032, 6);
  sqcRZGate(q, 2.9398646311223966, 6);
  sqcRYGate(q, -0.0016126604449802073, 7);
  sqcRZGate(q, 1.5344466737181088, 7);
  sqcRYGate(q, -3.1376207862599466, 8);
  sqcRZGate(q, 1.0485674050222302, 8);
  sqcRYGate(q, -0.4275700718536679, 9);
  sqcRZGate(q, 0.13103511052410344, 9);
  sqcRYGate(q, 1.449483599952139, 10);
  sqcRZGate(q, -2.175336827179941, 10);
  sqcRYGate(q, 1.5710421537280812, 11);
  sqcRZGate(q, -3.011114646046943, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.6687709923658094, 0);
  sqcRZGate(q, 1.691996471068241, 0);
  sqcRYGate(q, -2.1954616538623295, 1);
  sqcRZGate(q, 0.19970280826521217, 1);
  sqcRYGate(q, -0.5585677637632185, 2);
  sqcRZGate(q, -2.8657547021705025, 2);
  sqcRYGate(q, 1.878519665550511, 3);
  sqcRZGate(q, -2.99302547983709, 3);
  sqcRYGate(q, -2.2520268017796043, 4);
  sqcRZGate(q, -1.7976644849838805, 4);
  sqcRYGate(q, -1.5810453182961295, 5);
  sqcRZGate(q, -3.025167187380148, 5);
  sqcRYGate(q, 0.4212117923121106, 6);
  sqcRZGate(q, 2.400233329000115, 6);
  sqcRYGate(q, 0.04295378603931077, 7);
  sqcRZGate(q, -1.7437668457276274, 7);
  sqcRYGate(q, -3.0125871163297777, 8);
  sqcRZGate(q, 3.086992204619518, 8);
  sqcRYGate(q, 1.5387317567837675, 9);
  sqcRZGate(q, -1.4362354422884307, 9);
  sqcRYGate(q, 2.9923054802092004, 10);
  sqcRZGate(q, -0.47783300119077493, 10);
  sqcRYGate(q, 1.5188958451281893, 11);
  sqcRZGate(q, -1.4390946532177407, 11);

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
