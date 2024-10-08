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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, -1.605608896188521, 0);
  sqcRZGate(q, 0.3836500576769647, 0);
  sqcRYGate(q, 0.45228364524046855, 1);
  sqcRZGate(q, -1.5327893368209697, 1);
  sqcRYGate(q, 1.6388210679275208, 2);
  sqcRZGate(q, -1.5731470401305108, 2);
  sqcRYGate(q, 0.3193397806465961, 3);
  sqcRZGate(q, 1.3776494682227867, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.5403493030266233, 0);
  sqcRZGate(q, -0.34711732983164456, 0);
  sqcRYGate(q, -1.998027637695089, 1);
  sqcRZGate(q, -0.8179884134403005, 1);
  sqcRYGate(q, -0.7890029037608146, 2);
  sqcRZGate(q, 1.6878910709840502, 2);
  sqcRYGate(q, 3.0903422135688867, 3);
  sqcRZGate(q, -1.607887233929831, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.209677421411663, 0);
  sqcRZGate(q, 0.7601065660007577, 0);
  sqcRYGate(q, -0.47974402277554784, 1);
  sqcRZGate(q, 2.412719141093015, 1);
  sqcRYGate(q, -2.2340602009123214, 2);
  sqcRZGate(q, 0.8711172788347653, 2);
  sqcRYGate(q, 0.007799037699645176, 3);
  sqcRZGate(q, 2.020809911800416, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.109434195276763, 0);
  sqcRZGate(q, 1.3076143987380549, 0);
  sqcRYGate(q, 1.3977698435089652, 1);
  sqcRZGate(q, 2.6084016348324366, 1);
  sqcRYGate(q, -1.9775106514653817, 2);
  sqcRZGate(q, 0.5865233891700492, 2);
  sqcRYGate(q, 1.3568899685292122, 3);
  sqcRZGate(q, -2.385175472818845, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.0840108000190065, 0);
  sqcRZGate(q, 2.3893069297129106, 0);
  sqcRYGate(q, 0.977200158022539, 1);
  sqcRZGate(q, 1.3998416426803393, 1);
  sqcRYGate(q, 1.84282524693856, 2);
  sqcRZGate(q, 0.010314068666014364, 2);
  sqcRYGate(q, 0.43611318001392724, 3);
  sqcRZGate(q, -1.2111608122477096, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.9862349683033185, 0);
  sqcRZGate(q, 2.0930720296978587, 0);
  sqcRYGate(q, 0.40580767510813126, 1);
  sqcRZGate(q, 0.9271272403929616, 1);
  sqcRYGate(q, -1.8237906395936916, 2);
  sqcRZGate(q, 0.3976023041570694, 2);
  sqcRYGate(q, -0.9292176487661113, 3);
  sqcRZGate(q, 1.4482526137070186, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.41311869970383497, 0);
  sqcRZGate(q, -3.006378173643874, 0);
  sqcRYGate(q, -1.9582016412891383, 1);
  sqcRZGate(q, -2.3463586649517962, 1);
  sqcRYGate(q, 2.1042966941278474, 2);
  sqcRZGate(q, -2.0099668033087967, 2);
  sqcRYGate(q, 1.2504201913374537, 3);
  sqcRZGate(q, -2.428016890427626, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.33233044026488195, 0);
  sqcRZGate(q, 0.8257085732670965, 0);
  sqcRYGate(q, 0.4545927098327182, 1);
  sqcRZGate(q, -1.308565256005168, 1);
  sqcRYGate(q, -1.166556090412315, 2);
  sqcRZGate(q, 1.3269348997606052, 2);
  sqcRYGate(q, -0.5506945017639344, 3);
  sqcRZGate(q, 2.653594723385104, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.9381880399408439, 0);
  sqcRZGate(q, -1.9556061760859536, 0);
  sqcRYGate(q, -0.6433471020290499, 1);
  sqcRZGate(q, 2.5721117339658583, 1);
  sqcRYGate(q, 1.6093045919894253, 2);
  sqcRZGate(q, -2.258255568283497, 2);
  sqcRYGate(q, -2.539193123351451, 3);
  sqcRZGate(q, 2.1853797465736875, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.3169986192252536, 0);
  sqcRZGate(q, 0.8404936729037171, 0);
  sqcRYGate(q, 2.7735454645216073, 1);
  sqcRZGate(q, -1.7938429932615696, 1);
  sqcRYGate(q, 0.02029957652786447, 2);
  sqcRZGate(q, -1.4745632749213604, 2);
  sqcRYGate(q, -2.292314967080687, 3);
  sqcRZGate(q, 0.13791320819443875, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.7839914044230634, 0);
  sqcRZGate(q, -1.4956270492338624, 0);
  sqcRYGate(q, 1.3720977318515117, 1);
  sqcRZGate(q, -3.04799539412652, 1);
  sqcRYGate(q, 0.15240636245650305, 2);
  sqcRZGate(q, 0.7321844751587074, 2);
  sqcRYGate(q, 2.84304867142204, 3);
  sqcRZGate(q, 1.7361457248539462, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.723975703234896, 0);
  sqcRZGate(q, -3.133390839330928, 0);
  sqcRYGate(q, 1.2153694545216303, 1);
  sqcRZGate(q, -1.1249896473183734, 1);
  sqcRYGate(q, -2.838103968018544, 2);
  sqcRZGate(q, 2.9992893211785687, 2);
  sqcRYGate(q, 0.5994309207589471, 3);
  sqcRZGate(q, 1.3617569345846423, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.119084995950066, 0);
  sqcRZGate(q, 1.7117626872403202, 0);
  sqcRYGate(q, -0.9782375434995094, 1);
  sqcRZGate(q, -0.3938213134502356, 1);
  sqcRYGate(q, -1.1748399768828433, 2);
  sqcRZGate(q, -1.8569686447826577, 2);
  sqcRYGate(q, 1.0287934178602824, 3);
  sqcRZGate(q, -2.4106940674650406, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.7364228902027466, 0);
  sqcRZGate(q, -1.5649447596054986, 0);
  sqcRYGate(q, 1.7943481650360096, 1);
  sqcRZGate(q, -2.4160733544908406, 1);
  sqcRYGate(q, 0.16736700871379373, 2);
  sqcRZGate(q, 2.2631895807980333, 2);
  sqcRYGate(q, 1.130066305496276, 3);
  sqcRZGate(q, 1.2080466606263314, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.7297203075508039, 0);
  sqcRZGate(q, 3.115054428143199, 0);
  sqcRYGate(q, -1.0569613124223078, 1);
  sqcRZGate(q, 0.8582765731834596, 1);
  sqcRYGate(q, 1.723166938468438, 2);
  sqcRZGate(q, 3.0143007565145346, 2);
  sqcRYGate(q, -0.36006100373424904, 3);
  sqcRZGate(q, 2.5955758912424636, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.0690972945934103, 0);
  sqcRZGate(q, 1.164585189767848, 0);
  sqcRYGate(q, 1.0492774431653036, 1);
  sqcRZGate(q, -1.2022815986496491, 1);
  sqcRYGate(q, 0.13871300701987446, 2);
  sqcRZGate(q, -2.0320811458989647, 2);
  sqcRYGate(q, -1.6084526766174978, 3);
  sqcRZGate(q, -0.2972489090570445, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.5841358199692155, 0);
  sqcRZGate(q, -2.179625419012281, 0);
  sqcRYGate(q, -0.39363602422850014, 1);
  sqcRZGate(q, -2.2837045774442504, 1);
  sqcRYGate(q, -0.6033145271229907, 2);
  sqcRZGate(q, 0.8452450515346549, 2);
  sqcRYGate(q, 3.1007855642797013, 3);
  sqcRZGate(q, -2.980958308484525, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.476360564155893, 0);
  sqcRZGate(q, -2.9387759359473127, 0);
  sqcRYGate(q, 1.668250431934918, 1);
  sqcRZGate(q, -0.9453236122285301, 1);
  sqcRYGate(q, 1.815277106944694, 2);
  sqcRZGate(q, 2.5937657277543096, 2);
  sqcRYGate(q, 2.5632624828255954, 3);
  sqcRZGate(q, 1.0273322476745657, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.8279322897743306, 0);
  sqcRZGate(q, 0.03551897159783301, 0);
  sqcRYGate(q, -0.3022210292569536, 1);
  sqcRZGate(q, 1.1117066535469147, 1);
  sqcRYGate(q, 1.3424604875385695, 2);
  sqcRZGate(q, 0.9984916459426779, 2);
  sqcRYGate(q, 0.9944029557552391, 3);
  sqcRZGate(q, -1.2313239729150007, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.8458489592824623, 0);
  sqcRZGate(q, 2.9203395795146974, 0);
  sqcRYGate(q, -1.0638240174851266, 1);
  sqcRZGate(q, -1.1940525851018702, 1);
  sqcRYGate(q, -0.6702975037666968, 2);
  sqcRZGate(q, 0.6195713301843329, 2);
  sqcRYGate(q, -1.0259508023820942, 3);
  sqcRZGate(q, 2.9770657026167937, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.6441391980131772, 0);
  sqcRZGate(q, 0.22080318128609053, 0);
  sqcRYGate(q, 1.4236172688317676, 1);
  sqcRZGate(q, 0.9895091465138641, 1);
  sqcRYGate(q, -1.6256528485606667, 2);
  sqcRZGate(q, -1.2252729567269054, 2);
  sqcRYGate(q, -2.848380897049424, 3);
  sqcRZGate(q, 2.9804476786057177, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.679476356129566, 0);
  sqcRZGate(q, 0.8931555372975007, 0);
  sqcRYGate(q, -1.0260969379163825, 1);
  sqcRZGate(q, 2.416282090290752, 1);
  sqcRYGate(q, -0.4302545800373151, 2);
  sqcRZGate(q, -1.091969742468922, 2);
  sqcRYGate(q, -2.47972622528969, 3);
  sqcRZGate(q, -0.980543190276965, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.8531957658179303, 0);
  sqcRZGate(q, 1.8904049124498838, 0);
  sqcRYGate(q, 2.0880966931617277, 1);
  sqcRZGate(q, 0.80473942655843, 1);
  sqcRYGate(q, -2.8353378385637127, 2);
  sqcRZGate(q, 2.5154932930304756, 2);
  sqcRYGate(q, 0.0922127051927973, 3);
  sqcRZGate(q, 2.271024224983384, 3);

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
