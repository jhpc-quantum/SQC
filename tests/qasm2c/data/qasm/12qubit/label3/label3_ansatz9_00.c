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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 2.1163397167474822, 0);
  sqcRYGate(q, -0.400973568136501, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5673350105483406, 0);
  sqcRYGate(q, -0.41260650340938093, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8573777931619335, 2);
  sqcRYGate(q, 0.869968137710202, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.954589112366239, 2);
  sqcRYGate(q, -0.26430287490797877, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.403769273611462, 4);
  sqcRYGate(q, 1.1952812213383253, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.68883150573262, 4);
  sqcRYGate(q, -2.4674100294452384, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6797644657931183, 6);
  sqcRYGate(q, 0.06557223905584685, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0817932698707518, 6);
  sqcRYGate(q, -0.5715642526893818, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.709315557343769, 8);
  sqcRYGate(q, 0.8140482180830185, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.5610158450690461, 8);
  sqcRYGate(q, -0.3397047719875361, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.8756868688916746, 10);
  sqcRYGate(q, -0.3243176519046607, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.6712698836714117, 10);
  sqcRYGate(q, 1.1779356516397828, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.224560283959203, 0);
  sqcRYGate(q, 2.1430365603366095, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.542153090285156, 0);
  sqcRYGate(q, 0.1758893243913828, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4893812842331444, 2);
  sqcRYGate(q, 1.0705086292885555, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.676065129392762, 2);
  sqcRYGate(q, 2.598422222125419, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.9113381247987857, 4);
  sqcRYGate(q, 2.9139434298958626, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.7623556847712387, 4);
  sqcRYGate(q, -1.338932994139592, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.6644978929005503, 6);
  sqcRYGate(q, -2.8883739712446674, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -3.121904319434113, 6);
  sqcRYGate(q, 0.004812612709646835, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.8766313408845583, 8);
  sqcRYGate(q, -0.5940600469998986, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -3.116585581683343, 8);
  sqcRYGate(q, 2.790867976287069, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.7168415047813408, 1);
  sqcRYGate(q, -0.7302565067916521, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.406738914072674, 1);
  sqcRYGate(q, 1.163466789698433, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.056812359592653294, 3);
  sqcRYGate(q, 0.850885775309773, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.19482024988151547, 3);
  sqcRYGate(q, 0.161302586605291, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.995814187225295, 5);
  sqcRYGate(q, 1.8312574641040418, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.9284758167990166, 5);
  sqcRYGate(q, 0.27247494035502773, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.4917373270060646, 7);
  sqcRYGate(q, 1.6580946913917949, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.05574509727439933, 7);
  sqcRYGate(q, 3.0724993283109923, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -2.775906083103533, 9);
  sqcRYGate(q, -0.7304772032163314, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -2.1415103201873187, 9);
  sqcRYGate(q, -0.7656744421404129, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.7354918734894698, 0);
  sqcRYGate(q, -0.9650675630520622, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.932411300608925, 0);
  sqcRYGate(q, -0.9886837597420444, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.3007501891750541, 1);
  sqcRYGate(q, 1.6150276742841012, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4769238616096014, 1);
  sqcRYGate(q, 1.4780828326515285, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0727429990479873, 2);
  sqcRYGate(q, 2.749934706127155, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.012441194118132092, 2);
  sqcRYGate(q, 0.18609803656018703, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.8766644100087124, 3);
  sqcRYGate(q, -0.8804918872808315, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2168288934079898, 3);
  sqcRYGate(q, -0.6782315417345952, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.094648319597054, 4);
  sqcRYGate(q, -1.9810813023705238, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.3678061714552424, 4);
  sqcRYGate(q, 3.0047726642591437, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.30122933798851653, 5);
  sqcRYGate(q, 2.28198570173335, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.8940907204558552, 5);
  sqcRYGate(q, -3.0277483852057445, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.933898435928964, 6);
  sqcRYGate(q, -1.32296799847962, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 0.005492339395737877, 6);
  sqcRYGate(q, -3.1207834200011666, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, -1.735098417965957, 7);
  sqcRYGate(q, 0.12290264487184734, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.01686176990300236, 7);
  sqcRYGate(q, 0.008180797048702892, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.4591955343272467, 8);
  sqcRYGate(q, 2.594333574095387, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 0.1558458424920932, 8);
  sqcRYGate(q, -2.410910332600284, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 0.17450918948215133, 9);
  sqcRYGate(q, -3.11697031480303, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.2441142254556876, 9);
  sqcRYGate(q, -0.4301992840394319, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.863920983827685, 0);
  sqcRYGate(q, -2.9124017677618563, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6872427781461155, 0);
  sqcRYGate(q, 0.8135791477955943, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.962387533535874, 2);
  sqcRYGate(q, -0.09869354238367833, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.13604637314674403, 2);
  sqcRYGate(q, 2.5873032616890965, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8464922109227402, 4);
  sqcRYGate(q, 2.499937081263096, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.30935334437749606, 4);
  sqcRYGate(q, 0.15627123762333994, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.7146392962285932, 6);
  sqcRYGate(q, 1.7889396135261943, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.2457664113652527, 6);
  sqcRYGate(q, 0.6874982325621579, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.0090231969165386, 8);
  sqcRYGate(q, -0.725048118628514, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.3085781671860883, 8);
  sqcRYGate(q, 0.0762727880459962, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.38193276232324447, 10);
  sqcRYGate(q, -2.5693156121741687, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.514809301950244, 10);
  sqcRYGate(q, -2.8965673640550724, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.6704249969785647, 0);
  sqcRYGate(q, 2.76625999250569, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4867004153926575, 0);
  sqcRYGate(q, 1.800384374920817, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.015271702320346, 2);
  sqcRYGate(q, 1.4480877543018673, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.614449353944653, 2);
  sqcRYGate(q, 0.05565981841759893, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.5472357981200512, 4);
  sqcRYGate(q, -2.6417254903495038, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.1070667249174555, 4);
  sqcRYGate(q, 0.5310317569267875, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.1641039656703325, 6);
  sqcRYGate(q, -3.079739681189227, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 3.086734354522353, 6);
  sqcRYGate(q, 0.2654478928865735, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.3835383626897211, 8);
  sqcRYGate(q, -3.136563245967751, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.498485714321756, 8);
  sqcRYGate(q, 1.5361371380223863, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.7469964668492708, 1);
  sqcRYGate(q, 0.6882224697104671, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.010508410475602581, 1);
  sqcRYGate(q, -0.22217775906291015, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.16949315511559337, 3);
  sqcRYGate(q, 1.9546103461476367, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.9717180970644304, 3);
  sqcRYGate(q, 0.18253892073598343, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.30299461719809173, 5);
  sqcRYGate(q, 1.083023747963483, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.3961795281621994, 5);
  sqcRYGate(q, -0.27674182463083963, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.8305281037657106, 7);
  sqcRYGate(q, 1.252120704230109, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 3.105162777643187, 7);
  sqcRYGate(q, -0.28068563715275785, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -2.9233914322292347, 9);
  sqcRYGate(q, -0.8443298250777759, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.9012184272058882, 9);
  sqcRYGate(q, 1.4167707381813166, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.4475842343042106, 0);
  sqcRYGate(q, 0.23966138578420745, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.9922560112277212, 0);
  sqcRYGate(q, -2.842987940014137, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.902824976801981, 1);
  sqcRYGate(q, -0.39333581263029377, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5502124813091003, 1);
  sqcRYGate(q, 0.26434290451082987, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2032946928375274, 2);
  sqcRYGate(q, 1.189244970676901, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.5779259384447135, 2);
  sqcRYGate(q, 0.10760688865577883, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.113364423447238, 3);
  sqcRYGate(q, -0.7611676929421849, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5014913237488923, 3);
  sqcRYGate(q, -2.1641438423381465, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.530433240523998, 4);
  sqcRYGate(q, -2.5855469314761006, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -3.1246789484282638, 4);
  sqcRYGate(q, -0.010358009717527317, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.2001630550946345, 5);
  sqcRYGate(q, 1.3646845336031213, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.108132383528858, 5);
  sqcRYGate(q, 0.008316528140193569, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.347361359303184, 6);
  sqcRYGate(q, -0.6245315434813641, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 3.1389852348207863, 6);
  sqcRYGate(q, -0.10992990817227, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 1.6720114497670986, 7);
  sqcRYGate(q, 0.3109132339133575, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.0037763888865214317, 7);
  sqcRYGate(q, 0.001224253701455679, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.12320066083855429, 8);
  sqcRYGate(q, 1.3975291165654564, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 3.0588965996831017, 8);
  sqcRYGate(q, 2.971603868079736, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 2.6169087586511637, 9);
  sqcRYGate(q, -1.812595036169555, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.8906395274151864, 9);
  sqcRYGate(q, 0.44153187730682836, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.4636585503220685, 0);
  sqcRYGate(q, -3.1116455107887684, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9608849957014414, 0);
  sqcRYGate(q, -0.09206680906529474, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5493052548679707, 2);
  sqcRYGate(q, -3.1208043073985374, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5887792712966309, 2);
  sqcRYGate(q, -1.546718873127011, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3424863380241026, 4);
  sqcRYGate(q, -1.326113283485756, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.1154395433505613, 4);
  sqcRYGate(q, -0.01820733605590062, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.051765282667346035, 6);
  sqcRYGate(q, -2.4024911155541293, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.7556282874697223e-05, 6);
  sqcRYGate(q, -3.106273959173536, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.44120116457518543, 8);
  sqcRYGate(q, -1.6887582831245336, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.6476609328915144, 8);
  sqcRYGate(q, -1.5544230661163567, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.2278506941832976, 10);
  sqcRYGate(q, -0.061676874877362, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.101698707146889, 10);
  sqcRYGate(q, -3.140463764966859, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.4962422780150197, 0);
  sqcRYGate(q, -0.029303745113873347, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3600087605111595, 0);
  sqcRYGate(q, -0.005029939461061059, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5654458672134064, 2);
  sqcRYGate(q, 1.7848165955406294, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.5554388040764493, 2);
  sqcRYGate(q, -0.6270059411135404, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.541190378579462, 4);
  sqcRYGate(q, -1.6344226720802246, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.5739260938680335, 4);
  sqcRYGate(q, 0.012020742879426116, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.123308990149842, 6);
  sqcRYGate(q, 0.06039477386775616, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.3646331755847356, 6);
  sqcRYGate(q, -0.36596596126940756, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.5709263342760038, 8);
  sqcRYGate(q, 2.480527537670791, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.570795635860568, 8);
  sqcRYGate(q, 1.5704142669074752, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.2416954853980497, 1);
  sqcRYGate(q, -1.543296825438248, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.595031610618259, 1);
  sqcRYGate(q, 2.658849413263441, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2527254054102404, 3);
  sqcRYGate(q, -2.7946932518792997, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.5652234966521568, 3);
  sqcRYGate(q, 0.09169029658220625, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.1551128228646705, 5);
  sqcRYGate(q, 2.8679758366835784, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.1376708381498624, 5);
  sqcRYGate(q, 3.094623936918319, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.006831264998472866, 7);
  sqcRYGate(q, -1.4809832918089996, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.37468721530244553, 7);
  sqcRYGate(q, -0.37486600213193455, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.604683140965916, 9);
  sqcRYGate(q, -1.986897833311681, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.5683994049689336, 9);
  sqcRYGate(q, 1.5900398559205235, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.5548001275678621, 0);
  sqcRYGate(q, -0.36007197539377356, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.11031816217942758, 0);
  sqcRYGate(q, 1.5649513107005606, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.03759734124402869, 1);
  sqcRYGate(q, -2.6088168874233273, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.026326472290650473, 1);
  sqcRYGate(q, 0.019273185879339873, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.964683207294762, 2);
  sqcRYGate(q, -1.784931157850516, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -3.13703340282176, 2);
  sqcRYGate(q, 0.028900213007789437, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.05878862613812341, 3);
  sqcRYGate(q, -1.1071625617294467, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.06987772773960872, 3);
  sqcRYGate(q, 0.017249655945280908, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.238080964663888, 4);
  sqcRYGate(q, 2.2842511655714013, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -3.126704721821941, 4);
  sqcRYGate(q, 3.139117140696069, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.0604038143608285, 5);
  sqcRYGate(q, -2.277373108808867, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.1366203523808034, 5);
  sqcRYGate(q, -0.0012986798097360235, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.2154923260857056, 6);
  sqcRYGate(q, -3.1075278248968683, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 0.001193292454414241, 6);
  sqcRYGate(q, -0.0025949626157747365, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, -2.5205448844564353, 7);
  sqcRYGate(q, -2.8960650223512525, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.0009199642608956893, 7);
  sqcRYGate(q, -3.1340373005283464, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.5746941423217873, 8);
  sqcRYGate(q, 1.6213174700197586, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, -0.003769604998373401, 8);
  sqcRYGate(q, -3.1364050038862867, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 1.7252250791834978, 9);
  sqcRYGate(q, 1.698281251416362, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.0008508299817364673, 9);
  sqcRYGate(q, -3.1367366707018265, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.3726612007994321, 0);
  sqcRYGate(q, -2.1004066001651553, 1);
  sqcRYGate(q, 1.6352523002535868, 2);
  sqcRYGate(q, -2.4492371596002243, 3);
  sqcRYGate(q, 2.798447795518431, 4);
  sqcRYGate(q, -0.5414475098973819, 5);
  sqcRYGate(q, -2.234257653620376, 6);
  sqcRYGate(q, -2.7201261149089335, 7);
  sqcRYGate(q, 2.7964554137689728, 8);
  sqcRYGate(q, -2.45722679866837, 9);
  sqcRYGate(q, 1.838683386455275, 10);
  sqcRYGate(q, 1.9874346083925287, 11);

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
