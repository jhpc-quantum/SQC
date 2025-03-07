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

  sqcRYGate(q, 1.5646945645847739, 0);
  sqcRZGate(q, 0.03352338091690362, 0);
  sqcRYGate(q, -1.562064536584097, 1);
  sqcRZGate(q, -3.124845521598569, 1);
  sqcRYGate(q, -1.3658544057867923, 2);
  sqcRZGate(q, -1.5373127518451817, 2);
  sqcRYGate(q, -1.3967166031642433, 3);
  sqcRZGate(q, 0.6403286950843667, 3);
  sqcRYGate(q, -1.698627748935217, 4);
  sqcRZGate(q, 0.2630884215860867, 4);
  sqcRYGate(q, -0.7659619659923222, 5);
  sqcRZGate(q, -0.09764747551108409, 5);
  sqcRYGate(q, 0.862476460456804, 6);
  sqcRZGate(q, -0.3986859859959795, 6);
  sqcRYGate(q, -2.509459294827322, 7);
  sqcRZGate(q, 1.1762139052337117, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.092741547331714, 0);
  sqcRZGate(q, -0.17405097203699785, 0);
  sqcRYGate(q, -2.80810103169239, 1);
  sqcRZGate(q, 1.5624128782273432, 1);
  sqcRYGate(q, 1.4576247372696054, 2);
  sqcRZGate(q, 2.9195239256880843, 2);
  sqcRYGate(q, -0.3321088430383222, 3);
  sqcRZGate(q, -1.9945870871422904, 3);
  sqcRYGate(q, -1.0969913795368278, 4);
  sqcRZGate(q, -2.5547516510931003, 4);
  sqcRYGate(q, -2.3279108085381788, 5);
  sqcRZGate(q, -1.378264435604235, 5);
  sqcRYGate(q, 2.571061335610927, 6);
  sqcRZGate(q, -1.165490201607822, 6);
  sqcRYGate(q, 1.7307070739326145, 7);
  sqcRZGate(q, -0.5070055407254017, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.140613258194335, 0);
  sqcRZGate(q, -2.513601482065279, 0);
  sqcRYGate(q, -0.33959444606294653, 1);
  sqcRZGate(q, 2.754320307510213, 1);
  sqcRYGate(q, -1.5747107146628216, 2);
  sqcRZGate(q, -2.7849707814382243, 2);
  sqcRYGate(q, 3.0241866639315553, 3);
  sqcRZGate(q, -2.1347315907980486, 3);
  sqcRYGate(q, 2.8646796960327334, 4);
  sqcRZGate(q, -2.9515044376924813, 4);
  sqcRYGate(q, 0.5619108939767594, 5);
  sqcRZGate(q, -1.8984500883229307, 5);
  sqcRYGate(q, 2.444087623989522, 6);
  sqcRZGate(q, 2.352870217948828, 6);
  sqcRYGate(q, -2.2700306734082893, 7);
  sqcRZGate(q, 2.3724755339479446, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.9036016963827379, 0);
  sqcRZGate(q, 2.540504600060628, 0);
  sqcRYGate(q, -2.060157837944507, 1);
  sqcRZGate(q, -2.308657500162973, 1);
  sqcRYGate(q, -1.2770157120741081, 2);
  sqcRZGate(q, 2.5790273123770135, 2);
  sqcRYGate(q, -2.174882248826128, 3);
  sqcRZGate(q, -2.755942666664541, 3);
  sqcRYGate(q, 2.3576456391972487, 4);
  sqcRZGate(q, 2.0998044957975956, 4);
  sqcRYGate(q, 0.9695491166931439, 5);
  sqcRZGate(q, 1.1282943173915818, 5);
  sqcRYGate(q, 1.3166860831265677, 6);
  sqcRZGate(q, 1.4496929866683175, 6);
  sqcRYGate(q, 0.35004059290068223, 7);
  sqcRZGate(q, 3.0079103283956115, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.6460954350251145, 0);
  sqcRZGate(q, -1.4437585731453806, 0);
  sqcRYGate(q, -1.4906713990672191, 1);
  sqcRZGate(q, 0.20449821167752646, 1);
  sqcRYGate(q, 3.1392972724665733, 2);
  sqcRZGate(q, 1.7225589052130144, 2);
  sqcRYGate(q, -0.009404598639530777, 3);
  sqcRZGate(q, -2.643787101578288, 3);
  sqcRYGate(q, -2.86381284296359, 4);
  sqcRZGate(q, 2.132838338945515, 4);
  sqcRYGate(q, -0.6105100940984319, 5);
  sqcRZGate(q, -1.0385890567141756, 5);
  sqcRYGate(q, -2.461952563875957, 6);
  sqcRZGate(q, -0.1995724368840958, 6);
  sqcRYGate(q, 3.099198080990279, 7);
  sqcRZGate(q, 2.92600965163782, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.510933166036727, 0);
  sqcRZGate(q, 2.750643337901775, 0);
  sqcRYGate(q, -1.4225429978175017, 1);
  sqcRZGate(q, 0.60111700074492, 1);
  sqcRYGate(q, -2.0821447251071388, 2);
  sqcRZGate(q, 1.5473519112380836, 2);
  sqcRYGate(q, 1.8242674575833426, 3);
  sqcRZGate(q, 2.374947720117234, 3);
  sqcRYGate(q, -1.3573487974588825, 4);
  sqcRZGate(q, -1.8667414858733462, 4);
  sqcRYGate(q, 1.6936977027925229, 5);
  sqcRZGate(q, 2.368432617233215, 5);
  sqcRYGate(q, 0.6167146512955046, 6);
  sqcRZGate(q, 0.7500363788992708, 6);
  sqcRYGate(q, 2.597142265154799, 7);
  sqcRZGate(q, -0.2510438952636854, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.140035879349575, 0);
  sqcRZGate(q, -2.0509370567186913, 0);
  sqcRYGate(q, 1.441358866265886, 1);
  sqcRZGate(q, -1.5816400113796631, 1);
  sqcRYGate(q, 2.043737897696035, 2);
  sqcRZGate(q, -0.8366517420036201, 2);
  sqcRYGate(q, -1.9362507252510746, 3);
  sqcRZGate(q, -2.0126499661664035, 3);
  sqcRYGate(q, -0.23891079037948576, 4);
  sqcRZGate(q, 1.4218517997787452, 4);
  sqcRYGate(q, -2.957828658285216, 5);
  sqcRZGate(q, -0.30607690189454395, 5);
  sqcRYGate(q, 0.8517780711418084, 6);
  sqcRZGate(q, 0.5694838241829531, 6);
  sqcRYGate(q, -2.254447904329019, 7);
  sqcRZGate(q, -0.10284447199784491, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.0727606105302283, 0);
  sqcRZGate(q, 1.5731228913908244, 0);
  sqcRYGate(q, -1.3260713011362177, 1);
  sqcRZGate(q, 1.5924815897503386, 1);
  sqcRYGate(q, 2.0078322918214795, 2);
  sqcRZGate(q, -0.9000642216185737, 2);
  sqcRYGate(q, -2.9106372651512666, 3);
  sqcRZGate(q, 0.8438562090704602, 3);
  sqcRYGate(q, 3.0538642711582016, 4);
  sqcRZGate(q, -0.8572821755912253, 4);
  sqcRYGate(q, 2.370050154485004, 5);
  sqcRZGate(q, 1.4546934046505307, 5);
  sqcRYGate(q, 2.080650212486778, 6);
  sqcRZGate(q, 2.590347653924498, 6);
  sqcRYGate(q, 1.9153686611925629, 7);
  sqcRZGate(q, -1.912963872750507, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.3102292852708428, 0);
  sqcRZGate(q, 1.5831919351071448, 0);
  sqcRYGate(q, -0.4017506551433153, 1);
  sqcRZGate(q, -1.5303967574924888, 1);
  sqcRYGate(q, 0.117813407199405, 2);
  sqcRZGate(q, -2.4578317848272255, 2);
  sqcRYGate(q, 1.7275029761868943, 3);
  sqcRZGate(q, -0.019477652081351087, 3);
  sqcRYGate(q, 2.4023863231101257, 4);
  sqcRZGate(q, -0.8689738063609163, 4);
  sqcRYGate(q, 2.8172681797691936, 5);
  sqcRZGate(q, -1.4546592831210434, 5);
  sqcRYGate(q, 1.6182059409926852, 6);
  sqcRZGate(q, -0.3516615083808068, 6);
  sqcRYGate(q, 0.8656026627852454, 7);
  sqcRZGate(q, -2.8533802764818503, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.013141353642021516, 0);
  sqcRZGate(q, -0.0015011271786975443, 0);
  sqcRYGate(q, 3.085808221431294, 1);
  sqcRZGate(q, 0.0508200431584825, 1);
  sqcRYGate(q, -2.325480224269748, 2);
  sqcRZGate(q, -2.452647134357772, 2);
  sqcRYGate(q, 1.397965553812404, 3);
  sqcRZGate(q, 0.12262883367258047, 3);
  sqcRYGate(q, -0.7124046525960663, 4);
  sqcRZGate(q, -1.9773293947623003, 4);
  sqcRYGate(q, 2.8284858650166904, 5);
  sqcRZGate(q, 1.2399603850693612, 5);
  sqcRYGate(q, 0.1438337170120493, 6);
  sqcRZGate(q, -1.351717168895866, 6);
  sqcRYGate(q, -2.698337669282923, 7);
  sqcRZGate(q, -2.3154885553905507, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5568995439796192, 0);
  sqcRZGate(q, 2.972681899930259, 0);
  sqcRYGate(q, 1.560755906815987, 1);
  sqcRZGate(q, 2.2585589619541384, 1);
  sqcRYGate(q, 0.31711120181931307, 2);
  sqcRZGate(q, -2.7400639610675963, 2);
  sqcRYGate(q, -1.2212849456057797, 3);
  sqcRZGate(q, 0.2465171911621198, 3);
  sqcRYGate(q, -1.3373943593583388, 4);
  sqcRZGate(q, -1.1175948743390922, 4);
  sqcRYGate(q, 2.831600433654652, 5);
  sqcRZGate(q, -1.583589416982928, 5);
  sqcRYGate(q, -1.8010969373107892, 6);
  sqcRZGate(q, 1.4446350273831972, 6);
  sqcRYGate(q, 0.63569078980126, 7);
  sqcRZGate(q, 0.44322716744253116, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.1370590438294084, 0);
  sqcRZGate(q, -2.153726211587405, 0);
  sqcRYGate(q, -0.007167822723952888, 1);
  sqcRZGate(q, -0.8719079014775437, 1);
  sqcRYGate(q, 2.1263383468005825, 2);
  sqcRZGate(q, -0.535460841655019, 2);
  sqcRYGate(q, -2.395147736721593, 3);
  sqcRZGate(q, -0.8033008614579266, 3);
  sqcRYGate(q, -1.6625515936309796, 4);
  sqcRZGate(q, -2.4773761950334934, 4);
  sqcRYGate(q, 1.4381440610435758, 5);
  sqcRZGate(q, 1.5105129776682886, 5);
  sqcRYGate(q, 0.3795029776424751, 6);
  sqcRZGate(q, 1.2042696141862028, 6);
  sqcRYGate(q, 1.667708461497651, 7);
  sqcRZGate(q, 0.6232034642115614, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.0951543170933273, 0);
  sqcRZGate(q, -1.5516168113260724, 0);
  sqcRYGate(q, -2.6660951927858605, 1);
  sqcRZGate(q, 1.5297697369934256, 1);
  sqcRYGate(q, -0.4206565516228036, 2);
  sqcRZGate(q, 0.10671240652992382, 2);
  sqcRYGate(q, -0.8723399532696611, 3);
  sqcRZGate(q, 0.4661147667225591, 3);
  sqcRYGate(q, 2.739888608270119, 4);
  sqcRZGate(q, -0.6230681842165277, 4);
  sqcRYGate(q, -2.437078305273834, 5);
  sqcRZGate(q, 0.11795772115766437, 5);
  sqcRYGate(q, -0.8614254250254954, 6);
  sqcRZGate(q, -0.14548103552110359, 6);
  sqcRYGate(q, 1.7550575010584628, 7);
  sqcRZGate(q, 1.4994793991781183, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.7179779328102134, 0);
  sqcRZGate(q, -1.279084195138478, 0);
  sqcRYGate(q, -0.42436208669989206, 1);
  sqcRZGate(q, -3.117876552482264, 1);
  sqcRYGate(q, -1.5774203110718936, 2);
  sqcRZGate(q, 3.1242864533557104, 2);
  sqcRYGate(q, -1.571757043474097, 3);
  sqcRZGate(q, 0.009066112039106676, 3);
  sqcRYGate(q, 0.27064157338225314, 4);
  sqcRZGate(q, -2.4653442988347414, 4);
  sqcRYGate(q, -0.7700299545148741, 5);
  sqcRZGate(q, -2.7969089104777742, 5);
  sqcRYGate(q, -2.190357818907173, 6);
  sqcRZGate(q, 0.7935731861300441, 6);
  sqcRYGate(q, -0.4952840069136126, 7);
  sqcRZGate(q, -2.1635102614731156, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.003430275281109448, 0);
  sqcRZGate(q, 2.879911969267061, 0);
  sqcRYGate(q, 0.014585288300813735, 1);
  sqcRZGate(q, 1.5952297603497811, 1);
  sqcRYGate(q, 1.5646825249309932, 2);
  sqcRZGate(q, 3.0614321481771625, 2);
  sqcRYGate(q, -1.5706393822280091, 3);
  sqcRZGate(q, -0.5060152151744362, 3);
  sqcRYGate(q, -2.955110568802452, 4);
  sqcRZGate(q, -1.6574315956105954, 4);
  sqcRYGate(q, 0.7512331457894161, 5);
  sqcRZGate(q, 1.1885252486607296, 5);
  sqcRYGate(q, 1.6064137028138825, 6);
  sqcRZGate(q, 1.1926003662682774, 6);
  sqcRYGate(q, 1.2549323458192354, 7);
  sqcRZGate(q, 1.8496726249230537, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.5284651104735107, 0);
  sqcRZGate(q, 0.4450783709292816, 0);
  sqcRYGate(q, 1.5824931897454784, 1);
  sqcRZGate(q, -0.8293597365919884, 1);
  sqcRYGate(q, -0.2232026159950662, 2);
  sqcRZGate(q, -0.9392972230103149, 2);
  sqcRYGate(q, 0.7863911170635944, 3);
  sqcRZGate(q, 0.9239818074886035, 3);
  sqcRYGate(q, 2.4493894550582223, 4);
  sqcRZGate(q, -0.6981698381951585, 4);
  sqcRYGate(q, -0.9924693029068489, 5);
  sqcRZGate(q, 2.4269194410243387, 5);
  sqcRYGate(q, 1.0536422460912955, 6);
  sqcRZGate(q, -0.8825420596885867, 6);
  sqcRYGate(q, -2.064839873473749, 7);
  sqcRZGate(q, 1.4227665721634075, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.129450579335434, 0);
  sqcRZGate(q, 1.2913116875711772, 0);
  sqcRYGate(q, 1.5535036855817335, 1);
  sqcRZGate(q, 1.5749510007133605, 1);
  sqcRYGate(q, -3.0576641789042056, 2);
  sqcRZGate(q, -0.9566326566015932, 2);
  sqcRYGate(q, -2.93310309249685, 3);
  sqcRZGate(q, -1.506403609790417, 3);
  sqcRYGate(q, -1.4297885186797912, 4);
  sqcRZGate(q, 0.3844955262964236, 4);
  sqcRYGate(q, -1.2233534920846856, 5);
  sqcRZGate(q, 1.2478753273540173, 5);
  sqcRYGate(q, 1.6237407733264646, 6);
  sqcRZGate(q, 0.15569000191874505, 6);
  sqcRYGate(q, 1.4901835098283058, 7);
  sqcRZGate(q, -2.2203371762920203, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.0131528907055443, 0);
  sqcRZGate(q, -2.9074053838104366, 0);
  sqcRYGate(q, -1.8502163438294086, 1);
  sqcRZGate(q, 0.0016532118808152418, 1);
  sqcRYGate(q, -0.014768959284056749, 2);
  sqcRZGate(q, -1.916720842380896, 2);
  sqcRYGate(q, -3.135272202621276, 3);
  sqcRZGate(q, 1.711712031537228, 3);
  sqcRYGate(q, 0.6744702086831478, 4);
  sqcRZGate(q, -0.7144308717684317, 4);
  sqcRYGate(q, 0.8005907150901612, 5);
  sqcRZGate(q, 1.1363064477443885, 5);
  sqcRYGate(q, 0.573730566140294, 6);
  sqcRZGate(q, 2.9911754351648794, 6);
  sqcRYGate(q, 0.31117502935705355, 7);
  sqcRZGate(q, -1.2651298574051213, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.9465055233290824, 0);
  sqcRZGate(q, -1.1929917071809568, 0);
  sqcRYGate(q, 1.6967264060157383, 1);
  sqcRZGate(q, -0.2219335052007496, 1);
  sqcRYGate(q, 1.371766567043686, 2);
  sqcRZGate(q, 2.9795058521676268, 2);
  sqcRYGate(q, -1.4036720262327806, 3);
  sqcRZGate(q, 1.965303882681523, 3);
  sqcRYGate(q, 2.706760377248899, 4);
  sqcRZGate(q, -3.023143059918555, 4);
  sqcRYGate(q, -1.2132266233269027, 5);
  sqcRZGate(q, -2.330878314239725, 5);
  sqcRYGate(q, -2.7957954400637943, 6);
  sqcRZGate(q, -0.2429513925718441, 6);
  sqcRYGate(q, -2.8823127797740313, 7);
  sqcRZGate(q, -0.9590183075257388, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.03369102798734325, 0);
  sqcRZGate(q, -1.793982683222164, 0);
  sqcRYGate(q, 0.7528932634412397, 1);
  sqcRZGate(q, 1.7270075119742376, 1);
  sqcRYGate(q, -3.1370515923161157, 2);
  sqcRZGate(q, 1.9639484077895009, 2);
  sqcRYGate(q, 0.008835559497358512, 3);
  sqcRZGate(q, 2.786106373077287, 3);
  sqcRYGate(q, 2.4364579168215337, 4);
  sqcRZGate(q, 0.932088346608323, 4);
  sqcRYGate(q, 2.742028445779985, 5);
  sqcRZGate(q, -0.18129564372593432, 5);
  sqcRYGate(q, -0.6553959309021672, 6);
  sqcRZGate(q, 2.4390413082444864, 6);
  sqcRYGate(q, -1.8429811988589653, 7);
  sqcRZGate(q, -2.7997621491655944, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.1511008150093618, 0);
  sqcRZGate(q, 1.639381937311743, 0);
  sqcRYGate(q, 1.605476245952338, 1);
  sqcRZGate(q, 0.13209452170570787, 1);
  sqcRYGate(q, 0.41559460113035107, 2);
  sqcRZGate(q, -0.4895558338424573, 2);
  sqcRYGate(q, -1.517341477571616, 3);
  sqcRZGate(q, -3.075160566607088, 3);
  sqcRYGate(q, 1.5258259767500073, 4);
  sqcRZGate(q, 0.46069272900781133, 4);
  sqcRYGate(q, -2.056129422798891, 5);
  sqcRZGate(q, 2.498038610073614, 5);
  sqcRYGate(q, -1.964038860052658, 6);
  sqcRZGate(q, -1.350926259174976, 6);
  sqcRYGate(q, 1.2201283484742182, 7);
  sqcRZGate(q, -0.6584602710900701, 7);

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
