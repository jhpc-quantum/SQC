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

  sqcRYGate(q, -1.1651923968087132, 0);
  sqcRYGate(q, -2.8777391345282566, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3023411644471796, 0);
  sqcRYGate(q, -1.220468430713253, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.822698091649122, 1);
  sqcRYGate(q, 1.1588036166861775, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8512548127153545, 1);
  sqcRYGate(q, -0.22622313079508566, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3338799636380836, 2);
  sqcRYGate(q, 0.4066946153258124, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9436061472681234, 2);
  sqcRYGate(q, -0.23827872078641946, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0376936823711405, 3);
  sqcRYGate(q, -0.21704357933164262, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.3074504926036845, 3);
  sqcRYGate(q, -0.8098750602653746, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.7962415826805422, 4);
  sqcRYGate(q, 2.768766511282266, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6900499353002, 4);
  sqcRYGate(q, -3.14098506285807, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.2574132919111218, 5);
  sqcRYGate(q, -0.4050035333744031, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9128167526587355, 5);
  sqcRYGate(q, -2.91757432974968, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.7778082560545858, 6);
  sqcRYGate(q, 1.2687390014015998, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4655337356411433, 6);
  sqcRYGate(q, -1.415434635639305, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.16899374509305293, 7);
  sqcRYGate(q, -2.837667213155466, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.141513016277039, 7);
  sqcRYGate(q, 3.1410721420421357, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.835747160691778, 8);
  sqcRYGate(q, 0.49742496574884404, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.6996164420516555, 8);
  sqcRYGate(q, -1.8731130481687341, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.7472955453474126, 9);
  sqcRYGate(q, 0.7974033630182465, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.6808520189890155, 9);
  sqcRYGate(q, -2.555851262426925, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.9263302902807999, 10);
  sqcRYGate(q, 3.004050051643421, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.3248439526855291, 10);
  sqcRYGate(q, -2.4522828441304005, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.824733884194739, 0);
  sqcRYGate(q, -3.136978033679051, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3864417607208024, 0);
  sqcRYGate(q, -2.3626257255398015, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0620654425603067, 1);
  sqcRYGate(q, -0.5925902195457464, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9042579630894603, 1);
  sqcRYGate(q, -0.013199575473831437, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.324360645886051, 2);
  sqcRYGate(q, 1.8920785695749287, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.604928002611737, 2);
  sqcRYGate(q, 0.30808756277567895, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5379900423813244, 3);
  sqcRYGate(q, -2.303476413865953, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1405956724320747, 3);
  sqcRYGate(q, 2.865147349684376, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.1073558900245556, 4);
  sqcRYGate(q, -1.6458419662497512, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.7612971851361365, 4);
  sqcRYGate(q, -1.0160945610607255, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7820547749298568, 5);
  sqcRYGate(q, -1.4685357288646421, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.136678763645203, 5);
  sqcRYGate(q, -3.059741104985724, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.8965799464083684, 6);
  sqcRYGate(q, 1.723994226867729, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4884017769144056, 6);
  sqcRYGate(q, 0.045723937490681266, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4653361839023022, 7);
  sqcRYGate(q, -0.35424217353397636, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.1364003334844344, 7);
  sqcRYGate(q, 0.0003348356031978028, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.01114043651785, 8);
  sqcRYGate(q, 1.8099878019357778, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.032954877259593944, 8);
  sqcRYGate(q, 0.8557781295944119, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.09661018427634717, 9);
  sqcRYGate(q, -1.151754878716082, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.6705289155998901, 9);
  sqcRYGate(q, -0.17747035130786626, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.7313253822627725, 10);
  sqcRYGate(q, 0.9049599400833351, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.9152160230955131, 10);
  sqcRYGate(q, 0.13423741866356728, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.4296237618488656, 0);
  sqcRYGate(q, -0.18681803533271096, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5245156762227241, 0);
  sqcRYGate(q, 1.7060649774508763, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7378513031151357, 1);
  sqcRYGate(q, 0.004099125394107617, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4761056775104886, 1);
  sqcRYGate(q, -2.9798961355683704, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.77711638793743, 2);
  sqcRYGate(q, -1.1948398614488438, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9476226307782833, 2);
  sqcRYGate(q, -2.7418270982298067, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3782136886226549, 3);
  sqcRYGate(q, 0.5927650266538707, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.9465121193540653, 3);
  sqcRYGate(q, -3.1373019230540478, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.112630642734194, 4);
  sqcRYGate(q, -0.1129636200071875, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.878328470353405, 4);
  sqcRYGate(q, -0.2719474612160253, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.656085535593906, 5);
  sqcRYGate(q, 1.526589936124172, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.8466401636047522, 5);
  sqcRYGate(q, -0.11391083572857968, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.0184424105444987, 6);
  sqcRYGate(q, 2.639618624664088, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.2887072150041794, 6);
  sqcRYGate(q, 3.036648650794913, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5813989390803247, 7);
  sqcRYGate(q, 0.1904445225840111, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.9713193036674417, 7);
  sqcRYGate(q, -0.0005751467655628062, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.1795865343165324, 8);
  sqcRYGate(q, -0.41245431775700836, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.0871587053858662, 8);
  sqcRYGate(q, 0.8395212678694495, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.9240969489123061, 9);
  sqcRYGate(q, 2.16046558888854, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.4697166391376255, 9);
  sqcRYGate(q, -2.8984065271600405, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5190344370594686, 10);
  sqcRYGate(q, -0.15586434880536526, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.9488021842614875, 10);
  sqcRYGate(q, 0.03607159252759562, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.5182672795590797, 0);
  sqcRYGate(q, 0.47026344281320664, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2323943162333464, 0);
  sqcRYGate(q, -2.7327685891071374, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1410845391756426, 1);
  sqcRYGate(q, 0.5438326610650916, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3645458369605608, 1);
  sqcRYGate(q, -2.6381068072837954, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9043070974781056, 2);
  sqcRYGate(q, 0.17394142665023082, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.139069050778255, 2);
  sqcRYGate(q, -1.936939470809122, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8844850681507231, 3);
  sqcRYGate(q, 1.2823305483008829, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9786348048758202, 3);
  sqcRYGate(q, 0.006032730103218235, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2557320391751645, 4);
  sqcRYGate(q, 1.308275841668511, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.7184956725241234, 4);
  sqcRYGate(q, 0.12271950138489186, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.20614546865700728, 5);
  sqcRYGate(q, -1.7783862346722645, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.4964145039624599, 5);
  sqcRYGate(q, 0.008975265684401023, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.7539513063439126, 6);
  sqcRYGate(q, 1.1543142440669145, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.1411828065248053, 6);
  sqcRYGate(q, 1.644355691779472, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.44426940618292926, 7);
  sqcRYGate(q, 1.9640970415173054, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.7530250994861385, 7);
  sqcRYGate(q, -3.1280354894018876, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.4116459972420645, 8);
  sqcRYGate(q, 0.7390690745067312, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.0691867167164353, 8);
  sqcRYGate(q, 2.7059374416229516, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.1901104997982017, 9);
  sqcRYGate(q, -2.217382753575288, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.4653108687428382, 9);
  sqcRYGate(q, 3.047987649307734, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.824079930633376, 10);
  sqcRYGate(q, -1.1551235228521437, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5910690100448786, 10);
  sqcRYGate(q, -3.141319258580445, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.5311937043247701, 0);
  sqcRYGate(q, 1.789545530684503, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.1701777159486122, 0);
  sqcRYGate(q, 1.8637207638913944, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2293965952705053, 1);
  sqcRYGate(q, 3.036689015850846, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9185297554667322, 1);
  sqcRYGate(q, 1.6501783706206279, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2627239654445896, 2);
  sqcRYGate(q, -0.03287874155979556, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1157111616566033, 2);
  sqcRYGate(q, 0.6649472992588494, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.40429863293017393, 3);
  sqcRYGate(q, -1.7541907855538972, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.202715071199857, 3);
  sqcRYGate(q, -3.110737447967556, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.888437850848311, 4);
  sqcRYGate(q, 0.9667465231612855, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.22860518199072583, 4);
  sqcRYGate(q, -2.568990738760136, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5733670327552085, 5);
  sqcRYGate(q, 1.8569875412992447, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.7915747559373343, 5);
  sqcRYGate(q, -3.1349093500056813, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.606235125767958, 6);
  sqcRYGate(q, 0.35596983970671525, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.053050495353599306, 6);
  sqcRYGate(q, 2.630667419394801, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.014942786479650486, 7);
  sqcRYGate(q, -1.4849397248789746, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.7373431413339508, 7);
  sqcRYGate(q, -1.9986647353787947, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.5063067628740328, 8);
  sqcRYGate(q, -0.2568056887781385, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.678296709338149, 8);
  sqcRYGate(q, 0.0026343283157386904, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.271275060246999, 9);
  sqcRYGate(q, -1.6225490561314473, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.765991425877952, 9);
  sqcRYGate(q, -2.4139907388943405, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.06669042231060904, 10);
  sqcRYGate(q, -0.42550231579919645, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.24742202359037513, 10);
  sqcRYGate(q, 2.596737549437171, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.212299950644698, 0);
  sqcRYGate(q, 1.4782394229648435, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7903257202499718, 0);
  sqcRYGate(q, 0.5464442650520873, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.07583463123982488, 1);
  sqcRYGate(q, -0.829786107071511, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.23241072607658067, 1);
  sqcRYGate(q, -2.4889257000349, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.976115953078933, 2);
  sqcRYGate(q, -0.9959136506977818, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.118540275402659, 2);
  sqcRYGate(q, -0.27587016776838413, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0209788970268385, 3);
  sqcRYGate(q, 2.5432714425975513, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.7027214341076036, 3);
  sqcRYGate(q, 7.153606206810885e-05, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.0899865183628437, 4);
  sqcRYGate(q, 2.7193823625544717, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1007752463138456, 4);
  sqcRYGate(q, -0.9534981682455292, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.205573680796226, 5);
  sqcRYGate(q, -0.8255147825655642, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1387618234472914, 5);
  sqcRYGate(q, 3.1342050194855706, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.049532546119875, 6);
  sqcRYGate(q, 0.8247566395746294, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.02059597033921332, 6);
  sqcRYGate(q, -1.2856311922420511, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6366326668546503, 7);
  sqcRYGate(q, 2.0181536929379003, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.38106036108976493, 7);
  sqcRYGate(q, 2.8476770471075126, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.991456179249761, 8);
  sqcRYGate(q, -2.75810001513583, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.6066764480363567, 8);
  sqcRYGate(q, -0.009647422623699775, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.3045791745158164, 9);
  sqcRYGate(q, 1.1393683941990878, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5790318703460247, 9);
  sqcRYGate(q, 0.5422154890558977, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.9582217959834693, 10);
  sqcRYGate(q, 1.5422026826581714, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.789994227303777, 10);
  sqcRYGate(q, 2.745953990072939, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.5268505603566096, 0);
  sqcRYGate(q, 0.9456088573140953, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4611702195853482, 0);
  sqcRYGate(q, 1.1511636338504934, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0134893697572718, 1);
  sqcRYGate(q, 3.037279938091722, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.844516759502179, 1);
  sqcRYGate(q, -1.0959231606389659, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2545682082326963, 2);
  sqcRYGate(q, -1.0448696197937632, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.0013740982476172642, 2);
  sqcRYGate(q, 3.1217950118438864, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8923211465130187, 3);
  sqcRYGate(q, 0.9723756544332215, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.1746306704625171, 3);
  sqcRYGate(q, 0.08440414804816854, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.8204775995161144, 4);
  sqcRYGate(q, 2.1146466276332685, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6576797420961329, 4);
  sqcRYGate(q, 0.3086874288162971, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.4800995175304997, 5);
  sqcRYGate(q, 3.0899636532162216, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1401711351470727, 5);
  sqcRYGate(q, 0.00018054360904162792, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.47719373206039606, 6);
  sqcRYGate(q, -0.43783149516490577, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7406907841975203, 6);
  sqcRYGate(q, 1.2145335425055375, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.069447001561439, 7);
  sqcRYGate(q, 0.12638133388282605, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.1355163540518514, 7);
  sqcRYGate(q, -3.079134928741346, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.8116523803877382, 8);
  sqcRYGate(q, 2.3097860923272733, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.07859803392309, 8);
  sqcRYGate(q, -3.1376018031406177, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.173257011147824, 9);
  sqcRYGate(q, 2.654371270260553, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.3476248179855176, 9);
  sqcRYGate(q, 0.29739941851213775, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.20503272766585562, 10);
  sqcRYGate(q, 0.9342165928285289, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.940036742866161, 10);
  sqcRYGate(q, -2.1194185589256502, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.7143874128046503, 0);
  sqcRYGate(q, 1.3740180350260618, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.041798970689203, 0);
  sqcRYGate(q, -2.6786303708879, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6667121975084234, 1);
  sqcRYGate(q, -2.4495216483266105, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2497885289563984, 1);
  sqcRYGate(q, -0.6267423428180563, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.18123549504541273, 2);
  sqcRYGate(q, -0.6401987415989074, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1330977350219094, 2);
  sqcRYGate(q, -3.0642287859456094, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2737039930580463, 3);
  sqcRYGate(q, -2.0274021506342916, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.2078799172297001, 3);
  sqcRYGate(q, -0.07668346563683226, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.7986984113202533, 4);
  sqcRYGate(q, 1.5638633253987955, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.06412132968678037, 4);
  sqcRYGate(q, -2.316469172758763, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.40659816743244265, 5);
  sqcRYGate(q, 1.2483054243445024, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.0029556713844884675, 5);
  sqcRYGate(q, 3.132738602300523, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.59190213363818, 6);
  sqcRYGate(q, -0.12097725692537681, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4304103036986366, 6);
  sqcRYGate(q, -0.5671149944383966, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5227647184233755, 7);
  sqcRYGate(q, -1.8578095240570387, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.2527497051284203, 7);
  sqcRYGate(q, -2.041311982307989, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.155470845567054, 8);
  sqcRYGate(q, 1.0479930097078523, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.629264583042184, 8);
  sqcRYGate(q, -1.083910315641523, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.38058067891661734, 9);
  sqcRYGate(q, 2.4667575886165585, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.4777528811623473, 9);
  sqcRYGate(q, 0.006351360321297683, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.313321953936355, 10);
  sqcRYGate(q, 2.8976501374002495, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.9731872197165217, 10);
  sqcRYGate(q, -0.22597122110719337, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.2945791674841127, 0);
  sqcRYGate(q, 2.858434516396647, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.36208611192512363, 0);
  sqcRYGate(q, 1.6563698403080203, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9306249065268748, 1);
  sqcRYGate(q, -1.526952033186027, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.050209821865415, 1);
  sqcRYGate(q, -2.630900042370504, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.355895896765849, 2);
  sqcRYGate(q, -0.9401542825564121, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.002544149710717, 2);
  sqcRYGate(q, -1.1010675242610528, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4666549967874583, 3);
  sqcRYGate(q, 1.2808793453903724, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.131687664985941, 3);
  sqcRYGate(q, -0.07794996277062101, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.7261766253305644, 4);
  sqcRYGate(q, -1.0016943491453745, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.44635540282332126, 4);
  sqcRYGate(q, 2.457204002609644, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4834452441782018, 5);
  sqcRYGate(q, -0.9258673072854857, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.013473338862058704, 5);
  sqcRYGate(q, -0.06728589356723831, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.1735841350977063, 6);
  sqcRYGate(q, 1.1402751390482908, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.131148957311577, 6);
  sqcRYGate(q, 0.8658940208191603, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.18834946430820312, 7);
  sqcRYGate(q, 1.420867527394721, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.24104057352161234, 7);
  sqcRYGate(q, 0.05683118138153561, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.11296099752641897, 8);
  sqcRYGate(q, -0.022465699598583022, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.07497849211413081, 8);
  sqcRYGate(q, -1.6093530439483636, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.8139722152468076, 9);
  sqcRYGate(q, 0.4375657788946494, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.8762121338827111, 9);
  sqcRYGate(q, -0.06205374325170432, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.8214919452484037, 10);
  sqcRYGate(q, 1.823352819623274, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.2209290134843701, 10);
  sqcRYGate(q, 1.7468687031280665, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.0105240915827682, 0);
  sqcRYGate(q, 1.5949419683681085, 1);
  sqcRYGate(q, -1.2039662534136675, 2);
  sqcRYGate(q, -0.5954701279697058, 3);
  sqcRYGate(q, 1.4546242798568174, 4);
  sqcRYGate(q, 3.0977809043547504, 5);
  sqcRYGate(q, 0.09113994024793914, 6);
  sqcRYGate(q, 2.857400904459744, 7);
  sqcRYGate(q, 0.15754988041359133, 8);
  sqcRYGate(q, 1.2880261487675382, 9);
  sqcRYGate(q, -1.3927840471006938, 10);
  sqcRYGate(q, -0.22800011612098997, 11);

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
