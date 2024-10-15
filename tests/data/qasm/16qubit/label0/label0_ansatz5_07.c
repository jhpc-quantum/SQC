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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, -1.2762564766459168, 0);
  sqcRYGate(q, -0.2105791104405279, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0774361852302365, 0);
  sqcRYGate(q, -1.2806579855286633, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.051543147812272275, 2);
  sqcRYGate(q, 0.6893369687918565, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4568155763277642, 2);
  sqcRYGate(q, 0.9688622793077665, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1284755094646663, 4);
  sqcRYGate(q, 0.18330872484122906, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.025441781636638572, 4);
  sqcRYGate(q, -1.899120392302705, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1807029554898534, 6);
  sqcRYGate(q, -1.0347607828532857, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7905534166503578, 6);
  sqcRYGate(q, -1.3385206131675644, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.07229065913470463, 8);
  sqcRYGate(q, -2.7484424394018525, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.1213329857401287, 8);
  sqcRYGate(q, 0.7570768290799361, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.8539039430100286, 10);
  sqcRYGate(q, 2.6220402963440144, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.4425276427338327, 10);
  sqcRYGate(q, 1.035587376851682, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.4315122979566506, 12);
  sqcRYGate(q, -1.8078554092522217, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.783734988509339, 12);
  sqcRYGate(q, -1.2446756328821114, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.101223631329966, 14);
  sqcRYGate(q, 1.7717088569050494, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.6019134858225894, 14);
  sqcRYGate(q, -2.941780915266971, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.04800460249911057, 1);
  sqcRYGate(q, 1.4516404174393231, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.11845575957195, 1);
  sqcRYGate(q, 3.1055621684965242, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2064086807862866, 3);
  sqcRYGate(q, 1.9244426843093638, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.499587502483861, 3);
  sqcRYGate(q, 2.6879072288977897, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1366567988972807, 5);
  sqcRYGate(q, 1.3027824988892496, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.028410014378907, 5);
  sqcRYGate(q, 0.2937417040266901, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.4079755294862592, 7);
  sqcRYGate(q, 1.114767489340755, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.128807368451928, 7);
  sqcRYGate(q, 1.5963721330917633, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.3028179134757987, 9);
  sqcRYGate(q, -1.328160255384999, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.401020333540214, 9);
  sqcRYGate(q, 1.6227170080770927, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.143661047846601, 11);
  sqcRYGate(q, 1.8512024019466147, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.6498138364442988, 11);
  sqcRYGate(q, 3.114110352870272, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.41987901031066305, 13);
  sqcRYGate(q, -1.8424570711702548, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.0160528706364953, 13);
  sqcRYGate(q, 2.857282726060384, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.1397220810109419, 0);
  sqcRYGate(q, -1.408381308163058, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.171990875952429, 0);
  sqcRYGate(q, 0.7735585262356235, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.383368855117816, 2);
  sqcRYGate(q, -2.5372624192943056, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1426087454397509, 2);
  sqcRYGate(q, -1.461703245025668, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.172387117284839, 4);
  sqcRYGate(q, -1.9460661047257377, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.887489999156536, 4);
  sqcRYGate(q, 2.9099515304078682, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.565359536081297, 6);
  sqcRYGate(q, -0.3668725783976168, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8980358113849487, 6);
  sqcRYGate(q, 1.1387111727857198, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8569746788393235, 8);
  sqcRYGate(q, 1.4247203673886348, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.27544193118225446, 8);
  sqcRYGate(q, 1.0096819764820129, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.4822501907158534, 10);
  sqcRYGate(q, 0.013667649966299322, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.994695637231052, 10);
  sqcRYGate(q, 1.3017726649788108, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.0983231007436016, 12);
  sqcRYGate(q, 2.9130413269496684, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.0192700297893127, 12);
  sqcRYGate(q, 2.8235958517392725, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.3558930043238124, 14);
  sqcRYGate(q, -2.620249267951958, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.43157547450871014, 14);
  sqcRYGate(q, 2.3238733559271676, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.21502337517434889, 1);
  sqcRYGate(q, -1.1566334099289692, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.919791762225517, 1);
  sqcRYGate(q, -1.7189090950499764, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9973664095788312, 3);
  sqcRYGate(q, -1.4037777669826381, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.141314396406819, 3);
  sqcRYGate(q, -3.1330120574184157, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.920657219884329, 5);
  sqcRYGate(q, -1.7109799700625081, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9376340853350591, 5);
  sqcRYGate(q, 1.1438981525544056, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.068715649868797, 7);
  sqcRYGate(q, 1.1302703498391358, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.2681890360621098, 7);
  sqcRYGate(q, -0.004395102804473065, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.8998731974610017, 9);
  sqcRYGate(q, -1.5602106511157094, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.9329414497807087, 9);
  sqcRYGate(q, -0.07388329057408516, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.096442749657016, 11);
  sqcRYGate(q, 2.4944136982100327, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.5888609677483165, 11);
  sqcRYGate(q, 0.21480116859374632, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.664826328059776, 13);
  sqcRYGate(q, -1.3269286152168407, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.669581449866767, 13);
  sqcRYGate(q, -0.44071929124412274, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.652216129096954, 0);
  sqcRYGate(q, -1.6349783324882274, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6960488133605418, 0);
  sqcRYGate(q, -2.660759584717427, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.714404948937951, 2);
  sqcRYGate(q, -1.7093195426978536, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3966606985816634, 2);
  sqcRYGate(q, 3.1350109150983054, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2774840150749454, 4);
  sqcRYGate(q, 2.539488891127809, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.3405449692934415, 4);
  sqcRYGate(q, -2.402131175093644, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.425010531633684, 6);
  sqcRYGate(q, 0.323565657692356, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.135185629241204, 6);
  sqcRYGate(q, -1.6432666648268022, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0947239452772783, 8);
  sqcRYGate(q, 1.3863210458501294, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.5252988298297192, 8);
  sqcRYGate(q, -0.004160854758758603, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.6865959898727274, 10);
  sqcRYGate(q, 0.25213254489955855, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.129489720738321, 10);
  sqcRYGate(q, 3.090914346197365, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.6895103543720345, 12);
  sqcRYGate(q, 0.7091282159542702, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.49910379643773783, 12);
  sqcRYGate(q, -2.4388358829647054, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.4712342970116468, 14);
  sqcRYGate(q, 2.977503271671779, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.1391020981738804, 14);
  sqcRYGate(q, -2.082946958050943, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.9178304094613656, 1);
  sqcRYGate(q, -1.1428829310037185, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.783551477239922, 1);
  sqcRYGate(q, 1.5270089191101333, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1852969464997918, 3);
  sqcRYGate(q, 0.3721996248479289, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.1677807419065784, 3);
  sqcRYGate(q, 0.8863428487735262, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.710849448214914, 5);
  sqcRYGate(q, -1.5663578958075854, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.022975867621519, 5);
  sqcRYGate(q, -0.3988453502119161, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9468807516627589, 7);
  sqcRYGate(q, -2.9376545444021227, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.682045555258126, 7);
  sqcRYGate(q, -0.3660940738929854, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.258143225031821, 9);
  sqcRYGate(q, -1.0193905911494476, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.3349508201370823, 9);
  sqcRYGate(q, -2.839247816096455, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.143785276296561, 11);
  sqcRYGate(q, -1.2356178315950865, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -3.121805481651413, 11);
  sqcRYGate(q, -0.030493005201866378, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.2639777978267612, 13);
  sqcRYGate(q, -2.9844364886499575, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 3.128166150081596, 13);
  sqcRYGate(q, 0.18442975989082042, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.525209469960504, 0);
  sqcRYGate(q, 1.014037387935189, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.739675088501368, 0);
  sqcRYGate(q, -2.802153567493732, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5027719237243469, 2);
  sqcRYGate(q, 2.843571580046755, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 4.538975874979201e-05, 2);
  sqcRYGate(q, 3.134352510285584, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.141150389047626, 4);
  sqcRYGate(q, 0.8432854035512306, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.004006864478699786, 4);
  sqcRYGate(q, 3.133095032126973, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8689244699994871, 6);
  sqcRYGate(q, 1.493900724095452, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5037979956580358, 6);
  sqcRYGate(q, -1.8548752944529687, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8464992670316115, 8);
  sqcRYGate(q, -2.2223973307302174, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.7142219066074285, 8);
  sqcRYGate(q, 0.13878124009663342, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.4882809018596364, 10);
  sqcRYGate(q, 0.5322178372311432, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.05301942237748225, 10);
  sqcRYGate(q, -1.4359730712461956, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.1821643951849303, 12);
  sqcRYGate(q, -0.28240671469674333, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.8919354491413498, 12);
  sqcRYGate(q, -2.278522139136804, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.8530209067886065, 14);
  sqcRYGate(q, 2.573264445638459, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.5950756230347252, 14);
  sqcRYGate(q, -0.8665848081309587, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.44257315627725013, 1);
  sqcRYGate(q, -0.8899165227975425, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.925784894440116, 1);
  sqcRYGate(q, 2.134697531328486, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9604122415364693, 3);
  sqcRYGate(q, 2.1860667167474435, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.100601024786564, 3);
  sqcRYGate(q, -0.8996333666988253, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.3737001613255866, 5);
  sqcRYGate(q, -1.5667929126488966, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.0794641136336565, 5);
  sqcRYGate(q, 0.005171727032535323, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.8780424571687746, 7);
  sqcRYGate(q, 0.9906403158534662, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.08462849728307287, 7);
  sqcRYGate(q, -3.1294272695254564, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.440590941458841, 9);
  sqcRYGate(q, -1.4959991942973545, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.1354583178614672, 9);
  sqcRYGate(q, 0.003338557593750485, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5241809054418498, 11);
  sqcRYGate(q, 1.829076878871326, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.1218665650184514, 11);
  sqcRYGate(q, -2.686215554311916, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.30206293186763666, 13);
  sqcRYGate(q, -0.7422710354637818, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.820407123518715, 13);
  sqcRYGate(q, -2.4415323515377705, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.4151691384601533, 0);
  sqcRYGate(q, 2.0621198946205364, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7336632982191391, 0);
  sqcRYGate(q, 1.4764669329689237, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.438068354876617, 2);
  sqcRYGate(q, 1.0237241439769211, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.03725486281856118, 2);
  sqcRYGate(q, -0.07675399384146865, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.12832208502808615, 4);
  sqcRYGate(q, 1.547487283819943, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.018585844049711833, 4);
  sqcRYGate(q, 0.03178067653931968, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.273355797169452, 6);
  sqcRYGate(q, 2.977458720734152, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6909687202849142, 6);
  sqcRYGate(q, 1.4296353006642035, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.9121206702838576, 8);
  sqcRYGate(q, -3.034124903046307, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.314040190838073, 8);
  sqcRYGate(q, -2.113440933441126, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.5924452876769988, 10);
  sqcRYGate(q, 1.1688139338799395, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.019179399429047447, 10);
  sqcRYGate(q, -2.0970691371711045, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.1782747782428897, 12);
  sqcRYGate(q, -1.270408427670871, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.7716599862339765, 12);
  sqcRYGate(q, 0.0003565785106660613, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.0400019866948198, 14);
  sqcRYGate(q, -2.7066621111302833, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.664240528215351, 14);
  sqcRYGate(q, 2.4617239751776365, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.36131496367253213, 1);
  sqcRYGate(q, -1.818806098633173, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2800920637697012, 1);
  sqcRYGate(q, -2.8520244658322493, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4213175982989723, 3);
  sqcRYGate(q, 1.818293601824157, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.013789451831542, 3);
  sqcRYGate(q, 0.2988339656153602, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.426954200346929, 5);
  sqcRYGate(q, -1.2861852939784573, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.0010497909900610836, 5);
  sqcRYGate(q, 3.1188663720885392, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.0526680399454404, 7);
  sqcRYGate(q, -0.5951019026781882, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.0026530745216506446, 7);
  sqcRYGate(q, -3.140360232206004, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.4254574367566855, 9);
  sqcRYGate(q, 0.9836103095852814, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.3277797213662637, 9);
  sqcRYGate(q, -3.0955996342831087, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.860101058203604, 11);
  sqcRYGate(q, 0.9362438485046347, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.890250348963687, 11);
  sqcRYGate(q, 1.6850682189841075, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.2408955886212203, 13);
  sqcRYGate(q, -2.428697395070355, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.8269742909377347, 13);
  sqcRYGate(q, 0.7850821507492709, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.5792235431912243, 0);
  sqcRYGate(q, -1.3697196764060977, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8685603996365492, 0);
  sqcRYGate(q, -1.3232908372547962, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.632526785429174, 2);
  sqcRYGate(q, 3.0206733384184252, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.954721600250089, 2);
  sqcRYGate(q, -1.7112688053417813, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8110165472545723, 4);
  sqcRYGate(q, -1.100857224248034, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.5111695828399676, 4);
  sqcRYGate(q, 2.0597303708708665, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7447284107739307, 6);
  sqcRYGate(q, 2.6227892399367367, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5906288345573172, 6);
  sqcRYGate(q, -2.1964019213284054, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0808139061011124, 8);
  sqcRYGate(q, -0.51181161171312, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.1398630441613706, 8);
  sqcRYGate(q, -1.7484722851984236, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.8601096209397276, 10);
  sqcRYGate(q, 2.3292816201241298, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.132436737491393, 10);
  sqcRYGate(q, 1.8275413476332476, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.854170354429551, 12);
  sqcRYGate(q, 1.0354436548179369, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.1069228809368776, 12);
  sqcRYGate(q, 3.6765753216094765e-05, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.0728886112964555, 14);
  sqcRYGate(q, 2.7480277163615225, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -3.0438927000437013, 14);
  sqcRYGate(q, -3.0219556222908186, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.686926374790768, 1);
  sqcRYGate(q, 1.937059725572368, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.035417794542725645, 1);
  sqcRYGate(q, 1.2571675186457418, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1136538537676826, 3);
  sqcRYGate(q, 2.7891860074170656, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.00042769426198852045, 3);
  sqcRYGate(q, 3.141233832190312, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.35669059174778, 5);
  sqcRYGate(q, 2.187669326748197, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.139320736411974, 5);
  sqcRYGate(q, 0.012070160492691504, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.394093886245854, 7);
  sqcRYGate(q, 3.0748010548930473, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.706840849089273, 7);
  sqcRYGate(q, 0.028921194638602543, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.6391835297112032, 9);
  sqcRYGate(q, -1.54252348414298, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.2050656486867772, 9);
  sqcRYGate(q, -0.0003888587068935914, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.4320989042931829, 11);
  sqcRYGate(q, -1.8704243751207446, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -3.0834740162251646, 11);
  sqcRYGate(q, -3.0902067123552093, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.1218523206062097, 13);
  sqcRYGate(q, -1.3286902708340733, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.2626521284744925, 13);
  sqcRYGate(q, -2.572115416630728, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.625363510281738, 0);
  sqcRYGate(q, 0.004384932842135036, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6356318241700833, 0);
  sqcRYGate(q, 3.1401235358625708, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.647362453648575, 2);
  sqcRYGate(q, 1.4493696008787937, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7106370190550957, 2);
  sqcRYGate(q, 2.8964861829494617, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.908671297926502, 4);
  sqcRYGate(q, -1.6906969433008188, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.5100994550961797, 4);
  sqcRYGate(q, 2.7385527364037694, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.924294378954208, 6);
  sqcRYGate(q, 1.027437751058988, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1048549673152626, 6);
  sqcRYGate(q, 3.1380295724356544, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.590916005613365, 8);
  sqcRYGate(q, -1.0944310217987268, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.141486093592471, 8);
  sqcRYGate(q, 3.124682447120005, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.721651840586678, 10);
  sqcRYGate(q, -2.19090791330878, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.4599444703684519, 10);
  sqcRYGate(q, 1.9425708456698225, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.598855099977137, 12);
  sqcRYGate(q, 1.7630279560377295, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -3.0409244159470314, 12);
  sqcRYGate(q, -3.1413217187363935, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.6827670145231419, 14);
  sqcRYGate(q, 2.7993797287582405, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.36780423485254526, 14);
  sqcRYGate(q, -0.15134952996797316, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.8221789669980246, 1);
  sqcRYGate(q, 2.9682130051401354, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0982439517469746, 1);
  sqcRYGate(q, -2.0488902906003217, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.095647494801602, 3);
  sqcRYGate(q, -0.7776502160960018, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1394903074701648, 3);
  sqcRYGate(q, -3.1409522452284393, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.437263942992589, 5);
  sqcRYGate(q, 0.798199896396392, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.4705462674473058, 5);
  sqcRYGate(q, 3.1291573607015404, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.3738129334169613, 7);
  sqcRYGate(q, -2.6427477780602118, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.422834281736753, 7);
  sqcRYGate(q, 1.481633124343244, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.0066116748354776, 9);
  sqcRYGate(q, -0.24259992296129873, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.8241157173260363, 9);
  sqcRYGate(q, -3.1372816085793778, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.3309785011601818, 11);
  sqcRYGate(q, 0.0672510459495276, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.12310975555259418, 11);
  sqcRYGate(q, -1.6732230182125072, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.041192564328488, 13);
  sqcRYGate(q, 1.7422338546366523, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.4801178882066594, 13);
  sqcRYGate(q, 2.957234487196084, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.8463909479487941, 0);
  sqcRYGate(q, 1.6184129364761932, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9233575830060923, 0);
  sqcRYGate(q, 1.600295390417263, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2913578438746009, 2);
  sqcRYGate(q, 0.12993630160343184, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6553976588156134, 2);
  sqcRYGate(q, 0.09798590854860688, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.44556162537941, 4);
  sqcRYGate(q, 1.6982291689814417, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.0031104185682032798, 4);
  sqcRYGate(q, 2.4098614536699547, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.0477483530104346, 6);
  sqcRYGate(q, 2.46519667362483, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1412761306316557, 6);
  sqcRYGate(q, 3.138368417030883, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5042756678851577, 8);
  sqcRYGate(q, -2.485068593705395, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.9784913686473216, 8);
  sqcRYGate(q, 0.06191814249141281, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.6096650075875087, 10);
  sqcRYGate(q, -2.7498759900837366, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.1063926338292043, 10);
  sqcRYGate(q, -1.5379903334651006, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.9469268763053558, 12);
  sqcRYGate(q, -0.6966597999752756, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -3.0468860916410345, 12);
  sqcRYGate(q, 3.139254470120666, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.7885768767817738, 14);
  sqcRYGate(q, 0.5727206698361478, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.45589620851100227, 14);
  sqcRYGate(q, -0.4379191792006128, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.2538735972892283, 1);
  sqcRYGate(q, -0.008925798596428839, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3091114194805453, 1);
  sqcRYGate(q, 0.5321271483897557, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4888768726111492, 3);
  sqcRYGate(q, 0.9005813977817443, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.015440823067232885, 3);
  sqcRYGate(q, -0.03930980134030637, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2788129121864245, 5);
  sqcRYGate(q, -2.2477413350961157, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6134553255113593, 5);
  sqcRYGate(q, 3.0629924046428916, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.484202478567384, 7);
  sqcRYGate(q, -2.093615296187728, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.1066107506724387, 7);
  sqcRYGate(q, 1.5596194183835488, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.6201208014665704, 9);
  sqcRYGate(q, -2.284709157805914, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.137706773535096, 9);
  sqcRYGate(q, 3.117465221285017, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.6460482675670827, 11);
  sqcRYGate(q, 2.580306666737997, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.096289144446847, 11);
  sqcRYGate(q, -2.9475791444322965, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -3.1352166815585107, 13);
  sqcRYGate(q, -2.9713212443843515, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.9116191650007475, 13);
  sqcRYGate(q, 2.432760542009386, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.7579334380097373, 0);
  sqcRYGate(q, 1.8496046683324874, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1125863202882775, 0);
  sqcRYGate(q, 0.9189583742742916, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3767695658577411, 2);
  sqcRYGate(q, 2.2260262214190885, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0833264372492266, 2);
  sqcRYGate(q, -3.1200535711295396, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.97973082631162, 4);
  sqcRYGate(q, -2.5028703046955605, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.100165435823409, 4);
  sqcRYGate(q, -2.8984806817086093, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.7975044996170326, 6);
  sqcRYGate(q, 1.4043640842928744, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6778652034072274, 6);
  sqcRYGate(q, 2.3331461604248096, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.9734747148071125, 8);
  sqcRYGate(q, -1.7039992028445559, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.4182862479759906, 8);
  sqcRYGate(q, -2.7210078065156913, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.9525959542576973, 10);
  sqcRYGate(q, 0.16102066686955485, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.05448464829348243, 10);
  sqcRYGate(q, -2.2779782842856564, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.7425521775564157, 12);
  sqcRYGate(q, -0.18636257188088334, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.1206350016838433, 12);
  sqcRYGate(q, 0.005069675513734331, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.516046788239258, 14);
  sqcRYGate(q, -2.1550177271551307, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.4391806882279146, 14);
  sqcRYGate(q, 2.624601936596377, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.7155042888785321, 1);
  sqcRYGate(q, -0.06556891830633252, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.766192229411941, 1);
  sqcRYGate(q, 0.8799623670749057, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2588628539902839, 3);
  sqcRYGate(q, 2.7453450302192826, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1336224338939074, 3);
  sqcRYGate(q, -0.3220013900445477, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.986605087597654, 5);
  sqcRYGate(q, -0.6920861155572229, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.011124078511523297, 5);
  sqcRYGate(q, -0.029749074618295346, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.21570613156719864, 7);
  sqcRYGate(q, -1.3867992509236122, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.08031886044170022, 7);
  sqcRYGate(q, -0.04427437357738942, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.3491352517717594, 9);
  sqcRYGate(q, -0.7004768569255413, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.05944848988149687, 9);
  sqcRYGate(q, -2.855366936843748, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.3848484284697715, 11);
  sqcRYGate(q, -0.7081995336343141, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.01765685651512014, 11);
  sqcRYGate(q, -0.43021877308386336, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.2999016164520791, 13);
  sqcRYGate(q, 2.9986716074479878, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.5509946859171813, 13);
  sqcRYGate(q, -0.23164660231851467, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -3.032025067206746, 0);
  sqcRYGate(q, 2.6757393509305145, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9792686326852778, 0);
  sqcRYGate(q, 0.692849776564101, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.571317289704574, 2);
  sqcRYGate(q, -1.5609585762091518, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2594584144140355, 2);
  sqcRYGate(q, 3.1393439445389317, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.366534555083569, 4);
  sqcRYGate(q, -1.7267581651061756, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.123929046321531, 4);
  sqcRYGate(q, 0.006690414075446217, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.009849494838214, 6);
  sqcRYGate(q, -2.9054208917203592, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.2423713671617618, 6);
  sqcRYGate(q, 2.0079984713755223, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1444239401219969, 8);
  sqcRYGate(q, -1.5690210047851014, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.06715596157594605, 8);
  sqcRYGate(q, -3.120415036725514, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.019285228584917, 10);
  sqcRYGate(q, -0.99913469648929, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.122437400180771, 10);
  sqcRYGate(q, -2.9324100189249482, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.784509528423399, 12);
  sqcRYGate(q, 0.5712900450941087, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.258629166308624, 12);
  sqcRYGate(q, -2.588505753250626, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.0362574388576773, 14);
  sqcRYGate(q, 0.7197200308897038, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.0833246580260383, 14);
  sqcRYGate(q, -1.1892720670233796, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.9404116809113994, 1);
  sqcRYGate(q, 3.132234369716046, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7666097853521605, 1);
  sqcRYGate(q, -2.1958542586124814, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6230884518714639, 3);
  sqcRYGate(q, -2.153610359486361, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.43500458389297947, 3);
  sqcRYGate(q, -2.949082378620047, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.969147632874517, 5);
  sqcRYGate(q, 1.4533913955651248, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.7436264098073355, 5);
  sqcRYGate(q, 0.05045727052594584, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6529961580082574, 7);
  sqcRYGate(q, -0.4659309338326547, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.729845364716532, 7);
  sqcRYGate(q, 0.23730951104092665, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.6530717730726974, 9);
  sqcRYGate(q, 0.997043709421626, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.0807764450837671, 9);
  sqcRYGate(q, 3.123170049988595, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.42469670069214127, 11);
  sqcRYGate(q, 0.2982276105080883, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.13925575676827, 11);
  sqcRYGate(q, -3.0546276593440114, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.644910121097183, 13);
  sqcRYGate(q, -1.9475222035114332, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.8597153917272897, 13);
  sqcRYGate(q, -0.37230544221011025, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 3.095777091502129, 0);
  sqcRYGate(q, -3.1281065040864715, 1);
  sqcRYGate(q, 1.6429995411954232, 2);
  sqcRYGate(q, 2.8687722171950347, 3);
  sqcRYGate(q, 1.5762576326581845, 4);
  sqcRYGate(q, -0.5440345154990549, 5);
  sqcRYGate(q, 1.5594105472145934, 6);
  sqcRYGate(q, -0.8899239879445288, 7);
  sqcRYGate(q, -1.4574662611460116, 8);
  sqcRYGate(q, 2.1238947237168038, 9);
  sqcRYGate(q, -0.533886191566336, 10);
  sqcRYGate(q, 3.1024236164910812, 11);
  sqcRYGate(q, -2.833934228640079, 12);
  sqcRYGate(q, -0.017588956844214465, 13);
  sqcRYGate(q, -2.792945992911567, 14);
  sqcRYGate(q, 2.2258832154085217, 15);

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
