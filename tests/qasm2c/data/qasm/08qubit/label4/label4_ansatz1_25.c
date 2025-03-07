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

  sqcRYGate(q, 2.968308454187395, 0);
  sqcRZGate(q, 1.5111398618717535, 0);
  sqcRYGate(q, -2.72514451873828, 1);
  sqcRZGate(q, -2.083511013795875, 1);
  sqcRYGate(q, 1.4182738187699002, 2);
  sqcRZGate(q, 1.776064672042134, 2);
  sqcRYGate(q, -1.8655021236060376, 3);
  sqcRZGate(q, -1.436952198262827, 3);
  sqcRYGate(q, -2.781698276672204, 4);
  sqcRZGate(q, -0.5026019428565984, 4);
  sqcRYGate(q, 3.028092921150899, 5);
  sqcRZGate(q, 1.4175087642082371, 5);
  sqcRYGate(q, 1.4138073351119882, 6);
  sqcRZGate(q, 2.403715043338092, 6);
  sqcRYGate(q, -0.4308803916689787, 7);
  sqcRZGate(q, -0.2482874296653074, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.7199735562848346, 0);
  sqcRZGate(q, 1.572592458020547, 0);
  sqcRYGate(q, -1.5315289399843355, 1);
  sqcRZGate(q, -1.8637474748436933, 1);
  sqcRYGate(q, 3.0388848366944434, 2);
  sqcRZGate(q, 3.084669963112907, 2);
  sqcRYGate(q, 0.5021874049668202, 3);
  sqcRZGate(q, 2.928086805019799, 3);
  sqcRYGate(q, 0.9071441219294047, 4);
  sqcRZGate(q, 1.2204176710160417, 4);
  sqcRYGate(q, 0.10115611524493762, 5);
  sqcRZGate(q, -1.1971939427831844, 5);
  sqcRYGate(q, -0.36544075733543835, 6);
  sqcRZGate(q, 1.6396451788538826, 6);
  sqcRYGate(q, 2.968741863074769, 7);
  sqcRZGate(q, 0.6305193164375257, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.5592790719582696, 0);
  sqcRZGate(q, -0.4288989598985435, 0);
  sqcRYGate(q, 2.4985025345667418, 1);
  sqcRZGate(q, 1.4358818184005768, 1);
  sqcRYGate(q, -2.342862849076965, 2);
  sqcRZGate(q, -2.8499996158697685, 2);
  sqcRYGate(q, -0.34659277004609795, 3);
  sqcRZGate(q, 2.2171258309738864, 3);
  sqcRYGate(q, 0.7796604528168745, 4);
  sqcRZGate(q, -2.092952126515115, 4);
  sqcRYGate(q, 2.184624096182148, 5);
  sqcRZGate(q, -2.636415269641815, 5);
  sqcRYGate(q, -0.8554749362113201, 6);
  sqcRZGate(q, -2.0253587919213714, 6);
  sqcRYGate(q, 2.9449616091344417, 7);
  sqcRZGate(q, -0.7094052579208838, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.8267832091084615, 0);
  sqcRZGate(q, -1.0443215221947544, 0);
  sqcRYGate(q, -1.0678674716657275, 1);
  sqcRZGate(q, 2.3952239580278345, 1);
  sqcRYGate(q, 0.15675210272538675, 2);
  sqcRZGate(q, 1.098422032159924, 2);
  sqcRYGate(q, 0.3054112824665616, 3);
  sqcRZGate(q, -2.5011793438476744, 3);
  sqcRYGate(q, 2.4979666483689846, 4);
  sqcRZGate(q, 2.973748001765571, 4);
  sqcRYGate(q, -2.9707373043645555, 5);
  sqcRZGate(q, 1.1590747055316406, 5);
  sqcRYGate(q, -0.5465065727026133, 6);
  sqcRZGate(q, -1.4489952443719525, 6);
  sqcRYGate(q, 2.4522736111196304, 7);
  sqcRZGate(q, 1.2365608904287084, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.7756190804939584, 0);
  sqcRZGate(q, 1.8171743200435813, 0);
  sqcRYGate(q, 0.988381226012658, 1);
  sqcRZGate(q, 1.6152480818733652, 1);
  sqcRYGate(q, 0.831594952255828, 2);
  sqcRZGate(q, -1.1826295747421147, 2);
  sqcRYGate(q, 2.5327305278445578, 3);
  sqcRZGate(q, -2.9294423545976453, 3);
  sqcRYGate(q, 2.201269621184245, 4);
  sqcRZGate(q, -1.9748507524783108, 4);
  sqcRYGate(q, 2.197265258273225, 5);
  sqcRZGate(q, 2.5499617383656408, 5);
  sqcRYGate(q, -2.747478714287104, 6);
  sqcRZGate(q, 1.59272555703773, 6);
  sqcRYGate(q, 0.7537661696348259, 7);
  sqcRZGate(q, 2.645769648039407, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.4973560123978713, 0);
  sqcRZGate(q, -2.573337894864474, 0);
  sqcRYGate(q, 2.0381530334262328, 1);
  sqcRZGate(q, 3.086532823877509, 1);
  sqcRYGate(q, 0.39453762092217376, 2);
  sqcRZGate(q, 0.9978352673921291, 2);
  sqcRYGate(q, 2.033804393926746, 3);
  sqcRZGate(q, 1.722646777121227, 3);
  sqcRYGate(q, -2.0838992219003005, 4);
  sqcRZGate(q, 3.0523834925846662, 4);
  sqcRYGate(q, 1.0215001136205233, 5);
  sqcRZGate(q, -2.7922551713537183, 5);
  sqcRYGate(q, -2.6613657804620714, 6);
  sqcRZGate(q, 0.6187734831926242, 6);
  sqcRYGate(q, 2.064459082515145, 7);
  sqcRZGate(q, -2.6389273254500085, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.4124403379265442, 0);
  sqcRZGate(q, 2.917097969115196, 0);
  sqcRYGate(q, 0.7495052817595617, 1);
  sqcRZGate(q, 0.7577943122583006, 1);
  sqcRYGate(q, 3.0563904186436894, 2);
  sqcRZGate(q, 0.39899138572387643, 2);
  sqcRYGate(q, -2.3132838152564412, 3);
  sqcRZGate(q, 2.9062952314905033, 3);
  sqcRYGate(q, 2.465855315847281, 4);
  sqcRZGate(q, -2.3232645859555965, 4);
  sqcRYGate(q, 1.475348343860737, 5);
  sqcRZGate(q, 0.9784217534379487, 5);
  sqcRYGate(q, 0.8379751914229157, 6);
  sqcRZGate(q, -0.23172718584710683, 6);
  sqcRYGate(q, -2.8587967214144023, 7);
  sqcRZGate(q, 2.743518496394384, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.941058899469544, 0);
  sqcRZGate(q, -1.855240856953815, 0);
  sqcRYGate(q, 0.3081305064875215, 1);
  sqcRZGate(q, 0.32712883740428617, 1);
  sqcRYGate(q, 1.3383243864175205, 2);
  sqcRZGate(q, -1.1370061655469041, 2);
  sqcRYGate(q, -0.1748437601670352, 3);
  sqcRZGate(q, -1.3983924836180548, 3);
  sqcRYGate(q, 0.07424353157141628, 4);
  sqcRZGate(q, -2.2035938706572904, 4);
  sqcRYGate(q, -0.33562766896166707, 5);
  sqcRZGate(q, -0.8763017023252617, 5);
  sqcRYGate(q, -2.3909962364750412, 6);
  sqcRZGate(q, 0.32705121350401894, 6);
  sqcRYGate(q, 0.7609643380518851, 7);
  sqcRZGate(q, -2.382152299959415, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.6650261634317631, 0);
  sqcRZGate(q, 1.0662931542337706, 0);
  sqcRYGate(q, -1.0832919615257066, 1);
  sqcRZGate(q, -2.9024126783904998, 1);
  sqcRYGate(q, -0.564323710696935, 2);
  sqcRZGate(q, 1.9705880428073819, 2);
  sqcRYGate(q, -0.10898242749106547, 3);
  sqcRZGate(q, 3.079285454797933, 3);
  sqcRYGate(q, 1.9402431489895495, 4);
  sqcRZGate(q, -1.1202813147414492, 4);
  sqcRYGate(q, -0.23464708036922932, 5);
  sqcRZGate(q, -0.011076542380150657, 5);
  sqcRYGate(q, 2.126257945707276, 6);
  sqcRZGate(q, 2.0172896645809404, 6);
  sqcRYGate(q, 1.2472881886365021, 7);
  sqcRZGate(q, -2.1882410774018304, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.18165165775273717, 0);
  sqcRZGate(q, 0.7397712962033438, 0);
  sqcRYGate(q, 1.8282543355950573, 1);
  sqcRZGate(q, -1.4329047281104703, 1);
  sqcRYGate(q, -2.844521070326693, 2);
  sqcRZGate(q, 2.705016446979338, 2);
  sqcRYGate(q, -3.1027148886456146, 3);
  sqcRZGate(q, 1.2325586391899161, 3);
  sqcRYGate(q, -2.921262636570201, 4);
  sqcRZGate(q, 0.14337029336617488, 4);
  sqcRYGate(q, -0.8740382153103621, 5);
  sqcRZGate(q, 1.75671526788053, 5);
  sqcRYGate(q, 0.8750771620601991, 6);
  sqcRZGate(q, -1.7992541955489658, 6);
  sqcRYGate(q, 2.766553167599659, 7);
  sqcRZGate(q, -0.4750219227812258, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.9002512773952028, 0);
  sqcRZGate(q, 0.9647437011771132, 0);
  sqcRYGate(q, 2.554509025071173, 1);
  sqcRZGate(q, 1.8008859728999091, 1);
  sqcRYGate(q, 2.0588017263017755, 2);
  sqcRZGate(q, 2.161858848835423, 2);
  sqcRYGate(q, 1.7671636264798436, 3);
  sqcRZGate(q, 1.6072559317942747, 3);
  sqcRYGate(q, 2.6475091468476526, 4);
  sqcRZGate(q, -0.3774818087224303, 4);
  sqcRYGate(q, 0.4851588212833873, 5);
  sqcRZGate(q, 2.784255615832243, 5);
  sqcRYGate(q, -1.439047454483712, 6);
  sqcRZGate(q, -0.8551429658431241, 6);
  sqcRYGate(q, 1.729141239275887, 7);
  sqcRZGate(q, -1.294018052558096, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.195750724009551, 0);
  sqcRZGate(q, -1.9000557338124888, 0);
  sqcRYGate(q, -2.1580911052220655, 1);
  sqcRZGate(q, 0.7752318732643906, 1);
  sqcRYGate(q, -3.1266336727271034, 2);
  sqcRZGate(q, -1.0688810655077388, 2);
  sqcRYGate(q, -3.1291276208802943, 3);
  sqcRZGate(q, 1.3327660446008869, 3);
  sqcRYGate(q, -0.10207712327368719, 4);
  sqcRZGate(q, -1.9065850893855245, 4);
  sqcRYGate(q, 2.7767209011342566, 5);
  sqcRZGate(q, -2.959809245270267, 5);
  sqcRYGate(q, -1.599032612175777, 6);
  sqcRZGate(q, 1.1665256097729244, 6);
  sqcRYGate(q, -2.672764762896765, 7);
  sqcRZGate(q, 2.089591247348659, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.4732289352141201, 0);
  sqcRZGate(q, 1.311396007778639, 0);
  sqcRYGate(q, 1.449924189612599, 1);
  sqcRZGate(q, 0.6053031067676758, 1);
  sqcRYGate(q, -2.4401891533515587, 2);
  sqcRZGate(q, 2.925968825250357, 2);
  sqcRYGate(q, -1.0602590792647053, 3);
  sqcRZGate(q, 0.6522683531352617, 3);
  sqcRYGate(q, -0.5526164991193916, 4);
  sqcRZGate(q, 0.1428098119699756, 4);
  sqcRYGate(q, -2.951445596536158, 5);
  sqcRZGate(q, 0.29367846645061224, 5);
  sqcRYGate(q, -1.9951553789295007, 6);
  sqcRZGate(q, -2.309130688709683, 6);
  sqcRYGate(q, -1.7780742358971844, 7);
  sqcRZGate(q, 1.2230121688908198, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.167850067402206, 0);
  sqcRZGate(q, 2.266494461458635, 0);
  sqcRYGate(q, -1.8264145019194935, 1);
  sqcRZGate(q, 0.22493517318447687, 1);
  sqcRYGate(q, -1.2384153277307255, 2);
  sqcRZGate(q, 1.4493403446747055, 2);
  sqcRYGate(q, 0.00972219349547565, 3);
  sqcRZGate(q, -0.9066041667273089, 3);
  sqcRYGate(q, -3.1183715428917482, 4);
  sqcRZGate(q, 1.1800517922357938, 4);
  sqcRYGate(q, 1.013675751934752, 5);
  sqcRZGate(q, -2.2742953516359057, 5);
  sqcRYGate(q, 1.4495038172954948, 6);
  sqcRZGate(q, 1.7885319734794018, 6);
  sqcRYGate(q, 2.4023213687135425, 7);
  sqcRZGate(q, -0.6189581336348122, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.09868875885760749, 0);
  sqcRZGate(q, 1.3776340061610366, 0);
  sqcRYGate(q, 0.5674521115655056, 1);
  sqcRZGate(q, 1.6521295449519773, 1);
  sqcRYGate(q, -1.927299448215118, 2);
  sqcRZGate(q, -1.388500445326515, 2);
  sqcRYGate(q, -0.651594915945263, 3);
  sqcRZGate(q, 0.8518530233990073, 3);
  sqcRYGate(q, -1.531537309432447, 4);
  sqcRZGate(q, 2.607297761561031, 4);
  sqcRYGate(q, -0.05248393202194812, 5);
  sqcRZGate(q, -0.6911641073196463, 5);
  sqcRYGate(q, 1.5862365644264393, 6);
  sqcRZGate(q, -1.3608858891173625, 6);
  sqcRYGate(q, 2.0729005098695357, 7);
  sqcRZGate(q, 3.011882130251812, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.9508968838344528, 0);
  sqcRZGate(q, 2.726615310181295, 0);
  sqcRYGate(q, -2.4553582572624757, 1);
  sqcRZGate(q, 2.612825199319525, 1);
  sqcRYGate(q, -2.6755996220043845, 2);
  sqcRZGate(q, 1.3402174880193662, 2);
  sqcRYGate(q, -0.00643219224828595, 3);
  sqcRZGate(q, -2.07008503277404, 3);
  sqcRYGate(q, 0.14370213279023591, 4);
  sqcRZGate(q, -1.934084678669084, 4);
  sqcRYGate(q, 2.97243164396307, 5);
  sqcRZGate(q, -2.254630971932042, 5);
  sqcRYGate(q, -1.1366865800085586, 6);
  sqcRZGate(q, -3.135020565387943, 6);
  sqcRYGate(q, 2.9869712205520926, 7);
  sqcRZGate(q, -1.4896743952045028, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.1477217716630257, 0);
  sqcRZGate(q, -0.08433502262363213, 0);
  sqcRYGate(q, -1.9015505608150687, 1);
  sqcRZGate(q, 0.19354848266556157, 1);
  sqcRYGate(q, -0.9170191518796434, 2);
  sqcRZGate(q, 1.0138815495770022, 2);
  sqcRYGate(q, -0.3983801779235559, 3);
  sqcRZGate(q, 0.2137161591662311, 3);
  sqcRYGate(q, 1.5216720643026058, 4);
  sqcRZGate(q, -2.709275523701426, 4);
  sqcRYGate(q, 0.15499597042871915, 5);
  sqcRZGate(q, 1.7729673533013823, 5);
  sqcRYGate(q, 0.8766822269182049, 6);
  sqcRZGate(q, -2.1475264789735853, 6);
  sqcRYGate(q, -0.532622226111978, 7);
  sqcRZGate(q, -1.6133619501493013, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.135441595007568, 0);
  sqcRZGate(q, -3.0564657528729477, 0);
  sqcRYGate(q, 2.0728941264271654, 1);
  sqcRZGate(q, -0.8668490362887443, 1);
  sqcRYGate(q, -2.0701587560859753, 2);
  sqcRZGate(q, -3.014968324359233, 2);
  sqcRYGate(q, -3.118358268679648, 3);
  sqcRZGate(q, -1.1930381594685295, 3);
  sqcRYGate(q, 1.4379744891794224, 4);
  sqcRZGate(q, -1.953645472316567, 4);
  sqcRYGate(q, 2.8743105702717875, 5);
  sqcRZGate(q, -1.7679751320624275, 5);
  sqcRYGate(q, -2.7761668887513684, 6);
  sqcRZGate(q, -2.0329686851006366, 6);
  sqcRYGate(q, 0.4862023102222768, 7);
  sqcRZGate(q, -1.6346737412381611, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.514627771476326, 0);
  sqcRZGate(q, -2.8001198086570915, 0);
  sqcRYGate(q, 1.2875775844941637, 1);
  sqcRZGate(q, 0.8658625554695825, 1);
  sqcRYGate(q, 0.049751255693453816, 2);
  sqcRZGate(q, -0.5345510288136281, 2);
  sqcRYGate(q, 0.0021184094242984834, 3);
  sqcRZGate(q, -3.0312856076080146, 3);
  sqcRYGate(q, 1.5634255374006676, 4);
  sqcRZGate(q, 3.089078939847825, 4);
  sqcRYGate(q, -3.1077424685759145, 5);
  sqcRZGate(q, 0.2914340597060234, 5);
  sqcRYGate(q, 0.937858680039876, 6);
  sqcRZGate(q, -1.5649930062015232, 6);
  sqcRYGate(q, -0.10787904585442476, 7);
  sqcRZGate(q, 0.4201622494167135, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5971397053134968, 0);
  sqcRZGate(q, -2.1959666863708356, 0);
  sqcRYGate(q, 0.3390315463862057, 1);
  sqcRZGate(q, 0.5805676778463065, 1);
  sqcRYGate(q, 2.4201360881978884, 2);
  sqcRZGate(q, 2.934979222133633, 2);
  sqcRYGate(q, 3.1067877431322493, 3);
  sqcRZGate(q, -2.228371902790835, 3);
  sqcRYGate(q, -3.0011064280894, 4);
  sqcRZGate(q, 0.9714223455179082, 4);
  sqcRYGate(q, 2.8864679498642167, 5);
  sqcRZGate(q, -2.9576634877235284, 5);
  sqcRYGate(q, -1.711367772013372, 6);
  sqcRZGate(q, -0.27176441169822985, 6);
  sqcRYGate(q, 2.3466545203720646, 7);
  sqcRZGate(q, -2.2567416301309677, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.5657127525678298, 0);
  sqcRZGate(q, -1.5186959605241337, 0);
  sqcRYGate(q, 0.8195926879228299, 1);
  sqcRZGate(q, -0.8099343942077879, 1);
  sqcRYGate(q, 3.0682780093045445, 2);
  sqcRZGate(q, -1.1550124387812193, 2);
  sqcRYGate(q, -3.1207937041880425, 3);
  sqcRZGate(q, 0.37299946692004177, 3);
  sqcRYGate(q, -0.6636545507997296, 4);
  sqcRZGate(q, -2.5294845174504963, 4);
  sqcRYGate(q, -2.940677447051399, 5);
  sqcRZGate(q, 1.0759650830203662, 5);
  sqcRYGate(q, -1.6662167084565185, 6);
  sqcRZGate(q, 1.2623639549936838, 6);
  sqcRYGate(q, -2.4546653616531713, 7);
  sqcRZGate(q, -1.2600983229241032, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.112899712882004, 0);
  sqcRZGate(q, 2.6857448637314087, 0);
  sqcRYGate(q, 0.08154145944083992, 1);
  sqcRZGate(q, -1.3861146361880579, 1);
  sqcRYGate(q, -0.9820642283437692, 2);
  sqcRZGate(q, 0.9336732950554136, 2);
  sqcRYGate(q, -1.5537653454417697, 3);
  sqcRZGate(q, -2.9736604453591786, 3);
  sqcRYGate(q, -2.7620352103186634, 4);
  sqcRZGate(q, -0.7557497845347365, 4);
  sqcRYGate(q, 3.095609392859979, 5);
  sqcRZGate(q, -0.6240516393846711, 5);
  sqcRYGate(q, 0.8230341693015819, 6);
  sqcRZGate(q, 1.919871846442797, 6);
  sqcRYGate(q, 0.8353548441162699, 7);
  sqcRZGate(q, -1.1341185745516018, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.716010452231019, 0);
  sqcRZGate(q, 1.1444614672321771, 0);
  sqcRYGate(q, 2.2142992336699137, 1);
  sqcRZGate(q, -1.1964384890557764, 1);
  sqcRYGate(q, 0.010516413256961921, 2);
  sqcRZGate(q, 1.491678037579519, 2);
  sqcRYGate(q, -3.11697159321314, 3);
  sqcRZGate(q, -1.407554427268358, 3);
  sqcRYGate(q, -1.5786017572887512, 4);
  sqcRZGate(q, -1.5540952600561533, 4);
  sqcRYGate(q, -3.1025568964902726, 5);
  sqcRZGate(q, -2.985931548755655, 5);
  sqcRYGate(q, 0.05344166757619106, 6);
  sqcRZGate(q, -1.0221424331011368, 6);
  sqcRYGate(q, -0.6526016641247936, 7);
  sqcRZGate(q, 1.45704723849926, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.6952277596367776, 0);
  sqcRZGate(q, -0.08622503216880362, 0);
  sqcRYGate(q, -1.6389807527731155, 1);
  sqcRZGate(q, -1.1482454174140833, 1);
  sqcRYGate(q, -2.8627260388966276, 2);
  sqcRZGate(q, -0.6409345372067322, 2);
  sqcRYGate(q, 1.5676664128335493, 3);
  sqcRZGate(q, 0.29852661367288924, 3);
  sqcRYGate(q, -1.57259251105015, 4);
  sqcRZGate(q, 0.7387349628815256, 4);
  sqcRYGate(q, -0.0041261780810604165, 5);
  sqcRZGate(q, -2.086428460273167, 5);
  sqcRYGate(q, 1.418031025545607, 6);
  sqcRZGate(q, -0.770864428307668, 6);
  sqcRYGate(q, 0.8312583157767067, 7);
  sqcRZGate(q, 1.5813253428090466, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.734766522477532, 0);
  sqcRZGate(q, -2.0074984963792337, 0);
  sqcRYGate(q, -1.4136071173236708, 1);
  sqcRZGate(q, 1.6406901588104346, 1);
  sqcRYGate(q, -3.1126876909788774, 2);
  sqcRZGate(q, -1.0852131201260153, 2);
  sqcRYGate(q, -3.1401791622004613, 3);
  sqcRZGate(q, -0.740511871937751, 3);
  sqcRYGate(q, 1.5541831365256522, 4);
  sqcRZGate(q, -3.0849674658013475, 4);
  sqcRYGate(q, -1.5627050596859855, 5);
  sqcRZGate(q, 3.141456132724345, 5);
  sqcRYGate(q, -1.601457080649884, 6);
  sqcRZGate(q, -0.19260868545184454, 6);
  sqcRYGate(q, 1.476867897213043, 7);
  sqcRZGate(q, 3.0206956394658255, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.09065016037251, 0);
  sqcRZGate(q, 1.2961089202745282, 0);
  sqcRYGate(q, 0.6968222273802381, 1);
  sqcRZGate(q, 2.214549246302001, 1);
  sqcRYGate(q, -0.33207822080064986, 2);
  sqcRZGate(q, 1.1630417334266274, 2);
  sqcRYGate(q, -3.1396437228135268, 3);
  sqcRZGate(q, 2.9129098956392903, 3);
  sqcRYGate(q, -2.9696583356012836, 4);
  sqcRZGate(q, 0.718349411871409, 4);
  sqcRYGate(q, 0.8325894992636655, 5);
  sqcRZGate(q, 3.130071617150717, 5);
  sqcRYGate(q, 1.5998890876730965, 6);
  sqcRZGate(q, 1.3637981779893122, 6);
  sqcRYGate(q, -2.9862886202355634, 7);
  sqcRZGate(q, 2.970790042226026, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.8380094246580496, 0);
  sqcRZGate(q, 0.10867142934817206, 0);
  sqcRYGate(q, 1.4962955836180143, 1);
  sqcRZGate(q, -2.3731662287185626, 1);
  sqcRYGate(q, -1.5554356801518732, 2);
  sqcRZGate(q, -1.5790126163556402, 2);
  sqcRYGate(q, -2.9952013134550546, 3);
  sqcRZGate(q, -1.621018193664339, 3);
  sqcRYGate(q, 0.029652662892507564, 4);
  sqcRZGate(q, 2.4516719200414085, 4);
  sqcRYGate(q, -0.26221417910792244, 5);
  sqcRZGate(q, 0.017109828937678526, 5);
  sqcRYGate(q, -3.1391588145675464, 6);
  sqcRZGate(q, 0.5832733945721955, 6);
  sqcRYGate(q, 3.13583225980948, 7);
  sqcRZGate(q, 1.607264790651142, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.47984002058634406, 0);
  sqcRZGate(q, -0.6001743435789377, 0);
  sqcRYGate(q, 0.009506000418525673, 1);
  sqcRZGate(q, 2.7057717660232234, 1);
  sqcRYGate(q, 1.56717064379558, 2);
  sqcRZGate(q, 2.727605697838691, 2);
  sqcRYGate(q, 0.008185029233202759, 3);
  sqcRZGate(q, -2.2692528339393347, 3);
  sqcRYGate(q, 2.8504222354092033, 4);
  sqcRZGate(q, -0.04670096583893102, 4);
  sqcRYGate(q, -2.5479567912085557, 5);
  sqcRZGate(q, -1.5648647223170584, 5);
  sqcRYGate(q, 0.04025659970175538, 6);
  sqcRZGate(q, -0.7891473878981481, 6);
  sqcRYGate(q, 1.2597571350782004, 7);
  sqcRZGate(q, 0.6646554603326864, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.1283100287015058, 0);
  sqcRZGate(q, -0.6807642117977847, 0);
  sqcRYGate(q, -0.011127297992006834, 1);
  sqcRZGate(q, 2.200540078671988, 1);
  sqcRYGate(q, 3.0084078420545044, 2);
  sqcRZGate(q, -0.809114386713452, 2);
  sqcRYGate(q, 0.002060266674316115, 3);
  sqcRZGate(q, -2.3676104785702528, 3);
  sqcRYGate(q, -1.5817799926160738, 4);
  sqcRZGate(q, 1.2355486158052469, 4);
  sqcRYGate(q, 1.5732920813742295, 5);
  sqcRZGate(q, 1.3281979418843946, 5);
  sqcRYGate(q, 1.5741592969366964, 6);
  sqcRZGate(q, 2.67726971845171, 6);
  sqcRYGate(q, -3.1395307638588545, 7);
  sqcRZGate(q, -1.0337917021797276, 7);

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
