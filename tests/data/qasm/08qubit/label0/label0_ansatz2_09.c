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

  sqcRYGate(q, -1.5707890347326057, 0);
  sqcRZGate(q, 0.36946596942226145, 0);
  sqcRYGate(q, -1.5894301213884487, 1);
  sqcRZGate(q, 0.10537318069987299, 1);
  sqcRYGate(q, -1.5701968878519301, 2);
  sqcRZGate(q, -1.9311856077965726, 2);
  sqcRYGate(q, 1.5708947457766191, 3);
  sqcRZGate(q, -1.898942087805824e-05, 3);
  sqcRYGate(q, 1.5703495032057333, 4);
  sqcRZGate(q, -0.9307075595759794, 4);
  sqcRYGate(q, 2.1696833237774076, 5);
  sqcRZGate(q, -0.2740141699061055, 5);
  sqcRYGate(q, -1.7665008957505268, 6);
  sqcRZGate(q, 1.5289101143676802, 6);
  sqcRYGate(q, -2.848926761277455, 7);
  sqcRZGate(q, 0.9653114646398638, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 3.140098555856087, 0);
  sqcRZGate(q, 2.8474493619426178, 0);
  sqcRYGate(q, 3.136863153364154, 1);
  sqcRZGate(q, 1.6671457178666242, 1);
  sqcRYGate(q, 6.145882342689543e-06, 2);
  sqcRZGate(q, -0.5226752454094079, 2);
  sqcRYGate(q, 1.5612742945212972, 3);
  sqcRZGate(q, 1.5714124494239519, 3);
  sqcRYGate(q, 3.1415900515447763, 4);
  sqcRZGate(q, -0.5014645726625409, 4);
  sqcRYGate(q, -0.0081393184507373, 5);
  sqcRZGate(q, 1.426740202206563, 5);
  sqcRYGate(q, 2.9718831261337972, 6);
  sqcRZGate(q, 1.547035439308707, 6);
  sqcRYGate(q, -1.7010573199052468, 7);
  sqcRZGate(q, 3.137103776036452, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.007039755882614998, 0);
  sqcRZGate(q, -2.4770723374815953, 0);
  sqcRYGate(q, 2.5934329721082197, 1);
  sqcRZGate(q, -1.7615197363206256, 1);
  sqcRYGate(q, -0.0002898222085708851, 2);
  sqcRZGate(q, -0.6888309387113716, 2);
  sqcRYGate(q, -1.7332099319858094, 3);
  sqcRZGate(q, 2.587603029953342, 3);
  sqcRYGate(q, -3.1415874643767565, 4);
  sqcRZGate(q, -0.7045002318547615, 4);
  sqcRYGate(q, -2.4916270301686314, 5);
  sqcRZGate(q, 2.486512473225075, 5);
  sqcRYGate(q, -1.5020291882522203, 6);
  sqcRZGate(q, 1.0546624979651469, 6);
  sqcRYGate(q, 1.4350424869565597, 7);
  sqcRZGate(q, -2.0914143462422707, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.743145390761609, 0);
  sqcRZGate(q, 2.123992089890897, 0);
  sqcRYGate(q, -3.118401432209518, 1);
  sqcRZGate(q, -1.7486199063889822, 1);
  sqcRYGate(q, -1.3741740029579808, 2);
  sqcRZGate(q, 2.0674237091795047, 2);
  sqcRYGate(q, -0.00040875673532615844, 3);
  sqcRZGate(q, 2.2171515049755284, 3);
  sqcRYGate(q, 0.00028960224681369396, 4);
  sqcRZGate(q, 3.019016854968886, 4);
  sqcRYGate(q, -1.7285448191186228, 5);
  sqcRZGate(q, -2.9983863260085015, 5);
  sqcRYGate(q, 1.3389825889174032, 6);
  sqcRZGate(q, 2.018601620562104, 6);
  sqcRYGate(q, 0.13603460167502135, 7);
  sqcRZGate(q, 3.0242667534258434, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 3.13950654282538, 0);
  sqcRZGate(q, -0.708874803840111, 0);
  sqcRYGate(q, 2.42300072512464, 1);
  sqcRZGate(q, -0.9639589448711011, 1);
  sqcRYGate(q, -2.4901792202362456, 2);
  sqcRZGate(q, 1.9761746831536244, 2);
  sqcRYGate(q, 2.1105903952262803, 3);
  sqcRZGate(q, 0.17803736968753991, 3);
  sqcRYGate(q, -1.834610064095506, 4);
  sqcRZGate(q, -1.4862020999848, 4);
  sqcRYGate(q, -0.8833733041404777, 5);
  sqcRZGate(q, -2.915087858300289, 5);
  sqcRYGate(q, 0.5688392755922508, 6);
  sqcRZGate(q, 2.372843218396324, 6);
  sqcRYGate(q, 3.0504903958026857, 7);
  sqcRZGate(q, -0.9163007758144001, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.0013862371701653968, 0);
  sqcRZGate(q, -1.4274996769119326, 0);
  sqcRYGate(q, 3.1408864987581375, 1);
  sqcRZGate(q, 0.5991842979307602, 1);
  sqcRYGate(q, 1.570075206565524, 2);
  sqcRZGate(q, 0.565461206290711, 2);
  sqcRYGate(q, 1.5731427789019943, 3);
  sqcRZGate(q, -0.016339443441732545, 3);
  sqcRYGate(q, -1.5690292348903665, 4);
  sqcRZGate(q, -2.7000476432836367, 4);
  sqcRYGate(q, -3.1414198669821465, 5);
  sqcRZGate(q, -2.7894822151417475, 5);
  sqcRYGate(q, -3.1402884565361804, 6);
  sqcRZGate(q, -1.1094933865240053, 6);
  sqcRYGate(q, 0.00019217329667044775, 7);
  sqcRZGate(q, 2.0904025135382875, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.5613489054100125, 0);
  sqcRZGate(q, 1.8600395196036217, 0);
  sqcRYGate(q, 1.5784350585347158, 1);
  sqcRZGate(q, -1.869201750402279, 1);
  sqcRYGate(q, -0.16907342485663435, 2);
  sqcRZGate(q, 0.7629074719846134, 2);
  sqcRYGate(q, -1.0139676198511784, 3);
  sqcRZGate(q, -2.1883582437727154, 3);
  sqcRYGate(q, -2.935870362900297, 4);
  sqcRZGate(q, -2.671370669976922, 4);
  sqcRYGate(q, 1.1105102522367354, 5);
  sqcRZGate(q, 0.4237450171340729, 5);
  sqcRYGate(q, 2.044260840230618, 6);
  sqcRZGate(q, -1.1647587114542732, 6);
  sqcRYGate(q, 0.13785232295317398, 7);
  sqcRZGate(q, -1.1311918178938951, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.6260119411405258, 0);
  sqcRZGate(q, 1.2796330553313933, 0);
  sqcRYGate(q, -1.5817812400175557, 1);
  sqcRZGate(q, -1.5656042220453985, 1);
  sqcRYGate(q, -1.5960905981755318, 2);
  sqcRZGate(q, 1.2314608965085496, 2);
  sqcRYGate(q, -0.01754325384789016, 3);
  sqcRZGate(q, 0.15497002080766256, 3);
  sqcRYGate(q, 1.5240729299295008, 4);
  sqcRZGate(q, -3.1388833585697316, 4);
  sqcRYGate(q, 3.1312879723116955, 5);
  sqcRZGate(q, -2.291474240639661, 5);
  sqcRYGate(q, -0.0027743838870097903, 6);
  sqcRZGate(q, 1.1670271715336415, 6);
  sqcRYGate(q, 0.000762333582513561, 7);
  sqcRZGate(q, 0.24484962738101948, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.0026167729851342973, 0);
  sqcRZGate(q, -1.4801453093086785, 0);
  sqcRYGate(q, 0.26612955862285315, 1);
  sqcRZGate(q, 0.02005700076438714, 1);
  sqcRYGate(q, 0.003364676531142415, 2);
  sqcRZGate(q, 0.25898402377082524, 2);
  sqcRYGate(q, 3.141352145220016, 3);
  sqcRZGate(q, -1.355619012938252, 3);
  sqcRYGate(q, 3.1413681401980913, 4);
  sqcRZGate(q, 3.1107039398079284, 4);
  sqcRYGate(q, 3.126336450244186, 5);
  sqcRZGate(q, 1.888587464080863, 5);
  sqcRYGate(q, 3.1401787224390545, 6);
  sqcRZGate(q, 1.8455421544930104, 6);
  sqcRYGate(q, 3.1409792783749197, 7);
  sqcRZGate(q, 2.417838382811152, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 3.131847633890095, 0);
  sqcRZGate(q, -1.7347923360549768, 0);
  sqcRYGate(q, -2.9949696317962755, 1);
  sqcRZGate(q, -2.110876117748936, 1);
  sqcRYGate(q, 1.921596484413965, 2);
  sqcRZGate(q, -3.055610249827052, 2);
  sqcRYGate(q, -0.0049845193723075335, 3);
  sqcRZGate(q, 3.107010765169595, 3);
  sqcRYGate(q, -1.5150175042306069, 4);
  sqcRZGate(q, 0.4733962884195604, 4);
  sqcRYGate(q, 1.5645423184769183, 5);
  sqcRZGate(q, 0.7523569190741365, 5);
  sqcRYGate(q, -0.0008947916746855356, 6);
  sqcRZGate(q, 0.7468252565077158, 6);
  sqcRYGate(q, 0.0005327422673646609, 7);
  sqcRZGate(q, -0.46242409914912663, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.09929330900858611, 0);
  sqcRZGate(q, -1.3223925544888488, 0);
  sqcRYGate(q, -0.005241545948477958, 1);
  sqcRZGate(q, 1.0677537649648141, 1);
  sqcRYGate(q, 3.138050531435256, 2);
  sqcRZGate(q, -2.3475146320892284, 2);
  sqcRYGate(q, 3.1079562463459074, 3);
  sqcRZGate(q, 0.6521350493722115, 3);
  sqcRYGate(q, -2.8785002570806473, 4);
  sqcRZGate(q, 0.4502899706405988, 4);
  sqcRYGate(q, -0.0012618053072168678, 5);
  sqcRZGate(q, -0.757472057858545, 5);
  sqcRYGate(q, 0.0059040344338479045, 6);
  sqcRZGate(q, -2.620615419713835, 6);
  sqcRYGate(q, 3.140178190401324, 7);
  sqcRZGate(q, 2.0429600289849703, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.05635722854157166, 0);
  sqcRZGate(q, 0.023866982916664708, 0);
  sqcRYGate(q, -0.007850817075522062, 1);
  sqcRZGate(q, 2.630101450532651, 1);
  sqcRYGate(q, -3.019093396141629, 2);
  sqcRZGate(q, 2.981909207165076, 2);
  sqcRYGate(q, -1.5702015526137396, 3);
  sqcRZGate(q, -2.5939994013644228, 3);
  sqcRYGate(q, 1.5733315278931288, 4);
  sqcRZGate(q, -0.4758103346500722, 4);
  sqcRYGate(q, 1.57273363870042, 5);
  sqcRZGate(q, 0.009465029901700655, 5);
  sqcRYGate(q, -3.139301661099848, 6);
  sqcRZGate(q, -1.2234592527309578, 6);
  sqcRYGate(q, 0.0005080268697230684, 7);
  sqcRZGate(q, -1.826060488357994, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.00017976262966269972, 0);
  sqcRZGate(q, 2.8381674965323502, 0);
  sqcRYGate(q, -1.5712757717135535, 1);
  sqcRZGate(q, -0.007458775770772697, 1);
  sqcRYGate(q, -3.1394337014337172, 2);
  sqcRZGate(q, 0.7523957498660367, 2);
  sqcRYGate(q, 3.1404280431698965, 3);
  sqcRZGate(q, -2.577243651392137, 3);
  sqcRYGate(q, 0.0026439719011870366, 4);
  sqcRZGate(q, -2.6329488605468776, 4);
  sqcRYGate(q, -1.572654178974327, 5);
  sqcRZGate(q, -1.5908189023552464, 5);
  sqcRYGate(q, 1.4950942027281207, 6);
  sqcRZGate(q, -3.1276917501092565, 6);
  sqcRYGate(q, 1.557816569825179, 7);
  sqcRZGate(q, 0.029144102987395674, 7);

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
