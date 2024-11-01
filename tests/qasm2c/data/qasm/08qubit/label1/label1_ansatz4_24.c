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

  sqcRYGate(q, 2.26439205013744, 0);
  sqcRZGate(q, -1.0910356708858107, 0);
  sqcRYGate(q, -2.813695396944992, 1);
  sqcRZGate(q, -0.6887637379260586, 1);
  sqcRYGate(q, -1.3272801966769583, 2);
  sqcRZGate(q, 0.8084232850199519, 2);
  sqcRYGate(q, 0.5788516595651196, 3);
  sqcRZGate(q, -0.830737706620286, 3);
  sqcRYGate(q, 1.3537929418209655, 4);
  sqcRZGate(q, 1.9556802705097842, 4);
  sqcRYGate(q, -0.34164749140954176, 5);
  sqcRZGate(q, -2.84881581673007, 5);
  sqcRYGate(q, 0.3888641523355466, 6);
  sqcRZGate(q, -0.41352323077004005, 6);
  sqcRYGate(q, 1.6223950836282788, 7);
  sqcRZGate(q, 2.8243670973155472, 7);
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
  sqcRYGate(q, 2.492346964350143, 0);
  sqcRZGate(q, 0.009992025639062874, 0);
  sqcRYGate(q, 0.59548871974, 1);
  sqcRZGate(q, 1.2701986551787896, 1);
  sqcRYGate(q, 0.9225223139652936, 2);
  sqcRZGate(q, -1.7000676067893457, 2);
  sqcRYGate(q, 2.389310867830735, 3);
  sqcRZGate(q, 0.6963438482542861, 3);
  sqcRYGate(q, -1.4403520458187122, 4);
  sqcRZGate(q, -0.886007280835025, 4);
  sqcRYGate(q, -1.0171980743160587, 5);
  sqcRZGate(q, 2.1507864000049297, 5);
  sqcRYGate(q, -2.633178344442692, 6);
  sqcRZGate(q, 2.6842818785848905, 6);
  sqcRYGate(q, -2.5925126402309098, 7);
  sqcRZGate(q, -0.5952490945776994, 7);
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
  sqcRYGate(q, 0.7769878097604962, 0);
  sqcRZGate(q, -2.0027225780791715, 0);
  sqcRYGate(q, -1.4038059160984497, 1);
  sqcRZGate(q, 2.848181874954483, 1);
  sqcRYGate(q, 2.527135113085506, 2);
  sqcRZGate(q, -1.9745239775963643, 2);
  sqcRYGate(q, -1.700304802556487, 3);
  sqcRZGate(q, 1.3550392983215023, 3);
  sqcRYGate(q, -1.7810199935467739, 4);
  sqcRZGate(q, 2.804983066816799, 4);
  sqcRYGate(q, 2.572944697294486, 5);
  sqcRZGate(q, -0.5711857386404576, 5);
  sqcRYGate(q, 2.1235703772858336, 6);
  sqcRZGate(q, -0.024329404406497446, 6);
  sqcRYGate(q, -0.27341125417884093, 7);
  sqcRZGate(q, -2.552520304369582, 7);
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
  sqcRYGate(q, -2.3754731938992966, 0);
  sqcRZGate(q, 0.3659580791714617, 0);
  sqcRYGate(q, -0.48367725689782315, 1);
  sqcRZGate(q, 3.091335683989078, 1);
  sqcRYGate(q, -2.747186100775626, 2);
  sqcRZGate(q, 2.8570542295913017, 2);
  sqcRYGate(q, -2.1575064750480544, 3);
  sqcRZGate(q, 2.1925369538783883, 3);
  sqcRYGate(q, -1.8826922613805304, 4);
  sqcRZGate(q, -1.6000573465036612, 4);
  sqcRYGate(q, -0.8091837647378552, 5);
  sqcRZGate(q, -1.4255056889262194, 5);
  sqcRYGate(q, 0.796756954020974, 6);
  sqcRZGate(q, 2.922651623662698, 6);
  sqcRYGate(q, 0.3863884036891436, 7);
  sqcRZGate(q, -0.941953358983233, 7);
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
  sqcRYGate(q, 0.44030482103466434, 0);
  sqcRZGate(q, -0.4381565763164001, 0);
  sqcRYGate(q, -2.07160062768355, 1);
  sqcRZGate(q, -0.8953955540272306, 1);
  sqcRYGate(q, -2.4700959956241597, 2);
  sqcRZGate(q, 0.8174665356805048, 2);
  sqcRYGate(q, 2.5171537912939774, 3);
  sqcRZGate(q, -2.3467289868791075, 3);
  sqcRYGate(q, -3.034773258436499, 4);
  sqcRZGate(q, 3.0115137765043425, 4);
  sqcRYGate(q, -0.6702480043459768, 5);
  sqcRZGate(q, 1.585554605738046, 5);
  sqcRYGate(q, -0.4444089787140063, 6);
  sqcRZGate(q, 1.8752216200667977, 6);
  sqcRYGate(q, 1.8504078244241238, 7);
  sqcRZGate(q, -1.7649076332288052, 7);
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
  sqcRYGate(q, -1.7664094534701642, 0);
  sqcRZGate(q, 0.19742382011634252, 0);
  sqcRYGate(q, -0.9001733897373417, 1);
  sqcRZGate(q, 1.076029848009873, 1);
  sqcRYGate(q, -0.6594397439699878, 2);
  sqcRZGate(q, -0.5723494140546803, 2);
  sqcRYGate(q, -1.7107176094806575, 3);
  sqcRZGate(q, 1.769687262843605, 3);
  sqcRYGate(q, 0.3622714294224972, 4);
  sqcRZGate(q, -1.846644579674652, 4);
  sqcRYGate(q, 0.9402482154031038, 5);
  sqcRZGate(q, 0.8336389679330373, 5);
  sqcRYGate(q, -1.042362649899787, 6);
  sqcRZGate(q, 0.577163422828177, 6);
  sqcRYGate(q, -2.2624304512077766, 7);
  sqcRZGate(q, -1.0487458815972046, 7);
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
  sqcRYGate(q, -0.6251920936429606, 0);
  sqcRZGate(q, 2.876640703471142, 0);
  sqcRYGate(q, -2.7691343169378686, 1);
  sqcRZGate(q, 2.391363046064771, 1);
  sqcRYGate(q, 1.6315323539114504, 2);
  sqcRZGate(q, -1.767576827988878, 2);
  sqcRYGate(q, 1.1098227047994877, 3);
  sqcRZGate(q, -1.5719017484808173, 3);
  sqcRYGate(q, -0.9046375350130199, 4);
  sqcRZGate(q, -2.546313775687113, 4);
  sqcRYGate(q, 2.4931281037472375, 5);
  sqcRZGate(q, -1.374918919839189, 5);
  sqcRYGate(q, 2.6223475880822007, 6);
  sqcRZGate(q, -0.09615888929673942, 6);
  sqcRYGate(q, 1.2901319118917485, 7);
  sqcRZGate(q, 0.6310085260859708, 7);
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
  sqcRYGate(q, 1.205642268125316, 0);
  sqcRZGate(q, -0.5022504777628837, 0);
  sqcRYGate(q, -0.5443690708440131, 1);
  sqcRZGate(q, 0.4909718564389358, 1);
  sqcRYGate(q, 0.7234700277442282, 2);
  sqcRZGate(q, -1.3537797346950988, 2);
  sqcRYGate(q, 2.1598064318288714, 3);
  sqcRZGate(q, -0.2530410270637838, 3);
  sqcRYGate(q, 1.9200120506551333, 4);
  sqcRZGate(q, -2.8085411014680326, 4);
  sqcRYGate(q, -1.2134329070159486, 5);
  sqcRZGate(q, -1.532044077441344, 5);
  sqcRYGate(q, -1.4960611179708678, 6);
  sqcRZGate(q, 2.793599577438751, 6);
  sqcRYGate(q, -0.2756174998795885, 7);
  sqcRZGate(q, 0.11250156595942773, 7);
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
  sqcRYGate(q, 2.0410935709874423, 0);
  sqcRZGate(q, -0.5192123181122703, 0);
  sqcRYGate(q, 0.3613354779062166, 1);
  sqcRZGate(q, -2.5593706690228917, 1);
  sqcRYGate(q, 1.1169792877726497, 2);
  sqcRZGate(q, 1.6246500752534454, 2);
  sqcRYGate(q, -2.3982827331014325, 3);
  sqcRZGate(q, -0.607578759643742, 3);
  sqcRYGate(q, -0.43499036985675055, 4);
  sqcRZGate(q, 0.5910978611889561, 4);
  sqcRYGate(q, -0.7176171138408725, 5);
  sqcRZGate(q, -0.4649105972321799, 5);
  sqcRYGate(q, -1.9646065519395723, 6);
  sqcRZGate(q, 0.6501826173666528, 6);
  sqcRYGate(q, -1.1075316402390145, 7);
  sqcRZGate(q, 1.639359563768421, 7);
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
  sqcRYGate(q, 0.5478884587019152, 0);
  sqcRZGate(q, -0.11602766053157745, 0);
  sqcRYGate(q, 1.1159142835476448, 1);
  sqcRZGate(q, -1.3190496400556315, 1);
  sqcRYGate(q, 1.9874445626902129, 2);
  sqcRZGate(q, -1.5686372910597226, 2);
  sqcRYGate(q, 0.6984594551783546, 3);
  sqcRZGate(q, -2.37748799163083, 3);
  sqcRYGate(q, 2.7704980932833685, 4);
  sqcRZGate(q, 0.9164622083065029, 4);
  sqcRYGate(q, 0.42750663512242215, 5);
  sqcRZGate(q, 2.073748123429673, 5);
  sqcRYGate(q, 1.9293409512496567, 6);
  sqcRZGate(q, 1.5992548046214905, 6);
  sqcRYGate(q, -2.538413096998098, 7);
  sqcRZGate(q, 1.0310160360241396, 7);
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
  sqcRYGate(q, 1.678980941971723, 0);
  sqcRZGate(q, 2.86051540279323, 0);
  sqcRYGate(q, 1.8807855966818223, 1);
  sqcRZGate(q, 0.18347553006824135, 1);
  sqcRYGate(q, -2.1782138877831554, 2);
  sqcRZGate(q, 0.2552575394234857, 2);
  sqcRYGate(q, 2.725186310457745, 3);
  sqcRZGate(q, -2.5069620947838573, 3);
  sqcRYGate(q, 2.833512615943189, 4);
  sqcRZGate(q, -0.5953960662383218, 4);
  sqcRYGate(q, -0.6057099534931966, 5);
  sqcRZGate(q, -0.6878994013271239, 5);
  sqcRYGate(q, -2.571057516467059, 6);
  sqcRZGate(q, 3.0452251682614184, 6);
  sqcRYGate(q, 2.2139987435568207, 7);
  sqcRZGate(q, -0.42170403330987016, 7);
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
  sqcRYGate(q, -1.359512162299592, 0);
  sqcRZGate(q, -2.3667356915923805, 0);
  sqcRYGate(q, -2.6756918088052095, 1);
  sqcRZGate(q, 1.609342773212881, 1);
  sqcRYGate(q, 1.9680159049134032, 2);
  sqcRZGate(q, 0.6691131418948162, 2);
  sqcRYGate(q, 1.440742575913483, 3);
  sqcRZGate(q, 1.6877978602589119, 3);
  sqcRYGate(q, 0.7501961635022933, 4);
  sqcRZGate(q, 1.2791773711138497, 4);
  sqcRYGate(q, 2.7488547972097357, 5);
  sqcRZGate(q, -0.6837007746758357, 5);
  sqcRYGate(q, 2.539401910035912, 6);
  sqcRZGate(q, -2.8976826488415752, 6);
  sqcRYGate(q, 2.940006942107663, 7);
  sqcRZGate(q, -1.892256917068646, 7);
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
  sqcRYGate(q, -2.8680010214054272, 0);
  sqcRZGate(q, 1.0135118268140488, 0);
  sqcRYGate(q, -2.5511901320728247, 1);
  sqcRZGate(q, -0.7716535639446701, 1);
  sqcRYGate(q, 1.655368935256214, 2);
  sqcRZGate(q, -2.517701487039133, 2);
  sqcRYGate(q, -2.280684961775173, 3);
  sqcRZGate(q, 0.6033786722850422, 3);
  sqcRYGate(q, -2.948384652945394, 4);
  sqcRZGate(q, 1.417957730853033, 4);
  sqcRYGate(q, -1.9227553269248094, 5);
  sqcRZGate(q, 0.8536771016871725, 5);
  sqcRYGate(q, -2.8973876451203635, 6);
  sqcRZGate(q, -0.2785173049825813, 6);
  sqcRYGate(q, -0.6236207601070243, 7);
  sqcRZGate(q, -0.7735425328922981, 7);
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
  sqcRYGate(q, 2.4721813548662284, 0);
  sqcRZGate(q, -0.28214758552715336, 0);
  sqcRYGate(q, -0.267067841013035, 1);
  sqcRZGate(q, -1.6839734353758349, 1);
  sqcRYGate(q, -1.6624004905342484, 2);
  sqcRZGate(q, -1.2314629676077071, 2);
  sqcRYGate(q, -2.5218012116973916, 3);
  sqcRZGate(q, 0.7365716183181071, 3);
  sqcRYGate(q, -2.2466907519604327, 4);
  sqcRZGate(q, 0.37549085572510243, 4);
  sqcRYGate(q, -0.8477626783274763, 5);
  sqcRZGate(q, 1.8358983913187883, 5);
  sqcRYGate(q, 0.7533352661844999, 6);
  sqcRZGate(q, 0.21450720055935688, 6);
  sqcRYGate(q, -2.646545234942705, 7);
  sqcRZGate(q, 1.7322977972479363, 7);
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
  sqcRYGate(q, -2.4478415410156673, 0);
  sqcRZGate(q, -0.3349085682878927, 0);
  sqcRYGate(q, -2.2216427314175684, 1);
  sqcRZGate(q, 2.3712737285070564, 1);
  sqcRYGate(q, 1.7869111363500334, 2);
  sqcRZGate(q, 3.1325822138508226, 2);
  sqcRYGate(q, 0.17271626533089082, 3);
  sqcRZGate(q, 2.1510745142917957, 3);
  sqcRYGate(q, -0.7134540758833686, 4);
  sqcRZGate(q, -1.9329781374429427, 4);
  sqcRYGate(q, -2.040672037567976, 5);
  sqcRZGate(q, -2.830782875879918, 5);
  sqcRYGate(q, 2.25714212784947, 6);
  sqcRZGate(q, -0.6837615879578612, 6);
  sqcRYGate(q, 2.0081371832570554, 7);
  sqcRZGate(q, -0.33881800000054607, 7);
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
  sqcRYGate(q, -2.4253531010360585, 0);
  sqcRZGate(q, -0.20423888262121803, 0);
  sqcRYGate(q, -1.4482706652865147, 1);
  sqcRZGate(q, 2.4951348104353954, 1);
  sqcRYGate(q, -1.049594536184041, 2);
  sqcRZGate(q, -2.476923468130524, 2);
  sqcRYGate(q, 2.6544042942456594, 3);
  sqcRZGate(q, 0.85307677420936, 3);
  sqcRYGate(q, -2.6427771580214685, 4);
  sqcRZGate(q, -2.1362132354425896, 4);
  sqcRYGate(q, -0.8047517408251688, 5);
  sqcRZGate(q, -0.9433599375400359, 5);
  sqcRYGate(q, 2.27779347611916, 6);
  sqcRZGate(q, -2.526291246230555, 6);
  sqcRYGate(q, -2.1946524668103162, 7);
  sqcRZGate(q, 1.353216339650352, 7);
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
  sqcRYGate(q, 0.8560463336899714, 0);
  sqcRZGate(q, 2.1653315383026293, 0);
  sqcRYGate(q, 2.876099036863445, 1);
  sqcRZGate(q, -2.9516632933016145, 1);
  sqcRYGate(q, -0.3803008640158675, 2);
  sqcRZGate(q, 1.3400674303715725, 2);
  sqcRYGate(q, -2.0136606080725263, 3);
  sqcRZGate(q, -2.248775689981043, 3);
  sqcRYGate(q, 1.9131780048856826, 4);
  sqcRZGate(q, 0.31253470287908947, 4);
  sqcRYGate(q, 0.8684258652162535, 5);
  sqcRZGate(q, 1.8075986112231321, 5);
  sqcRYGate(q, 1.0566055264759413, 6);
  sqcRZGate(q, 2.444471335336217, 6);
  sqcRYGate(q, 0.5223797598227833, 7);
  sqcRZGate(q, 3.053521280425994, 7);
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
  sqcRYGate(q, -2.264107209858338, 0);
  sqcRZGate(q, -1.0955369633180227, 0);
  sqcRYGate(q, -1.482811211106707, 1);
  sqcRZGate(q, 1.1458272278595845, 1);
  sqcRYGate(q, -2.840392326031506, 2);
  sqcRZGate(q, 1.9632354910379286, 2);
  sqcRYGate(q, -0.49348132743481327, 3);
  sqcRZGate(q, -2.281567947966645, 3);
  sqcRYGate(q, -2.739965923196667, 4);
  sqcRZGate(q, 0.22431682672216216, 4);
  sqcRYGate(q, -1.1236441205310328, 5);
  sqcRZGate(q, -1.4531536886108336, 5);
  sqcRYGate(q, -1.3856889518829947, 6);
  sqcRZGate(q, 0.8433959958868261, 6);
  sqcRYGate(q, -2.689302345863652, 7);
  sqcRZGate(q, 2.436984128884634, 7);
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
  sqcRYGate(q, 2.755826290033191, 0);
  sqcRZGate(q, -2.7699293687403146, 0);
  sqcRYGate(q, -1.5638217231315883, 1);
  sqcRZGate(q, 1.0402396780377696, 1);
  sqcRYGate(q, -2.2367863159213313, 2);
  sqcRZGate(q, 1.8194259110883766, 2);
  sqcRYGate(q, 2.6756143159720467, 3);
  sqcRZGate(q, -2.823234372142462, 3);
  sqcRYGate(q, -1.9932964965633322, 4);
  sqcRZGate(q, 1.6662817715101612, 4);
  sqcRYGate(q, 1.6411338594101121, 5);
  sqcRZGate(q, -1.8629335783086125, 5);
  sqcRYGate(q, -0.3296203681167942, 6);
  sqcRZGate(q, 2.416877450240101, 6);
  sqcRYGate(q, 2.358957932699651, 7);
  sqcRZGate(q, -0.698384030498145, 7);
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
  sqcRYGate(q, 2.691476699876769, 0);
  sqcRZGate(q, -1.7831386920439545, 0);
  sqcRYGate(q, 1.5247163977665026, 1);
  sqcRZGate(q, -1.03274023070094, 1);
  sqcRYGate(q, 2.2970773029316636, 2);
  sqcRZGate(q, 0.8975239018892145, 2);
  sqcRYGate(q, -1.3049693645073432, 3);
  sqcRZGate(q, 0.6421896974789845, 3);
  sqcRYGate(q, -0.07127752081349555, 4);
  sqcRZGate(q, -2.8475858442733974, 4);
  sqcRYGate(q, -2.09398878253096, 5);
  sqcRZGate(q, 1.64323042261669, 5);
  sqcRYGate(q, 0.3774118064305325, 6);
  sqcRZGate(q, -0.4238217233495618, 6);
  sqcRYGate(q, -2.5486497862225406, 7);
  sqcRZGate(q, -0.8109311830866315, 7);
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
  sqcRYGate(q, 1.9110672112369962, 0);
  sqcRZGate(q, 0.6204035400838341, 0);
  sqcRYGate(q, 1.1333921359663002, 1);
  sqcRZGate(q, 1.6943537299883593, 1);
  sqcRYGate(q, 2.3995478564644337, 2);
  sqcRZGate(q, -2.4381877833363004, 2);
  sqcRYGate(q, -2.37624746485281, 3);
  sqcRZGate(q, 3.064761493402695, 3);
  sqcRYGate(q, -2.814505878654995, 4);
  sqcRZGate(q, -2.530877654568566, 4);
  sqcRYGate(q, 1.7446911050783003, 5);
  sqcRZGate(q, 2.1451344793332696, 5);
  sqcRYGate(q, 2.521933571573643, 6);
  sqcRZGate(q, -1.8217643455827972, 6);
  sqcRYGate(q, 1.633720322204165, 7);
  sqcRZGate(q, -1.2090733173527966, 7);
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
  sqcRYGate(q, -1.0692642964498795, 0);
  sqcRZGate(q, 1.0380590666440392, 0);
  sqcRYGate(q, -0.27882805684731593, 1);
  sqcRZGate(q, -1.7767589322016875, 1);
  sqcRYGate(q, 0.7817866841388131, 2);
  sqcRZGate(q, -2.785980423479216, 2);
  sqcRYGate(q, 1.993396933833335, 3);
  sqcRZGate(q, -0.7853197861681607, 3);
  sqcRYGate(q, 2.294447118141451, 4);
  sqcRZGate(q, -1.1586673651141481, 4);
  sqcRYGate(q, 2.83112038293499, 5);
  sqcRZGate(q, -1.4540652758145978, 5);
  sqcRYGate(q, 1.5963697572833535, 6);
  sqcRZGate(q, -2.7844203002399697, 6);
  sqcRYGate(q, 1.3205647191476562, 7);
  sqcRZGate(q, -2.736631260256546, 7);
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
  sqcRYGate(q, -0.7001293102460018, 0);
  sqcRZGate(q, -1.532277223012916, 0);
  sqcRYGate(q, -1.244196763161689, 1);
  sqcRZGate(q, -0.13428133484584742, 1);
  sqcRYGate(q, -3.0401184123869807, 2);
  sqcRZGate(q, 2.1848938711413233, 2);
  sqcRYGate(q, 1.5931195706339851, 3);
  sqcRZGate(q, -0.8393116956518298, 3);
  sqcRYGate(q, 0.384510254245094, 4);
  sqcRZGate(q, 2.8230224718980956, 4);
  sqcRYGate(q, 1.8562251513369217, 5);
  sqcRZGate(q, 1.9822776448784782, 5);
  sqcRYGate(q, -1.3578233524586916, 6);
  sqcRZGate(q, 2.448400537991023, 6);
  sqcRYGate(q, 1.7264888531634472, 7);
  sqcRZGate(q, -2.8633740182735656, 7);
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
  sqcRYGate(q, 1.9567345701481997, 0);
  sqcRZGate(q, -2.1048753768334967, 0);
  sqcRYGate(q, 2.4031610474451734, 1);
  sqcRZGate(q, -1.035790515162816, 1);
  sqcRYGate(q, 1.1533606425169434, 2);
  sqcRZGate(q, 2.538036806041157, 2);
  sqcRYGate(q, -0.8756592927125858, 3);
  sqcRZGate(q, 0.026286929227793188, 3);
  sqcRYGate(q, -1.8382467911741471, 4);
  sqcRZGate(q, -2.1051432896188733, 4);
  sqcRYGate(q, 2.630365709711018, 5);
  sqcRZGate(q, -2.4874861087422273, 5);
  sqcRYGate(q, -1.3027944254371318, 6);
  sqcRZGate(q, -1.1085185752701303, 6);
  sqcRYGate(q, 1.0093616918792803, 7);
  sqcRZGate(q, 0.29245591437689633, 7);
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
  sqcRYGate(q, 2.854372219677079, 0);
  sqcRZGate(q, -0.8765180599145079, 0);
  sqcRYGate(q, -0.04880386758008016, 1);
  sqcRZGate(q, 2.680020722173089, 1);
  sqcRYGate(q, 2.7311084942518935, 2);
  sqcRZGate(q, -1.1110605563892078, 2);
  sqcRYGate(q, -2.492026364252038, 3);
  sqcRZGate(q, -2.013224236560104, 3);
  sqcRYGate(q, -1.2678385817804525, 4);
  sqcRZGate(q, -0.020974641032405653, 4);
  sqcRYGate(q, -0.5574058078555977, 5);
  sqcRZGate(q, -2.575818278343142, 5);
  sqcRYGate(q, -0.3176682527703919, 6);
  sqcRZGate(q, -2.814007330290828, 6);
  sqcRYGate(q, 2.0698932740240465, 7);
  sqcRZGate(q, -0.01653803338406477, 7);
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
  sqcRYGate(q, -2.249670079847182, 0);
  sqcRZGate(q, -1.5110246062966204, 0);
  sqcRYGate(q, 3.0311562873608233, 1);
  sqcRZGate(q, 2.805287535830246, 1);
  sqcRYGate(q, -0.21769308582974478, 2);
  sqcRZGate(q, 0.23747112638986448, 2);
  sqcRYGate(q, 0.28612131968404875, 3);
  sqcRZGate(q, 2.3757517982441656, 3);
  sqcRYGate(q, 1.8571578848492152, 4);
  sqcRZGate(q, 0.2814215760886042, 4);
  sqcRYGate(q, -2.2486907296061043, 5);
  sqcRZGate(q, 0.5337134246207352, 5);
  sqcRYGate(q, -0.8268014731520931, 6);
  sqcRZGate(q, -0.6170067460402446, 6);
  sqcRYGate(q, 0.5471341977465513, 7);
  sqcRZGate(q, 1.3297586925025258, 7);
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
  sqcRYGate(q, 2.51687107830872, 0);
  sqcRZGate(q, 0.5909596851370038, 0);
  sqcRYGate(q, -1.7218207035201116, 1);
  sqcRZGate(q, -2.7866775718537395, 1);
  sqcRYGate(q, -0.756007976863529, 2);
  sqcRZGate(q, -2.484392714326049, 2);
  sqcRYGate(q, -1.4546176457180895, 3);
  sqcRZGate(q, -0.7016735583263829, 3);
  sqcRYGate(q, 0.727872259536114, 4);
  sqcRZGate(q, -2.9307380955389317, 4);
  sqcRYGate(q, -1.308723206693786, 5);
  sqcRZGate(q, -2.219531322549192, 5);
  sqcRYGate(q, -2.831732585246244, 6);
  sqcRZGate(q, -1.0803059165784585, 6);
  sqcRYGate(q, -0.7199122542534758, 7);
  sqcRZGate(q, -2.4034176437404113, 7);
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
  sqcRYGate(q, 1.2210710404094514, 0);
  sqcRZGate(q, 1.723555505473449, 0);
  sqcRYGate(q, -0.8065194802337405, 1);
  sqcRZGate(q, 0.27247137317697145, 1);
  sqcRYGate(q, 1.9221370941492948, 2);
  sqcRZGate(q, 2.333116016488148, 2);
  sqcRYGate(q, -1.419806965531029, 3);
  sqcRZGate(q, 0.7899143729028815, 3);
  sqcRYGate(q, 2.5874349836910624, 4);
  sqcRZGate(q, -1.462618008378831, 4);
  sqcRYGate(q, 0.33657178751759975, 5);
  sqcRZGate(q, 0.045103400164160055, 5);
  sqcRYGate(q, 1.9673585837949927, 6);
  sqcRZGate(q, 2.012687601641144, 6);
  sqcRYGate(q, 0.30040466845200076, 7);
  sqcRZGate(q, -3.086957557602441, 7);

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
