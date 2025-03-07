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

  sqcRYGate(q, 0.914102166390461, 0);
  sqcRYGate(q, -0.6215661984366943, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0906719376559297, 0);
  sqcRYGate(q, -2.243135062522849, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2896096813966551, 1);
  sqcRYGate(q, 0.3424759240371049, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0056368803695057, 1);
  sqcRYGate(q, 0.8140915178873462, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4904323063315967, 2);
  sqcRYGate(q, -1.7262109751717274, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7596956339435152, 2);
  sqcRYGate(q, 0.6766327578581395, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.768741153016089, 3);
  sqcRYGate(q, -0.7409642710154936, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.9380327368746877, 3);
  sqcRYGate(q, 2.982582821673319, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.5770356537044785, 4);
  sqcRYGate(q, 1.0432524892091868, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1407025550284562, 4);
  sqcRYGate(q, -1.4154448586181578, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.317235864352021, 5);
  sqcRYGate(q, 0.1830341500957875, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.8163388299286138, 5);
  sqcRYGate(q, 0.6215007222294043, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.803448934511944, 6);
  sqcRYGate(q, -2.2905292390753145, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.58713169935778, 6);
  sqcRYGate(q, -2.4092062665127543, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.4552680983590722, 0);
  sqcRYGate(q, -2.311114630465398, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0632560050480222, 0);
  sqcRYGate(q, 2.3538054638442816, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.635134310352508, 1);
  sqcRYGate(q, 1.180692038154948, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.432072900119501, 1);
  sqcRYGate(q, -1.7949206379354568, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9573557615248909, 2);
  sqcRYGate(q, -3.092620300410291, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2100680697405368, 2);
  sqcRYGate(q, 1.4079737543399125, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5610584996682917, 3);
  sqcRYGate(q, -2.0914337524504516, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.08264368348792683, 3);
  sqcRYGate(q, 1.0338305552510094, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5353289787155058, 4);
  sqcRYGate(q, -1.2032620540595647, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0373684309869753, 4);
  sqcRYGate(q, -1.6300929658949903, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8612002090901514, 5);
  sqcRYGate(q, 1.1195520424713348, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.8165986004765884, 5);
  sqcRYGate(q, 0.3427968087786528, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.4105475452254783, 6);
  sqcRYGate(q, -0.9353424966854229, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.497799530839475, 6);
  sqcRYGate(q, 0.14399056429502455, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.621564359555983, 0);
  sqcRYGate(q, 2.7512925572791116, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.07455615800199897, 0);
  sqcRYGate(q, -0.40938144349425803, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9941803139458756, 1);
  sqcRYGate(q, 1.5367294994701701, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.654480315175218, 1);
  sqcRYGate(q, -2.082726601680778, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2135182247794063, 2);
  sqcRYGate(q, 0.4224225310585839, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.14124039970798363, 2);
  sqcRYGate(q, 1.4338865468041258, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3567928867137304, 3);
  sqcRYGate(q, -3.064737373878723, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6265318677360172, 3);
  sqcRYGate(q, -1.8441027330201054, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.0090114396255787, 4);
  sqcRYGate(q, 2.340777302730267, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.0475858496729207, 4);
  sqcRYGate(q, 2.8552284317067183, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6744949092864823, 5);
  sqcRYGate(q, -1.2159361262890744, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.3378951670790808, 5);
  sqcRYGate(q, -2.5062624341322994, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.8477116601203187, 6);
  sqcRYGate(q, 2.5321829348905935, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.0989083930018997, 6);
  sqcRYGate(q, 0.6825492930995455, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.413248342919199, 0);
  sqcRYGate(q, 0.3082191645264163, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4634226532303796, 0);
  sqcRYGate(q, -0.5865561938173585, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.752747840591535, 1);
  sqcRYGate(q, 0.7810281020898752, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1946307794401523, 1);
  sqcRYGate(q, -3.12393489646054, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7338944569711572, 2);
  sqcRYGate(q, 1.6164230695161805, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.01411494199563, 2);
  sqcRYGate(q, -1.2082959771536306, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9473298737998936, 3);
  sqcRYGate(q, -2.788942234222858, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.9589348032377307, 3);
  sqcRYGate(q, -2.5998727995744373, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.158954303058225, 4);
  sqcRYGate(q, 0.6173109218636735, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0525854865669624, 4);
  sqcRYGate(q, -0.6667120889343918, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.03201143161517, 5);
  sqcRYGate(q, -3.091020737302717, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7592753651853223, 5);
  sqcRYGate(q, -2.002966592062444, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7459340108595318, 6);
  sqcRYGate(q, -2.7577357459445473, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6186581624973995, 6);
  sqcRYGate(q, -0.45875048141832947, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.9524246832851744, 0);
  sqcRYGate(q, -2.5958448828902796, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8375088772011665, 0);
  sqcRYGate(q, -0.44949754994837576, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0879214224608464, 1);
  sqcRYGate(q, 1.8617915767253743, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.21725642530662598, 1);
  sqcRYGate(q, 1.3361777521239846, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2359007468487544, 2);
  sqcRYGate(q, 1.7939065639205198, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8244667735092794, 2);
  sqcRYGate(q, -0.8496865593844092, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.03717734792087, 3);
  sqcRYGate(q, -2.682756209711677, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.09066912261432139, 3);
  sqcRYGate(q, -2.744873437207559, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.164139288382913, 4);
  sqcRYGate(q, -1.7569777721918465, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.958473676896067, 4);
  sqcRYGate(q, 0.9333713195562555, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.729489069875676, 5);
  sqcRYGate(q, -3.0819607141947705, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.087883077242153, 5);
  sqcRYGate(q, -1.8580128897965285, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4456958387515524, 6);
  sqcRYGate(q, -0.9334800429333279, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.929707733371958, 6);
  sqcRYGate(q, 1.3222326539721, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.23494091223425873, 0);
  sqcRYGate(q, 2.258427256043014, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0834410698088215, 0);
  sqcRYGate(q, 2.6484150888797924, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8183335614860168, 1);
  sqcRYGate(q, 2.2715717532319832, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5487516942875796, 1);
  sqcRYGate(q, -1.5745825939564524, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9874251605016884, 2);
  sqcRYGate(q, -2.6808494356947232, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9942508718038647, 2);
  sqcRYGate(q, 2.9063109978661648, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7743868927235945, 3);
  sqcRYGate(q, 1.2172543852088993, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.3866264771213417, 3);
  sqcRYGate(q, 2.318736885540529, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.15924003333208642, 4);
  sqcRYGate(q, 0.04723195248872969, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6204386421386543, 4);
  sqcRYGate(q, -0.4262388058112316, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7781032019754154, 5);
  sqcRYGate(q, -2.0351165867203367, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6989966517456363, 5);
  sqcRYGate(q, -0.8009851973930049, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.1298002513763663, 6);
  sqcRYGate(q, -1.9720943131059432, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9747822018831034, 6);
  sqcRYGate(q, 3.043094802133095, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7767062492062958, 0);
  sqcRYGate(q, -1.8063236190864185, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0797936133576278, 0);
  sqcRYGate(q, -1.5209842064675738, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0770830769595023, 1);
  sqcRYGate(q, 2.153864824652394, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7731547903302216, 1);
  sqcRYGate(q, -1.596195904177148, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.044986057383054036, 2);
  sqcRYGate(q, 1.0374409922882126, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.183472727185694, 2);
  sqcRYGate(q, 1.6479400337897556, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.399556513007345, 3);
  sqcRYGate(q, -0.2803261159451509, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.9475733493907201, 3);
  sqcRYGate(q, 0.8868398899846158, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.969431837614726, 4);
  sqcRYGate(q, -0.630189008818439, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7620447266347776, 4);
  sqcRYGate(q, -2.723108795997612, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.663172180511267, 5);
  sqcRYGate(q, 0.8268449403862324, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.3820374093709409, 5);
  sqcRYGate(q, -2.70254937622807, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.0045179952492402, 6);
  sqcRYGate(q, 2.0097617927540186, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1906932164709312, 6);
  sqcRYGate(q, 0.8135568905604648, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.376527899961654, 0);
  sqcRYGate(q, -0.1369419861912172, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.370560609462979, 0);
  sqcRYGate(q, 2.3978497417532467, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1513871158113442, 1);
  sqcRYGate(q, -1.6482647687382048, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.777590201357543, 1);
  sqcRYGate(q, -0.02804446166581008, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.17221616858999234, 2);
  sqcRYGate(q, -0.5964744394221766, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4817396482868359, 2);
  sqcRYGate(q, 1.9244145803530497, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7435077378118288, 3);
  sqcRYGate(q, 0.5491712913388486, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.8737394428138507, 3);
  sqcRYGate(q, -2.2327518347625275, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.4052236482263387, 4);
  sqcRYGate(q, -0.2984760291308479, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5929854357218183, 4);
  sqcRYGate(q, 1.9673621346546453, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.065423861059122, 5);
  sqcRYGate(q, -3.0574704326468023, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.71492437355663, 5);
  sqcRYGate(q, -3.124451381330407, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9617654927667241, 6);
  sqcRYGate(q, -1.8979985311065786, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.4025026482543965, 6);
  sqcRYGate(q, 2.190117356755617, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8091830302571638, 0);
  sqcRYGate(q, -2.2112190522037696, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.119535654754919, 0);
  sqcRYGate(q, -0.6012982668716544, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.851329116370227, 1);
  sqcRYGate(q, -0.31854665864917875, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1891597246524723, 1);
  sqcRYGate(q, -0.6659709156201014, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0323789894311037, 2);
  sqcRYGate(q, -1.891092846267819, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9573811250047082, 2);
  sqcRYGate(q, -1.7892808965217095, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.944057686847704, 3);
  sqcRYGate(q, 1.5621989645241845, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.022271679584879, 3);
  sqcRYGate(q, 2.094211238049639, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.79203894365651, 4);
  sqcRYGate(q, -2.8197763336920634, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6998415513064034, 4);
  sqcRYGate(q, -2.6734175651401397, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.35720065798380857, 5);
  sqcRYGate(q, -1.450719386454014, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.2509935495616906, 5);
  sqcRYGate(q, -2.752667542011683, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.086013967828217, 6);
  sqcRYGate(q, 1.768097759586719, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9122417873642608, 6);
  sqcRYGate(q, 1.9904803818397054, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5124576120600843, 0);
  sqcRYGate(q, -0.019567866363765063, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7543447642536654, 0);
  sqcRYGate(q, 1.9705404445167352, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1949989793378535, 1);
  sqcRYGate(q, 0.78992314472218, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.296853799738392, 1);
  sqcRYGate(q, 1.8439033174637576, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2728688889445685, 2);
  sqcRYGate(q, -1.9019073884416389, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6334956078578973, 2);
  sqcRYGate(q, -0.8128680775159532, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9748467944426835, 3);
  sqcRYGate(q, 2.5723220170062335, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5966034116073078, 3);
  sqcRYGate(q, 1.0629869529799871, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.460743062060201, 4);
  sqcRYGate(q, -2.874989445857566, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.275551421808137, 4);
  sqcRYGate(q, 0.9431228808348111, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9395882713098562, 5);
  sqcRYGate(q, 2.257854422100092, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.1667329714093171, 5);
  sqcRYGate(q, -2.682839459937011, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6371890622795884, 6);
  sqcRYGate(q, 1.303185324597373, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4018142033988041, 6);
  sqcRYGate(q, 0.0854094434251369, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.2813733167987875, 0);
  sqcRYGate(q, 0.8222272270182325, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.483186512130797, 0);
  sqcRYGate(q, 0.911761134089367, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3083275440037183, 1);
  sqcRYGate(q, 1.531133200674728, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8865694878076313, 1);
  sqcRYGate(q, 2.3324131128477656, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.468030490690146, 2);
  sqcRYGate(q, 2.3146426509155558, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5753506996361755, 2);
  sqcRYGate(q, 0.5728884928474809, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4390002889368936, 3);
  sqcRYGate(q, 3.043407039951067, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.7120070004241885, 3);
  sqcRYGate(q, -2.487695969304758, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.8446817920197227, 4);
  sqcRYGate(q, 3.045859701657874, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.1952506306781374, 4);
  sqcRYGate(q, -1.7067914973458942, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2339634572311935, 5);
  sqcRYGate(q, 0.04903620501210426, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9441321127665647, 5);
  sqcRYGate(q, 1.1016161163465852, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.4705690499332027, 6);
  sqcRYGate(q, -0.09585561363706051, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1956362237182407, 6);
  sqcRYGate(q, -0.8973966190380066, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.694997257706911, 0);
  sqcRYGate(q, -0.8231572571472439, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.65521104140659, 0);
  sqcRYGate(q, 0.6590434748421315, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.12551496526253822, 1);
  sqcRYGate(q, 0.852954814155245, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.624204283968391, 1);
  sqcRYGate(q, -2.7951757662087893, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7630168172165241, 2);
  sqcRYGate(q, -1.3174719882209203, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.590053809065573, 2);
  sqcRYGate(q, -2.500457258862575, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.904516413343088, 3);
  sqcRYGate(q, -0.2357224663021147, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.7120037885490413, 3);
  sqcRYGate(q, -0.011776579539298764, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.582078049090076, 4);
  sqcRYGate(q, 0.7965052879932015, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.7556178252456345, 4);
  sqcRYGate(q, -2.4292957704478453, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.1402704114378746, 5);
  sqcRYGate(q, 0.98596620436052, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6905246344421734, 5);
  sqcRYGate(q, 1.9277823346606422, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.03536776277513631, 6);
  sqcRYGate(q, 0.05347940070834299, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.17802158983415733, 6);
  sqcRYGate(q, -1.6911284511473532, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.184793030878157, 0);
  sqcRYGate(q, 2.0332961413116903, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9111922332720832, 0);
  sqcRYGate(q, 0.23444786696681774, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.035223525324234, 1);
  sqcRYGate(q, -0.15373764768830603, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.339505179900157, 1);
  sqcRYGate(q, -2.769332950007459, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3796441631368683, 2);
  sqcRYGate(q, -2.0412862915805365, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2885726958018813, 2);
  sqcRYGate(q, 3.1412071422150576, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7486970208133341, 3);
  sqcRYGate(q, -0.8700506439499726, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.029825962187248, 3);
  sqcRYGate(q, -0.6302185800063187, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.2706115907910336, 4);
  sqcRYGate(q, -2.6893822240969376, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.07391109450106752, 4);
  sqcRYGate(q, 1.5298364549784544, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.1928707880921183, 5);
  sqcRYGate(q, -1.9998815982692166, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.08627709601724529, 5);
  sqcRYGate(q, 1.8674289229234526, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.0008171129163204, 6);
  sqcRYGate(q, -2.652204812921502, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.474571439498371, 6);
  sqcRYGate(q, 0.3812697759224921, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.25585607217281436, 0);
  sqcRYGate(q, -2.9423893561808248, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0741844691754814, 0);
  sqcRYGate(q, 2.3232585816493474, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5875714634641351, 1);
  sqcRYGate(q, 1.025111480164595, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4829746486123385, 1);
  sqcRYGate(q, -3.047334151682044, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7941553765782974, 2);
  sqcRYGate(q, 1.2874311507442593, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5710982666846607, 2);
  sqcRYGate(q, -2.4083940337091354, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.741481356421743, 3);
  sqcRYGate(q, -0.8693102179776991, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.855914077741673, 3);
  sqcRYGate(q, 0.5348852110085414, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5600811847972693, 4);
  sqcRYGate(q, -1.9468146642269861, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.220067200977934, 4);
  sqcRYGate(q, 0.7373584016290825, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.2985696627383527, 5);
  sqcRYGate(q, -2.522239228988504, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.623792436576916, 5);
  sqcRYGate(q, 0.3513816479255561, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6288012819211453, 6);
  sqcRYGate(q, 3.05860572432807, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.981567915323229, 6);
  sqcRYGate(q, 0.8991530950223361, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0682173395841494, 0);
  sqcRYGate(q, 1.5812376524639076, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6194717842275366, 0);
  sqcRYGate(q, 0.8702965409984563, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8720083297214664, 1);
  sqcRYGate(q, 1.8153703925709337, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7979500093160139, 1);
  sqcRYGate(q, 0.19452543121766566, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7238550140308555, 2);
  sqcRYGate(q, 0.324291123474469, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7620277275917402, 2);
  sqcRYGate(q, -3.093491024880455, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9947493169926687, 3);
  sqcRYGate(q, 1.3662419343842669, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7314094797357411, 3);
  sqcRYGate(q, 2.811572151526671, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.8468172515615313, 4);
  sqcRYGate(q, -2.7011578768293933, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.4885396704716447, 4);
  sqcRYGate(q, 3.0871897175706255, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6361606494103256, 5);
  sqcRYGate(q, -2.1016775811714066, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.3860436190583263, 5);
  sqcRYGate(q, 1.6366959475776177, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.308779402636695, 6);
  sqcRYGate(q, -0.5084292227661696, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.5398588528783597, 6);
  sqcRYGate(q, -2.688730681617279, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.3282128688589117, 0);
  sqcRYGate(q, 1.4228243084610213, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6626354164617911, 0);
  sqcRYGate(q, 2.3640626448992146, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.777565964678067, 1);
  sqcRYGate(q, -2.5950457012745853, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.190630073843947, 1);
  sqcRYGate(q, 1.0798554366640172, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9612982110656048, 2);
  sqcRYGate(q, 1.0714611213763738, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.975763101154815, 2);
  sqcRYGate(q, 2.2344779288495253, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3073787295970147, 3);
  sqcRYGate(q, -0.30052144454108465, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.38163044572346255, 3);
  sqcRYGate(q, -1.3989025561907475, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.6794581517710463, 4);
  sqcRYGate(q, 1.4302930894026897, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.4677712513285021, 4);
  sqcRYGate(q, 0.5644758576555927, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8407779863436655, 5);
  sqcRYGate(q, -2.653346273335178, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.328064825233576, 5);
  sqcRYGate(q, -2.8419938693658056, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.9960820676720235, 6);
  sqcRYGate(q, -1.3217574130351692, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.9982062521216406, 6);
  sqcRYGate(q, 0.2945993709843835, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1825681806946209, 0);
  sqcRYGate(q, -2.441291418029349, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9457387639141527, 0);
  sqcRYGate(q, -3.1006660089724574, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1312123108624563, 1);
  sqcRYGate(q, -2.5328514447468145, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.678796028626135, 1);
  sqcRYGate(q, -2.014296157397103, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5350173800855869, 2);
  sqcRYGate(q, -1.5552627697888664, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.344743557126356, 2);
  sqcRYGate(q, -1.0795736449899431, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3146695347659048, 3);
  sqcRYGate(q, 1.8246881650472262, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6502783482275758, 3);
  sqcRYGate(q, 1.3645367327993096, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8743632730553512, 4);
  sqcRYGate(q, 1.412146212275334, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0510379495444653, 4);
  sqcRYGate(q, -0.4154793762498888, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7462590715942019, 5);
  sqcRYGate(q, 0.20123329015814087, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.12630914858644893, 5);
  sqcRYGate(q, -3.0855659762528784, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.5893939135969295, 6);
  sqcRYGate(q, -1.0801511316238246, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7432242366479881, 6);
  sqcRYGate(q, 2.3600656086828486, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8383143814003593, 0);
  sqcRYGate(q, -2.5919476121693896, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5926549155975003, 0);
  sqcRYGate(q, 2.3699968828189157, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3171956796698159, 1);
  sqcRYGate(q, 1.77724185455062, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.19297028627577806, 1);
  sqcRYGate(q, -2.4823641560540306, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9140815523377457, 2);
  sqcRYGate(q, 2.3168999159763, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4802541960914843, 2);
  sqcRYGate(q, 3.0424565355593276, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5687161011015389, 3);
  sqcRYGate(q, -0.07648961610060431, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.055032135789281, 3);
  sqcRYGate(q, -2.1276489756445933, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5320186950880608, 4);
  sqcRYGate(q, -1.386278082684596, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5316561588970012, 4);
  sqcRYGate(q, 1.6166343251015132, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4694252323618606, 5);
  sqcRYGate(q, 0.24331505148169089, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.8811279221990242, 5);
  sqcRYGate(q, 1.9330896888059073, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5019015375734508, 6);
  sqcRYGate(q, -2.909774078087848, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6654199739947213, 6);
  sqcRYGate(q, -2.803484125777151, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.9250160826786819, 0);
  sqcRYGate(q, 0.9951121301942715, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8686862386666316, 0);
  sqcRYGate(q, -1.2241361967772777, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.24762417599243225, 1);
  sqcRYGate(q, -1.6539861706861878, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.08829182865063334, 1);
  sqcRYGate(q, -2.935708494674271, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0472693629580698, 2);
  sqcRYGate(q, 1.8355073860748083, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.884677550850847, 2);
  sqcRYGate(q, -2.2497341363113983, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.11311176342846468, 3);
  sqcRYGate(q, 0.005481903951896073, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.2005592437220454, 3);
  sqcRYGate(q, 0.8279707519370739, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.7008888973365064, 4);
  sqcRYGate(q, 0.8284129903498135, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.8714045629926237, 4);
  sqcRYGate(q, 1.356969690503293, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.4044964559083875, 5);
  sqcRYGate(q, -0.567585603233475, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.5034487716551688, 5);
  sqcRYGate(q, 0.2999408138840982, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.25304774414441034, 6);
  sqcRYGate(q, -0.7848110932108092, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.5480730946043804, 6);
  sqcRYGate(q, 2.5848575264163713, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7367743182282087, 0);
  sqcRYGate(q, -1.0799081584126906, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.033798907730729, 0);
  sqcRYGate(q, 1.0982220339862856, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2990435256878348, 1);
  sqcRYGate(q, 2.9365814471673684, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8909221233676103, 1);
  sqcRYGate(q, 0.9238682242513159, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2955986729820443, 2);
  sqcRYGate(q, 1.936180509715471, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3316267430034916, 2);
  sqcRYGate(q, 1.9151900697197677, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5564391080065055, 3);
  sqcRYGate(q, -0.8161030701188228, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5630597025976066, 3);
  sqcRYGate(q, -0.29465035257554106, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.2344289840065277, 4);
  sqcRYGate(q, -1.0169891970788187, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9922109580363941, 4);
  sqcRYGate(q, -2.5852330002596293, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.8688202807983436, 5);
  sqcRYGate(q, -1.8129269430920472, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.1250817034402756, 5);
  sqcRYGate(q, -2.4617474731002775, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6530136695608775, 6);
  sqcRYGate(q, -1.4183545313346066, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.765944701467237, 6);
  sqcRYGate(q, 0.7511883734002787, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5891889182757912, 0);
  sqcRYGate(q, 2.8229415093732335, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.07504618588999937, 0);
  sqcRYGate(q, 2.6558518398593067, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0054700284770586, 1);
  sqcRYGate(q, 0.8781782999528023, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7848987651080144, 1);
  sqcRYGate(q, 0.7231930392863816, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7683326211220427, 2);
  sqcRYGate(q, 0.8278698300974271, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.04467039856029914, 2);
  sqcRYGate(q, -0.9449028986592767, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.064665140266299, 3);
  sqcRYGate(q, 1.9368650528181783, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2947469398736295, 3);
  sqcRYGate(q, 1.9195838969407308, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7180320068480627, 4);
  sqcRYGate(q, 0.1978666433284726, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.5775287769272275, 4);
  sqcRYGate(q, 1.1681961411657173, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0147700629790846, 5);
  sqcRYGate(q, -2.668802562317224, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5940390997139922, 5);
  sqcRYGate(q, -3.098791652218236, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.7875316159283441, 6);
  sqcRYGate(q, 2.7176987392548164, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2888792666701985, 6);
  sqcRYGate(q, -1.4105764088578905, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.48849250301695674, 0);
  sqcRYGate(q, -1.7117352043638254, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5708919013139572, 0);
  sqcRYGate(q, -2.834231486026998, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3493899807896579, 1);
  sqcRYGate(q, 2.2892416171179892, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.953333312659937, 1);
  sqcRYGate(q, -2.0403004689513677, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6017599658083825, 2);
  sqcRYGate(q, -1.3574468086124938, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3884476467326392, 2);
  sqcRYGate(q, 2.298339449379535, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6689294816091165, 3);
  sqcRYGate(q, -0.44072596810469106, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.128269679847312, 3);
  sqcRYGate(q, -0.7473112451524712, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5341645362416512, 4);
  sqcRYGate(q, -1.9350765467596576, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.37433352914282, 4);
  sqcRYGate(q, 0.890464227831421, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.20877103739704084, 5);
  sqcRYGate(q, 2.788497804888633, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.1574475320775253, 5);
  sqcRYGate(q, 1.5803515373279353, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.5322335063818997, 6);
  sqcRYGate(q, -3.0217061348260823, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.4660855303041709, 6);
  sqcRYGate(q, 3.0865947172650965, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5560528492351102, 0);
  sqcRYGate(q, 1.8179879908025924, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8759391103981073, 0);
  sqcRYGate(q, -2.3081144592657727, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6229366610543465, 1);
  sqcRYGate(q, -2.424220467181898, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.60084088979705, 1);
  sqcRYGate(q, 2.9506980525002637, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.19178382400620364, 2);
  sqcRYGate(q, -0.9986747364859672, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7246387864470369, 2);
  sqcRYGate(q, 1.4763983426888068, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9236318491751947, 3);
  sqcRYGate(q, -0.26492366187184213, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.1933633670689394, 3);
  sqcRYGate(q, 3.1025112764412963, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.463807057598739, 4);
  sqcRYGate(q, -0.9652714049243316, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7660848352360219, 4);
  sqcRYGate(q, -0.06489584100813665, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9819465929775308, 5);
  sqcRYGate(q, 2.6854315042939607, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5885772579030182, 5);
  sqcRYGate(q, -2.76549676786062, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.15514534210642772, 6);
  sqcRYGate(q, 0.7633324738256446, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0762680350347642, 6);
  sqcRYGate(q, 1.280800604642411, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.159147489883608, 0);
  sqcRYGate(q, 0.9796423659267466, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7211706089590004, 0);
  sqcRYGate(q, 0.08725948138399524, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.010514906838687728, 1);
  sqcRYGate(q, -1.0892898899836743, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0094982449813505, 1);
  sqcRYGate(q, -0.06851277361297024, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.19608631813246247, 2);
  sqcRYGate(q, 0.36843710190688533, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2540626502846175, 2);
  sqcRYGate(q, -1.926701875948495, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0852337081805117, 3);
  sqcRYGate(q, 2.4920882874281807, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9636276829985257, 3);
  sqcRYGate(q, 2.376830777435162, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.43655534630204246, 4);
  sqcRYGate(q, -0.19427316132344022, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5950935088218428, 4);
  sqcRYGate(q, 1.110079492255502, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.6760085959026862, 5);
  sqcRYGate(q, -2.845867885157054, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.3851586734709637, 5);
  sqcRYGate(q, -1.0651815585863997, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.7198672390764793, 6);
  sqcRYGate(q, 0.5192178913828565, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.4482118743102084, 6);
  sqcRYGate(q, -2.0920619470941753, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2605668772267506, 0);
  sqcRYGate(q, -1.2256786508199695, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4314195373757952, 0);
  sqcRYGate(q, 2.327141833272223, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1800908430405377, 1);
  sqcRYGate(q, 1.6709325640372308, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9311236031552843, 1);
  sqcRYGate(q, -1.4791548697904746, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5404169616219896, 2);
  sqcRYGate(q, -0.31821678337273784, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.84679374799622, 2);
  sqcRYGate(q, -2.091263956120566, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0595695819086701, 3);
  sqcRYGate(q, -0.651630316062465, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.1708581387986294, 3);
  sqcRYGate(q, 1.9324218640384365, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.000836547168137, 4);
  sqcRYGate(q, -3.015802208670057, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.278783217910047, 4);
  sqcRYGate(q, -0.8863749705023034, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.7424348165943897, 5);
  sqcRYGate(q, -0.028920067729760746, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.1848352811025835, 5);
  sqcRYGate(q, -2.583956591017917, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.7517672565507595, 6);
  sqcRYGate(q, -2.2367595004728322, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3848211904359458, 6);
  sqcRYGate(q, 1.5931520262660914, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7659010681832903, 0);
  sqcRYGate(q, -2.05044402555771, 1);
  sqcRYGate(q, 0.8743386290857771, 2);
  sqcRYGate(q, 1.24566464592219, 3);
  sqcRYGate(q, -0.47155820614457866, 4);
  sqcRYGate(q, 0.022306163189861172, 5);
  sqcRYGate(q, -2.127602641061749, 6);
  sqcRYGate(q, 1.3226933296524392, 7);

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
