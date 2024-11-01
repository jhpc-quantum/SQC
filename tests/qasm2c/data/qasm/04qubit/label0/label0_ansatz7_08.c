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

  sqcRYGate(q, 0.5764796569821785, 0);
  sqcRYGate(q, 1.004669277185747, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8684034537841828, 0);
  sqcRYGate(q, -1.395536833203244, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.14283097940402012, 0);
  sqcRYGate(q, 0.46489470381099496, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.09989323850027088, 0);
  sqcRYGate(q, 2.019378940434136, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0030094433943884, 0);
  sqcRYGate(q, 0.6711307373652328, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.2792294503580179, 0);
  sqcRYGate(q, 0.5886211934808251, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.051291353018142, 1);
  sqcRYGate(q, 1.459398126478748, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0208201234821908, 1);
  sqcRYGate(q, -2.597722171779513, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.13092805325297263, 1);
  sqcRYGate(q, 1.259747964731964, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5508793309213026, 1);
  sqcRYGate(q, -0.8757697542734578, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.06494362348794, 2);
  sqcRYGate(q, 1.1480017150254263, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.0051786735022379005, 2);
  sqcRYGate(q, 3.1192494024414428, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.10362391489872445, 0);
  sqcRYGate(q, -1.7244226905841267, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1865763775051965, 0);
  sqcRYGate(q, -3.134213039257978, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3843003914595426, 0);
  sqcRYGate(q, 0.39834618002686284, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4086195927786425, 0);
  sqcRYGate(q, 1.3373764068037863, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0828557055960641, 0);
  sqcRYGate(q, 2.2246662811919053, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.157949708875648, 0);
  sqcRYGate(q, -0.7955901148232156, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.1329906233885634, 1);
  sqcRYGate(q, 2.2970231241557753, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.15612082592196952, 1);
  sqcRYGate(q, -0.46715039476411935, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8256132079187608, 1);
  sqcRYGate(q, -0.343586426751064, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.626826996767973, 1);
  sqcRYGate(q, 0.5882093042314676, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8876978873647852, 2);
  sqcRYGate(q, -2.880144714350776, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7295034476473772, 2);
  sqcRYGate(q, -2.394723078027969, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5738312980559227, 0);
  sqcRYGate(q, 0.5475212243749006, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2374475648215304, 0);
  sqcRYGate(q, -1.6918898558872617, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4146214893960983, 0);
  sqcRYGate(q, 1.3798822841885585, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.054457474069598395, 0);
  sqcRYGate(q, 1.9137273564494928, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.425193660520517, 0);
  sqcRYGate(q, 1.8838995393310327, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.5772372961528078, 0);
  sqcRYGate(q, -0.6688934602687258, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.2547372383882776, 1);
  sqcRYGate(q, -2.918216041325134, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8851455155473054, 1);
  sqcRYGate(q, -3.0647872948577293, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.20133744731252, 1);
  sqcRYGate(q, -0.045191030106289894, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6309821610544484, 1);
  sqcRYGate(q, -2.7651334518914745, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7926780446562294, 2);
  sqcRYGate(q, -2.1049995505112866, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8256925915671971, 2);
  sqcRYGate(q, 1.4251111525067897, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5653149404241264, 0);
  sqcRYGate(q, -1.1857775017078895, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.13509224409231813, 0);
  sqcRYGate(q, -0.36536615556641633, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7067844437400903, 0);
  sqcRYGate(q, 2.039300678939571, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.388519044227547, 0);
  sqcRYGate(q, 2.4028777819026366, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0398196604956196, 0);
  sqcRYGate(q, -1.0035405818499354, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.5944063777447997, 0);
  sqcRYGate(q, 2.370992350213786, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.636333597188374, 1);
  sqcRYGate(q, -2.576827085344881, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.139180173939641, 1);
  sqcRYGate(q, -0.47881534745099014, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.161218634785479, 1);
  sqcRYGate(q, 0.173904673420544, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7103572790918202, 1);
  sqcRYGate(q, -1.019421102421288, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.387890790097447, 2);
  sqcRYGate(q, -1.418247343840326, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6049196660722247, 2);
  sqcRYGate(q, 1.4795413756181608, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9959509573842072, 0);
  sqcRYGate(q, -0.02543914379083778, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6399867599275053, 0);
  sqcRYGate(q, 1.0788265036219382, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5985783100831727, 0);
  sqcRYGate(q, -0.4349247369724796, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.585805274073788, 0);
  sqcRYGate(q, 1.3695881393140295, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2148307343877205, 0);
  sqcRYGate(q, -1.4394683219946227, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.1582997124603454, 0);
  sqcRYGate(q, 0.18994541746979735, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2388805345328047, 1);
  sqcRYGate(q, 0.792713878830298, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5657000667261305, 1);
  sqcRYGate(q, 2.0941677210417744, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5117316799642477, 1);
  sqcRYGate(q, 0.9224622854891997, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.003641547144228786, 1);
  sqcRYGate(q, 2.29278467880952, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7656607662837331, 2);
  sqcRYGate(q, -2.317671997869051, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7310018354283031, 2);
  sqcRYGate(q, -2.2612207049983963, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6466089161008672, 0);
  sqcRYGate(q, -2.5684990036668554, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3332586327195541, 0);
  sqcRYGate(q, -0.576692926946409, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.13559564480078112, 0);
  sqcRYGate(q, 2.8603494612137084, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2741897355523877, 0);
  sqcRYGate(q, 2.606098169697231, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1129887935143685, 0);
  sqcRYGate(q, -3.096739851497242, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.219976677014084, 0);
  sqcRYGate(q, -3.111735192310674, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.7861519230820697, 1);
  sqcRYGate(q, -0.7184042261409822, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.965612061268393, 1);
  sqcRYGate(q, -0.37251184290683703, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7943773710277715, 1);
  sqcRYGate(q, 2.395581973670283, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6366957528748842, 1);
  sqcRYGate(q, -2.0311049272674637, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1534713178650282, 2);
  sqcRYGate(q, 2.315397505351528, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.017277437659218, 2);
  sqcRYGate(q, 0.6137226311189128, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0687297027484215, 0);
  sqcRYGate(q, -2.261223255928249, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.840833161092074, 0);
  sqcRYGate(q, 2.73607677394501, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.891782537386272, 0);
  sqcRYGate(q, -0.472178678753994, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6564490805769372, 0);
  sqcRYGate(q, 2.9354538702011337, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6987306067514085, 0);
  sqcRYGate(q, -1.4331461582639904, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6085974922422412, 0);
  sqcRYGate(q, 1.4135171155092552, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.7842414432854994, 1);
  sqcRYGate(q, -2.2103851504949352, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7680097465761088, 1);
  sqcRYGate(q, 0.6600151403754542, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.117120417408783, 1);
  sqcRYGate(q, 2.7313897863823846, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0263701958060274, 1);
  sqcRYGate(q, 1.7794994331828247, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1862530022269944, 2);
  sqcRYGate(q, -1.1007116395266094, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3011453789754404, 2);
  sqcRYGate(q, -3.13462377278169, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6389765089132187, 0);
  sqcRYGate(q, 1.8869540369297129, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7415449593379573, 0);
  sqcRYGate(q, 1.732193544827741, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.12392509208439698, 0);
  sqcRYGate(q, -1.382391348064919, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0225745868986598, 0);
  sqcRYGate(q, -2.451995984728459, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2543042097339328, 0);
  sqcRYGate(q, 1.6545054100089531, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9191158474493966, 0);
  sqcRYGate(q, 0.20604740964480864, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9978964745300596, 1);
  sqcRYGate(q, -2.137648951896632, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5324230677133874, 1);
  sqcRYGate(q, 0.6481955618385264, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.1048019744556985, 1);
  sqcRYGate(q, 0.6573630591791249, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4252519793661644, 1);
  sqcRYGate(q, 2.304012748469709, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0382802814858234, 2);
  sqcRYGate(q, -0.40542151651804287, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.034298505516312805, 2);
  sqcRYGate(q, -0.07841045027437764, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9113992966594573, 0);
  sqcRYGate(q, 2.895546794892457, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7141250295595017, 0);
  sqcRYGate(q, 1.355027168046104, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9800908523213412, 0);
  sqcRYGate(q, -2.3764004810156156, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0619245156379997, 0);
  sqcRYGate(q, 0.4608256186102686, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.948204301800994, 0);
  sqcRYGate(q, -1.3588383417019458, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.30721191867778064, 0);
  sqcRYGate(q, 0.8068055631600118, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.6724441067387996, 1);
  sqcRYGate(q, 3.0949279085883132, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.45242309438066647, 1);
  sqcRYGate(q, 2.1351104576316864, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2517543204395252, 1);
  sqcRYGate(q, 2.703332711016191, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.796901574483635, 1);
  sqcRYGate(q, -0.16621616052867694, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.741607097416791, 2);
  sqcRYGate(q, 0.7408903656380266, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.092468049757922, 2);
  sqcRYGate(q, 0.24545217115466225, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.872102014332861, 0);
  sqcRYGate(q, 2.549358648054084, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.953642851230372, 0);
  sqcRYGate(q, -0.6626515486988104, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3067393772902873, 0);
  sqcRYGate(q, -0.4482299111468535, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8752108185499896, 0);
  sqcRYGate(q, -1.3981951174488936, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6712397860149677, 0);
  sqcRYGate(q, -3.0445636207707842, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.007958594937488, 0);
  sqcRYGate(q, -1.070735069378002, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.7877861373947463, 1);
  sqcRYGate(q, -1.486763345972606, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7906229759634046, 1);
  sqcRYGate(q, 1.3146287763640556, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.36891765813721467, 1);
  sqcRYGate(q, -0.8198906179427636, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.1162501428013374, 1);
  sqcRYGate(q, 1.907234587806648, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.277873778023994, 2);
  sqcRYGate(q, 0.23891333613254798, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.86036399193529, 2);
  sqcRYGate(q, 0.457990511142226, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6079171816261679, 0);
  sqcRYGate(q, 0.6097027463291651, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4607074917460645, 0);
  sqcRYGate(q, 2.6386170514030725, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.18737585005497337, 0);
  sqcRYGate(q, -1.4369571550036653, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6324127021191974, 0);
  sqcRYGate(q, -2.7780822531379603, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.405884085590342, 0);
  sqcRYGate(q, 2.48478969226124, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.9932662779801475, 0);
  sqcRYGate(q, 3.1262358849914387, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5057475696161946, 1);
  sqcRYGate(q, 1.4538947236393334, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2890224226792073, 1);
  sqcRYGate(q, -0.73062904459717, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9176702560285683, 1);
  sqcRYGate(q, -2.231127168110807, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8427997948604036, 1);
  sqcRYGate(q, -2.0017931303317784, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8318885791414834, 2);
  sqcRYGate(q, 1.2814597352851056, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8104209128234681, 2);
  sqcRYGate(q, -2.4333339289786555, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8266248254179205, 0);
  sqcRYGate(q, 0.3458162368907051, 1);
  sqcRYGate(q, -2.7514412980316734, 2);
  sqcRYGate(q, -2.2671380702894024, 3);

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
