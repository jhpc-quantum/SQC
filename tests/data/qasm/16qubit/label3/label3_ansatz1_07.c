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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, -2.0177996611868103, 0);
  sqcRZGate(q, -1.8975952338702116, 0);
  sqcRYGate(q, -0.5877388265753282, 1);
  sqcRZGate(q, 0.992412630498209, 1);
  sqcRYGate(q, -3.1376904618401382, 2);
  sqcRZGate(q, -2.1030642284509513, 2);
  sqcRYGate(q, -2.076345145942679, 3);
  sqcRZGate(q, -0.0004999497558175747, 3);
  sqcRYGate(q, -0.4976854727871478, 4);
  sqcRZGate(q, -0.0002623232105474216, 4);
  sqcRYGate(q, -1.5707832414956844, 5);
  sqcRZGate(q, -2.9262714410928954, 5);
  sqcRYGate(q, -1.5707618923059319, 6);
  sqcRZGate(q, 2.411671991327504, 6);
  sqcRYGate(q, 3.1406630727410643, 7);
  sqcRZGate(q, 3.0912297869112852, 7);
  sqcRYGate(q, -0.011673077084284776, 8);
  sqcRZGate(q, -0.06196193879661837, 8);
  sqcRYGate(q, 1.7435597335725168, 9);
  sqcRZGate(q, -3.1399106930953278, 9);
  sqcRYGate(q, 1.994595224437818, 10);
  sqcRZGate(q, -1.5585699178834396, 10);
  sqcRYGate(q, 1.5706408010877064, 11);
  sqcRZGate(q, 1.6477679442431405, 11);
  sqcRYGate(q, 2.7204910072002555, 12);
  sqcRZGate(q, -1.5738912100565567, 12);
  sqcRYGate(q, 1.5706245853033876, 13);
  sqcRZGate(q, 2.3664405217434767, 13);
  sqcRYGate(q, -1.57025899206743, 14);
  sqcRZGate(q, -0.9165611435212622, 14);
  sqcRYGate(q, -3.1390639409105505, 15);
  sqcRZGate(q, -2.9875106300337455, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.078011117780159, 0);
  sqcRZGate(q, 0.10017785918863945, 0);
  sqcRYGate(q, -1.416773005590736, 1);
  sqcRZGate(q, 0.8675890466115815, 1);
  sqcRYGate(q, -2.577449282709311, 2);
  sqcRZGate(q, -1.5946328890555703, 2);
  sqcRYGate(q, 1.8532948559967195, 3);
  sqcRZGate(q, -3.1413753177003843, 3);
  sqcRYGate(q, 1.570852008435652, 4);
  sqcRZGate(q, 2.5683968567790036, 4);
  sqcRYGate(q, -2.1271559571663667, 5);
  sqcRZGate(q, -0.8604031746767348, 5);
  sqcRYGate(q, 1.0008686902782584, 6);
  sqcRZGate(q, -0.5078511901351903, 6);
  sqcRYGate(q, -1.5705523985115974, 7);
  sqcRZGate(q, 1.532689709764794, 7);
  sqcRYGate(q, -3.139458957453217, 8);
  sqcRZGate(q, -0.061339142658764834, 8);
  sqcRYGate(q, 1.4029305262864364, 9);
  sqcRZGate(q, 3.098966741933521, 9);
  sqcRYGate(q, 3.0591678537589653, 10);
  sqcRZGate(q, -0.0005350289079896662, 10);
  sqcRYGate(q, -1.572329572635283, 11);
  sqcRZGate(q, 1.5679622658869001, 11);
  sqcRYGate(q, 1.5705073477160432, 12);
  sqcRZGate(q, -2.715855640398603, 12);
  sqcRYGate(q, 0.06511034573456212, 13);
  sqcRZGate(q, -1.6070699917894533, 13);
  sqcRYGate(q, -0.3532409303986732, 14);
  sqcRZGate(q, 0.9672296600007436, 14);
  sqcRYGate(q, 1.57097401723649, 15);
  sqcRZGate(q, -1.6095958401016137, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.7275870059876899, 0);
  sqcRZGate(q, 0.12146408183797684, 0);
  sqcRYGate(q, 1.571832181038375, 1);
  sqcRZGate(q, 3.1410914963871592, 1);
  sqcRYGate(q, 2.0539337695344275, 2);
  sqcRZGate(q, -1.5698465716160959, 2);
  sqcRYGate(q, -1.5708160584970914, 3);
  sqcRZGate(q, -1.6897682591683303, 3);
  sqcRYGate(q, -0.4145410971643438, 4);
  sqcRZGate(q, 2.2603513250899456, 4);
  sqcRYGate(q, -1.7160245552389115, 5);
  sqcRZGate(q, 1.4567675313330426, 5);
  sqcRYGate(q, -1.5697593415306414, 6);
  sqcRZGate(q, -3.0593949649700973, 6);
  sqcRYGate(q, 0.6149001472519657, 7);
  sqcRZGate(q, -1.5928077233720075, 7);
  sqcRYGate(q, 1.5707817609345156, 8);
  sqcRZGate(q, 1.5524801110818887, 8);
  sqcRYGate(q, -3.110670733263843, 9);
  sqcRZGate(q, -0.02844032019359144, 9);
  sqcRYGate(q, -1.349332312281887, 10);
  sqcRZGate(q, 1.5721423638831253, 10);
  sqcRYGate(q, 1.568804314980875, 11);
  sqcRZGate(q, -0.6422229625340368, 11);
  sqcRYGate(q, 2.9230317271869906, 12);
  sqcRZGate(q, 1.0349669018640626, 12);
  sqcRYGate(q, -2.6627287407206572, 13);
  sqcRZGate(q, -0.4645948042981249, 13);
  sqcRYGate(q, -3.1283527112385805, 14);
  sqcRZGate(q, -3.0793479860492567, 14);
  sqcRYGate(q, 2.5818412772390826, 15);
  sqcRZGate(q, -2.963100227191981, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.5929614642400156, 0);
  sqcRZGate(q, -1.6040185588896758, 0);
  sqcRYGate(q, 1.5705184648362458, 1);
  sqcRZGate(q, 1.5681347687443496, 1);
  sqcRYGate(q, -1.5709709278098825, 2);
  sqcRZGate(q, -3.141505542108637, 2);
  sqcRYGate(q, -1.9945020520990937, 3);
  sqcRZGate(q, -0.29181858284516293, 3);
  sqcRYGate(q, 0.6468880596293927, 4);
  sqcRZGate(q, -0.05034029711606979, 4);
  sqcRYGate(q, -1.5576213946973914, 5);
  sqcRZGate(q, -2.6657378440534956, 5);
  sqcRYGate(q, 2.990229319011125, 6);
  sqcRZGate(q, -0.02513028395019131, 6);
  sqcRYGate(q, 1.5614926862362548, 7);
  sqcRZGate(q, 1.5428726543038656, 7);
  sqcRYGate(q, 1.5653042546689515, 8);
  sqcRZGate(q, -1.599876193590296, 8);
  sqcRYGate(q, -1.5704589117258276, 9);
  sqcRZGate(q, 2.3638194413688387, 9);
  sqcRYGate(q, 1.3983061415165259, 10);
  sqcRZGate(q, 1.5702091009889747, 10);
  sqcRYGate(q, 2.4404535454839222, 11);
  sqcRZGate(q, 3.0854973644425354, 11);
  sqcRYGate(q, 0.16605041511117238, 12);
  sqcRZGate(q, 2.162592527054869, 12);
  sqcRYGate(q, -1.7209033019561304, 13);
  sqcRZGate(q, -0.038170180670854315, 13);
  sqcRYGate(q, 0.3930725766075892, 14);
  sqcRZGate(q, 0.20248832530200023, 14);
  sqcRYGate(q, 0.002523070407931094, 15);
  sqcRZGate(q, -0.21292528050038761, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.98184613472251, 0);
  sqcRZGate(q, -0.01653591123216991, 0);
  sqcRYGate(q, 1.570549736677115, 1);
  sqcRZGate(q, 1.5790470663718021, 1);
  sqcRYGate(q, 1.3609037436963258, 2);
  sqcRZGate(q, -1.7169730446801665, 2);
  sqcRYGate(q, 1.5769480188932217, 3);
  sqcRZGate(q, 3.140962538639786, 3);
  sqcRYGate(q, 1.5881533972181217, 4);
  sqcRZGate(q, 0.12099891402338034, 4);
  sqcRYGate(q, -0.02625144214618944, 5);
  sqcRZGate(q, -0.4798249469080238, 5);
  sqcRYGate(q, 0.007241096411075465, 6);
  sqcRZGate(q, -2.8972269816963507, 6);
  sqcRYGate(q, 2.9549230437398255, 7);
  sqcRZGate(q, -1.623658769732577, 7);
  sqcRYGate(q, -2.9256569861372212, 8);
  sqcRZGate(q, 1.4824656782254593, 8);
  sqcRYGate(q, 3.1379899690699395, 9);
  sqcRZGate(q, -0.8196175509769039, 9);
  sqcRYGate(q, -1.5708739630078221, 10);
  sqcRZGate(q, 0.000440827347952144, 10);
  sqcRYGate(q, -1.5675918664604138, 11);
  sqcRZGate(q, 0.0011426648446643155, 11);
  sqcRYGate(q, -0.15061792587501352, 12);
  sqcRZGate(q, 1.9941880713452227, 12);
  sqcRYGate(q, 2.1913849047178307, 13);
  sqcRZGate(q, 3.075474081207061, 13);
  sqcRYGate(q, -1.571258717661889, 14);
  sqcRZGate(q, -1.568690847361017, 14);
  sqcRYGate(q, -0.9765223691786559, 15);
  sqcRZGate(q, -0.7536221884339155, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.571262997127889, 0);
  sqcRZGate(q, 0.2737864448270417, 0);
  sqcRYGate(q, -0.8667489308396249, 1);
  sqcRZGate(q, 1.6570220229915655, 1);
  sqcRYGate(q, -0.1504691693491953, 2);
  sqcRZGate(q, -2.055783778648956, 2);
  sqcRYGate(q, 1.5803991152483599, 3);
  sqcRZGate(q, 0.9040078003929333, 3);
  sqcRYGate(q, -0.10351925299352271, 4);
  sqcRZGate(q, 3.140504534453324, 4);
  sqcRYGate(q, -0.026391207519211864, 5);
  sqcRZGate(q, 2.2227371550420227, 5);
  sqcRYGate(q, -0.2999382874482313, 6);
  sqcRZGate(q, 3.0626682842502033, 6);
  sqcRYGate(q, -1.5700176477081231, 7);
  sqcRZGate(q, -1.5910182701461588, 7);
  sqcRYGate(q, -1.5776653351699945, 8);
  sqcRZGate(q, 1.569166106538936, 8);
  sqcRYGate(q, 0.15419342537151695, 9);
  sqcRZGate(q, 3.0493905479218326, 9);
  sqcRYGate(q, -2.4699746222216503, 10);
  sqcRZGate(q, 3.129097601510093, 10);
  sqcRYGate(q, 1.5707874394209957, 11);
  sqcRZGate(q, 3.1328509909717934, 11);
  sqcRYGate(q, 1.5705957301438433, 12);
  sqcRZGate(q, 3.1400225478147377, 12);
  sqcRYGate(q, 1.570418110134866, 13);
  sqcRZGate(q, -0.004330276131452315, 13);
  sqcRYGate(q, 1.5669964498308115, 14);
  sqcRZGate(q, 0.34464124046837785, 14);
  sqcRYGate(q, -1.9806184006344099, 15);
  sqcRZGate(q, -3.0954040762552113, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.005508475732169061, 0);
  sqcRZGate(q, -0.14549954210234342, 0);
  sqcRYGate(q, 2.912378863002216, 1);
  sqcRZGate(q, -1.483498937971394, 1);
  sqcRYGate(q, 0.0023631491814161613, 2);
  sqcRZGate(q, 2.423325899724109, 2);
  sqcRYGate(q, -3.132041050699488, 3);
  sqcRZGate(q, 0.8100008016780711, 3);
  sqcRYGate(q, 1.231504278409018, 4);
  sqcRZGate(q, -1.6035596821176243, 4);
  sqcRYGate(q, -7.942263828901279e-05, 5);
  sqcRZGate(q, -0.7497488238186084, 5);
  sqcRYGate(q, -1.6156805815193818, 6);
  sqcRZGate(q, -1.6844116246773417, 6);
  sqcRYGate(q, -0.2048532845404062, 7);
  sqcRZGate(q, -2.375421652769461, 7);
  sqcRYGate(q, 2.149146831681484, 8);
  sqcRZGate(q, 3.105631723088947, 8);
  sqcRYGate(q, 1.5893291577560662, 9);
  sqcRZGate(q, 1.5713507592850078, 9);
  sqcRYGate(q, 0.172967628838113, 10);
  sqcRZGate(q, -0.11182074926109065, 10);
  sqcRYGate(q, -1.4729584634585688, 11);
  sqcRZGate(q, 0.0005481980501352184, 11);
  sqcRYGate(q, -1.5709064624566977, 12);
  sqcRZGate(q, -1.5713292882081291, 12);
  sqcRYGate(q, 1.570518714542783, 13);
  sqcRZGate(q, -3.140196809435743, 13);
  sqcRYGate(q, -0.00023578401364243717, 14);
  sqcRZGate(q, 2.543122139181566, 14);
  sqcRYGate(q, 3.139902203364605, 15);
  sqcRZGate(q, 0.04685351242955313, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -3.1415743616995147, 0);
  sqcRZGate(q, 0.11590021384091286, 0);
  sqcRYGate(q, -0.7707068115021614, 1);
  sqcRZGate(q, 0.05264533345716061, 1);
  sqcRYGate(q, -2.939460048417435, 2);
  sqcRZGate(q, -1.3580931477491078, 2);
  sqcRYGate(q, -3.122487265160849, 3);
  sqcRZGate(q, -2.4654014758283127, 3);
  sqcRYGate(q, 1.5670179056810634, 4);
  sqcRZGate(q, -0.1086851232578068, 4);
  sqcRYGate(q, -2.5811238625077024, 5);
  sqcRZGate(q, 3.0054915349314255, 5);
  sqcRYGate(q, -1.9498921354436327, 6);
  sqcRZGate(q, 2.1028000583204465, 6);
  sqcRYGate(q, -3.054566212174662, 7);
  sqcRZGate(q, 2.0946308181849007, 7);
  sqcRYGate(q, -0.28433636296530107, 8);
  sqcRZGate(q, -1.5168877689382692, 8);
  sqcRYGate(q, 1.6111870000321613, 9);
  sqcRZGate(q, -1.0969071962170949, 9);
  sqcRYGate(q, 0.10351041204980017, 10);
  sqcRZGate(q, -1.4492083888104559, 10);
  sqcRYGate(q, -1.569267758887647, 11);
  sqcRZGate(q, 3.1392557076327607, 11);
  sqcRYGate(q, -1.5696857874491617, 12);
  sqcRZGate(q, 0.15647583865411493, 12);
  sqcRYGate(q, -1.5709167476246377, 13);
  sqcRZGate(q, -1.5609729141052062, 13);
  sqcRYGate(q, 1.5702376533425086, 14);
  sqcRZGate(q, 0.00015761101047839787, 14);
  sqcRYGate(q, -1.9816388806693723, 15);
  sqcRZGate(q, -1.571718091549872, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.2029986139657467, 0);
  sqcRZGate(q, 0.014735042086474007, 0);
  sqcRYGate(q, -1.702454490009126, 1);
  sqcRZGate(q, 2.6961952660281345, 1);
  sqcRYGate(q, -1.5750278929885515, 2);
  sqcRZGate(q, -0.002627026464931959, 2);
  sqcRYGate(q, 0.0008039675328863137, 3);
  sqcRZGate(q, 2.3715455355567756, 3);
  sqcRYGate(q, 0.13378584462032853, 4);
  sqcRZGate(q, 2.988715968485386, 4);
  sqcRYGate(q, 1.570889202845863, 5);
  sqcRZGate(q, 3.139869198304006, 5);
  sqcRYGate(q, 0.032781371994054495, 6);
  sqcRZGate(q, 0.7367259775292014, 6);
  sqcRYGate(q, -0.06522670452164014, 7);
  sqcRZGate(q, -2.072949985403693, 7);
  sqcRYGate(q, -0.09060688901527404, 8);
  sqcRZGate(q, 1.535236098934231, 8);
  sqcRYGate(q, 3.1378970113730875, 9);
  sqcRZGate(q, 2.09189662847701, 9);
  sqcRYGate(q, 1.570673213321282, 10);
  sqcRZGate(q, 3.0878399724825725, 10);
  sqcRYGate(q, -1.5825365075637012, 11);
  sqcRZGate(q, 0.002053417075975356, 11);
  sqcRYGate(q, 3.141198881339525, 12);
  sqcRZGate(q, -1.429197315722476, 12);
  sqcRYGate(q, 1.570582107228917, 13);
  sqcRZGate(q, -1.5693512701404462, 13);
  sqcRYGate(q, 1.5708002216750634, 14);
  sqcRZGate(q, 2.3937502567896107, 14);
  sqcRYGate(q, 1.5706916545323018, 15);
  sqcRZGate(q, -1.5709396314770048, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.0012448313301044566, 0);
  sqcRZGate(q, 1.3299774526245383, 0);
  sqcRYGate(q, -1.5694347321608744, 1);
  sqcRZGate(q, 1.2720903876484742, 1);
  sqcRYGate(q, -2.67947641691462, 2);
  sqcRZGate(q, 1.5029438654947036, 2);
  sqcRYGate(q, 2.081501772265076, 3);
  sqcRZGate(q, 3.0750904676539177, 3);
  sqcRYGate(q, -0.011836643278074837, 4);
  sqcRZGate(q, 0.39892016677093806, 4);
  sqcRYGate(q, -0.5558311021304715, 5);
  sqcRZGate(q, 2.4953015336878708, 5);
  sqcRYGate(q, -1.5712785664413642, 6);
  sqcRZGate(q, -2.83275116323496, 6);
  sqcRYGate(q, 3.0437385563133854, 7);
  sqcRZGate(q, -0.47039082135719124, 7);
  sqcRYGate(q, 2.864183380537404, 8);
  sqcRZGate(q, -0.15639229496454107, 8);
  sqcRYGate(q, 1.5723915293636812, 9);
  sqcRZGate(q, -1.3604302734308515, 9);
  sqcRYGate(q, 0.023963912115343433, 10);
  sqcRZGate(q, -0.5117234508952557, 10);
  sqcRYGate(q, -0.04545469565535586, 11);
  sqcRZGate(q, 0.06312277915011144, 11);
  sqcRYGate(q, -3.034207278655637, 12);
  sqcRZGate(q, 3.0584806222407734, 12);
  sqcRYGate(q, -1.6321337267538603, 13);
  sqcRZGate(q, 2.6616469249956323, 13);
  sqcRYGate(q, -3.136755373073667, 14);
  sqcRZGate(q, -1.8630613667006113, 14);
  sqcRYGate(q, -1.5707771771086136, 15);
  sqcRZGate(q, 2.928304857893699, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.27872402902762905, 0);
  sqcRZGate(q, 0.17845667655698438, 0);
  sqcRYGate(q, -1.4692616932756009, 1);
  sqcRZGate(q, 1.399538555369177, 1);
  sqcRYGate(q, -1.8374556772122315, 2);
  sqcRZGate(q, 3.073525027290057, 2);
  sqcRYGate(q, 1.8841588001034681, 3);
  sqcRZGate(q, -0.06770574647805501, 3);
  sqcRYGate(q, -2.860450312445705, 4);
  sqcRZGate(q, 0.17969052174054667, 4);
  sqcRYGate(q, -3.0319009115828117, 5);
  sqcRZGate(q, 2.44827008348344, 5);
  sqcRYGate(q, 2.9173315547359713, 6);
  sqcRZGate(q, -2.896033116576435, 6);
  sqcRYGate(q, -1.6359183526364198, 7);
  sqcRZGate(q, -1.6195636601434293, 7);
  sqcRYGate(q, -1.638696688488633, 8);
  sqcRZGate(q, -1.6257699981694038, 8);
  sqcRYGate(q, 3.074181852425141, 9);
  sqcRZGate(q, -1.4088584821692798, 9);
  sqcRYGate(q, -3.0144538623796895, 10);
  sqcRZGate(q, 2.5249226984102644, 10);
  sqcRYGate(q, 1.6948101355414442, 11);
  sqcRZGate(q, 3.0982246596219256, 11);
  sqcRYGate(q, -1.4363702995447074, 12);
  sqcRZGate(q, 3.0957986734128893, 12);
  sqcRYGate(q, -3.0006130076825728, 13);
  sqcRZGate(q, 2.6172205378003226, 13);
  sqcRYGate(q, -0.15265948061827928, 14);
  sqcRZGate(q, -0.5056328529730194, 14);
  sqcRYGate(q, -2.453795521805052, 15);
  sqcRZGate(q, -1.7760894155915417, 15);

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
