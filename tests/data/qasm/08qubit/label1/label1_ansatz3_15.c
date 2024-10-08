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

  sqcRYGate(q, 0.3322172099044086, 0);
  sqcRZGate(q, 2.501232468396633, 0);
  sqcRYGate(q, -2.3929211236404897, 1);
  sqcRZGate(q, 1.109874013868029, 1);
  sqcRYGate(q, -1.7064314554678182, 2);
  sqcRZGate(q, -1.7611838797564763, 2);
  sqcRYGate(q, -2.201623107993115, 3);
  sqcRZGate(q, -0.8343880139467412, 3);
  sqcRYGate(q, 3.1413526995681114, 4);
  sqcRZGate(q, 1.022911840968555, 4);
  sqcRYGate(q, -0.6405802893994691, 5);
  sqcRZGate(q, -1.2034111391689706, 5);
  sqcRYGate(q, -2.848307541091626, 6);
  sqcRZGate(q, -1.3014230573623218, 6);
  sqcRYGate(q, -0.02228897524943019, 7);
  sqcRZGate(q, 2.4838236959122932, 7);
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
  sqcRYGate(q, -3.1225563533760736, 0);
  sqcRZGate(q, -2.5677304919826627, 0);
  sqcRYGate(q, -0.370645506097731, 1);
  sqcRZGate(q, -1.0761116117300336, 1);
  sqcRYGate(q, 0.8736834616505265, 2);
  sqcRZGate(q, 2.546989493443359, 2);
  sqcRYGate(q, -2.876476274020043, 3);
  sqcRZGate(q, -1.7268055826523878, 3);
  sqcRYGate(q, -3.1403122975613003, 4);
  sqcRZGate(q, -1.2857349699223024, 4);
  sqcRYGate(q, 2.6120759552812305, 5);
  sqcRZGate(q, 1.991068275505933, 5);
  sqcRYGate(q, 1.5617925108651205, 6);
  sqcRZGate(q, 0.8446558692398264, 6);
  sqcRYGate(q, -0.09030922684040288, 7);
  sqcRZGate(q, 2.865450326202695, 7);
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
  sqcRYGate(q, 2.5021033494046585, 0);
  sqcRZGate(q, 0.2195202428488431, 0);
  sqcRYGate(q, -1.1211048091546174, 1);
  sqcRZGate(q, 1.938975829451258, 1);
  sqcRYGate(q, 1.899090836442137, 2);
  sqcRZGate(q, 0.5294410630437195, 2);
  sqcRYGate(q, -2.3870045792993233, 3);
  sqcRZGate(q, -2.2124493237215686, 3);
  sqcRYGate(q, 3.140901050319208, 4);
  sqcRZGate(q, 0.5096455527310411, 4);
  sqcRYGate(q, -2.7695464268466603, 5);
  sqcRZGate(q, 0.11175675532180471, 5);
  sqcRYGate(q, 0.39283360637898035, 6);
  sqcRZGate(q, -2.564698700632853, 6);
  sqcRYGate(q, -2.5072591655375898, 7);
  sqcRZGate(q, 1.2287149421648036, 7);
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
  sqcRYGate(q, -3.1304259989151353, 0);
  sqcRZGate(q, 0.43912071141823367, 0);
  sqcRYGate(q, -2.0873626986509066, 1);
  sqcRZGate(q, 1.8226212552313177, 1);
  sqcRYGate(q, -2.6259271021763544, 2);
  sqcRZGate(q, -2.2835457750837893, 2);
  sqcRYGate(q, -2.833600843606379, 3);
  sqcRZGate(q, 2.8347235595691633, 3);
  sqcRYGate(q, -3.1415262524804186, 4);
  sqcRZGate(q, -0.37952335451655994, 4);
  sqcRYGate(q, -2.1919994640940192, 5);
  sqcRZGate(q, -1.9211562109869806, 5);
  sqcRYGate(q, 1.5954999413607502, 6);
  sqcRZGate(q, -1.0285558517120776, 6);
  sqcRYGate(q, 1.5885143802307782, 7);
  sqcRZGate(q, -0.002287597731575255, 7);
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
  sqcRYGate(q, 0.5548702007350572, 0);
  sqcRZGate(q, 2.4358960036828154, 0);
  sqcRYGate(q, -1.0367874072175978, 1);
  sqcRZGate(q, 1.6050439699555752, 1);
  sqcRYGate(q, 1.245780324417382, 2);
  sqcRZGate(q, 1.2419021559613777, 2);
  sqcRYGate(q, 3.124327237062891, 3);
  sqcRZGate(q, 1.235394291316374, 3);
  sqcRYGate(q, 0.0007936993957313732, 4);
  sqcRZGate(q, -2.1983787918608844, 4);
  sqcRYGate(q, -1.6786712733525766, 5);
  sqcRZGate(q, 0.13718955503435204, 5);
  sqcRYGate(q, 1.640338557661596, 6);
  sqcRZGate(q, -1.5904135580767504, 6);
  sqcRYGate(q, 2.256447001820974, 7);
  sqcRZGate(q, -1.5373113034576873, 7);
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
  sqcRYGate(q, -1.5255146702542957, 0);
  sqcRZGate(q, 1.5214693234867906, 0);
  sqcRYGate(q, -1.560556483431152, 1);
  sqcRZGate(q, 1.7649049850545346, 1);
  sqcRYGate(q, -1.3326403102507136, 2);
  sqcRZGate(q, 1.9264513613282137, 2);
  sqcRYGate(q, 0.0024572611540065736, 3);
  sqcRZGate(q, -1.6266070959112175, 3);
  sqcRYGate(q, 3.141107774236128, 4);
  sqcRZGate(q, 2.589683707047731, 4);
  sqcRYGate(q, -2.7823770898413, 5);
  sqcRZGate(q, 1.2709631031679756, 5);
  sqcRYGate(q, 1.1903801312031734, 6);
  sqcRZGate(q, -0.13536013718251674, 6);
  sqcRYGate(q, 2.526451364021688, 7);
  sqcRZGate(q, -1.4592937737734013, 7);
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
  sqcRYGate(q, -0.6922709253583182, 0);
  sqcRZGate(q, 1.7579052414167835, 0);
  sqcRYGate(q, 1.480754102271364, 1);
  sqcRZGate(q, -2.036063522535404, 1);
  sqcRYGate(q, 0.20676280868565033, 2);
  sqcRZGate(q, -2.8896243054301265, 2);
  sqcRYGate(q, 0.11844975371540656, 3);
  sqcRZGate(q, 3.1021763935792612, 3);
  sqcRYGate(q, -3.1409969251251377, 4);
  sqcRZGate(q, 2.0413930395504902, 4);
  sqcRYGate(q, 1.3907396881774254, 5);
  sqcRZGate(q, 1.6692122892700108, 5);
  sqcRYGate(q, 2.170561201447107, 6);
  sqcRZGate(q, -2.594215531354931, 6);
  sqcRYGate(q, -1.5120235052561224, 7);
  sqcRZGate(q, 2.614854815616445, 7);
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
  sqcRYGate(q, -2.551687328975989, 0);
  sqcRZGate(q, -0.3023769094028657, 0);
  sqcRYGate(q, -3.028891757905064, 1);
  sqcRZGate(q, 0.15424291501942908, 1);
  sqcRYGate(q, -0.39093282438797244, 2);
  sqcRZGate(q, -1.4472800787415272, 2);
  sqcRYGate(q, -3.1390686271984922, 3);
  sqcRZGate(q, -2.9941889813225218, 3);
  sqcRYGate(q, 0.0006054273262689868, 4);
  sqcRZGate(q, -1.0062661519303902, 4);
  sqcRYGate(q, -1.7368089535162852, 5);
  sqcRZGate(q, 0.43485218565688744, 5);
  sqcRYGate(q, 2.9293233662227816, 6);
  sqcRZGate(q, -2.9583601272729325, 6);
  sqcRYGate(q, 1.965128386101076, 7);
  sqcRZGate(q, 2.7544374643913594, 7);
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
  sqcRYGate(q, 1.764983545186078, 0);
  sqcRZGate(q, -0.8753328226098082, 0);
  sqcRYGate(q, -0.7845838034895342, 1);
  sqcRZGate(q, -0.38065333260875145, 1);
  sqcRYGate(q, -0.37490235825283413, 2);
  sqcRZGate(q, 1.6155028669668425, 2);
  sqcRYGate(q, 1.2782519699941108, 3);
  sqcRZGate(q, -0.8321446669906954, 3);
  sqcRYGate(q, -1.5739913364448341, 4);
  sqcRZGate(q, -1.759739151739297, 4);
  sqcRYGate(q, 2.762271400762781, 5);
  sqcRZGate(q, -1.098536576271214, 5);
  sqcRYGate(q, 1.6710725705432936, 6);
  sqcRZGate(q, -2.4811406878458913, 6);
  sqcRYGate(q, 0.5023605491836962, 7);
  sqcRZGate(q, 1.1159128371236946, 7);
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
  sqcRYGate(q, -1.898280494744671, 0);
  sqcRZGate(q, -1.298471432562265, 0);
  sqcRYGate(q, 1.1833822514510208, 1);
  sqcRZGate(q, -1.6779734737149503, 1);
  sqcRYGate(q, 0.00023195301762489717, 2);
  sqcRZGate(q, -2.2737152335857114, 2);
  sqcRYGate(q, -0.0004923225703075988, 3);
  sqcRZGate(q, -1.6899787222848248, 3);
  sqcRYGate(q, -0.028420249847679102, 4);
  sqcRZGate(q, 1.763623213137372, 4);
  sqcRYGate(q, 1.5696561451077766, 5);
  sqcRZGate(q, 2.2052599166146525, 5);
  sqcRYGate(q, 3.1409633120372074, 6);
  sqcRZGate(q, -0.4109725900616903, 6);
  sqcRYGate(q, -1.1469768648398189, 7);
  sqcRZGate(q, -1.4644766323505345, 7);
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
  sqcRYGate(q, 2.9507235168678254, 0);
  sqcRZGate(q, 2.464025155766536, 0);
  sqcRYGate(q, -2.089524182566847, 1);
  sqcRZGate(q, -1.052320421070939, 1);
  sqcRYGate(q, 0.47082548435131155, 2);
  sqcRZGate(q, 1.0756183190358912, 2);
  sqcRYGate(q, -1.5710418819428185, 3);
  sqcRZGate(q, 0.1476511947516386, 3);
  sqcRYGate(q, -1.5495059040124008, 4);
  sqcRZGate(q, -1.6022742699862251, 4);
  sqcRYGate(q, 3.1395874524539344, 5);
  sqcRZGate(q, 2.208008217571297, 5);
  sqcRYGate(q, -2.0809956345739673, 6);
  sqcRZGate(q, 3.121019971180411, 6);
  sqcRYGate(q, -1.5707467334361829, 7);
  sqcRZGate(q, -1.5709970485978084, 7);
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
  sqcRYGate(q, -3.0936905899678258, 0);
  sqcRZGate(q, -3.0011651457954263, 0);
  sqcRYGate(q, -1.5727245003278387, 1);
  sqcRZGate(q, 1.5751279522587929, 1);
  sqcRYGate(q, 3.073352632474816, 2);
  sqcRZGate(q, 2.742092544990174, 2);
  sqcRYGate(q, 3.1360121051710093, 3);
  sqcRZGate(q, -1.4150565627769238, 3);
  sqcRYGate(q, -3.052693847147669, 4);
  sqcRZGate(q, 3.112875454124113, 4);
  sqcRYGate(q, 1.5944754427343693, 5);
  sqcRZGate(q, 0.06968347042985013, 5);
  sqcRYGate(q, -0.45821098198860616, 6);
  sqcRZGate(q, 2.957786777791462, 6);
  sqcRYGate(q, -1.571293447998161, 7);
  sqcRZGate(q, 0.43946555570560436, 7);
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
  sqcRYGate(q, 0.0017109134233814771, 0);
  sqcRZGate(q, -0.7209785896687223, 0);
  sqcRYGate(q, 1.5723920214026768, 1);
  sqcRZGate(q, 1.9181156157723442, 1);
  sqcRYGate(q, -1.6834908764717027, 2);
  sqcRZGate(q, -1.7412351570396878, 2);
  sqcRYGate(q, -3.1309000733429473, 3);
  sqcRZGate(q, 1.5350316703789524, 3);
  sqcRYGate(q, 0.10937147972975048, 4);
  sqcRZGate(q, 3.1350521248477614, 4);
  sqcRYGate(q, 1.5715816712924382, 5);
  sqcRZGate(q, -1.5723249087625486, 5);
  sqcRYGate(q, -3.141101370931849, 6);
  sqcRZGate(q, 2.438533217201898, 6);
  sqcRYGate(q, 3.140477732552471, 7);
  sqcRZGate(q, -0.5373081519947982, 7);
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
  sqcRYGate(q, -0.0018726771280543637, 0);
  sqcRZGate(q, 1.1718398652382813, 0);
  sqcRYGate(q, -0.9705021260563537, 1);
  sqcRZGate(q, 1.4149434149455256, 1);
  sqcRYGate(q, 3.064121579497217, 2);
  sqcRZGate(q, 2.2092881788819296, 2);
  sqcRYGate(q, -3.1335851630438003, 3);
  sqcRZGate(q, 1.5093999139604373, 3);
  sqcRYGate(q, -1.574118251122564, 4);
  sqcRZGate(q, 2.4264125983214617, 4);
  sqcRYGate(q, 1.3330881762637148, 5);
  sqcRZGate(q, -1.8836265066189826, 5);
  sqcRYGate(q, -2.2636310056028357, 6);
  sqcRZGate(q, 0.8121337122265123, 6);
  sqcRYGate(q, -2.7640474701917297, 7);
  sqcRZGate(q, -2.1677674903333743, 7);
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
  sqcRYGate(q, 0.003126107127398049, 0);
  sqcRZGate(q, -0.06724854603701848, 0);
  sqcRYGate(q, 3.1378510672810345, 1);
  sqcRZGate(q, -1.998240743444903, 1);
  sqcRYGate(q, -1.5728087714749068, 2);
  sqcRZGate(q, 1.575903013540633, 2);
  sqcRYGate(q, -0.08091678944049466, 3);
  sqcRZGate(q, -2.400644749025416, 3);
  sqcRYGate(q, 0.30454506350782073, 4);
  sqcRZGate(q, -2.9684061609415213, 4);
  sqcRYGate(q, 3.138486101674742, 5);
  sqcRZGate(q, -1.8095829403690522, 5);
  sqcRYGate(q, 0.00012152041547519588, 6);
  sqcRZGate(q, -1.311038608582409, 6);
  sqcRYGate(q, 1.5714879491236915, 7);
  sqcRZGate(q, -1.5718573458333989, 7);
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
  sqcRYGate(q, 1.5764552335821826, 0);
  sqcRZGate(q, -2.027924970756228, 0);
  sqcRYGate(q, 0.2658856842476931, 1);
  sqcRZGate(q, 2.820413396521479, 1);
  sqcRYGate(q, -1.604186444445263, 2);
  sqcRZGate(q, -0.009565399217127837, 2);
  sqcRYGate(q, -3.1391865192184287, 3);
  sqcRZGate(q, -0.8874787301943083, 3);
  sqcRYGate(q, 2.340391369868749, 4);
  sqcRZGate(q, -2.459292236502604, 4);
  sqcRYGate(q, 3.1382543471645916, 5);
  sqcRZGate(q, -3.0456619304362844, 5);
  sqcRYGate(q, -1.57587682274467, 6);
  sqcRZGate(q, 1.5694887435701377, 6);
  sqcRYGate(q, 1.5794633828107836, 7);
  sqcRZGate(q, -0.8470452980411707, 7);
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
  sqcRYGate(q, -0.09901040657199565, 0);
  sqcRZGate(q, 1.60345419806602, 0);
  sqcRYGate(q, 4.603553159578684e-05, 1);
  sqcRZGate(q, 0.8802790092512774, 1);
  sqcRYGate(q, -2.7089181848991934, 2);
  sqcRZGate(q, -3.08784621462987, 2);
  sqcRYGate(q, -4.557772202318233e-05, 3);
  sqcRZGate(q, 1.421678734282568, 3);
  sqcRYGate(q, -3.1290203113989916, 4);
  sqcRZGate(q, 0.10295877006535559, 4);
  sqcRYGate(q, -0.4597517573451064, 5);
  sqcRZGate(q, -0.13632115437052014, 5);
  sqcRYGate(q, 2.130627335687188, 6);
  sqcRZGate(q, -1.61172817085723, 6);
  sqcRYGate(q, -1.5685502215171216, 7);
  sqcRZGate(q, -1.5667673355367775, 7);
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
  sqcRYGate(q, 1.5789164186987952, 0);
  sqcRZGate(q, -0.8133683727687481, 0);
  sqcRYGate(q, -0.5149407015491017, 1);
  sqcRZGate(q, 2.6714807345836413, 1);
  sqcRYGate(q, -1.5370761200171208, 2);
  sqcRZGate(q, -1.5718088304186573, 2);
  sqcRYGate(q, -3.130388362081971, 3);
  sqcRZGate(q, -1.7604711748209105, 3);
  sqcRYGate(q, 0.018260376224206933, 4);
  sqcRZGate(q, 1.104765231267848, 4);
  sqcRYGate(q, 3.120068258280151, 5);
  sqcRZGate(q, 1.429128165202929, 5);
  sqcRYGate(q, -0.1536675274071028, 6);
  sqcRZGate(q, 0.03897637516806363, 6);
  sqcRYGate(q, -1.5341795310466828, 7);
  sqcRZGate(q, 1.5744735159440335, 7);
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
  sqcRYGate(q, 3.1409316554713698, 0);
  sqcRZGate(q, -0.8656275680633623, 0);
  sqcRYGate(q, -0.004187408930259302, 1);
  sqcRZGate(q, 2.8161585518544, 1);
  sqcRYGate(q, 1.565546861663796, 2);
  sqcRZGate(q, 1.706112859180074, 2);
  sqcRYGate(q, 1.5736722414618467, 3);
  sqcRZGate(q, 1.510276630555371, 3);
  sqcRYGate(q, -0.0011795255208948419, 4);
  sqcRZGate(q, 3.054783212883306, 4);
  sqcRYGate(q, -1.5708316951301997, 5);
  sqcRZGate(q, 2.1638982200947128, 5);
  sqcRYGate(q, -1.5686367552796412, 6);
  sqcRZGate(q, 2.1820818336413597, 6);
  sqcRYGate(q, 1.5735376435460877, 7);
  sqcRZGate(q, 2.3949248457082146, 7);

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
