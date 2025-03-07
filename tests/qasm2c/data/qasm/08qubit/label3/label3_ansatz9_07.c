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

  sqcRYGate(q, 1.9309226435691142, 0);
  sqcRYGate(q, 1.4067705981073653, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7846875929850947, 0);
  sqcRYGate(q, -2.0798436549453982, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.538266352194878, 2);
  sqcRYGate(q, 1.500932114737013, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.32109180221493316, 2);
  sqcRYGate(q, -2.0260905558961393, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4231301718008917, 4);
  sqcRYGate(q, 0.6400692574637121, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.10481785295346313, 4);
  sqcRYGate(q, 1.6741258442675413, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4792196741860977, 6);
  sqcRYGate(q, -0.48403593449313664, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0681999373062596, 6);
  sqcRYGate(q, -0.7877323159999021, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.091629044090198, 0);
  sqcRYGate(q, -1.5439674122333809, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6480375029564723, 0);
  sqcRYGate(q, 1.0887854078991035, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.267029142130166, 2);
  sqcRYGate(q, -1.2412027525222205, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.284647241197239, 2);
  sqcRYGate(q, 0.6595598866045184, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.274570208846654, 4);
  sqcRYGate(q, -1.1410120475271839, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.2182807346293334, 4);
  sqcRYGate(q, -2.511591386794681, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.21009194799865405, 1);
  sqcRYGate(q, -0.24483628345840824, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1676421089567794, 1);
  sqcRYGate(q, -3.057126861302106, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.21843017475867832, 3);
  sqcRYGate(q, -2.14464313741931, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.939728813042655, 3);
  sqcRYGate(q, -2.2134065493124604, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.4759706901238743, 5);
  sqcRYGate(q, 1.2565098696319787, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.7660102239044777, 5);
  sqcRYGate(q, 0.5094119962243623, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.033317156428507744, 0);
  sqcRYGate(q, -2.8383600961639326, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7673068019403197, 0);
  sqcRYGate(q, -0.8411645600287782, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.23227781530216, 1);
  sqcRYGate(q, 3.07136961171669, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.110133555951141, 1);
  sqcRYGate(q, -0.696996771459558, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.619143482003965, 2);
  sqcRYGate(q, -1.989063559646041, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.5527044897064393, 2);
  sqcRYGate(q, 2.127608478143631, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.1142664176892083, 3);
  sqcRYGate(q, 0.8073646166667112, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.3807261113270153, 3);
  sqcRYGate(q, -1.303393335212921, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.8182836106306883, 4);
  sqcRYGate(q, 0.2382183792558956, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.7652237140826506, 4);
  sqcRYGate(q, -2.0789059135590233, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 3.0023163135662623, 5);
  sqcRYGate(q, 0.7019892564491705, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5696470113215933, 5);
  sqcRYGate(q, 2.019203641958107, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.8734922469294729, 0);
  sqcRYGate(q, 2.2556278251734367, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.552789716340398, 0);
  sqcRYGate(q, -0.2863594622894565, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.936599550333536, 2);
  sqcRYGate(q, 1.8368727434841265, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9061495155183454, 2);
  sqcRYGate(q, -0.6582256616988404, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.715325970153165, 4);
  sqcRYGate(q, -1.928534237104003, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.14729371371921324, 4);
  sqcRYGate(q, -2.192295053756336, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.880548521321467, 6);
  sqcRYGate(q, -0.36129039324637535, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.27820552648911967, 6);
  sqcRYGate(q, 2.784177717018824, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9959579740005253, 0);
  sqcRYGate(q, 1.9336939439938137, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.116682121986396, 0);
  sqcRYGate(q, -2.182654754605876, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.091716096316957, 2);
  sqcRYGate(q, 2.059167160400469, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.5228035326542497, 2);
  sqcRYGate(q, -2.991676489264747, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.824250336747732, 4);
  sqcRYGate(q, 2.5868432566000883, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.3548000741122976, 4);
  sqcRYGate(q, -2.398812559289641, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.0023348716908822, 1);
  sqcRYGate(q, -2.0855245186186187, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.646563261084463, 1);
  sqcRYGate(q, -1.4433750650271935, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.0732856114624111, 3);
  sqcRYGate(q, 0.17534061844459625, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.982355618867111, 3);
  sqcRYGate(q, -1.8364373910081504, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.7644277650972793, 5);
  sqcRYGate(q, 0.8423977904676784, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.5948495379022884, 5);
  sqcRYGate(q, -2.1457505027354955, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.43910853901522184, 0);
  sqcRYGate(q, -0.6664293575224018, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.1146429401984903, 0);
  sqcRYGate(q, -1.8513903149748288, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7808057920050766, 1);
  sqcRYGate(q, -3.05780844271143, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5642013129807197, 1);
  sqcRYGate(q, 0.20835496036961398, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4156945232770366, 2);
  sqcRYGate(q, 0.5358924750856602, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.3134834495475745, 2);
  sqcRYGate(q, -2.3303580124279266, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.5435607204600723, 3);
  sqcRYGate(q, 0.014411502445696556, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.7917796299450925, 3);
  sqcRYGate(q, 1.670857370820812, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.741246051727041, 4);
  sqcRYGate(q, 1.7534063883348436, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.716218074615051, 4);
  sqcRYGate(q, 0.5226038492993094, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.7615750588615695, 5);
  sqcRYGate(q, -0.6903356449866562, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.5088325719430618, 5);
  sqcRYGate(q, -2.542963542245469, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.4482002117246431, 0);
  sqcRYGate(q, -1.7923187249556243, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8588728155924883, 0);
  sqcRYGate(q, 0.387377969297086, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.678878693330441, 2);
  sqcRYGate(q, -0.8897248218287404, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9014488053243007, 2);
  sqcRYGate(q, 0.8925362870404561, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0923387587971547, 4);
  sqcRYGate(q, 1.8624441092592976, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.3925840699766794, 4);
  sqcRYGate(q, 1.6795656468605475, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.1326386642050155, 6);
  sqcRYGate(q, -0.14011416818309463, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0533061522963973, 6);
  sqcRYGate(q, 1.199716587583402, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.585616275656796, 0);
  sqcRYGate(q, 0.6391880012217261, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3404239183057705, 0);
  sqcRYGate(q, 2.933459619074324, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2701831289760763, 2);
  sqcRYGate(q, 1.8466621983530662, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.283869252815346, 2);
  sqcRYGate(q, 1.9043211107223015, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.9431718812921606, 4);
  sqcRYGate(q, 3.0203832057628404, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.7832444194814565, 4);
  sqcRYGate(q, 1.1387042215944696, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.581523882367406, 1);
  sqcRYGate(q, -1.4743964084693806, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1317168595639657, 1);
  sqcRYGate(q, -0.4596579112270778, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7941800096092986, 3);
  sqcRYGate(q, -0.029128335101427358, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.568608197251858, 3);
  sqcRYGate(q, -3.030256275331768, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.6046376234438315, 5);
  sqcRYGate(q, -3.0882618513356483, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.8837056495963997, 5);
  sqcRYGate(q, 1.921232542489876, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.28015442384123546, 0);
  sqcRYGate(q, -0.03028927099069101, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6863905172710867, 0);
  sqcRYGate(q, -1.4109734909608154, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.34539323587663395, 1);
  sqcRYGate(q, 0.2680675990731664, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2514216950057717, 1);
  sqcRYGate(q, 3.0853434877384243, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6809791600064113, 2);
  sqcRYGate(q, -2.2002097733146804, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.8054541839561002, 2);
  sqcRYGate(q, -0.43472875821797924, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.8909307428821626, 3);
  sqcRYGate(q, 0.8731526728898844, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.0833148518906075, 3);
  sqcRYGate(q, -2.9280561458694128, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.6484369759976567, 4);
  sqcRYGate(q, 2.4254683227284826, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.7803891233646156, 4);
  sqcRYGate(q, 0.038632067708457285, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.867500245001734, 5);
  sqcRYGate(q, 2.1420554750605625, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.120157662302857, 5);
  sqcRYGate(q, -1.783174935711255, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.667414410161819, 0);
  sqcRYGate(q, -0.701928347947053, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.0971492616238594, 0);
  sqcRYGate(q, -0.8263505246485732, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6414284032081948, 2);
  sqcRYGate(q, -1.8667767997263693, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0640892068952987, 2);
  sqcRYGate(q, 0.5879806363062641, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.894836187306801, 4);
  sqcRYGate(q, -3.135102067140983, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.9415302997679613, 4);
  sqcRYGate(q, 0.23951956169337493, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6203449928835498, 6);
  sqcRYGate(q, -2.771961975356103, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.34499540711496834, 6);
  sqcRYGate(q, 2.074051359268993, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6441554431826604, 0);
  sqcRYGate(q, 2.576883996593361, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9126561581809317, 0);
  sqcRYGate(q, 2.494980690983128, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.068675433333155, 2);
  sqcRYGate(q, -0.8469329579037055, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.9393503874659889, 2);
  sqcRYGate(q, 1.69456946237811, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.16934616614681944, 4);
  sqcRYGate(q, 2.3069807063561294, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.7068002843076806, 4);
  sqcRYGate(q, -1.3247271203217075, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.3766300834686414, 1);
  sqcRYGate(q, 0.006914569893791418, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.575655749406741, 1);
  sqcRYGate(q, 0.38698905819985097, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.505966922008101, 3);
  sqcRYGate(q, 2.1267626128644013, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.172241883551327, 3);
  sqcRYGate(q, -0.9547806687201058, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.8567340683952906, 5);
  sqcRYGate(q, -2.094287627302816, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.8922681927043904, 5);
  sqcRYGate(q, -0.3525348195279671, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.53603284643283, 0);
  sqcRYGate(q, 1.5788361567432379, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.40078553976109466, 0);
  sqcRYGate(q, 2.8949187988093454, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.7446173674544418, 1);
  sqcRYGate(q, -1.0670337198680906, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9755012000445732, 1);
  sqcRYGate(q, 1.6622038219807393, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3637000108605237, 2);
  sqcRYGate(q, 2.7551616175256, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.14821846255128168, 2);
  sqcRYGate(q, -3.0503804675224933, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.6627217301944506, 3);
  sqcRYGate(q, -2.2859204494780054, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.48611686592478875, 3);
  sqcRYGate(q, 1.0405039739010347, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.12864232299585, 4);
  sqcRYGate(q, -0.3138078737196824, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.7444872594457275, 4);
  sqcRYGate(q, -2.4009694988994386, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.5599883890381898, 5);
  sqcRYGate(q, -2.077222390429192, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.3362421428487132, 5);
  sqcRYGate(q, 1.9279811621356293, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.4134938376129806, 0);
  sqcRYGate(q, 2.8411222729504737, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7360865889272172, 0);
  sqcRYGate(q, -2.8302984376943825, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.485082120081264, 2);
  sqcRYGate(q, -0.9785488732955951, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.08350846040606097, 2);
  sqcRYGate(q, 1.1370633123622254, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8276335441376235, 4);
  sqcRYGate(q, 0.7838636919680324, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0000714662947834, 4);
  sqcRYGate(q, 1.4507892426753162, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7945021346983807, 6);
  sqcRYGate(q, 1.1003896670029212, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.8358118841868527, 6);
  sqcRYGate(q, 2.050820662087638, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6631132939052435, 0);
  sqcRYGate(q, -0.33415512191806257, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.084567269391044, 0);
  sqcRYGate(q, 2.5558686288695514, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3088047920161685, 2);
  sqcRYGate(q, -2.9296859118775394, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.1805403501610359, 2);
  sqcRYGate(q, -3.1279025828202083, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.19639333845833915, 4);
  sqcRYGate(q, -0.4275774785796539, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.6244176416917178, 4);
  sqcRYGate(q, 0.8035156544650794, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.085183639475665, 1);
  sqcRYGate(q, 2.23383517304441, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8843686916142025, 1);
  sqcRYGate(q, -3.1237116827417255, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.3640224244315715, 3);
  sqcRYGate(q, 0.7425000083984914, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.9957461840788298, 3);
  sqcRYGate(q, 0.7832289011128373, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.5026218622771728, 5);
  sqcRYGate(q, 1.8884667645107527, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.5990654251233083, 5);
  sqcRYGate(q, -2.860664524626316, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.2315715407474075, 0);
  sqcRYGate(q, 2.025534905261677, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.1588034968893075, 0);
  sqcRYGate(q, -2.6862399811516724, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.096861009771593, 1);
  sqcRYGate(q, -0.324500188061327, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8959088559347779, 1);
  sqcRYGate(q, 1.09683539659917, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.709448624752583, 2);
  sqcRYGate(q, -2.6984862848757127, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.6075835390080851, 2);
  sqcRYGate(q, -2.5424971820238933, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.0900580258535815, 3);
  sqcRYGate(q, 0.6171248699186535, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6433467022781878, 3);
  sqcRYGate(q, 2.568490753418383, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.0535391755129722, 4);
  sqcRYGate(q, -1.138360490828419, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.113190568101683, 4);
  sqcRYGate(q, 0.371118068194335, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.419600262574901, 5);
  sqcRYGate(q, 2.5396435819320393, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9195294476628788, 5);
  sqcRYGate(q, -2.949615556210358, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.2630758617584661, 0);
  sqcRYGate(q, 0.8195993192927551, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.03248312132226, 0);
  sqcRYGate(q, -0.6275602889612211, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4179362433565963, 2);
  sqcRYGate(q, 0.5564592382946998, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5365462515241122, 2);
  sqcRYGate(q, -1.7370396274296782, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9847886921108469, 4);
  sqcRYGate(q, -1.6131520569249234, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7103364312419521, 4);
  sqcRYGate(q, -2.413220798144465, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.3319209150437237, 6);
  sqcRYGate(q, 2.0738007027381915, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.101407692526799, 6);
  sqcRYGate(q, 1.1165609897397801, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.47544338990991114, 0);
  sqcRYGate(q, 1.177657483635415, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5984561502553356, 0);
  sqcRYGate(q, 1.9255191561427623, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3702335864621542, 2);
  sqcRYGate(q, -0.7196561720462981, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.0543332483106171, 2);
  sqcRYGate(q, 2.2044817330425417, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.8017240532207995, 4);
  sqcRYGate(q, -0.5566027030511609, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.5508337061384263, 4);
  sqcRYGate(q, -0.558848421882228, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.2824866789496625, 1);
  sqcRYGate(q, -1.0879932156831211, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.03761909385298, 1);
  sqcRYGate(q, 2.498526206155696, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.1350065589206455, 3);
  sqcRYGate(q, -0.7654846051344877, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.367962022055633, 3);
  sqcRYGate(q, 1.9132914625508173, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.2280684029849647, 5);
  sqcRYGate(q, 1.1696248405001106, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.1172849235156734, 5);
  sqcRYGate(q, 3.076831211798782, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.4703732584629228, 0);
  sqcRYGate(q, 2.7194738706984483, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.099866851865552, 0);
  sqcRYGate(q, -1.4291835658310426, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.4977075432683316, 1);
  sqcRYGate(q, 2.5028446463162775, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.564661369741827, 1);
  sqcRYGate(q, -0.8418108072341477, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.727101018362268, 2);
  sqcRYGate(q, 0.8538897061576122, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.9942075199384304, 2);
  sqcRYGate(q, 1.7193882502318472, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.7315546217782547, 3);
  sqcRYGate(q, -3.138673410287708, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.7491644061574214, 3);
  sqcRYGate(q, -0.35419157369812526, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.2626070596847607, 4);
  sqcRYGate(q, -1.8123243067944943, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.9827964038590737, 4);
  sqcRYGate(q, 1.4326143773375781, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.3764049965662029, 5);
  sqcRYGate(q, 1.2911938151220606, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.13342264990552957, 5);
  sqcRYGate(q, 2.6496033177432126, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.7466708563292763, 0);
  sqcRYGate(q, 2.697765593175947, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7323474358424615, 0);
  sqcRYGate(q, 3.102094844145444, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7563224191981917, 2);
  sqcRYGate(q, 1.9179189936482828, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9981603591871915, 2);
  sqcRYGate(q, -0.742655319299813, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4907563772281904, 4);
  sqcRYGate(q, -2.767502737283603, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.7497319694169087, 4);
  sqcRYGate(q, 1.7038312584618307, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.151066835635296, 6);
  sqcRYGate(q, -1.197433265988787, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8812821514527518, 6);
  sqcRYGate(q, -2.707635228673551, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.512021903771853, 0);
  sqcRYGate(q, -1.1445412593373394, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0889248130839242, 0);
  sqcRYGate(q, -1.9239134158093685, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.444142395150354, 2);
  sqcRYGate(q, -2.6886791648718, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.225175409750398, 2);
  sqcRYGate(q, 2.675073666076269, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.0667760379798503, 4);
  sqcRYGate(q, -0.5194267608492302, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.8281139890257834, 4);
  sqcRYGate(q, -1.0194446715596361, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.3718765756753384, 1);
  sqcRYGate(q, -1.5730302414194375, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5895002260743976, 1);
  sqcRYGate(q, 1.6745844930341816, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7274819558782903, 3);
  sqcRYGate(q, 0.4322310828158713, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.8583515006631006, 3);
  sqcRYGate(q, 1.9770043968434265, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.272126804343106, 5);
  sqcRYGate(q, 2.347550926554081, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.354572285592094, 5);
  sqcRYGate(q, -0.4092018641349073, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.8583563669614307, 0);
  sqcRYGate(q, 0.1169980544712832, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.056137709391638965, 0);
  sqcRYGate(q, -1.629217757551217, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.9454892939832227, 1);
  sqcRYGate(q, 2.926011124973521, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.394683375821785, 1);
  sqcRYGate(q, 1.4435075068844327, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0200373373961478, 2);
  sqcRYGate(q, -1.6494020696654434, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.194566933540444, 2);
  sqcRYGate(q, -0.32025227315598404, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.248436614336076, 3);
  sqcRYGate(q, -2.2323750077301976, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.35309100020385, 3);
  sqcRYGate(q, -2.3144761087442096, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6893541388166713, 4);
  sqcRYGate(q, -1.4368478522216819, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.5220013816449658, 4);
  sqcRYGate(q, -2.5995368281013036, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.6862872846816419, 5);
  sqcRYGate(q, -0.03370815299757002, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.0002655962860603, 5);
  sqcRYGate(q, -1.4840553467666213, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.02392170323753349, 0);
  sqcRYGate(q, 2.83984117115077, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8154870257432187, 0);
  sqcRYGate(q, -0.9497204803486792, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.92596528780759, 2);
  sqcRYGate(q, 1.2972201692982068, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9851229890023223, 2);
  sqcRYGate(q, -0.913053068116218, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0876061884385404, 4);
  sqcRYGate(q, 2.5477509285050117, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.4064562377103456, 4);
  sqcRYGate(q, -0.7081364795153301, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.122236108915536, 6);
  sqcRYGate(q, -0.7849257995167738, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9921421046833375, 6);
  sqcRYGate(q, -0.00024354406618449367, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3289089530678795, 0);
  sqcRYGate(q, -2.556858819642993, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.900634897502064, 0);
  sqcRYGate(q, -2.671159824235747, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0859277054409557, 2);
  sqcRYGate(q, 1.8334717238745588, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.4787978649908018, 2);
  sqcRYGate(q, 1.4933381015035445, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.510747684579525, 4);
  sqcRYGate(q, -1.5599591894878426, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.6887770399119573, 4);
  sqcRYGate(q, 0.7477538660999177, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.0834507925954218, 1);
  sqcRYGate(q, -2.811153651853685, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3171679102253158, 1);
  sqcRYGate(q, -1.4830074609042347, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9598979419290686, 3);
  sqcRYGate(q, -1.9599878424506443, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.4178873032094774, 3);
  sqcRYGate(q, 0.5154662833300586, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.5040529507163174, 5);
  sqcRYGate(q, -2.7890024093281602, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.9384875957629086, 5);
  sqcRYGate(q, -2.340674124648229, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.713729746138052, 0);
  sqcRYGate(q, 2.0782402597632226, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.0666731679169366, 0);
  sqcRYGate(q, -0.5662276991106001, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.7120871329388919, 1);
  sqcRYGate(q, -2.4583262468797753, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.408133004183684, 1);
  sqcRYGate(q, -0.00914851358325236, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1585271045038006, 2);
  sqcRYGate(q, -0.40372149058462214, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.3115421752654393, 2);
  sqcRYGate(q, 1.0685868013209445, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.2046400900490486, 3);
  sqcRYGate(q, 1.3324157324515138, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.5532825060525353, 3);
  sqcRYGate(q, -3.007707551572807, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.2615928245171144, 4);
  sqcRYGate(q, -2.699161211674915, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.49548199165656737, 4);
  sqcRYGate(q, 2.6467472600670727, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.8941726433202144, 5);
  sqcRYGate(q, -1.2057228990733384, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.9586961712024347, 5);
  sqcRYGate(q, -2.4463161588134197, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6161879943234494, 0);
  sqcRYGate(q, 2.781581580774553, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7265315476229315, 0);
  sqcRYGate(q, -2.486133391264411, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.949597504155066, 2);
  sqcRYGate(q, -0.8362930431710475, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9938976715929908, 2);
  sqcRYGate(q, -1.9693877820705565, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3213217896778478, 4);
  sqcRYGate(q, 2.275057192334461, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.821830775868667, 4);
  sqcRYGate(q, 1.1776342403128433, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.2224426975987619, 6);
  sqcRYGate(q, 1.7191225896971964, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0131616080373314, 6);
  sqcRYGate(q, -2.219123738093761, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.35549040120313613, 0);
  sqcRYGate(q, -3.123360604936011, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.46126199475057206, 0);
  sqcRYGate(q, -0.6212287201094796, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.04140593802428416, 2);
  sqcRYGate(q, -0.6546793634499517, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.2946125922893836, 2);
  sqcRYGate(q, 1.8896983290612823, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.52426627728806, 4);
  sqcRYGate(q, 0.804940214660844, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.7068996160310324, 4);
  sqcRYGate(q, 1.2819888004248072, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.879383485938698, 1);
  sqcRYGate(q, -1.2706620170810876, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.760751965472876, 1);
  sqcRYGate(q, -2.818902066933337, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.003758509932984, 3);
  sqcRYGate(q, -2.6865805941720806, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.7715408199181422, 3);
  sqcRYGate(q, 2.1772839496238974, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.519241207740418, 5);
  sqcRYGate(q, 2.9825624854265844, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.4215159456496473, 5);
  sqcRYGate(q, -1.2007189821539386, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.47711604192945484, 0);
  sqcRYGate(q, 0.11558257553588688, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9318058133788276, 0);
  sqcRYGate(q, 2.881874978061627, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.571345391549564, 1);
  sqcRYGate(q, -1.0326616721130808, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0070717355781618, 1);
  sqcRYGate(q, 0.2302651882792793, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8228047003790895, 2);
  sqcRYGate(q, -1.9987840729495079, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 3.1248244757166694, 2);
  sqcRYGate(q, -2.8168148857753446, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.128650781479053, 3);
  sqcRYGate(q, -0.18923761966583183, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.014591901671120233, 3);
  sqcRYGate(q, -2.021317385460326, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.9390101682000138, 4);
  sqcRYGate(q, 1.1130837734262264, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.958246193988562, 4);
  sqcRYGate(q, -1.0065441036164513, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.4174938636576355, 5);
  sqcRYGate(q, 1.8699872724524969, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.3754415834022624, 5);
  sqcRYGate(q, 0.8255594486243006, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5641382151327756, 0);
  sqcRYGate(q, 2.610862436813719, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5982902208223653, 0);
  sqcRYGate(q, 2.6959837573210303, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7724586345142563, 2);
  sqcRYGate(q, -1.4991130337328054, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5386730160144595, 2);
  sqcRYGate(q, 3.0307134040568746, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0385632496537, 4);
  sqcRYGate(q, -2.2472482892208676, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8371465998722103, 4);
  sqcRYGate(q, -0.46681789325401274, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.4683542348499308, 6);
  sqcRYGate(q, -1.8109702358031368, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7574649553731243, 6);
  sqcRYGate(q, 1.1514300512406115, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.6437404178925403, 0);
  sqcRYGate(q, 1.4185662382137512, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4372370865080772, 0);
  sqcRYGate(q, 0.8339182502666338, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3565243961171785, 2);
  sqcRYGate(q, -0.9655794818494412, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.8147904391988376, 2);
  sqcRYGate(q, -0.28052667111656254, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.9793323702209529, 4);
  sqcRYGate(q, 2.5898548534168264, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.7744496439187818, 4);
  sqcRYGate(q, -2.848244466459583, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.390117978216936, 1);
  sqcRYGate(q, -1.131313304834826, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6298331706379661, 1);
  sqcRYGate(q, 0.5137474162785168, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7561761682285253, 3);
  sqcRYGate(q, 2.7942587828366525, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.0483909018475477, 3);
  sqcRYGate(q, 2.589780478016499, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.127912959591983, 5);
  sqcRYGate(q, -2.1072461289797104, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.7588765526510814, 5);
  sqcRYGate(q, -0.6084041873623821, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.3032152078330346, 0);
  sqcRYGate(q, -3.1167024723170473, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7405265305023059, 0);
  sqcRYGate(q, -2.9890994762911025, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.1592874602842711, 1);
  sqcRYGate(q, -1.683397792698262, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6539062498320307, 1);
  sqcRYGate(q, -1.2781679468750973, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.772072919017291, 2);
  sqcRYGate(q, -0.33431983950312577, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.0028217387872375914, 2);
  sqcRYGate(q, 1.4602182732350997, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.871534550802865, 3);
  sqcRYGate(q, 2.55617673551384, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.0299216359195396, 3);
  sqcRYGate(q, 0.880390071902585, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7916381576590935, 4);
  sqcRYGate(q, 0.8015412506128953, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.544747437918314, 4);
  sqcRYGate(q, -2.41706025334953, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.4062075276678412, 5);
  sqcRYGate(q, -1.959866209630766, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.268859359257398, 5);
  sqcRYGate(q, 2.0174033093022454, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.7612717133714895, 0);
  sqcRYGate(q, 1.1945083959326706, 1);
  sqcRYGate(q, 1.784691490269143, 2);
  sqcRYGate(q, 1.8535349500631177, 3);
  sqcRYGate(q, -2.609521894633973, 4);
  sqcRYGate(q, 0.20151741077363514, 5);
  sqcRYGate(q, 1.0784273579141286, 6);
  sqcRYGate(q, -2.4488605635637692, 7);

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
