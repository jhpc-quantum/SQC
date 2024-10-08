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

  sqcRYGate(q, 0.8673456105063586, 0);
  sqcRZGate(q, 1.151155089759846, 0);
  sqcRYGate(q, 2.466941326568979, 1);
  sqcRZGate(q, -0.30310368932468895, 1);
  sqcRYGate(q, -2.8575390827702347, 2);
  sqcRZGate(q, 2.1695650749640487, 2);
  sqcRYGate(q, 1.8553605015790868, 3);
  sqcRZGate(q, -2.2753257725389817, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.9087646035200421, 0);
  sqcRZGate(q, 1.781366318276759, 0);
  sqcRYGate(q, 1.117357226212702, 1);
  sqcRZGate(q, 0.2471256651469007, 1);
  sqcRYGate(q, -2.1331579924346302, 2);
  sqcRZGate(q, 2.671406149197215, 2);
  sqcRYGate(q, -2.1826251985451175, 3);
  sqcRZGate(q, -2.5031066961547253, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.98104850904136, 0);
  sqcRZGate(q, -2.486733926412135, 0);
  sqcRYGate(q, 1.621112022359472, 1);
  sqcRZGate(q, 0.25044425484145, 1);
  sqcRYGate(q, -1.216328796160145, 2);
  sqcRZGate(q, 0.26033707776252335, 2);
  sqcRYGate(q, 2.4171597505351308, 3);
  sqcRZGate(q, 0.6007048949838092, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.77774743545652, 0);
  sqcRZGate(q, 1.6028793419963447, 0);
  sqcRYGate(q, -0.1885889859971247, 1);
  sqcRZGate(q, 1.970420693950013, 1);
  sqcRYGate(q, 1.8577181611620839, 2);
  sqcRZGate(q, 0.5568566845154573, 2);
  sqcRYGate(q, 1.4168393377619721, 3);
  sqcRZGate(q, -0.31965189067498057, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.059050135941295, 0);
  sqcRZGate(q, -2.689962292850567, 0);
  sqcRYGate(q, 0.8909196463649711, 1);
  sqcRZGate(q, -2.674697208443028, 1);
  sqcRYGate(q, 2.566231045077244, 2);
  sqcRZGate(q, -2.45005310598235, 2);
  sqcRYGate(q, -3.1229531546777696, 3);
  sqcRZGate(q, -1.8722004769531404, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.247002821494121, 0);
  sqcRZGate(q, -1.0290513715406164, 0);
  sqcRYGate(q, -2.2663114632237837, 1);
  sqcRZGate(q, 0.8543479529190713, 1);
  sqcRYGate(q, 0.7715867576308473, 2);
  sqcRZGate(q, 3.0664780616541, 2);
  sqcRYGate(q, 2.2002267857575557, 3);
  sqcRZGate(q, 1.5678259142473747, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.8000998650619788, 0);
  sqcRZGate(q, -1.1347993908881637, 0);
  sqcRYGate(q, -0.35572768950127426, 1);
  sqcRZGate(q, 1.9117636854580562, 1);
  sqcRYGate(q, 1.9993302950501084, 2);
  sqcRZGate(q, -2.4550871097110685, 2);
  sqcRYGate(q, 1.004665209701961, 3);
  sqcRZGate(q, 0.578606562676275, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.703705316841904, 0);
  sqcRZGate(q, 1.2606079297529704, 0);
  sqcRYGate(q, -0.05448505110442349, 1);
  sqcRZGate(q, -1.8946525692826355, 1);
  sqcRYGate(q, -1.0382191948423944, 2);
  sqcRZGate(q, -1.696249663095569, 2);
  sqcRYGate(q, 0.44587618168433335, 3);
  sqcRZGate(q, 2.6867773272217477, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.4136392349408085, 0);
  sqcRZGate(q, 2.6970570031244594, 0);
  sqcRYGate(q, -2.366214332008672, 1);
  sqcRZGate(q, 1.0837140243185173, 1);
  sqcRYGate(q, -0.8587196528934133, 2);
  sqcRZGate(q, 0.6342797701085658, 2);
  sqcRYGate(q, -2.1959502680443324, 3);
  sqcRZGate(q, 0.21373953969017911, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.4824730932149577, 0);
  sqcRZGate(q, 1.57910745373874, 0);
  sqcRYGate(q, -0.4527832149607427, 1);
  sqcRZGate(q, 0.6779929172896049, 1);
  sqcRYGate(q, -2.277221208983502, 2);
  sqcRZGate(q, -1.8189482866738675, 2);
  sqcRYGate(q, 0.3539032152484284, 3);
  sqcRZGate(q, -0.2237795608700985, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.6697167507936888, 0);
  sqcRZGate(q, -2.4317438610783575, 0);
  sqcRYGate(q, 0.17420357968565536, 1);
  sqcRZGate(q, 0.21885788323646513, 1);
  sqcRYGate(q, -1.5920338180788125, 2);
  sqcRZGate(q, -0.659416761884213, 2);
  sqcRYGate(q, 1.3209560208464586, 3);
  sqcRZGate(q, 1.3445495692841554, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.6606033190464893, 0);
  sqcRZGate(q, 2.4190795238998497, 0);
  sqcRYGate(q, -0.6813939115310843, 1);
  sqcRZGate(q, -0.788981613383544, 1);
  sqcRYGate(q, -0.5090914665305598, 2);
  sqcRZGate(q, 2.8471815343997227, 2);
  sqcRYGate(q, 0.539547492409139, 3);
  sqcRZGate(q, 1.1107300312686545, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.6584237058501552, 0);
  sqcRZGate(q, 1.9536351808904902, 0);
  sqcRYGate(q, 0.7647643232840231, 1);
  sqcRZGate(q, 2.7781471417615036, 1);
  sqcRYGate(q, 2.8526117154174644, 2);
  sqcRZGate(q, 1.693033544624404, 2);
  sqcRYGate(q, 0.612950852949659, 3);
  sqcRZGate(q, 0.19220106729538955, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.17917032972956726, 0);
  sqcRZGate(q, -0.6429961433121582, 0);
  sqcRYGate(q, 1.6874830887791548, 1);
  sqcRZGate(q, 0.5742877985276928, 1);
  sqcRYGate(q, 0.49801483977244837, 2);
  sqcRZGate(q, 2.7810711683220712, 2);
  sqcRYGate(q, -1.3616179204140109, 3);
  sqcRZGate(q, 1.842634957169551, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.8669004923103316, 0);
  sqcRZGate(q, 0.8179874769029443, 0);
  sqcRYGate(q, -1.3580818254302311, 1);
  sqcRZGate(q, 1.9873424648049736, 1);
  sqcRYGate(q, -0.4272665390009451, 2);
  sqcRZGate(q, 1.638970761248805, 2);
  sqcRYGate(q, 2.485620537631705, 3);
  sqcRZGate(q, -1.3735433124798784, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.0029163439194377, 0);
  sqcRZGate(q, -2.492974828678192, 0);
  sqcRYGate(q, -2.2570893378267733, 1);
  sqcRZGate(q, -2.1370706437769016, 1);
  sqcRYGate(q, -2.796906714713087, 2);
  sqcRZGate(q, 2.2956939370544545, 2);
  sqcRYGate(q, 0.2814632956697176, 3);
  sqcRZGate(q, -1.023369825191569, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.9634014362754346, 0);
  sqcRZGate(q, 1.327908939118162, 0);
  sqcRYGate(q, 0.3630389058070138, 1);
  sqcRZGate(q, 3.0655919154556437, 1);
  sqcRYGate(q, -2.130690994920842, 2);
  sqcRZGate(q, -2.978568142988536, 2);
  sqcRYGate(q, -0.7276267121421998, 3);
  sqcRZGate(q, 2.5968932815740042, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.8974290484592462, 0);
  sqcRZGate(q, -0.0965848755663945, 0);
  sqcRYGate(q, -2.0801017361767613, 1);
  sqcRZGate(q, -0.8805449830921956, 1);
  sqcRYGate(q, 0.0641453113822584, 2);
  sqcRZGate(q, -2.2709215831816554, 2);
  sqcRYGate(q, 2.6122757632173053, 3);
  sqcRZGate(q, 2.2675538035735014, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.08386912397897815, 0);
  sqcRZGate(q, -1.2681895688293618, 0);
  sqcRYGate(q, -0.9242049219346993, 1);
  sqcRZGate(q, -2.076845778734419, 1);
  sqcRYGate(q, 0.43295780395337935, 2);
  sqcRZGate(q, -0.3920592166487639, 2);
  sqcRYGate(q, -0.21231564680583492, 3);
  sqcRZGate(q, -2.847916892458424, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.233950343669303, 0);
  sqcRZGate(q, 0.9917110901253128, 0);
  sqcRYGate(q, -1.0008748531162421, 1);
  sqcRZGate(q, 1.4094101934463945, 1);
  sqcRYGate(q, -0.285777650953837, 2);
  sqcRZGate(q, 2.304737046209438, 2);
  sqcRYGate(q, -1.6089711700076414, 3);
  sqcRZGate(q, -0.0740781305690105, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 3.0486193488547526, 0);
  sqcRZGate(q, 1.129578285950722, 0);
  sqcRYGate(q, -1.2325953124072286, 1);
  sqcRZGate(q, -0.13208641810827026, 1);
  sqcRYGate(q, -1.0159473020658598, 2);
  sqcRZGate(q, 2.2252432175918893, 2);
  sqcRYGate(q, -2.7461185994469206, 3);
  sqcRZGate(q, -2.365916156038194, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.9313279860251877, 0);
  sqcRZGate(q, -2.363734817221079, 0);
  sqcRYGate(q, 1.7040502138425584, 1);
  sqcRZGate(q, -1.1144145663112224, 1);
  sqcRYGate(q, -2.4084362922250335, 2);
  sqcRZGate(q, -1.671832625399363, 2);
  sqcRYGate(q, -2.466428824410944, 3);
  sqcRZGate(q, 2.6147286266096232, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.07211216052705922, 0);
  sqcRZGate(q, 2.3646665332449612, 0);
  sqcRYGate(q, 1.9115921146501789, 1);
  sqcRZGate(q, -0.6017542947385888, 1);
  sqcRYGate(q, 1.1872936815862054, 2);
  sqcRZGate(q, 1.1474243477833381, 2);
  sqcRYGate(q, 2.11276143713847, 3);
  sqcRZGate(q, -0.327420744462458, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 3.0146234784694452, 0);
  sqcRZGate(q, -1.3828004710393513, 0);
  sqcRYGate(q, 2.5871416941468897, 1);
  sqcRZGate(q, 2.1877226730530763, 1);
  sqcRYGate(q, 1.2289364422868472, 2);
  sqcRZGate(q, -2.113200457944869, 2);
  sqcRYGate(q, 2.2175161534907244, 3);
  sqcRZGate(q, 0.9708257097009747, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.07374051760618, 0);
  sqcRZGate(q, -2.532920207740374, 0);
  sqcRYGate(q, -1.05328685474215, 1);
  sqcRZGate(q, 1.8731865787522186, 1);
  sqcRYGate(q, -1.6240497066361366, 2);
  sqcRZGate(q, 2.15120534663974, 2);
  sqcRYGate(q, -2.5937182209418355, 3);
  sqcRZGate(q, -2.175256701900171, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.9170513254509447, 0);
  sqcRZGate(q, 2.285103901616269, 0);
  sqcRYGate(q, -0.05999080416762581, 1);
  sqcRZGate(q, -2.4346183808612745, 1);
  sqcRYGate(q, 2.0359996372948554, 2);
  sqcRZGate(q, -2.4778165702110555, 2);
  sqcRYGate(q, -2.9967606697335643, 3);
  sqcRZGate(q, 0.3355940998193016, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.0749921010945904, 0);
  sqcRZGate(q, 1.0342209109919864, 0);
  sqcRYGate(q, 0.7277446759848996, 1);
  sqcRZGate(q, -2.910893559203648, 1);
  sqcRYGate(q, -0.5205081548457037, 2);
  sqcRZGate(q, -2.5201359902683853, 2);
  sqcRYGate(q, -1.76924511208664, 3);
  sqcRZGate(q, 0.29535000514700716, 3);

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
