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

  sqcRYGate(q, -2.5286557644043657, 0);
  sqcRYGate(q, -2.106717644574913, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9813068356675547, 0);
  sqcRYGate(q, 1.9724461583513815, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.69170603407618, 1);
  sqcRYGate(q, -2.5625924710929517, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3531611353349997, 1);
  sqcRYGate(q, -0.23322970851832395, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2899197300371186, 2);
  sqcRYGate(q, 0.9961007224925919, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7065019057529094, 2);
  sqcRYGate(q, -0.020985043957105987, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4581074249121366, 0);
  sqcRYGate(q, 0.7426259852175036, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5430629750131981, 0);
  sqcRYGate(q, 0.12642150914082959, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0738545757375557, 1);
  sqcRYGate(q, -2.780392307024375, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.865001529432224, 1);
  sqcRYGate(q, -0.6503478791414469, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.831601600661564, 2);
  sqcRYGate(q, 2.5874563129400743, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6817147436803923, 2);
  sqcRYGate(q, 2.3839902613758097, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3897778585943632, 0);
  sqcRYGate(q, -0.2107309718288523, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4018645561495182, 0);
  sqcRYGate(q, 2.502771585511395, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.39849790273514785, 1);
  sqcRYGate(q, -1.1010702462234194, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8293046169992517, 1);
  sqcRYGate(q, 0.007334010612262353, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2994544783911445, 2);
  sqcRYGate(q, -1.8999075872984328, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.25053484362099737, 2);
  sqcRYGate(q, 0.5579230471389919, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4239479201459386, 0);
  sqcRYGate(q, -0.10536060117890855, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.067569009296819, 0);
  sqcRYGate(q, -2.00559650114596, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.34756718254167945, 1);
  sqcRYGate(q, -0.027556919790912075, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.276477477113717, 1);
  sqcRYGate(q, -2.264036999286768, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.0272155486009567, 2);
  sqcRYGate(q, 1.4611496516615181, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9263083793073363, 2);
  sqcRYGate(q, 0.31459978249862264, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2936020421340659, 0);
  sqcRYGate(q, -1.7827532099975356, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.81600505593417, 0);
  sqcRYGate(q, 0.7543637006434704, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9047195888552745, 1);
  sqcRYGate(q, -0.8633013758271606, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9577661302758407, 1);
  sqcRYGate(q, -0.8757742800495445, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0163092873859045, 2);
  sqcRYGate(q, -0.10819484860159267, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4934668435698497, 2);
  sqcRYGate(q, -2.342296895801319, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.049887296202911, 0);
  sqcRYGate(q, -0.7899318081765064, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.114852273809639, 0);
  sqcRYGate(q, 2.772222352615073, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.07486888209372806, 1);
  sqcRYGate(q, 1.2684363828364296, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.538484505847402, 1);
  sqcRYGate(q, 2.6533667108639274, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5950251870685248, 2);
  sqcRYGate(q, 0.7229111738113829, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4443206587064226, 2);
  sqcRYGate(q, 0.3005355749075688, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4842604872169765, 0);
  sqcRYGate(q, 2.5905315277931016, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6596254865294631, 0);
  sqcRYGate(q, 1.4282824985493487, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2659450897550308, 1);
  sqcRYGate(q, -0.8019170624628792, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0240475646492557, 1);
  sqcRYGate(q, -1.7267789797289357, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8638198400932087, 2);
  sqcRYGate(q, -2.8794800026793825, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6618811421431388, 2);
  sqcRYGate(q, 2.891983327812521, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7255274121430135, 0);
  sqcRYGate(q, -0.016840618911578176, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3408250505634474, 0);
  sqcRYGate(q, 1.735440479901448, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1369044273078894, 1);
  sqcRYGate(q, -1.8893564955357327, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1179891266531308, 1);
  sqcRYGate(q, 1.4776744318059025, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9212695273689303, 2);
  sqcRYGate(q, 2.2035623232994084, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.030767861782235, 2);
  sqcRYGate(q, 0.2940009569772348, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3562051120803931, 0);
  sqcRYGate(q, -2.960481174441331, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1138462323041285, 0);
  sqcRYGate(q, 1.3334023235234884, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.020010787110592804, 1);
  sqcRYGate(q, -0.9986383643368137, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.238734646262497, 1);
  sqcRYGate(q, -2.1060720319800312, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.566837460740078, 2);
  sqcRYGate(q, 2.5078289586284748, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6717705754810723, 2);
  sqcRYGate(q, 2.059684492349968, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4128781999965454, 0);
  sqcRYGate(q, 1.3398116014936141, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.667378053274065, 0);
  sqcRYGate(q, 1.3129296081676287, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2378237808236547, 1);
  sqcRYGate(q, -2.552995466250956, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.071694691926278, 1);
  sqcRYGate(q, -1.7447656390845108, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.469845279113105, 2);
  sqcRYGate(q, 1.9188833202059268, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3167712424527886, 2);
  sqcRYGate(q, -1.297062112855343, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.165874132061135, 0);
  sqcRYGate(q, -0.7051825873846997, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9551791973272632, 0);
  sqcRYGate(q, 0.9807672643528734, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5015278921014255, 1);
  sqcRYGate(q, 2.5774820904027065, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3729762944183834, 1);
  sqcRYGate(q, 1.6461184648654257, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4057399353759612, 2);
  sqcRYGate(q, 0.11466353210315149, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8952290644566179, 2);
  sqcRYGate(q, 1.5725419874834659, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0924334372136832, 0);
  sqcRYGate(q, 1.7365586750689959, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4474389288361436, 0);
  sqcRYGate(q, 2.0618150602641396, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5686807181784332, 1);
  sqcRYGate(q, 0.6914391780155853, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7214752649941436, 1);
  sqcRYGate(q, -2.597676841725108, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6183020410254776, 2);
  sqcRYGate(q, -0.3023279026474972, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.113255260474327, 2);
  sqcRYGate(q, 1.2633320849226222, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8384163396006095, 0);
  sqcRYGate(q, 0.08618043357212102, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6472698571931397, 0);
  sqcRYGate(q, -2.1764390553949386, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0214417728104053, 1);
  sqcRYGate(q, 0.3574728994525671, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.985467300376391, 1);
  sqcRYGate(q, 3.119092727598829, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0815538607880786, 2);
  sqcRYGate(q, -1.4498900922752382, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7389081190346951, 2);
  sqcRYGate(q, 0.7303720615383185, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2103768741347802, 0);
  sqcRYGate(q, 2.9222108770817488, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.745046869624105, 0);
  sqcRYGate(q, 1.4617079323038598, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.292957301769949, 1);
  sqcRYGate(q, -1.773103595385237, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6257052430271335, 1);
  sqcRYGate(q, -1.959882843012652, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0214423371447339, 2);
  sqcRYGate(q, 2.951756338733232, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5251136597497528, 2);
  sqcRYGate(q, -2.8323532998714094, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4177667760843913, 0);
  sqcRYGate(q, -0.4017721746496258, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3468478607414287, 0);
  sqcRYGate(q, 2.8668241657203994, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.106613631273314, 1);
  sqcRYGate(q, 0.33471484582683875, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5540426934151608, 1);
  sqcRYGate(q, 0.3626159737406648, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.47695182788758117, 2);
  sqcRYGate(q, -2.52791994224926, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.553234670362367, 2);
  sqcRYGate(q, -0.7107861699053242, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.075324919957791, 0);
  sqcRYGate(q, 2.469840323602239, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.344466783887393, 0);
  sqcRYGate(q, -0.39632006458636637, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.387200255813543, 1);
  sqcRYGate(q, -2.26113098217966, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.919383124388905, 1);
  sqcRYGate(q, 2.4169699972103182, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.750050455126542, 2);
  sqcRYGate(q, 1.8606481457750217, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7262658876970423, 2);
  sqcRYGate(q, -2.907529712307444, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4993963677846387, 0);
  sqcRYGate(q, -0.8825238070585184, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0990889166590616, 0);
  sqcRYGate(q, 2.9378547319030095, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7547916063927451, 1);
  sqcRYGate(q, 0.48694235072643993, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7951872532124094, 1);
  sqcRYGate(q, 2.762786792556196, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.886340435972666, 2);
  sqcRYGate(q, -1.80451746195319, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4997890102202467, 2);
  sqcRYGate(q, 2.4693607627502128, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7152178662179995, 0);
  sqcRYGate(q, -3.010300308625406, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6358284735479254, 0);
  sqcRYGate(q, -1.0313064982409186, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6972677651472203, 1);
  sqcRYGate(q, -2.828631121578939, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.427636705587551, 1);
  sqcRYGate(q, 1.2170613363199285, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9259201527617096, 2);
  sqcRYGate(q, 2.368516735832518, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.274041719291848, 2);
  sqcRYGate(q, 1.2331952841997111, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.342052418300172, 0);
  sqcRYGate(q, 0.493906195763822, 1);
  sqcRYGate(q, 0.6933460912899223, 2);
  sqcRYGate(q, -2.879312272643789, 3);

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
