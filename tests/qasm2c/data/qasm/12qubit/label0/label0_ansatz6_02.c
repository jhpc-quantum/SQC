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

  sqcRYGate(q, -0.3404851730984614, 0);
  sqcRYGate(q, -1.9089440180452588, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.773483406965592, 0);
  sqcRYGate(q, -0.8938071747512476, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8799331970142952, 1);
  sqcRYGate(q, -1.7203490733448008, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2078944647485725, 1);
  sqcRYGate(q, -0.7778766444842482, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.999682435022599, 2);
  sqcRYGate(q, -0.4530655747875333, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7052593029364482, 2);
  sqcRYGate(q, 0.31852943277748125, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9680271041857478, 3);
  sqcRYGate(q, 2.98298718502372, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1412105300453246, 3);
  sqcRYGate(q, -0.0013631023511383243, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1296819644904774, 4);
  sqcRYGate(q, 0.9343734689147398, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.6810754977142817, 4);
  sqcRYGate(q, -0.3894522243857539, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7787357566495292, 5);
  sqcRYGate(q, 1.4982717453225831, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.0056863710067936, 5);
  sqcRYGate(q, -0.009515733765413047, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.5993849232053305, 6);
  sqcRYGate(q, 1.9518747747303458, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6692919389116678, 6);
  sqcRYGate(q, 2.5489058669452467, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7250345447340164, 7);
  sqcRYGate(q, 1.5151784423240866, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.1156639967678643, 7);
  sqcRYGate(q, -0.20977457007713918, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.4817815547145896, 8);
  sqcRYGate(q, 2.510599733050662, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.3887651717859124, 8);
  sqcRYGate(q, -0.8341272311531344, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.0968106191429268, 9);
  sqcRYGate(q, -0.007367147531375019, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.0636122780491748, 9);
  sqcRYGate(q, 1.3539926918666407, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.9796926676836009, 10);
  sqcRYGate(q, 0.8268029366472244, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.7308371152810125, 10);
  sqcRYGate(q, 2.778049480143492, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.2290718334198667, 0);
  sqcRYGate(q, -1.8130301377508546, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1086625853363956, 0);
  sqcRYGate(q, 0.14943170857604393, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8822356771183245, 1);
  sqcRYGate(q, -2.647832950309338, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.23736847268054004, 1);
  sqcRYGate(q, 1.965888482991688, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7929342079217117, 2);
  sqcRYGate(q, 1.2126996246799768, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4890625660237714, 2);
  sqcRYGate(q, 1.83073582853324, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5276443722968907, 3);
  sqcRYGate(q, -0.261725520673367, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.0583017693281724, 3);
  sqcRYGate(q, 3.5851160592161354e-05, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.883901418791119, 4);
  sqcRYGate(q, -0.6165171690537052, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.5884987065753347, 4);
  sqcRYGate(q, 0.27259022897412616, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.8308031456156093, 5);
  sqcRYGate(q, -0.41265380022216924, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.254104433641511, 5);
  sqcRYGate(q, 2.345902564547925, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.860008349162981, 6);
  sqcRYGate(q, -2.86941787450944, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9676087315614958, 6);
  sqcRYGate(q, 3.141477986258288, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.26887115283907, 7);
  sqcRYGate(q, 0.49723656661170124, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.0926720227485975, 7);
  sqcRYGate(q, 0.03136400894666164, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.725124909217947, 8);
  sqcRYGate(q, -2.5343766587828944, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.009574951827603493, 8);
  sqcRYGate(q, 2.527959307965057, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.592647117722946, 9);
  sqcRYGate(q, -2.256769545776425, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.0740635577876052, 9);
  sqcRYGate(q, -0.0016390359532589827, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.186095318944642, 10);
  sqcRYGate(q, 2.7480866848803287, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.5859297917786419, 10);
  sqcRYGate(q, 1.8761671011598928, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.6809267479175404, 0);
  sqcRYGate(q, 1.6370000213035438, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.506460873417753, 0);
  sqcRYGate(q, -3.1380300189891552, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.194430953961419, 1);
  sqcRYGate(q, -0.22162704795407784, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.17465731923397687, 1);
  sqcRYGate(q, -0.1383803641441137, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3311740931978121, 2);
  sqcRYGate(q, 0.5063836264731618, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.00531038719052912, 2);
  sqcRYGate(q, -2.48511630712202, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.059396030212203, 3);
  sqcRYGate(q, -1.6954103009517945, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5642516807600555, 3);
  sqcRYGate(q, 0.000250825975830502, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.9191244546392587, 4);
  sqcRYGate(q, -2.7144595775409375, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.888211252449203, 4);
  sqcRYGate(q, 0.16913871053263832, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4115778941554522, 5);
  sqcRYGate(q, -2.6324408936744472, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.0004456484882640055, 5);
  sqcRYGate(q, 2.9387392401540384, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.9534070727475186, 6);
  sqcRYGate(q, -0.7305565959691886, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.063884174511429, 6);
  sqcRYGate(q, -0.09197321775863188, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0575957439636374, 7);
  sqcRYGate(q, -1.1996359027272425, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.122674786338668, 7);
  sqcRYGate(q, -0.011431413049439954, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.9567219330325243, 8);
  sqcRYGate(q, 0.4113286623715915, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.138786434603704, 8);
  sqcRYGate(q, -2.569337017423797, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.1633700372254165, 9);
  sqcRYGate(q, -2.38629075993759, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.7850366775314064, 9);
  sqcRYGate(q, -3.114990475293964, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5046544857011797, 10);
  sqcRYGate(q, -0.8080184057038242, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.35788178625486466, 10);
  sqcRYGate(q, -1.689652901153229, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.2752801761040784, 0);
  sqcRYGate(q, 2.4720108815500383, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2454016957059701, 0);
  sqcRYGate(q, 2.019400702924013, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0803097004684759, 1);
  sqcRYGate(q, 0.3937493899025066, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9427124827102151, 1);
  sqcRYGate(q, 1.4305416481112696, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.421666844144724, 2);
  sqcRYGate(q, 0.5183660750540136, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8010872894345438, 2);
  sqcRYGate(q, -0.8458930618710203, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.748270444260416, 3);
  sqcRYGate(q, 0.17086115106069605, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1070370744507034, 3);
  sqcRYGate(q, -3.12012528436455, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4245652708468723, 4);
  sqcRYGate(q, 0.2245284865715233, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.28080419047292526, 4);
  sqcRYGate(q, 0.2681830274845281, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2668322712196582, 5);
  sqcRYGate(q, 1.4575471045724446, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.868611063165049, 5);
  sqcRYGate(q, -2.775043223847117, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.643733031643856, 6);
  sqcRYGate(q, 1.5284382260130807, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.27311149317491, 6);
  sqcRYGate(q, -0.8964463780318623, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5916817903604734, 7);
  sqcRYGate(q, -2.379266027514004, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.909198964793834, 7);
  sqcRYGate(q, 1.675081331473506, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.8378471300804566, 8);
  sqcRYGate(q, 1.0854579510999907, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.1243681558316254, 8);
  sqcRYGate(q, -0.01708375111024598, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.6155220458651292, 9);
  sqcRYGate(q, -0.6532164317488451, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.009135141289369, 9);
  sqcRYGate(q, -0.10598206500436902, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.937376649019091, 10);
  sqcRYGate(q, -0.4419012768068411, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.7035541471420697, 10);
  sqcRYGate(q, 2.8029812886490313, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.4282306767813704, 0);
  sqcRYGate(q, 2.967778865488832, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6003278367220668, 0);
  sqcRYGate(q, -0.6511991670101427, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3095338295262078, 1);
  sqcRYGate(q, 1.620485506341998, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.004866145546535425, 1);
  sqcRYGate(q, 1.777440610962861, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4771740876971045, 2);
  sqcRYGate(q, 2.749519111033617, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.355469328798148, 2);
  sqcRYGate(q, 0.6218854029984788, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6497027522694099, 3);
  sqcRYGate(q, -1.1943713571036667, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.2529076706699236, 3);
  sqcRYGate(q, -0.4458914212344702, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5001188731773167, 4);
  sqcRYGate(q, -2.294767454687136, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.03345894856526504, 4);
  sqcRYGate(q, 2.706888600661414, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.0555146104727005, 5);
  sqcRYGate(q, -2.558404219362498, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.0484130299510204, 5);
  sqcRYGate(q, 0.42132048568220526, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.6234789187802354, 6);
  sqcRYGate(q, 1.6635864495913477, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.86149360821563, 6);
  sqcRYGate(q, 0.4414269039975762, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.5856751017119732, 7);
  sqcRYGate(q, -0.0019980706939172655, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.2123700966628235, 7);
  sqcRYGate(q, 2.7561686518131316, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.6971316566897434, 8);
  sqcRYGate(q, 1.5452755270292655, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.064050002756279, 8);
  sqcRYGate(q, -0.4543304103985714, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5354311630936077, 9);
  sqcRYGate(q, 2.4791984120804362, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.8651568416154563, 9);
  sqcRYGate(q, -0.4536588375267742, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.38562752625348473, 10);
  sqcRYGate(q, -1.0378939881054698, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.5253596378116698, 10);
  sqcRYGate(q, -0.43212719765473245, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.1062103564247456, 0);
  sqcRYGate(q, -1.7203112462478392, 1);
  sqcRYGate(q, 2.8957556015193733, 2);
  sqcRYGate(q, -3.1188777595918507, 3);
  sqcRYGate(q, 0.032551947182491395, 4);
  sqcRYGate(q, -3.140561033488881, 5);
  sqcRYGate(q, 0.0020122810415636053, 6);
  sqcRYGate(q, 0.17811143210959998, 7);
  sqcRYGate(q, 0.0028073499107569254, 8);
  sqcRYGate(q, -0.0036869205809129113, 9);
  sqcRYGate(q, -0.0024170394319548818, 10);
  sqcRYGate(q, 0.49198047154842506, 11);

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
