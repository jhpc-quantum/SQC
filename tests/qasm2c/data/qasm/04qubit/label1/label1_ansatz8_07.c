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

  sqcRYGate(q, -1.299825142574775, 0);
  sqcRYGate(q, -0.453526194862706, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9186838004240446, 0);
  sqcRYGate(q, 2.3523044447039023, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6143344716423675, 2);
  sqcRYGate(q, -2.900766943132437, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2561856699718543, 2);
  sqcRYGate(q, -2.8739709704416128, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0330485849603583, 0);
  sqcRYGate(q, 1.4337315916319404, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.071869315940513, 0);
  sqcRYGate(q, 1.4771892569764804, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.43028058665563323, 1);
  sqcRYGate(q, 1.1861512185165277, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8688037358235239, 1);
  sqcRYGate(q, 1.7496118164576964, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9970228684399336, 0);
  sqcRYGate(q, -2.8155143129657403, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7107534188175426, 0);
  sqcRYGate(q, 1.5705304427574118, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.246632516443407, 2);
  sqcRYGate(q, 2.852452915979453, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.548682728381902, 2);
  sqcRYGate(q, 1.953977357450089, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.297258138612922, 0);
  sqcRYGate(q, 2.349239088315594, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9788620738142244, 0);
  sqcRYGate(q, -0.3879390082598659, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7930023838392998, 1);
  sqcRYGate(q, -0.4168354697464372, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8924804671954054, 1);
  sqcRYGate(q, -0.5313997388632918, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7920002384642375, 0);
  sqcRYGate(q, -1.5928260084910923, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2449780153159118, 0);
  sqcRYGate(q, 2.473237160219164, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.492494062940308, 2);
  sqcRYGate(q, -0.21462391793622349, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8799172288056933, 2);
  sqcRYGate(q, -1.4416086561332389, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5981226653175384, 0);
  sqcRYGate(q, -0.6495520249563702, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6490211982111731, 0);
  sqcRYGate(q, 0.5571116811493049, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.494641551986306, 1);
  sqcRYGate(q, 2.072975580422138, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.2266867631707585, 1);
  sqcRYGate(q, -1.840192700083332, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8370525681975536, 0);
  sqcRYGate(q, -2.9799637842101423, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3126215535596546, 0);
  sqcRYGate(q, 0.08233582682316687, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1082477241851696, 2);
  sqcRYGate(q, 3.0489667628490302, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7259526295622931, 2);
  sqcRYGate(q, -1.7760895456138666, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.357813969497455, 0);
  sqcRYGate(q, -0.564137899663157, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.427611852574863, 0);
  sqcRYGate(q, -1.0365730234674224, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.017242882229349, 1);
  sqcRYGate(q, 0.5354091588000882, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.688645678837855, 1);
  sqcRYGate(q, 2.408128799365512, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0283650730570404, 0);
  sqcRYGate(q, -2.9804421966906394, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7846614042331534, 0);
  sqcRYGate(q, 0.44836177436741426, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5519973964436746, 2);
  sqcRYGate(q, -1.9389228715293676, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.058834033728954, 2);
  sqcRYGate(q, -1.6711017927264482, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2972408023619761, 0);
  sqcRYGate(q, 2.3678038165635815, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2361241160777, 0);
  sqcRYGate(q, 0.7003501874689242, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5259099651564743, 1);
  sqcRYGate(q, 2.5396869000366626, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1528795443121156, 1);
  sqcRYGate(q, -3.051123194497921, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.653536966323477, 0);
  sqcRYGate(q, -2.2224624386364855, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8031790367847895, 0);
  sqcRYGate(q, 0.7715011950837889, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6546912874545088, 2);
  sqcRYGate(q, 2.5877240672881094, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5321402157361641, 2);
  sqcRYGate(q, 0.6028609479015463, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.20693434892919, 0);
  sqcRYGate(q, -0.9501560825041739, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.40712869086695136, 0);
  sqcRYGate(q, 2.301687773070737, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5290845301361458, 1);
  sqcRYGate(q, 1.2108018370074154, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4337333327993915, 1);
  sqcRYGate(q, -2.4411980106524953, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0219782585636432, 0);
  sqcRYGate(q, 2.8623731026496366, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1844569983131965, 0);
  sqcRYGate(q, -1.6825182411670712, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.10648986034194245, 2);
  sqcRYGate(q, -0.1342687935952868, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.343952038902184, 2);
  sqcRYGate(q, 2.091288604541373, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2873625676539917, 0);
  sqcRYGate(q, -2.5557319212285314, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5221511741416147, 0);
  sqcRYGate(q, 0.2929639836003234, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.921508808431181, 1);
  sqcRYGate(q, 1.8051986141618812, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7063046408606709, 1);
  sqcRYGate(q, -1.587724803193835, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7912774306618253, 0);
  sqcRYGate(q, -2.1594079791002683, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4810312705914921, 0);
  sqcRYGate(q, 0.05808323876825038, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6311610641234524, 2);
  sqcRYGate(q, 2.700340094984163, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.124728257334211, 2);
  sqcRYGate(q, 2.5662403341898665, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.27773035395493206, 0);
  sqcRYGate(q, 1.9350382734530722, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.3895869910524843, 0);
  sqcRYGate(q, -2.3406819487627613, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8810437715527941, 1);
  sqcRYGate(q, -1.7671374132327387, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8711575869698875, 1);
  sqcRYGate(q, -1.137833594612945, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8964889472503628, 0);
  sqcRYGate(q, -1.2877963869666906, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7656893866800671, 0);
  sqcRYGate(q, 1.1259286777108564, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.15213094186526632, 2);
  sqcRYGate(q, -1.1489740124637131, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0312486482642207, 2);
  sqcRYGate(q, 2.630959467424881, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6840509035097817, 0);
  sqcRYGate(q, 1.7388565602063755, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1014748178079694, 0);
  sqcRYGate(q, -0.024307751009702727, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.9787942373174365, 1);
  sqcRYGate(q, -1.2219773101129956, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.162527695664083, 1);
  sqcRYGate(q, -1.994574434646139, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7992224632597296, 0);
  sqcRYGate(q, -0.5806194805026497, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6929614883555664, 0);
  sqcRYGate(q, -0.638727016015455, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.565614313969592, 2);
  sqcRYGate(q, 0.8157819084864054, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7862230839473369, 2);
  sqcRYGate(q, 2.757186785432756, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5360726601698207, 0);
  sqcRYGate(q, 1.4644945926953292, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.808921849743893, 0);
  sqcRYGate(q, -2.762835916288919, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.218381591297664, 1);
  sqcRYGate(q, 2.43427153444515, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6241340154254507, 1);
  sqcRYGate(q, -0.984967254719604, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.06203390183368817, 0);
  sqcRYGate(q, 1.3402279324510107, 1);
  sqcRYGate(q, 2.5678592599325767, 2);
  sqcRYGate(q, 0.6007665938218786, 3);

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
