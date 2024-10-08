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

  sqcRYGate(q, -1.9936904466079444, 0);
  sqcRYGate(q, -0.3025460486220734, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8618284653847725, 0);
  sqcRYGate(q, 0.3039663078499608, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8827182187821083, 2);
  sqcRYGate(q, 2.2802957093027945, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9334677423304935, 2);
  sqcRYGate(q, 2.200083508274627, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9906686718334585, 4);
  sqcRYGate(q, -2.383095080897933, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6608739897939814, 4);
  sqcRYGate(q, -3.0117828998829683, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8235170679551603, 6);
  sqcRYGate(q, 2.776480496881298, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6754518174866133, 6);
  sqcRYGate(q, -0.5818135695860844, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0649581195847766, 1);
  sqcRYGate(q, 2.227978746635545, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.605766289415375, 1);
  sqcRYGate(q, -0.03324301439438423, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5705372590630795, 3);
  sqcRYGate(q, 1.520779098790836, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.0012713346773374, 3);
  sqcRYGate(q, -1.9190373779998326, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.0635394662566027, 5);
  sqcRYGate(q, -0.22243109566251107, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4933940954356055, 5);
  sqcRYGate(q, 1.9003443725949596, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.015866326931186947, 0);
  sqcRYGate(q, -1.6618494712687775, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7322901176455949, 0);
  sqcRYGate(q, -2.102163058276482, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4702416467778621, 2);
  sqcRYGate(q, -1.2148860962084695, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.091029241330461, 2);
  sqcRYGate(q, 0.0706612750221816, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1214977106764672, 4);
  sqcRYGate(q, 1.0722567105045664, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.7729753342652708, 4);
  sqcRYGate(q, -0.25178080602345343, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.361416463177589, 6);
  sqcRYGate(q, -0.9556904831737905, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.6597955228312347, 6);
  sqcRYGate(q, 2.5934365242779043, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.924945478784455, 1);
  sqcRYGate(q, -2.8243614921892948, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7294863940383953, 1);
  sqcRYGate(q, -0.8434458399740291, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5049247272719768, 3);
  sqcRYGate(q, 1.0926005357027764, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.0718393829827162, 3);
  sqcRYGate(q, 1.896557405216301, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.0382345310482854, 5);
  sqcRYGate(q, 1.4407288539749494, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.615630771833974, 5);
  sqcRYGate(q, -3.1258215891670984, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8764174536168081, 0);
  sqcRYGate(q, -2.423184549757283, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.0020937919872761057, 0);
  sqcRYGate(q, 1.0431158865723793, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.49914171266601387, 2);
  sqcRYGate(q, -0.34954805093276275, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5686032153113192, 2);
  sqcRYGate(q, -3.0950438745014877, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.73331222769444, 4);
  sqcRYGate(q, 0.32099404180377394, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.176780643476511, 4);
  sqcRYGate(q, -0.8771880825553403, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5929488126317704, 6);
  sqcRYGate(q, 0.9355391958393104, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8265707847284555, 6);
  sqcRYGate(q, -2.8291685531601996, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9944465642833542, 1);
  sqcRYGate(q, 0.16659327135108626, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1415589708519884, 1);
  sqcRYGate(q, -0.08703574680941184, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8693101132171499, 3);
  sqcRYGate(q, 2.01187823347118, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.000287587420919, 3);
  sqcRYGate(q, 2.2259179772789235, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.8881049539986476, 5);
  sqcRYGate(q, -1.6707761455243944, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.3297469260067916, 5);
  sqcRYGate(q, -2.7394634103978843, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.2555791647282444, 0);
  sqcRYGate(q, -1.7906625312811686, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9728083832946517, 0);
  sqcRYGate(q, -0.5874650209959138, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8425892276167674, 2);
  sqcRYGate(q, 2.2434479537084746, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8097451348269757, 2);
  sqcRYGate(q, -0.4319630844665741, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6555283107392087, 4);
  sqcRYGate(q, -1.3045918419404527, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.0633189818819204, 4);
  sqcRYGate(q, 0.7839764798361591, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6421320987749786, 6);
  sqcRYGate(q, -2.1044003711682358, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5704902941656168, 6);
  sqcRYGate(q, -1.5785777426700418, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.2214437457008764, 1);
  sqcRYGate(q, 2.2938497620735583, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8756891753629834, 1);
  sqcRYGate(q, -0.04418524514566318, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.48436837068976024, 3);
  sqcRYGate(q, -1.3138185495866654, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.956893844897218, 3);
  sqcRYGate(q, -1.3314203515233802, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.409352237044036, 5);
  sqcRYGate(q, -0.7665038540307272, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.32765259459994, 5);
  sqcRYGate(q, 1.9545921020723136, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.3520581550203312, 0);
  sqcRYGate(q, -3.11476323751704, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.013653544170941778, 0);
  sqcRYGate(q, -0.7081611063013193, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6087202968595637, 2);
  sqcRYGate(q, 0.4204147897062901, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.0008338390047262009, 2);
  sqcRYGate(q, -2.0489017911357603, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8807769999803394, 4);
  sqcRYGate(q, -2.0057410888932523, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5860432564135678, 4);
  sqcRYGate(q, -2.7240900899713134, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9338248747390852, 6);
  sqcRYGate(q, -2.1055733792429567, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0716289318333772, 6);
  sqcRYGate(q, 1.2562954942059559, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.3652374944805139, 1);
  sqcRYGate(q, -1.5887417210315142, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8996632576928976, 1);
  sqcRYGate(q, -1.8099500988524753, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.05583278202650496, 3);
  sqcRYGate(q, 2.198443744349391, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.399626315963941, 3);
  sqcRYGate(q, -0.14082702686716606, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.7335884662782683, 5);
  sqcRYGate(q, 2.8820716235154133, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.8170544654815473, 5);
  sqcRYGate(q, 1.4880128372253667, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.4979999937973605, 0);
  sqcRYGate(q, 0.0006768120523252948, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1598057394858605, 0);
  sqcRYGate(q, 1.562516994366153, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4382656952655275, 2);
  sqcRYGate(q, 1.2270581961503593, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4741662322384912, 2);
  sqcRYGate(q, 3.1250312882090885, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.06526455540458, 4);
  sqcRYGate(q, 0.38387085372888935, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.513438638719186, 4);
  sqcRYGate(q, -2.7590049996087442, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.1854342668659069, 6);
  sqcRYGate(q, -2.251382883726604, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5551774274009507, 6);
  sqcRYGate(q, -2.7010940879787744, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.410193354922443, 1);
  sqcRYGate(q, 3.009860762270048, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1390966790794637, 1);
  sqcRYGate(q, 1.3992552501500422, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9947211534377924, 3);
  sqcRYGate(q, -0.8574603392819667, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8382089436937664, 3);
  sqcRYGate(q, 0.17552961612138063, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.2594748441297288, 5);
  sqcRYGate(q, -2.585978376761627, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.18491522888589798, 5);
  sqcRYGate(q, -0.2120561430511465, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.0917513413509745, 0);
  sqcRYGate(q, -2.186437653266567, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6245137915204647, 0);
  sqcRYGate(q, -2.0395219241056397, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.099528561236002, 2);
  sqcRYGate(q, -1.8562668955968649, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0662619742297537, 2);
  sqcRYGate(q, -0.06505665003427519, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1324698509009723, 4);
  sqcRYGate(q, -2.3811554395151293, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.06484921995159355, 4);
  sqcRYGate(q, -0.42145442576602044, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0922982201866676, 6);
  sqcRYGate(q, -1.3859355296259288, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.2660646241595528, 6);
  sqcRYGate(q, 0.618772960651529, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.8085540977924612, 1);
  sqcRYGate(q, 1.6357221601861847, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.631174239053889, 1);
  sqcRYGate(q, -1.470753895516349, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0870800557417146, 3);
  sqcRYGate(q, -0.30748546685536926, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7400106692153754, 3);
  sqcRYGate(q, -0.05187475929625973, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.186812751630034, 5);
  sqcRYGate(q, -0.3702280304414307, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.15132605195552262, 5);
  sqcRYGate(q, -0.5294407837415925, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.1271464276761805, 0);
  sqcRYGate(q, 1.77139377633332, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.012211520243444376, 0);
  sqcRYGate(q, -1.0727728437322366, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2460432252604379, 2);
  sqcRYGate(q, 2.814572421750314, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0739437214961294, 2);
  sqcRYGate(q, -2.251038237893553, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.360436620673681, 4);
  sqcRYGate(q, -2.0534701584466433, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.5618691165987335, 4);
  sqcRYGate(q, -0.5598838348242735, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6235018028441575, 6);
  sqcRYGate(q, 1.0374116802439541, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.42989040351177893, 6);
  sqcRYGate(q, 2.9165296249102615, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.26616757831386245, 1);
  sqcRYGate(q, 0.8572582147798222, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5015983939417885, 1);
  sqcRYGate(q, -0.37180862386436164, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9569677605881433, 3);
  sqcRYGate(q, -1.5234978203850345, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.653262135658324, 3);
  sqcRYGate(q, 1.2484852420021246, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.6989122258581677, 5);
  sqcRYGate(q, 1.795730852978771, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.04340530816969501, 5);
  sqcRYGate(q, 2.0812860435209855, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.08806105762476912, 0);
  sqcRYGate(q, -1.4762832394775154, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7583618143424977, 0);
  sqcRYGate(q, 0.21924618008264574, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7203109390551927, 2);
  sqcRYGate(q, -1.3555519155142477, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1413108916722026, 2);
  sqcRYGate(q, 2.2445923927353344, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3723298128683697, 4);
  sqcRYGate(q, -0.8082221194975678, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.40960789564704414, 4);
  sqcRYGate(q, -3.03521449778459, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.6575226146114614, 6);
  sqcRYGate(q, 2.283741361676984, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.101183419570721, 6);
  sqcRYGate(q, -0.17405153823226596, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.22080212694946955, 1);
  sqcRYGate(q, -1.1128031493633235, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5807512028696604, 1);
  sqcRYGate(q, -0.012241825282468534, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2722570954923609, 3);
  sqcRYGate(q, 3.120417239167554, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.4764278320207014, 3);
  sqcRYGate(q, -0.9694837197808169, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.03301440544805523, 5);
  sqcRYGate(q, -3.1297873852408107, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.0508012174496377, 5);
  sqcRYGate(q, -0.5778357067154517, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.6165250747294495, 0);
  sqcRYGate(q, -0.6569025385737665, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.138805705665343, 0);
  sqcRYGate(q, -2.410937365573001, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6022584685562338, 2);
  sqcRYGate(q, 0.1774189319446533, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.005631312190346151, 2);
  sqcRYGate(q, 2.2613998464995198, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4710439591399615, 4);
  sqcRYGate(q, -1.5756460291601362, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7311809422479085, 4);
  sqcRYGate(q, 2.1392301069148827, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8341600046666056, 6);
  sqcRYGate(q, 2.8851089814130164, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6490940932314333, 6);
  sqcRYGate(q, -2.685899344670219, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.370932846642563, 1);
  sqcRYGate(q, 2.343851018189035, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9809329788401246, 1);
  sqcRYGate(q, 0.10124015949087184, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8429209299163603, 3);
  sqcRYGate(q, -0.5108418804359404, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.30257982865143734, 3);
  sqcRYGate(q, -0.006424509585915071, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.011158128998124, 5);
  sqcRYGate(q, 0.7670359480543277, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.7754380684984388, 5);
  sqcRYGate(q, 0.058977211301407984, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.545236327248675, 0);
  sqcRYGate(q, 0.9192551696725024, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1916554171053888, 0);
  sqcRYGate(q, -0.7139746624377864, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1957396386589643, 2);
  sqcRYGate(q, -2.1486712261737075, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.012347443787119279, 2);
  sqcRYGate(q, 0.7463918820930457, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2810762926599877, 4);
  sqcRYGate(q, 0.02026101811417207, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.325432582521374, 4);
  sqcRYGate(q, -2.8417604348802716, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.298551443849334, 6);
  sqcRYGate(q, 3.0195332117527798, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.172414825817339, 6);
  sqcRYGate(q, 3.0563195810929127, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5735952762509928, 1);
  sqcRYGate(q, -1.7029800515294915, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3671435557472555, 1);
  sqcRYGate(q, -1.595259971853497, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.394373802774153, 3);
  sqcRYGate(q, -1.621687133021613, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.026355632970271645, 3);
  sqcRYGate(q, 2.7993684485950574, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.097683749216276, 5);
  sqcRYGate(q, -1.2576247403166825, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.4710455977790243, 5);
  sqcRYGate(q, 0.6935507358859676, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.9558525640942344, 0);
  sqcRYGate(q, 2.29245978247409, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8646442365916043, 0);
  sqcRYGate(q, -0.9044228984655907, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.327217415137163, 2);
  sqcRYGate(q, -1.687087540296834, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.023920802118046144, 2);
  sqcRYGate(q, 3.131755737363834, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5002043266216734, 4);
  sqcRYGate(q, 1.3027319261181243, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3777436997908075, 4);
  sqcRYGate(q, 0.3162473919985347, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.4422645871169832, 6);
  sqcRYGate(q, -1.0970317793060094, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.7871693665126167, 6);
  sqcRYGate(q, -0.9187873964519268, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5112000497455451, 1);
  sqcRYGate(q, -0.23598911869731973, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0660074025066537, 1);
  sqcRYGate(q, 3.114210069869354, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.927018552130195, 3);
  sqcRYGate(q, 1.9235310826054377, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8451323840021123, 3);
  sqcRYGate(q, -0.328522396947184, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2965924386547187, 5);
  sqcRYGate(q, 2.19248819752508, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.8179411268091412, 5);
  sqcRYGate(q, -1.0981008152574567, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.587903627402053, 0);
  sqcRYGate(q, -2.5481874096092922, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.219326718833269, 0);
  sqcRYGate(q, 0.29832804343555613, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.1881851864397781, 2);
  sqcRYGate(q, 1.8068612938971014, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4940407149101586, 2);
  sqcRYGate(q, -3.080234619923722, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5450607593171424, 4);
  sqcRYGate(q, 1.0163227691136454, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.287846600456869, 4);
  sqcRYGate(q, -0.08428380196009844, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.843113626824309, 6);
  sqcRYGate(q, -2.9934249159859703, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7144373830668247, 6);
  sqcRYGate(q, -0.7250523925949501, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.588423327864157, 1);
  sqcRYGate(q, 2.1855629599798503, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0888183575118946, 1);
  sqcRYGate(q, 2.375328424664782, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.22080989652912, 3);
  sqcRYGate(q, 0.6526825112327823, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.07039226847455955, 3);
  sqcRYGate(q, -0.002207617944632645, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.0142962290922288, 5);
  sqcRYGate(q, 2.272185268678986, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.2865410500653494, 5);
  sqcRYGate(q, 1.5719800878193413, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.7889663810307505, 0);
  sqcRYGate(q, 2.2899965756198095, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.06654836104190547, 0);
  sqcRYGate(q, 2.6524768403601713, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6354898609799606, 2);
  sqcRYGate(q, -2.6275369697157327, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7711950257695848, 2);
  sqcRYGate(q, 3.1205612076087887, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8590032474873883, 4);
  sqcRYGate(q, -1.0685406076557589, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0876589196693245, 4);
  sqcRYGate(q, 2.6063043493082034, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7317507935300339, 6);
  sqcRYGate(q, 0.3750066341291465, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.38671068649722, 6);
  sqcRYGate(q, -0.31689016705279816, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.18697526600515582, 1);
  sqcRYGate(q, 1.972519010487302, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7233885624890455, 1);
  sqcRYGate(q, -2.36972307180031, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.30966323195910217, 3);
  sqcRYGate(q, -1.6112106115913651, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.3036152902075279, 3);
  sqcRYGate(q, -0.012373653838585241, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.1588406127369355, 5);
  sqcRYGate(q, -1.6713202777056377, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.9803242681878708, 5);
  sqcRYGate(q, -1.375774038530165, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.0584504098911998, 0);
  sqcRYGate(q, 3.1398926239257468, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.921913556421639, 0);
  sqcRYGate(q, 1.4476611028287962, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4322364537853174, 2);
  sqcRYGate(q, 2.1481811542807243, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0303156105140507, 2);
  sqcRYGate(q, 2.2245368103945307, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5792361056995565, 4);
  sqcRYGate(q, 0.8707114442334872, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.6451170988536705, 4);
  sqcRYGate(q, -2.2408150346851503, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.3725781559665025, 6);
  sqcRYGate(q, -0.21137290853718227, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4747621169815393, 6);
  sqcRYGate(q, -0.17361083092634647, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5574552154577623, 1);
  sqcRYGate(q, 0.33092649376791006, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6660737255584145, 1);
  sqcRYGate(q, -0.43096452052028766, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1093150928041196, 3);
  sqcRYGate(q, -2.0502018190062117, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6095254811955657, 3);
  sqcRYGate(q, -2.593503489166794, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6750805951118073, 5);
  sqcRYGate(q, 1.972039823257212, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8928088270313507, 5);
  sqcRYGate(q, -0.39820134320919054, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.8070053406628837, 0);
  sqcRYGate(q, -2.229788634256637, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.499613211411746, 0);
  sqcRYGate(q, -0.47375373032119233, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.364606476502499, 2);
  sqcRYGate(q, 0.8207369599494427, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.03154252931287495, 2);
  sqcRYGate(q, -0.021247305778574695, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8271858707741004, 4);
  sqcRYGate(q, 2.564275332727693, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6854251832645666, 4);
  sqcRYGate(q, -0.02742512973255717, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.1076886580269862, 6);
  sqcRYGate(q, -1.9057659299384158, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.193006223299256, 6);
  sqcRYGate(q, 0.664542304386317, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.201666712261935, 1);
  sqcRYGate(q, -2.330035597647452, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0295472326446182, 1);
  sqcRYGate(q, -2.3237436092801023, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.305451277439362, 3);
  sqcRYGate(q, 1.0664047673096668, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.4752956380857727, 3);
  sqcRYGate(q, -2.5895576159795644, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5826569564383535, 5);
  sqcRYGate(q, -0.7401850311860212, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.8311521133002397, 5);
  sqcRYGate(q, 2.1059936176660825, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.0040687517574112, 0);
  sqcRYGate(q, 0.2104625616402718, 1);
  sqcRYGate(q, 1.3110234777395349, 2);
  sqcRYGate(q, -2.813706169409729, 3);
  sqcRYGate(q, 1.6721808025042426, 4);
  sqcRYGate(q, -2.4601321028139127, 5);
  sqcRYGate(q, -0.9034287599115052, 6);
  sqcRYGate(q, -2.152245161483351, 7);

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
