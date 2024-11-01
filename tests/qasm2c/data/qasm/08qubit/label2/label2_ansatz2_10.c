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

  sqcRYGate(q, -3.141575197732225, 0);
  sqcRZGate(q, -1.8940312865641133, 0);
  sqcRYGate(q, -3.141342710619283, 1);
  sqcRZGate(q, 2.39344740718592, 1);
  sqcRYGate(q, -3.0733606089066883, 2);
  sqcRZGate(q, 0.008473456794183817, 2);
  sqcRYGate(q, 3.1302422606039753, 3);
  sqcRZGate(q, 2.4320570263298866, 3);
  sqcRYGate(q, -1.5705259919793224, 4);
  sqcRZGate(q, 3.067912359902362, 4);
  sqcRYGate(q, 1.5702581971189842, 5);
  sqcRZGate(q, -0.0001998837689143329, 5);
  sqcRYGate(q, 6.133014556208849e-05, 6);
  sqcRZGate(q, 0.5442409361668582, 6);
  sqcRYGate(q, -1.8480253506489524e-06, 7);
  sqcRZGate(q, 0.45041025363566034, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -3.1415564703840344, 0);
  sqcRZGate(q, -2.095377550299986, 0);
  sqcRYGate(q, 3.215947386396027e-06, 1);
  sqcRZGate(q, -2.4026092843707336, 1);
  sqcRYGate(q, 1.5698619413663997, 2);
  sqcRZGate(q, 1.570024621594099, 2);
  sqcRYGate(q, -1.5702837598047656, 3);
  sqcRZGate(q, 1.4875985128192886, 3);
  sqcRYGate(q, -2.4842007819906167, 4);
  sqcRZGate(q, 1.1596954484608006, 4);
  sqcRYGate(q, 0.9635681000353686, 5);
  sqcRZGate(q, -2.762382827408911, 5);
  sqcRYGate(q, 3.1415766856350293, 6);
  sqcRZGate(q, -2.2814699776164353, 6);
  sqcRYGate(q, 3.1415376663287073, 7);
  sqcRZGate(q, 0.13525287385477666, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 4.858157173703859e-05, 0);
  sqcRZGate(q, 3.0921157964651043, 0);
  sqcRYGate(q, 4.9047272169579734e-05, 1);
  sqcRZGate(q, 1.9497298894295056, 1);
  sqcRYGate(q, -1.4874312044066673, 2);
  sqcRZGate(q, 1.6949281054134948, 2);
  sqcRYGate(q, 1.569947998173375, 3);
  sqcRZGate(q, 1.4331078242974264, 3);
  sqcRYGate(q, 3.1412341233544128, 4);
  sqcRZGate(q, -1.091093104557821, 4);
  sqcRYGate(q, -0.00017570719375984434, 5);
  sqcRZGate(q, -2.753630900177955, 5);
  sqcRYGate(q, -1.5712086921084927, 6);
  sqcRZGate(q, -1.019206831862947, 6);
  sqcRYGate(q, -1.5734468617904775, 7);
  sqcRZGate(q, 0.025341482369305446, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.571241224263466, 0);
  sqcRZGate(q, 3.1316414010057594, 0);
  sqcRYGate(q, 1.5680574770982745, 1);
  sqcRZGate(q, 3.0821560024807306, 1);
  sqcRYGate(q, -1.5709931552401484, 2);
  sqcRZGate(q, 2.255722775313162, 2);
  sqcRYGate(q, 1.5776589372029157, 3);
  sqcRZGate(q, 3.141443306444661, 3);
  sqcRYGate(q, -1.573543822170161, 4);
  sqcRZGate(q, 1.5410128705121382, 4);
  sqcRYGate(q, -0.04808877922466214, 5);
  sqcRZGate(q, 1.636111551185701, 5);
  sqcRYGate(q, -3.11051506048442, 6);
  sqcRZGate(q, -2.5378501958528425, 6);
  sqcRYGate(q, 1.55206958269373, 7);
  sqcRZGate(q, -1.6299334919360802, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.5674458509147158, 0);
  sqcRZGate(q, -1.5692890402214754, 0);
  sqcRYGate(q, 2.144328695925524, 1);
  sqcRZGate(q, -0.03261601709437063, 1);
  sqcRYGate(q, 0.00031399307595147974, 2);
  sqcRZGate(q, 0.8917326338992063, 2);
  sqcRYGate(q, 1.571362974307748, 3);
  sqcRZGate(q, 3.141061473251927, 3);
  sqcRYGate(q, 0.0003877990037606243, 4);
  sqcRZGate(q, 1.5975759099621014, 4);
  sqcRYGate(q, 1.570399655695851, 5);
  sqcRZGate(q, -0.3679070861152854, 5);
  sqcRYGate(q, 1.640143675887698, 6);
  sqcRZGate(q, 2.4341677210626567, 6);
  sqcRYGate(q, -1.6401002685730959, 7);
  sqcRZGate(q, -3.101338342037882, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.23011477416226178, 0);
  sqcRZGate(q, -1.582263101450093, 0);
  sqcRYGate(q, 1.5726878154263464, 1);
  sqcRZGate(q, 2.9116650763340473, 1);
  sqcRYGate(q, 1.5708356136764128, 2);
  sqcRZGate(q, -0.0016553023936136668, 2);
  sqcRYGate(q, 1.5737475729076476, 3);
  sqcRZGate(q, 1.5722729888307176, 3);
  sqcRYGate(q, -1.5702782645396403, 4);
  sqcRZGate(q, 1.5708187438245769, 4);
  sqcRYGate(q, 0.00040496263500612383, 5);
  sqcRZGate(q, 0.6577411374734831, 5);
  sqcRYGate(q, -3.1415915292426972, 6);
  sqcRZGate(q, -0.7110350580422446, 6);
  sqcRYGate(q, 3.1415913308795793, 7);
  sqcRZGate(q, -3.0972541388534287, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.5719711921905513, 0);
  sqcRZGate(q, -2.139273010485101, 0);
  sqcRYGate(q, -1.571144440670146, 1);
  sqcRZGate(q, 1.6098534146587937, 1);
  sqcRYGate(q, -1.5708689566868408, 2);
  sqcRZGate(q, -0.3849786575568323, 2);
  sqcRYGate(q, 1.5224840050807957, 3);
  sqcRZGate(q, -2.2488616576697624, 3);
  sqcRYGate(q, 1.572491052040113, 4);
  sqcRZGate(q, -3.141580541377353, 4);
  sqcRYGate(q, 3.140527796883982, 5);
  sqcRZGate(q, -2.851755438249505, 5);
  sqcRYGate(q, 1.5682065296026522, 6);
  sqcRZGate(q, -3.141350842236432, 6);
  sqcRYGate(q, -1.5733713443515454, 7);
  sqcRZGate(q, -3.141346258843855, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 3.132836245364744, 0);
  sqcRZGate(q, 0.8414254651719596, 0);
  sqcRYGate(q, -1.5702515043547463, 1);
  sqcRZGate(q, -3.140111341615979, 1);
  sqcRYGate(q, -0.0006691914830652124, 2);
  sqcRZGate(q, -1.1860132889861783, 2);
  sqcRYGate(q, 0.0002084159739617064, 3);
  sqcRZGate(q, -0.5275562984973606, 3);
  sqcRYGate(q, 1.5697463603663877, 4);
  sqcRZGate(q, -2.997432879425776, 4);
  sqcRYGate(q, 1.5708893300815903, 5);
  sqcRZGate(q, -0.11820597331438136, 5);
  sqcRYGate(q, -1.570679976906944, 6);
  sqcRZGate(q, -1.583174450005423, 6);
  sqcRYGate(q, -1.5708084151851733, 7);
  sqcRZGate(q, -1.5826808362585547, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.0015491816507342546, 0);
  sqcRZGate(q, 1.7170851987262385, 0);
  sqcRYGate(q, -1.5693409455421468, 1);
  sqcRZGate(q, 1.5719667023358879, 1);
  sqcRYGate(q, -1.5708916817493572, 2);
  sqcRZGate(q, -1.571244608368573, 2);
  sqcRYGate(q, 3.141408846353979, 3);
  sqcRZGate(q, 0.40357556297620095, 3);
  sqcRYGate(q, -3.0571819876793622, 4);
  sqcRZGate(q, 0.17196417169459277, 4);
  sqcRYGate(q, 0.0013749352271106659, 5);
  sqcRZGate(q, -1.4760308936139133, 5);
  sqcRYGate(q, 2.4025377071448295, 6);
  sqcRZGate(q, -0.028153027946718298, 6);
  sqcRYGate(q, 2.353799543946709, 7);
  sqcRZGate(q, -0.24612854732556944, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.6216081812888774, 0);
  sqcRZGate(q, 1.5771856177364174, 0);
  sqcRYGate(q, -1.5206398606705458, 1);
  sqcRZGate(q, -1.56312820292088, 1);
  sqcRYGate(q, 1.5310316025814628, 2);
  sqcRZGate(q, 1.5724560930010987, 2);
  sqcRYGate(q, 0.04094852614140258, 3);
  sqcRZGate(q, -2.7122217253147607, 3);
  sqcRYGate(q, -1.4414380515042022, 4);
  sqcRZGate(q, -0.014108475910528107, 4);
  sqcRYGate(q, 1.5708550166836115, 5);
  sqcRZGate(q, -3.1415084469581043, 5);
  sqcRYGate(q, -3.1377651285525534, 6);
  sqcRZGate(q, -2.981574001167604, 6);
  sqcRYGate(q, -3.1368576152410608, 7);
  sqcRZGate(q, -2.7257879333943995, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.5378418477946045, 0);
  sqcRZGate(q, -0.5863451932773275, 0);
  sqcRYGate(q, 1.6033838174534956, 1);
  sqcRZGate(q, 1.1658473792503292, 1);
  sqcRYGate(q, -0.6285839027364304, 2);
  sqcRZGate(q, -1.568417228023189, 2);
  sqcRYGate(q, 0.07381031356253208, 3);
  sqcRZGate(q, -2.1636078792813995, 3);
  sqcRYGate(q, 1.6223305537978776, 4);
  sqcRZGate(q, -1.5712231558774308, 4);
  sqcRYGate(q, 1.5707328294520377, 5);
  sqcRZGate(q, -0.509070231243819, 5);
  sqcRYGate(q, 3.141454616142124, 6);
  sqcRZGate(q, 1.6460972333432202, 6);
  sqcRYGate(q, -0.00015973707103356105, 7);
  sqcRZGate(q, -2.0494810954208007, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.0005034936280373011, 0);
  sqcRZGate(q, -2.1126773220214723, 0);
  sqcRYGate(q, 0.00022847558736684083, 1);
  sqcRZGate(q, 1.2474082469889205, 1);
  sqcRYGate(q, 1.5671701253275254, 2);
  sqcRZGate(q, -2.9709327037593436, 2);
  sqcRYGate(q, -0.0024112613112868796, 3);
  sqcRZGate(q, -0.14378217748130684, 3);
  sqcRYGate(q, -1.583553173057136, 4);
  sqcRZGate(q, 2.018868288144132, 4);
  sqcRYGate(q, 0.0006597977910809406, 5);
  sqcRZGate(q, -1.1012066538563765, 5);
  sqcRYGate(q, -3.11166892301476, 6);
  sqcRZGate(q, 1.6436069053370588, 6);
  sqcRYGate(q, -1.6020779968117627, 7);
  sqcRZGate(q, 1.57248338629371, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 3.546035873291942e-05, 0);
  sqcRZGate(q, 1.8960006255777841, 0);
  sqcRYGate(q, -3.141563002354882, 1);
  sqcRZGate(q, 1.6114126780277616, 1);
  sqcRYGate(q, 2.2440263168554964e-05, 2);
  sqcRZGate(q, 2.216417575092945, 2);
  sqcRYGate(q, 3.533297283891131e-05, 3);
  sqcRZGate(q, 1.0673713561948928, 3);
  sqcRYGate(q, 0.0011160855673834381, 4);
  sqcRZGate(q, -2.461690315010995, 4);
  sqcRYGate(q, -3.1415409006781303, 5);
  sqcRZGate(q, -0.6178948494581759, 5);
  sqcRYGate(q, 3.117175250452245, 6);
  sqcRZGate(q, -1.9646398172800605, 6);
  sqcRYGate(q, -1.5377010034869727, 7);
  sqcRZGate(q, 1.1260260204858006, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.011780805398856, 0);
  sqcRZGate(q, -2.6130127702223978, 0);
  sqcRYGate(q, 2.0124093520953465, 1);
  sqcRZGate(q, -2.613024458127196, 1);
  sqcRYGate(q, -1.1684466070928519, 2);
  sqcRZGate(q, -2.649451484972202, 2);
  sqcRYGate(q, -1.1177336167188805, 3);
  sqcRZGate(q, -2.608303605416225, 3);
  sqcRYGate(q, -1.6986693186600732, 4);
  sqcRZGate(q, -1.101195018992458, 4);
  sqcRYGate(q, -0.8909553070477215, 5);
  sqcRZGate(q, -0.651451553418473, 5);
  sqcRYGate(q, -0.8902121058529538, 6);
  sqcRZGate(q, -0.6512073102229806, 6);
  sqcRYGate(q, -2.370278308365088, 7);
  sqcRZGate(q, -1.2378846427084245, 7);

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
