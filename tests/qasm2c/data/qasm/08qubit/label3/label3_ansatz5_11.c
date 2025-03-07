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

  sqcRYGate(q, -0.7513008051586247, 0);
  sqcRYGate(q, -2.195640682159495, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9248801188516236, 0);
  sqcRYGate(q, 0.539171213004134, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3460660807436806, 2);
  sqcRYGate(q, -1.89508497655412, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8995588612158022, 2);
  sqcRYGate(q, 1.3784099828213476, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9696201731113063, 4);
  sqcRYGate(q, 2.8101064006732313, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.416156669821043, 4);
  sqcRYGate(q, 0.5798839849213238, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7433246501446539, 6);
  sqcRYGate(q, 0.09467730229692073, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.244409056507739, 6);
  sqcRYGate(q, -0.5035429867308652, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.5896246195495745, 1);
  sqcRYGate(q, -1.3300540688241873, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3485337499865921, 1);
  sqcRYGate(q, 2.1083144621373813, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0335255049094965, 3);
  sqcRYGate(q, 2.538491007750724, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.099763972482022, 3);
  sqcRYGate(q, -2.9915111552077507, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.3057259295843893, 5);
  sqcRYGate(q, 1.358561670526128, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6345872417218237, 5);
  sqcRYGate(q, -0.9341872684371522, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.04299311663143168, 0);
  sqcRYGate(q, -0.6806296354444115, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.359617340932564, 0);
  sqcRYGate(q, -0.38898762420932964, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.892299189859104, 2);
  sqcRYGate(q, -3.0299455870890872, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.684085688111046, 2);
  sqcRYGate(q, 2.135934224687729, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.833716815439983, 4);
  sqcRYGate(q, -0.6757861521816233, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.292273666524384, 4);
  sqcRYGate(q, 1.6732208672668003, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.20105659176291935, 6);
  sqcRYGate(q, -2.280386664417181, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.01199953314867308, 6);
  sqcRYGate(q, 2.478268935426649, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.4418200943623418, 1);
  sqcRYGate(q, 0.33206337809498176, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5246805872857285, 1);
  sqcRYGate(q, 0.6159857930190233, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2402973887173525, 3);
  sqcRYGate(q, 0.4162405542660199, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.14755798214345006, 3);
  sqcRYGate(q, -1.6906817333050224, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.7619946571893808, 5);
  sqcRYGate(q, -1.51222321049777, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.43913234454834, 5);
  sqcRYGate(q, 1.394956098650587, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.8759914899116845, 0);
  sqcRYGate(q, -1.3694925688205863, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6645334074445377, 0);
  sqcRYGate(q, 2.7520510191511622, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9102386541449097, 2);
  sqcRYGate(q, 1.31839441948385, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.07038069984035808, 2);
  sqcRYGate(q, 2.3656582477256234, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.013216701441817, 4);
  sqcRYGate(q, 2.081697760552509, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.1478976175984963, 4);
  sqcRYGate(q, 1.6973838673277333, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5691724494375002, 6);
  sqcRYGate(q, -1.1698628025346602, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.230358899865202, 6);
  sqcRYGate(q, -0.7444697774548195, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5534753172562112, 1);
  sqcRYGate(q, -0.6587129723272532, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7152477721661565, 1);
  sqcRYGate(q, -1.505732289746267, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7809655455801696, 3);
  sqcRYGate(q, -0.7436213153888003, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.904720592120869, 3);
  sqcRYGate(q, -0.9001009672718188, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.0967696392763138, 5);
  sqcRYGate(q, -2.1488776445908133, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.26447781947983623, 5);
  sqcRYGate(q, 0.37485024599816263, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.7741839917839983, 0);
  sqcRYGate(q, 2.6490022686978567, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.423683303227952, 0);
  sqcRYGate(q, 2.366984740334451, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.230402883439103, 2);
  sqcRYGate(q, -2.591771282154201, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.458743902495745, 2);
  sqcRYGate(q, 1.7435846394042787, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9757869561876484, 4);
  sqcRYGate(q, -2.322278568597569, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.11199515001108651, 4);
  sqcRYGate(q, 1.5598300187477945, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.277534029409035, 6);
  sqcRYGate(q, -1.0106945127975688, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.715280293543314, 6);
  sqcRYGate(q, -0.06995950170002185, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6811896916932865, 1);
  sqcRYGate(q, 0.9299589539541597, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8845193332876473, 1);
  sqcRYGate(q, 0.40758515895535, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2898017983130794, 3);
  sqcRYGate(q, -2.0106806955920815, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.084753697635638, 3);
  sqcRYGate(q, 1.1543182101246774, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.043638344572157, 5);
  sqcRYGate(q, 1.3381361947759438, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.4673986371571476, 5);
  sqcRYGate(q, 1.7632102376334595, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5608711941783214, 0);
  sqcRYGate(q, -0.589605066382647, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2020382466780566, 0);
  sqcRYGate(q, 2.103235998096303, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8447427051321421, 2);
  sqcRYGate(q, -2.9763802491939573, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.273990088647639, 2);
  sqcRYGate(q, 0.08745548796222365, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.258396928422737, 4);
  sqcRYGate(q, -0.6814341759898301, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5647472196832947, 4);
  sqcRYGate(q, -0.15499774741704644, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.482305852021569, 6);
  sqcRYGate(q, 3.1286533375787395, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3246844324689544, 6);
  sqcRYGate(q, -0.5974971677653826, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.6001955187828174, 1);
  sqcRYGate(q, -2.462626879878313, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9743419462939631, 1);
  sqcRYGate(q, -2.3762425095469184, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.389470070370069, 3);
  sqcRYGate(q, -0.9787584730565917, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.24090358655356514, 3);
  sqcRYGate(q, 0.03955034700332249, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.3079743955366175, 5);
  sqcRYGate(q, -0.9186642544365667, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.0288986563483364, 5);
  sqcRYGate(q, -0.7038499452271169, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.736374515007732, 0);
  sqcRYGate(q, 0.9729503220738559, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5308655573313725, 0);
  sqcRYGate(q, 1.2082598720082431, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7819421011244203, 2);
  sqcRYGate(q, 2.690490147763369, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6909480312257171, 2);
  sqcRYGate(q, 1.368403989679453, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4007860863942743, 4);
  sqcRYGate(q, -1.147001981721373, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0169967692537867, 4);
  sqcRYGate(q, -0.8552102974010596, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3263278571722863, 6);
  sqcRYGate(q, -0.02765605804606635, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.46592430416214997, 6);
  sqcRYGate(q, -1.9171405854282244, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.072381999369831, 1);
  sqcRYGate(q, -1.52837368630044, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7010091531341669, 1);
  sqcRYGate(q, 3.1143184091869, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.093770736898284, 3);
  sqcRYGate(q, 1.2313290539149664, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.633206456990256, 3);
  sqcRYGate(q, -0.5323401417293224, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.24364866795730725, 5);
  sqcRYGate(q, 1.4502069093266416, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.482597534638758, 5);
  sqcRYGate(q, -1.266998408708273, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.8559375091320521, 0);
  sqcRYGate(q, 0.27169400753793127, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.692700326851933, 0);
  sqcRYGate(q, -3.1100776334903553, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4006549398327204, 2);
  sqcRYGate(q, 0.6182714037347263, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6361116531620716, 2);
  sqcRYGate(q, 0.15920989967168495, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.444588498030079, 4);
  sqcRYGate(q, 1.6085210718002882, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.9019163044512215, 4);
  sqcRYGate(q, -0.46800519822739045, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.478005205608237, 6);
  sqcRYGate(q, -0.7446664131603661, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0899456706872046, 6);
  sqcRYGate(q, 1.6234367873810829, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4588802084944241, 1);
  sqcRYGate(q, 2.8715678486313374, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0751968797227838, 1);
  sqcRYGate(q, -0.6102141213003971, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.869959856814194, 3);
  sqcRYGate(q, -0.8487322674819197, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.549828661697973, 3);
  sqcRYGate(q, 0.5548839541995462, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.9364957518307087, 5);
  sqcRYGate(q, -1.306408977578867, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.40599833531908, 5);
  sqcRYGate(q, -1.3139569562500288, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.5474081448210777, 0);
  sqcRYGate(q, 0.9175422014567297, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6931292121518875, 0);
  sqcRYGate(q, -1.2848324219669436, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2774970550296825, 2);
  sqcRYGate(q, -2.5674777396839006, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.991911215607069, 2);
  sqcRYGate(q, -2.5014458320140247, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.451976054566968, 4);
  sqcRYGate(q, 1.9868871824771501, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.877823096957857, 4);
  sqcRYGate(q, -2.4022497332562733, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7332742984115532, 6);
  sqcRYGate(q, 1.568555600795349, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9460550605305986, 6);
  sqcRYGate(q, -0.25364024509054417, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.45938968570246325, 1);
  sqcRYGate(q, -1.77927026567492, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7633008684538831, 1);
  sqcRYGate(q, 0.5438379288908544, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.011775196841567, 3);
  sqcRYGate(q, 0.8256833333490653, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5680293973545982, 3);
  sqcRYGate(q, 0.9694534190457792, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.488096214667007, 5);
  sqcRYGate(q, 2.8177280952022916, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.16485108885912253, 5);
  sqcRYGate(q, 2.4926464760892, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.2031236828403644, 0);
  sqcRYGate(q, -2.032833977906951, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.240050205903592, 0);
  sqcRYGate(q, 1.3594473149493187, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.33792447459216834, 2);
  sqcRYGate(q, -2.9988860073486583, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.562905819267975, 2);
  sqcRYGate(q, -0.6198633766842071, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5925298165561124, 4);
  sqcRYGate(q, -2.083085857325532, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5242162447313774, 4);
  sqcRYGate(q, 0.18137171256706264, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.1141887206741674, 6);
  sqcRYGate(q, -1.107692843927313, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6578291932719056, 6);
  sqcRYGate(q, -1.8538500211528055, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5996884528698092, 1);
  sqcRYGate(q, 1.995072702189633, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3242069990769796, 1);
  sqcRYGate(q, 2.360137820275075, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0734747765972406, 3);
  sqcRYGate(q, 2.8452714855898646, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7708805686819654, 3);
  sqcRYGate(q, -1.6980802965028936, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.8886848651167103, 5);
  sqcRYGate(q, 1.421092125568678, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2364589740733223, 5);
  sqcRYGate(q, -1.1842440552615692, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4702150378313004, 0);
  sqcRYGate(q, -0.24573306741130985, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.896285642932167, 0);
  sqcRYGate(q, 2.4385537022705184, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.02698901453782187, 2);
  sqcRYGate(q, 2.7087113572361234, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3637829810914814, 2);
  sqcRYGate(q, -0.04084660483907143, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1163583198599065, 4);
  sqcRYGate(q, -1.8779695961862872, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.047601966075127, 4);
  sqcRYGate(q, 0.5509584902342837, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5580745827584037, 6);
  sqcRYGate(q, 1.6544205155236418, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0986151734348737, 6);
  sqcRYGate(q, -0.7690255142654331, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9364878707470903, 1);
  sqcRYGate(q, -2.786206692508269, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6636361663172288, 1);
  sqcRYGate(q, -0.7374930972910057, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.23786195082147, 3);
  sqcRYGate(q, -2.5249204715551636, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.841156474594505, 3);
  sqcRYGate(q, -0.10727343537938278, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.8717666094471124, 5);
  sqcRYGate(q, 1.702316081985739, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.5340334762634273, 5);
  sqcRYGate(q, 1.0648915401955037, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.9260966971705678, 0);
  sqcRYGate(q, -2.159998754670103, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9933209479724726, 0);
  sqcRYGate(q, -1.2317164711917385, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.262618885760142, 2);
  sqcRYGate(q, 2.5800798900369695, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.421159235566853, 2);
  sqcRYGate(q, 1.5031599749507842, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4286173284041608, 4);
  sqcRYGate(q, 1.6041126578301297, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1066763706458866, 4);
  sqcRYGate(q, 2.6328844226160215, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.3672937601469153, 6);
  sqcRYGate(q, -0.573658247481864, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.894328799346016, 6);
  sqcRYGate(q, 0.021881407984280794, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.902684524147458, 1);
  sqcRYGate(q, -1.7622929095995223, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7875354973162612, 1);
  sqcRYGate(q, -2.9685147975662463, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3170669918874487, 3);
  sqcRYGate(q, 1.5938349204945288, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.2714095091555319, 3);
  sqcRYGate(q, -2.059489356356342, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.49048123352562006, 5);
  sqcRYGate(q, -2.4966086507855927, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6929894546638586, 5);
  sqcRYGate(q, 1.0078623270388043, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.8482292305730281, 0);
  sqcRYGate(q, -0.16064718859248417, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8916061341628421, 0);
  sqcRYGate(q, 2.8511547600373173, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2008071393906734, 2);
  sqcRYGate(q, 0.30630729811750257, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1822851128338359, 2);
  sqcRYGate(q, -0.8739574005538758, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5901106331722525, 4);
  sqcRYGate(q, 0.6797430381629652, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.774946962677254, 4);
  sqcRYGate(q, -3.009785104355131, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.834769270624042, 6);
  sqcRYGate(q, 1.1320029923139607, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9038009627668993, 6);
  sqcRYGate(q, -0.9981143637823067, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.0409305981956525, 1);
  sqcRYGate(q, 0.10046073897733443, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3435936383714309, 1);
  sqcRYGate(q, 1.9276836855289836, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7285027506398514, 3);
  sqcRYGate(q, -2.7013219486876094, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6679904414144806, 3);
  sqcRYGate(q, 0.23092184280169903, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.098038490002327, 5);
  sqcRYGate(q, -1.4216468442870578, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.0299006402659185, 5);
  sqcRYGate(q, 2.8102040953844565, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.12210789015310364, 0);
  sqcRYGate(q, -0.2786338373236672, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5095550552218944, 0);
  sqcRYGate(q, -0.8746524498947164, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.15966300753663454, 2);
  sqcRYGate(q, -1.9205360764267043, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9547919087123915, 2);
  sqcRYGate(q, -2.7740552811807007, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7074074696128092, 4);
  sqcRYGate(q, 0.8043385721372732, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0536184666855744, 4);
  sqcRYGate(q, 2.8963375650607057, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.3271229688527146, 6);
  sqcRYGate(q, -1.7254901530916367, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.469192077696894, 6);
  sqcRYGate(q, -0.5724696665047819, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.823822682952661, 1);
  sqcRYGate(q, -0.5420923948243509, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3812504454988797, 1);
  sqcRYGate(q, -1.6710507708185454, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7998604419354187, 3);
  sqcRYGate(q, -2.5516262831261765, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8613390094597699, 3);
  sqcRYGate(q, -1.5111929159299369, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.0293427535924646, 5);
  sqcRYGate(q, 1.2440293825275297, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.578793291876348, 5);
  sqcRYGate(q, 0.8803074133790193, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.696006450551723, 0);
  sqcRYGate(q, -0.02460954649099545, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.12190851749725697, 0);
  sqcRYGate(q, 2.700028841748304, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8022433064196218, 2);
  sqcRYGate(q, -0.5150378482071171, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.204850813131816, 2);
  sqcRYGate(q, 0.4065609065946023, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.56494819013398, 4);
  sqcRYGate(q, 2.3198636661457974, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0776396910456816, 4);
  sqcRYGate(q, -2.8645500725916446, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.938340094261249, 6);
  sqcRYGate(q, 1.7399220785547298, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.575797594982643, 6);
  sqcRYGate(q, 0.1781339037189913, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.123563326690758, 1);
  sqcRYGate(q, 2.4453501978480507, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7315320823733522, 1);
  sqcRYGate(q, 0.463746640822297, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7999837087200206, 3);
  sqcRYGate(q, 1.3740265784837196, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.261145106998686, 3);
  sqcRYGate(q, -2.9434898061139507, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.18820209021195744, 5);
  sqcRYGate(q, -1.2582688355612122, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.608735221459157, 5);
  sqcRYGate(q, -1.605679017122315, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.0110368135657013, 0);
  sqcRYGate(q, -0.6713684367230279, 1);
  sqcRYGate(q, 2.4386719641958865, 2);
  sqcRYGate(q, 0.48366992746456994, 3);
  sqcRYGate(q, 2.9492585405877927, 4);
  sqcRYGate(q, 2.1330147794173016, 5);
  sqcRYGate(q, -3.0949253394016885, 6);
  sqcRYGate(q, -3.0046469378856693, 7);

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
