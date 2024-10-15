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

  sqcRYGate(q, -1.6296513273783828, 0);
  sqcRYGate(q, 0.6451475438656947, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.978114373130622, 0);
  sqcRYGate(q, -1.7082513760283424, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7988979794990511, 1);
  sqcRYGate(q, -2.743683570436943, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0293616930147356, 1);
  sqcRYGate(q, -1.9666832053338394, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3979311428180676, 2);
  sqcRYGate(q, -0.6726661633094942, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3932091963343993, 2);
  sqcRYGate(q, 0.35437125191826707, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9890189416050426, 0);
  sqcRYGate(q, 1.7784208244984923, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1981345642069856, 0);
  sqcRYGate(q, 0.4084068969186732, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.137627855441254, 1);
  sqcRYGate(q, 0.30299153572315074, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9314016546117228, 1);
  sqcRYGate(q, 1.1986024316850479, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.627506529818963, 2);
  sqcRYGate(q, 2.6375261007576336, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.13465956096173404, 2);
  sqcRYGate(q, 2.5267994112354804, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.167513605380649, 0);
  sqcRYGate(q, -1.2501200404804562, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5287039808683764, 0);
  sqcRYGate(q, 3.122755252712388, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5627490261415944, 1);
  sqcRYGate(q, 1.5004952954291595, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0274377190285726, 1);
  sqcRYGate(q, 2.6204487337068696, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2253221890225394, 2);
  sqcRYGate(q, -2.124022300339132, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6609841289671438, 2);
  sqcRYGate(q, -1.5267995085950425, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8660085523073935, 0);
  sqcRYGate(q, 1.5398790033771377, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1467439252563163, 0);
  sqcRYGate(q, -2.031257123568351, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0229519924092134, 1);
  sqcRYGate(q, 0.9366882779649988, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.47230998336775065, 1);
  sqcRYGate(q, -1.5989094644094024, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.553740906542435, 2);
  sqcRYGate(q, 2.449402255715994, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9542180018531145, 2);
  sqcRYGate(q, 3.1285751370030144, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4197609277670775, 0);
  sqcRYGate(q, 1.614913768463031, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1128406066436716, 0);
  sqcRYGate(q, -1.66788103973922, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7973882405938997, 1);
  sqcRYGate(q, -1.6484231349653715, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.23223710090380845, 1);
  sqcRYGate(q, -1.443186394997746, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4020108649295517, 2);
  sqcRYGate(q, 1.486104514003662, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3208667732866042, 2);
  sqcRYGate(q, -1.7005242363838553, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.22436370387782756, 0);
  sqcRYGate(q, -0.6459332294040957, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.319806563182174, 0);
  sqcRYGate(q, 1.9547828620838956, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.28325343333128, 1);
  sqcRYGate(q, 2.2624992588206156, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5656953404499543, 1);
  sqcRYGate(q, -1.429089220958141, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0240396018726043, 2);
  sqcRYGate(q, -0.2244554140221063, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.364602632238287, 2);
  sqcRYGate(q, 3.1261743391356314, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4881757696908822, 0);
  sqcRYGate(q, 2.9844237900150077, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5029756126316713, 0);
  sqcRYGate(q, 2.3012458589331404, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.99858636175456, 1);
  sqcRYGate(q, 0.7272806172704294, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.604296943651538, 1);
  sqcRYGate(q, -3.029848168792949, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8383853492133517, 2);
  sqcRYGate(q, -0.23038819285967352, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4885307402761292, 2);
  sqcRYGate(q, 1.1536523092983961, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.44732797911337396, 0);
  sqcRYGate(q, 1.2624794754757394, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2669269427949741, 0);
  sqcRYGate(q, 1.3977757240717912, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4266768957626323, 1);
  sqcRYGate(q, 2.7434739834909982, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9485030740535323, 1);
  sqcRYGate(q, 2.6519494333096105, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.627717305531184, 2);
  sqcRYGate(q, 2.8431674597493806, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2526724013672572, 2);
  sqcRYGate(q, 2.94513779244521, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.465377701118423, 0);
  sqcRYGate(q, 1.5301070708202298, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.952372711588308, 0);
  sqcRYGate(q, -0.2805693601013012, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1498478726098842, 1);
  sqcRYGate(q, -2.070524064852587, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.488619963406764, 1);
  sqcRYGate(q, 0.6779242689204237, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0425992550131071, 2);
  sqcRYGate(q, 2.655735799986485, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7459383801106245, 2);
  sqcRYGate(q, -1.5355206311472323, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5484492046439868, 0);
  sqcRYGate(q, -0.8146979096655077, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3019882557141513, 0);
  sqcRYGate(q, -1.9435397424941376, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.953907374713795, 1);
  sqcRYGate(q, 2.079962265616755, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8043727256678697, 1);
  sqcRYGate(q, 2.3773456161326947, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.48019609712659506, 2);
  sqcRYGate(q, 2.6921918155635725, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.720325252080116, 2);
  sqcRYGate(q, 1.5581749224290133, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1824159116856385, 0);
  sqcRYGate(q, 2.853675209382684, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.549348319583796, 0);
  sqcRYGate(q, -2.802515305453524, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.819145493658785, 1);
  sqcRYGate(q, 3.1112167463051743, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.93963682779423, 1);
  sqcRYGate(q, 1.7858755248925418, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.910760838463696, 2);
  sqcRYGate(q, -2.810855853751035, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8528261783621485, 2);
  sqcRYGate(q, 0.511919799949121, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7168849630486562, 0);
  sqcRYGate(q, 0.355234865566727, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9726836137466777, 0);
  sqcRYGate(q, 1.6221169337783632, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8643184495426968, 1);
  sqcRYGate(q, 1.7742489033636808, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2959713650760667, 1);
  sqcRYGate(q, -2.348788356852573, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.07516398003485326, 2);
  sqcRYGate(q, -1.928540911737501, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7949859258751792, 2);
  sqcRYGate(q, -1.9044391236275802, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.565312647527738, 0);
  sqcRYGate(q, -1.614968761219398, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.36025948284106835, 0);
  sqcRYGate(q, -0.17027522372598725, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.940410502748989, 1);
  sqcRYGate(q, 2.080975443038575, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.18617244595103083, 1);
  sqcRYGate(q, -0.9915205017162294, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.44454064613376953, 2);
  sqcRYGate(q, 1.856067718912492, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2740519707482865, 2);
  sqcRYGate(q, 0.8527271796750329, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3325423214622205, 0);
  sqcRYGate(q, 0.8620200268006748, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1547386889139197, 0);
  sqcRYGate(q, 0.9283350675993615, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.629152097567852, 1);
  sqcRYGate(q, 1.0257090213333573, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6406567308012483, 1);
  sqcRYGate(q, 2.403257703702872, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3083303294526143, 2);
  sqcRYGate(q, 3.064913173862035, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.026456002879934926, 2);
  sqcRYGate(q, 2.652164647402576, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0982719777750436, 0);
  sqcRYGate(q, -2.0096320350567645, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3303128755984006, 0);
  sqcRYGate(q, 1.8383916948596744, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6903857077463407, 1);
  sqcRYGate(q, -2.902269385306447, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.06541652895214374, 1);
  sqcRYGate(q, -1.9156227073140695, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4281830453229416, 2);
  sqcRYGate(q, -1.2564807059445402, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5747689857839795, 2);
  sqcRYGate(q, 1.8726280015683179, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6718911988995258, 0);
  sqcRYGate(q, -2.823224623154023, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.343618608845827, 0);
  sqcRYGate(q, 0.2473709664577094, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9152021234360768, 1);
  sqcRYGate(q, -2.639840596985361, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1337333383747406, 1);
  sqcRYGate(q, -2.942537807185404, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.180923695551948, 2);
  sqcRYGate(q, 0.8444127171030579, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6709125931030286, 2);
  sqcRYGate(q, -1.7691184744483222, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7637662079138154, 0);
  sqcRYGate(q, -0.7312801957121345, 1);
  sqcRYGate(q, 0.43273039193763907, 2);
  sqcRYGate(q, -0.07041525377345437, 3);

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
