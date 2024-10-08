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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, 2.327244503121618, 0);
  sqcRYGate(q, 0.9620816646007846, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4635957766788423, 0);
  sqcRYGate(q, -2.1158243359902844, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7871432446576698, 0);
  sqcRYGate(q, 2.132436842731579, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.518269445300054, 0);
  sqcRYGate(q, -1.5452505766094178, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9068551278204428, 0);
  sqcRYGate(q, 0.8325142124061209, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.898870705521147, 0);
  sqcRYGate(q, -2.3738014477358766, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.1462615388147608, 0);
  sqcRYGate(q, 0.32540233216823816, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, -1.5339164800400487, 0);
  sqcRYGate(q, 1.0055184370054677, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, 0.6257282000395499, 0);
  sqcRYGate(q, 2.5186474941684827, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, -1.1129154729423165, 0);
  sqcRYGate(q, 0.16827732081273233, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, -2.77538977490977, 0);
  sqcRYGate(q, 1.3511916461961204, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, -0.4086255033455718, 0);
  sqcRYGate(q, -0.13132259347281128, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, 1.5179378365425689, 0);
  sqcRYGate(q, -2.8070409147711097, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, -1.4727654636014818, 0);
  sqcRYGate(q, -2.8861980507325917, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, 2.6287152294125993, 1);
  sqcRYGate(q, 2.949308265132794, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5138968050311812, 1);
  sqcRYGate(q, 1.9660666437366319, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.108668349857667, 1);
  sqcRYGate(q, 0.357151020572986, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4146777093767859, 1);
  sqcRYGate(q, 1.602705014995438, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7948398467352723, 1);
  sqcRYGate(q, 0.7274522211885239, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, 2.2481953090881763, 1);
  sqcRYGate(q, -0.8363828278682055, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, -0.5723882057836971, 1);
  sqcRYGate(q, -1.1702367466834547, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, 2.2485275879565068, 1);
  sqcRYGate(q, 2.717366585525385, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, 1.0950288061157396, 1);
  sqcRYGate(q, -0.6138423594453624, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, -2.4569073133224686, 1);
  sqcRYGate(q, -1.5969162607466845, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, -3.1220423404303883, 1);
  sqcRYGate(q, 0.9629806450555627, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, -0.6334498885888901, 1);
  sqcRYGate(q, 0.35962039489091335, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, 1.6825069349444008, 2);
  sqcRYGate(q, -2.152067624423313, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5682576252719319, 2);
  sqcRYGate(q, -0.009157943761558023, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4006319534277702, 2);
  sqcRYGate(q, 2.6161958508669723, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.6499930769410773, 2);
  sqcRYGate(q, -2.699117387400408, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.4047803225678037, 2);
  sqcRYGate(q, 2.3132751071632884, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.817649634189528, 2);
  sqcRYGate(q, -0.13665167848662238, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.5904804796269751, 2);
  sqcRYGate(q, -1.5520281589481284, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, -2.596192266316493, 2);
  sqcRYGate(q, 2.661275121534454, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, 0.8123105896284702, 2);
  sqcRYGate(q, 0.7912657584481846, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, 1.19850573743151, 2);
  sqcRYGate(q, -1.3904310172797958, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, -0.14137217623887288, 3);
  sqcRYGate(q, -2.1333810574577035, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6386775635386774, 3);
  sqcRYGate(q, 0.05210680668722123, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5835639803552999, 3);
  sqcRYGate(q, -2.9993445290951484, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.550314005662673, 3);
  sqcRYGate(q, -2.07673970758163, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.7847090797096232, 3);
  sqcRYGate(q, 0.3145786748276578, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, -3.0857295870516848, 3);
  sqcRYGate(q, 2.4824739775342843, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, -0.45025770057835485, 3);
  sqcRYGate(q, -0.7274525719670768, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, 1.2579651113943797, 3);
  sqcRYGate(q, -2.4460920413741136, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, -2.9935107171147655, 4);
  sqcRYGate(q, 0.8162693211653766, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9928927210790033, 4);
  sqcRYGate(q, -2.263471762529778, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.6236794524928397, 4);
  sqcRYGate(q, -0.3162319598252674, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.5369653280441047, 4);
  sqcRYGate(q, -1.4556696408995993, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.795749990592923, 4);
  sqcRYGate(q, 1.485660065906595, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.23744843526508205, 4);
  sqcRYGate(q, -0.4939622371124841, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.49145230979162946, 5);
  sqcRYGate(q, 2.95633202497231, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.7485141075893713, 5);
  sqcRYGate(q, -0.20138429364168106, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.3349755433103145, 5);
  sqcRYGate(q, -1.8251601874558085, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.9304028386227472, 5);
  sqcRYGate(q, 2.0617790103596905, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.3878847875955671, 6);
  sqcRYGate(q, 1.2796555753153402, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5207958442961624, 6);
  sqcRYGate(q, -2.5349726549318348, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.7285021956707505, 0);
  sqcRYGate(q, -0.007791785949825325, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5465090135019643, 0);
  sqcRYGate(q, -3.015288915767943, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9051429863369967, 0);
  sqcRYGate(q, -0.9972515341684511, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.964997562729482, 0);
  sqcRYGate(q, 1.545995427744752, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2687919115631185, 0);
  sqcRYGate(q, 1.9459019786884266, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6446719418800863, 0);
  sqcRYGate(q, -0.0012549337095807483, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.4311751737467935, 0);
  sqcRYGate(q, 1.138145980102163, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, 1.4394681896522585, 0);
  sqcRYGate(q, -0.7505388132177631, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, -2.830034979300402, 0);
  sqcRYGate(q, -2.9561978423501785, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, 3.0071991589907974, 0);
  sqcRYGate(q, -0.957839705473071, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, 1.7762131209262622, 0);
  sqcRYGate(q, -1.6207399626882868, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, 0.6290637328267704, 0);
  sqcRYGate(q, -0.34946424804209075, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, -1.6534780345308289, 0);
  sqcRYGate(q, 0.541524179380415, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, -1.3246787174593975, 0);
  sqcRYGate(q, 2.7800360909368123, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, -1.236001809479165, 1);
  sqcRYGate(q, 1.13233461241688, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6080513918795387, 1);
  sqcRYGate(q, -0.6955709063168599, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3180598230471148, 1);
  sqcRYGate(q, 0.04706089013312997, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2137736358233389, 1);
  sqcRYGate(q, 2.057103105204429, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1813970373842628, 1);
  sqcRYGate(q, -2.1068147839971703, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, -0.7376402161223181, 1);
  sqcRYGate(q, -0.9109820267727526, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, -2.25948109547864, 1);
  sqcRYGate(q, -2.4232441814571515, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, 0.5671389355845291, 1);
  sqcRYGate(q, -1.047770988704917, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, -0.6841406626726821, 1);
  sqcRYGate(q, 2.082264754859035, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, 0.768105019931565, 1);
  sqcRYGate(q, 1.6139393476029926, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, 1.3663628909880687, 1);
  sqcRYGate(q, 0.1461868512564702, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, -0.9636837655963297, 1);
  sqcRYGate(q, -2.5139043122835876, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, 2.0465798666033557, 2);
  sqcRYGate(q, -3.063385192569061, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6418423402772531, 2);
  sqcRYGate(q, 1.5615401350278968, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.904858393186506, 2);
  sqcRYGate(q, 2.7085817929119034, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.3538946830481606, 2);
  sqcRYGate(q, 2.169038387464833, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.100821001895698, 2);
  sqcRYGate(q, -2.8931608528306683, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.8791791681619193, 2);
  sqcRYGate(q, 0.9107071717537476, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.0213945592815197, 2);
  sqcRYGate(q, 0.04717391113954395, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, 0.3125175825349569, 2);
  sqcRYGate(q, 2.6313045350353095, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, -2.2908993864793095, 2);
  sqcRYGate(q, 2.5297712402934134, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, -0.7441256837257351, 2);
  sqcRYGate(q, -0.6759072740904601, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, -0.005382488090575067, 3);
  sqcRYGate(q, 1.1186736019298662, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5744806683861875, 3);
  sqcRYGate(q, 1.1026984330832779, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6778251812295268, 3);
  sqcRYGate(q, 1.3403772399114766, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.6327440282514294, 3);
  sqcRYGate(q, 0.18473451456193157, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.8779011047635861, 3);
  sqcRYGate(q, 0.3180481431947735, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, 2.132464803252077, 3);
  sqcRYGate(q, 1.9416528281551297, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, 1.4959439257251779, 3);
  sqcRYGate(q, -1.0609168038126662, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, -2.8100236242963974, 3);
  sqcRYGate(q, 0.6105090699742668, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, -2.8598981477287584, 4);
  sqcRYGate(q, 0.9674989880611954, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.3959143706226787, 4);
  sqcRYGate(q, 0.9209871107208302, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6816617015043356, 4);
  sqcRYGate(q, 0.8859692638099077, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.513136462021695, 4);
  sqcRYGate(q, -2.152156540248632, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.29497631555040993, 4);
  sqcRYGate(q, -0.6422824542124032, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.225252986055617, 4);
  sqcRYGate(q, -0.4077862090108822, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.6061557697060782, 5);
  sqcRYGate(q, -1.3991294306096673, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.3492392906519775, 5);
  sqcRYGate(q, 1.1103947379598953, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.25566656992982484, 5);
  sqcRYGate(q, 0.6716805769097967, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.011859216976631526, 5);
  sqcRYGate(q, -2.6213332052454867, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.5513209279407523, 6);
  sqcRYGate(q, 0.8488835774171627, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.966150314463692, 6);
  sqcRYGate(q, 2.485499489890132, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.858936500194653, 0);
  sqcRYGate(q, -2.3600638263072486, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.19184680621642425, 0);
  sqcRYGate(q, 2.3981668561685714, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.012244818811009, 0);
  sqcRYGate(q, -2.1729559886227325, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6228244451449436, 0);
  sqcRYGate(q, -1.6138652645783595, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.973176935757687, 0);
  sqcRYGate(q, 2.7440982928050195, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.9512206352554493, 0);
  sqcRYGate(q, 2.3343655418158025, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.8785444927103273, 0);
  sqcRYGate(q, -0.27105548289314463, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, 3.0615630910989022, 0);
  sqcRYGate(q, -3.0204546490096202, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, 2.872248103900797, 0);
  sqcRYGate(q, -1.974744477993477, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, 0.32718084843857476, 0);
  sqcRYGate(q, -1.7896482477676043, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, -0.35260413178987804, 0);
  sqcRYGate(q, 2.0579040746489174, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, -2.414589040388909, 0);
  sqcRYGate(q, 1.3106437319877668, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, 2.635638057839208, 0);
  sqcRYGate(q, 2.1376852270118665, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, -0.3652556621636525, 0);
  sqcRYGate(q, 0.5731878447507572, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, 2.055970073435336, 1);
  sqcRYGate(q, 0.7995092964988308, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4878678292667615, 1);
  sqcRYGate(q, -2.8182339080655185, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1175758812930994, 1);
  sqcRYGate(q, 2.115329567987767, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9339222988615942, 1);
  sqcRYGate(q, 2.5728711200028758, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.41302598905667287, 1);
  sqcRYGate(q, -2.4067460774713156, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, 2.5364532461109546, 1);
  sqcRYGate(q, 1.893646413358017, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, 2.4268431974780333, 1);
  sqcRYGate(q, 2.037932356323741, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, -3.084821841958738, 1);
  sqcRYGate(q, -2.2871527833430974, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, -0.0655758951739457, 1);
  sqcRYGate(q, -1.5657941185662114, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, 0.02382530740389455, 1);
  sqcRYGate(q, -1.2428272886999283, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, -0.015411786610143278, 1);
  sqcRYGate(q, -0.49436938218335236, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, -0.6749300292138982, 1);
  sqcRYGate(q, -2.109752072519891, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, 1.8292844377740944, 2);
  sqcRYGate(q, 1.71213401161019, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.923966923346609, 2);
  sqcRYGate(q, -1.7713684608131681, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1265605406332808, 2);
  sqcRYGate(q, 1.3644628650501085, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.9107075749127213, 2);
  sqcRYGate(q, 2.1505028273813718, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.10627214184167733, 2);
  sqcRYGate(q, 1.9016358317660071, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.7384391456753634, 2);
  sqcRYGate(q, 2.4232535065150462, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.5569925153697923, 2);
  sqcRYGate(q, -1.150473116842874, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, -1.5886240964779805, 2);
  sqcRYGate(q, -0.13288785772946235, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, 1.8430220402848165, 2);
  sqcRYGate(q, -1.5110973129527783, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, -0.8129317676253974, 2);
  sqcRYGate(q, -0.04613290868234188, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, 2.114801490309994, 3);
  sqcRYGate(q, 1.5863584178060568, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.012982185613867627, 3);
  sqcRYGate(q, -2.4906053078965464, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.564149907629739, 3);
  sqcRYGate(q, 1.8878467374661578, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.3985475150225586, 3);
  sqcRYGate(q, -1.0017642133319387, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.6700638259336853, 3);
  sqcRYGate(q, 2.877315073213862, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, 0.19924933635101816, 3);
  sqcRYGate(q, -1.1310990780755699, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, -1.8381830139012243, 3);
  sqcRYGate(q, -1.5475819023497324, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, 1.9014721362772429, 3);
  sqcRYGate(q, -0.40760015706550323, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, 2.704139429801352, 4);
  sqcRYGate(q, 0.7601135803838037, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2131469249116438, 4);
  sqcRYGate(q, -2.0209745504088383, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.9409285041233053, 4);
  sqcRYGate(q, -2.4452715410278247, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.4394939419127874, 4);
  sqcRYGate(q, -1.8593909948360503, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.4156342104699338, 4);
  sqcRYGate(q, 2.7702757013796115, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.992238239546973, 4);
  sqcRYGate(q, 2.7907563357868006, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.4811543783841212, 5);
  sqcRYGate(q, 0.50118097585747, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.58321673492702, 5);
  sqcRYGate(q, 2.8904184178129513, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.643228978582684, 5);
  sqcRYGate(q, -2.8704918186596378, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.0999216134870942, 5);
  sqcRYGate(q, 0.3633420752669656, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.8294207566430964, 6);
  sqcRYGate(q, 1.287445930366997, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.10053101683027153, 6);
  sqcRYGate(q, -0.3974903845418467, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.9242133901868971, 0);
  sqcRYGate(q, 1.608926214822302, 1);
  sqcRYGate(q, -0.4671115974685902, 2);
  sqcRYGate(q, -2.9578931559985517, 3);
  sqcRYGate(q, 1.5867851607306225, 4);
  sqcRYGate(q, 2.017761904025724, 5);
  sqcRYGate(q, 0.7418039339785835, 6);
  sqcRYGate(q, 0.9590704436100894, 7);

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
