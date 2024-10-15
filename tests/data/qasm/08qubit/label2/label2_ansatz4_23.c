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

  sqcRYGate(q, -0.5421242783165932, 0);
  sqcRZGate(q, -1.8574578783380638, 0);
  sqcRYGate(q, 2.5761114431564005, 1);
  sqcRZGate(q, 2.303175607404297, 1);
  sqcRYGate(q, -0.984387962026724, 2);
  sqcRZGate(q, 1.5291813242124792, 2);
  sqcRYGate(q, 0.8171858991026512, 3);
  sqcRZGate(q, 0.8449639808429259, 3);
  sqcRYGate(q, 0.20759775729105648, 4);
  sqcRZGate(q, -2.991528718388611, 4);
  sqcRYGate(q, -2.7601719375814127, 5);
  sqcRZGate(q, -1.0099350035525787, 5);
  sqcRYGate(q, -2.4878244305276387, 6);
  sqcRZGate(q, -0.5308064797224112, 6);
  sqcRYGate(q, -2.35967034404529, 7);
  sqcRZGate(q, 1.8193095585504628, 7);
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
  sqcRYGate(q, 2.1868938828792004, 0);
  sqcRZGate(q, -0.015164667658441216, 0);
  sqcRYGate(q, 1.4559602008129033, 1);
  sqcRZGate(q, -2.809057238306687, 1);
  sqcRYGate(q, -0.646686675103318, 2);
  sqcRZGate(q, 2.9816746387820694, 2);
  sqcRYGate(q, -1.7269407073731085, 3);
  sqcRZGate(q, -1.0910462934773306, 3);
  sqcRYGate(q, -2.1067333237670844, 4);
  sqcRZGate(q, -2.6657194501544046, 4);
  sqcRYGate(q, -1.9999377261984623, 5);
  sqcRZGate(q, -2.907163367958938, 5);
  sqcRYGate(q, -2.7405110605144216, 6);
  sqcRZGate(q, -0.11607899740307123, 6);
  sqcRYGate(q, 2.0891953855324608, 7);
  sqcRZGate(q, -0.7436006776449203, 7);
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
  sqcRYGate(q, -2.6895706589904265, 0);
  sqcRZGate(q, -2.831064806326203, 0);
  sqcRYGate(q, 2.2866679706537667, 1);
  sqcRZGate(q, 0.891248347351941, 1);
  sqcRYGate(q, -2.5155596865752425, 2);
  sqcRZGate(q, -2.503834659416006, 2);
  sqcRYGate(q, 0.32959708498814244, 3);
  sqcRZGate(q, -1.932939261333602, 3);
  sqcRYGate(q, 2.286527700392217, 4);
  sqcRZGate(q, -1.9625213084950444, 4);
  sqcRYGate(q, -0.14224437038589954, 5);
  sqcRZGate(q, -2.8235818442024914, 5);
  sqcRYGate(q, 2.6640486892238107, 6);
  sqcRZGate(q, -2.086499362027424, 6);
  sqcRYGate(q, 0.1981618195356747, 7);
  sqcRZGate(q, -0.15154327279406044, 7);
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
  sqcRYGate(q, 0.4679416880741956, 0);
  sqcRZGate(q, -1.7538152175648254, 0);
  sqcRYGate(q, 0.5043941415651911, 1);
  sqcRZGate(q, -1.5387291936802114, 1);
  sqcRYGate(q, 1.7767278703314924, 2);
  sqcRZGate(q, -0.4841215257433739, 2);
  sqcRYGate(q, -1.2780373175092654, 3);
  sqcRZGate(q, 3.038853573923077, 3);
  sqcRYGate(q, 0.934894135546214, 4);
  sqcRZGate(q, -2.8013873668386715, 4);
  sqcRYGate(q, 1.8061854241696773, 5);
  sqcRZGate(q, 1.8622551345883653, 5);
  sqcRYGate(q, -0.7147808206124382, 6);
  sqcRZGate(q, 1.9861440953835745, 6);
  sqcRYGate(q, -2.635187947369886, 7);
  sqcRZGate(q, 1.2000648118539787, 7);
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
  sqcRYGate(q, 2.7021159063780735, 0);
  sqcRZGate(q, 3.1179053163461385, 0);
  sqcRYGate(q, 0.6136524292482474, 1);
  sqcRZGate(q, 1.4277012738102766, 1);
  sqcRYGate(q, -1.4506581271914454, 2);
  sqcRZGate(q, -0.7251630914224848, 2);
  sqcRYGate(q, -2.010745728893971, 3);
  sqcRZGate(q, 2.9570003939035567, 3);
  sqcRYGate(q, 1.7870643836296844, 4);
  sqcRZGate(q, -2.345991166233717, 4);
  sqcRYGate(q, 1.6521298973960592, 5);
  sqcRZGate(q, -2.0987828264467936, 5);
  sqcRYGate(q, 2.50622640519728, 6);
  sqcRZGate(q, -0.8321646887636135, 6);
  sqcRYGate(q, 0.030003067363524316, 7);
  sqcRZGate(q, 1.6863697581892474, 7);
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
  sqcRYGate(q, 1.1183558726751708, 0);
  sqcRZGate(q, -1.976709196751485, 0);
  sqcRYGate(q, -1.089368899121653, 1);
  sqcRZGate(q, 0.8937771144533441, 1);
  sqcRYGate(q, -1.9366428610158557, 2);
  sqcRZGate(q, 0.6637204372712109, 2);
  sqcRYGate(q, -0.26364587084918156, 3);
  sqcRZGate(q, 2.7320196786985806, 3);
  sqcRYGate(q, 2.2338807665209366, 4);
  sqcRZGate(q, -1.557462315752236, 4);
  sqcRYGate(q, -1.1037869392515305, 5);
  sqcRZGate(q, -2.5532545790123238, 5);
  sqcRYGate(q, -0.5091216405568595, 6);
  sqcRZGate(q, 0.06945606183720088, 6);
  sqcRYGate(q, 2.717161029051765, 7);
  sqcRZGate(q, 0.6034763857311186, 7);
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
  sqcRYGate(q, -2.6873574656155825, 0);
  sqcRZGate(q, -0.9053811825451309, 0);
  sqcRYGate(q, 0.40534104344547117, 1);
  sqcRZGate(q, 0.782598276552304, 1);
  sqcRYGate(q, -0.527836029928852, 2);
  sqcRZGate(q, 0.6905427119476951, 2);
  sqcRYGate(q, 1.5616756275594286, 3);
  sqcRZGate(q, -2.030438081555207, 3);
  sqcRYGate(q, 1.6923678496049153, 4);
  sqcRZGate(q, 0.05675370500040024, 4);
  sqcRYGate(q, 1.3149582768770571, 5);
  sqcRZGate(q, -2.5715352686491513, 5);
  sqcRYGate(q, -2.2460014536064485, 6);
  sqcRZGate(q, -2.2465947862682665, 6);
  sqcRYGate(q, -0.4915198622381265, 7);
  sqcRZGate(q, 0.8397884485562406, 7);
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
  sqcRYGate(q, -1.940655392417248, 0);
  sqcRZGate(q, 1.6525759859210167, 0);
  sqcRYGate(q, 2.026734908506108, 1);
  sqcRZGate(q, 0.6919912401608324, 1);
  sqcRYGate(q, -2.7422820338573874, 2);
  sqcRZGate(q, 2.453321112735074, 2);
  sqcRYGate(q, -1.541629141863386, 3);
  sqcRZGate(q, -2.4963305210488196, 3);
  sqcRYGate(q, -2.4086248156140115, 4);
  sqcRZGate(q, 0.792413045160421, 4);
  sqcRYGate(q, -0.25018037144461225, 5);
  sqcRZGate(q, -2.2782999146877323, 5);
  sqcRYGate(q, 1.301441082166411, 6);
  sqcRZGate(q, -2.3136471729712786, 6);
  sqcRYGate(q, 0.7836579131579141, 7);
  sqcRZGate(q, 1.5832298563199305, 7);
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
  sqcRYGate(q, -0.4481383162312231, 0);
  sqcRZGate(q, -2.355815325838165, 0);
  sqcRYGate(q, 0.967270632214718, 1);
  sqcRZGate(q, 2.5271742042095635, 1);
  sqcRYGate(q, -1.9395536628550714, 2);
  sqcRZGate(q, 0.7254684427090643, 2);
  sqcRYGate(q, 1.5701811882449368, 3);
  sqcRZGate(q, 1.6766113027564684, 3);
  sqcRYGate(q, -2.0919596440546897, 4);
  sqcRZGate(q, -0.03965797555120254, 4);
  sqcRYGate(q, 1.702490744588089, 5);
  sqcRZGate(q, 2.108967030091312, 5);
  sqcRYGate(q, 0.2915914642619164, 6);
  sqcRZGate(q, -0.39872754845670055, 6);
  sqcRYGate(q, 0.21501483637211474, 7);
  sqcRZGate(q, -2.4516025645795954, 7);
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
  sqcRYGate(q, -1.8028077834499037, 0);
  sqcRZGate(q, 1.9128156127971303, 0);
  sqcRYGate(q, -0.1338952299476414, 1);
  sqcRZGate(q, 1.534156514701835, 1);
  sqcRYGate(q, -1.5519566045968218, 2);
  sqcRZGate(q, -2.6860095979248593, 2);
  sqcRYGate(q, 2.8150607121791533, 3);
  sqcRZGate(q, 2.342978821016479, 3);
  sqcRYGate(q, -2.7938019646867844, 4);
  sqcRZGate(q, -1.331027923209694, 4);
  sqcRYGate(q, -2.5776269606453033, 5);
  sqcRZGate(q, 1.1624201040979685, 5);
  sqcRYGate(q, 1.3076009229575423, 6);
  sqcRZGate(q, 0.9832407982745581, 6);
  sqcRYGate(q, 0.04249068096708217, 7);
  sqcRZGate(q, -0.8704990966475075, 7);
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
  sqcRYGate(q, -0.7432513514609704, 0);
  sqcRZGate(q, -1.5943697565487245, 0);
  sqcRYGate(q, -2.5900531191604723, 1);
  sqcRZGate(q, -0.06841787621389046, 1);
  sqcRYGate(q, -0.10930232056303935, 2);
  sqcRZGate(q, -0.3277138042802231, 2);
  sqcRYGate(q, 3.0523355803147445, 3);
  sqcRZGate(q, -1.9416907576413007, 3);
  sqcRYGate(q, 0.8372726365446643, 4);
  sqcRZGate(q, -1.4121948605070382, 4);
  sqcRYGate(q, -2.9287010747857276, 5);
  sqcRZGate(q, -2.601350318290575, 5);
  sqcRYGate(q, 1.3692003730788835, 6);
  sqcRZGate(q, 2.193795074295383, 6);
  sqcRYGate(q, -0.1517150848772406, 7);
  sqcRZGate(q, 0.1774895435150403, 7);
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
  sqcRYGate(q, -1.2760214478347807, 0);
  sqcRZGate(q, 2.1639103692559205, 0);
  sqcRYGate(q, 0.78544016454951, 1);
  sqcRZGate(q, -1.165669805481569, 1);
  sqcRYGate(q, -1.5331129157432386, 2);
  sqcRZGate(q, -0.014473757828229456, 2);
  sqcRYGate(q, 0.6809185601234549, 3);
  sqcRZGate(q, 2.4200815554379664, 3);
  sqcRYGate(q, -0.13764071785759827, 4);
  sqcRZGate(q, -2.3448162668350174, 4);
  sqcRYGate(q, 1.1315959550983132, 5);
  sqcRZGate(q, -2.3595168416112067, 5);
  sqcRYGate(q, 2.972596205998265, 6);
  sqcRZGate(q, -0.4283126752229298, 6);
  sqcRYGate(q, 1.0401828674636326, 7);
  sqcRZGate(q, 0.38603467833925986, 7);
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
  sqcRYGate(q, 1.211504168528358, 0);
  sqcRZGate(q, 1.790148189590373, 0);
  sqcRYGate(q, -1.1531847918468285, 1);
  sqcRZGate(q, 2.410699038751797, 1);
  sqcRYGate(q, 1.3132836073846805, 2);
  sqcRZGate(q, -1.6428472774995864, 2);
  sqcRYGate(q, -2.0010020075533816, 3);
  sqcRZGate(q, -1.4954531834680331, 3);
  sqcRYGate(q, -0.08254365720240019, 4);
  sqcRZGate(q, 2.765585307952254, 4);
  sqcRYGate(q, 0.2857285111814311, 5);
  sqcRZGate(q, 2.4049051295370774, 5);
  sqcRYGate(q, -2.851089573849179, 6);
  sqcRZGate(q, -2.839309309221607, 6);
  sqcRYGate(q, 2.6040610121042036, 7);
  sqcRZGate(q, 0.9480401217487788, 7);
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
  sqcRYGate(q, 2.557644659109503, 0);
  sqcRZGate(q, -1.6441612752694985, 0);
  sqcRYGate(q, -2.244095270899215, 1);
  sqcRZGate(q, -2.7055015609496675, 1);
  sqcRYGate(q, 1.2509630726959255, 2);
  sqcRZGate(q, 0.7664905383600518, 2);
  sqcRYGate(q, 0.5466123016241415, 3);
  sqcRZGate(q, 1.0838493230586668, 3);
  sqcRYGate(q, -1.0945238714097165, 4);
  sqcRZGate(q, 3.099608530546871, 4);
  sqcRYGate(q, 2.5402392689342106, 5);
  sqcRZGate(q, -0.6142269403815322, 5);
  sqcRYGate(q, -2.6217214213706233, 6);
  sqcRZGate(q, 1.079114088085731, 6);
  sqcRYGate(q, 2.1434194883204993, 7);
  sqcRZGate(q, 2.1955643198619685, 7);
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
  sqcRYGate(q, 2.2307714007823733, 0);
  sqcRZGate(q, -1.2671908195038828, 0);
  sqcRYGate(q, 3.1083514715596365, 1);
  sqcRZGate(q, -0.15788837219528148, 1);
  sqcRYGate(q, 0.2409901284356551, 2);
  sqcRZGate(q, -3.0199310492368774, 2);
  sqcRYGate(q, 2.3302013711915426, 3);
  sqcRZGate(q, 2.664186394537467, 3);
  sqcRYGate(q, -1.3461403633803821, 4);
  sqcRZGate(q, 0.20355967424318244, 4);
  sqcRYGate(q, -1.6416496491998216, 5);
  sqcRZGate(q, -2.5295052624726297, 5);
  sqcRYGate(q, 2.9552615592911393, 6);
  sqcRZGate(q, 3.047066440437211, 6);
  sqcRYGate(q, 1.1394741392292795, 7);
  sqcRZGate(q, 1.0305268450170626, 7);
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
  sqcRYGate(q, -2.183462703250523, 0);
  sqcRZGate(q, 2.394247775380856, 0);
  sqcRYGate(q, -2.552825128260133, 1);
  sqcRZGate(q, -2.6893428952908223, 1);
  sqcRYGate(q, 2.7858316389681286, 2);
  sqcRZGate(q, -0.632594893976398, 2);
  sqcRYGate(q, -2.162143491192995, 3);
  sqcRZGate(q, -1.7814707477033687, 3);
  sqcRYGate(q, -0.8458714625980619, 4);
  sqcRZGate(q, 2.6921256323977762, 4);
  sqcRYGate(q, -0.06591295459252411, 5);
  sqcRZGate(q, -0.49149853024908197, 5);
  sqcRYGate(q, 0.21500939821869294, 6);
  sqcRZGate(q, 1.0416918508676671, 6);
  sqcRYGate(q, -1.30340664862414, 7);
  sqcRZGate(q, -1.4368005003077924, 7);
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
  sqcRYGate(q, -2.931470790854864, 0);
  sqcRZGate(q, -0.7766053235217889, 0);
  sqcRYGate(q, 0.6019241120023902, 1);
  sqcRZGate(q, -2.8100452143638037, 1);
  sqcRYGate(q, 1.811154370910149, 2);
  sqcRZGate(q, 0.9098123917126708, 2);
  sqcRYGate(q, -1.3819322699792043, 3);
  sqcRZGate(q, -1.3832823427977028, 3);
  sqcRYGate(q, 0.21208199325233246, 4);
  sqcRZGate(q, 1.964993218820032, 4);
  sqcRYGate(q, 1.8828283096982608, 5);
  sqcRZGate(q, 2.3991952533264387, 5);
  sqcRYGate(q, 1.7918603494825243, 6);
  sqcRZGate(q, -0.17718517887762086, 6);
  sqcRYGate(q, -1.7263008425531643, 7);
  sqcRZGate(q, -0.13873413268775966, 7);
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
  sqcRYGate(q, -0.26702501982083415, 0);
  sqcRZGate(q, -0.9187674020409355, 0);
  sqcRYGate(q, -2.9528428625088514, 1);
  sqcRZGate(q, -2.889908848237066, 1);
  sqcRYGate(q, -2.6278387291779883, 2);
  sqcRZGate(q, -2.106509793636471, 2);
  sqcRYGate(q, 2.8423671089730744, 3);
  sqcRZGate(q, 1.5339338827451132, 3);
  sqcRYGate(q, 1.389787209528743, 4);
  sqcRZGate(q, 3.0049872038460816, 4);
  sqcRYGate(q, -2.0383702913481443, 5);
  sqcRZGate(q, -0.7163078609903144, 5);
  sqcRYGate(q, 1.2795266199945141, 6);
  sqcRZGate(q, 1.8114140293686818, 6);
  sqcRYGate(q, -0.48860072369144364, 7);
  sqcRZGate(q, -0.0736492638224382, 7);
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
  sqcRYGate(q, 0.9351712183925611, 0);
  sqcRZGate(q, -1.7125318840662873, 0);
  sqcRYGate(q, 0.053200215816517786, 1);
  sqcRZGate(q, -2.0516990417214087, 1);
  sqcRYGate(q, -0.4105865589705529, 2);
  sqcRZGate(q, -2.9572467614758686, 2);
  sqcRYGate(q, 1.5720959902635514, 3);
  sqcRZGate(q, 1.2676298581752006, 3);
  sqcRYGate(q, -2.368507312221486, 4);
  sqcRZGate(q, 1.7854410407413417, 4);
  sqcRYGate(q, 0.3527343876422737, 5);
  sqcRZGate(q, 2.220134790655367, 5);
  sqcRYGate(q, -0.6736316635210934, 6);
  sqcRZGate(q, -0.784023831802834, 6);
  sqcRYGate(q, 2.388411780231658, 7);
  sqcRZGate(q, 0.1696151346738975, 7);
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
  sqcRYGate(q, -2.6638232325051616, 0);
  sqcRZGate(q, 1.1179711910600991, 0);
  sqcRYGate(q, 2.0687477285121014, 1);
  sqcRZGate(q, 2.1761785885924, 1);
  sqcRYGate(q, -1.0708661246689213, 2);
  sqcRZGate(q, -1.0175622947398146, 2);
  sqcRYGate(q, -2.587272872972763, 3);
  sqcRZGate(q, -1.1467471056282375, 3);
  sqcRYGate(q, 2.3764760200307506, 4);
  sqcRZGate(q, -1.9242671718803999, 4);
  sqcRYGate(q, -1.2441068176373247, 5);
  sqcRZGate(q, 0.37709859867734785, 5);
  sqcRYGate(q, 2.7265619117090956, 6);
  sqcRZGate(q, 1.1309787683566475, 6);
  sqcRYGate(q, 1.8368461326392627, 7);
  sqcRZGate(q, 1.1545633779212439, 7);
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
  sqcRYGate(q, 2.2983559581946222, 0);
  sqcRZGate(q, -1.3749718701333276, 0);
  sqcRYGate(q, -1.447153060297154, 1);
  sqcRZGate(q, -1.5525987326905792, 1);
  sqcRYGate(q, -0.1612000771525901, 2);
  sqcRZGate(q, 0.865982780165452, 2);
  sqcRYGate(q, -0.7689208617625216, 3);
  sqcRZGate(q, -1.1326710103089115, 3);
  sqcRYGate(q, 0.9658655091143613, 4);
  sqcRZGate(q, -1.2852692448766145, 4);
  sqcRYGate(q, -2.679434351493802, 5);
  sqcRZGate(q, 0.6984734282671665, 5);
  sqcRYGate(q, -0.6605849872716254, 6);
  sqcRZGate(q, 2.040586237979963, 6);
  sqcRYGate(q, 0.2141053815493569, 7);
  sqcRZGate(q, 1.2209616767194456, 7);
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
  sqcRYGate(q, -2.6016995884099554, 0);
  sqcRZGate(q, 2.45553669444376, 0);
  sqcRYGate(q, 1.664204089876311, 1);
  sqcRZGate(q, -0.20742629420922443, 1);
  sqcRYGate(q, 2.9741895445120923, 2);
  sqcRZGate(q, -1.716827358760581, 2);
  sqcRYGate(q, -0.6363988845299966, 3);
  sqcRZGate(q, -3.1301924528746494, 3);
  sqcRYGate(q, -0.3356608185831016, 4);
  sqcRZGate(q, -1.8172291196200365, 4);
  sqcRYGate(q, 1.9290223611837307, 5);
  sqcRZGate(q, -0.9913511340495695, 5);
  sqcRYGate(q, 2.353659734636865, 6);
  sqcRZGate(q, 0.5332218493763137, 6);
  sqcRYGate(q, 0.3519939984955897, 7);
  sqcRZGate(q, 1.9193345653807878, 7);
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
  sqcRYGate(q, 0.38691274245534646, 0);
  sqcRZGate(q, 0.2659425064466969, 0);
  sqcRYGate(q, 0.4455029190840137, 1);
  sqcRZGate(q, -1.4143630540404644, 1);
  sqcRYGate(q, 0.9013161867846424, 2);
  sqcRZGate(q, 1.9270183992263095, 2);
  sqcRYGate(q, 1.4170858101089827, 3);
  sqcRZGate(q, 0.0538614733890937, 3);
  sqcRYGate(q, 0.6837641516852662, 4);
  sqcRZGate(q, 2.7800491830781615, 4);
  sqcRYGate(q, -0.6309622938721521, 5);
  sqcRZGate(q, 0.815989566412213, 5);
  sqcRYGate(q, -1.7783943616540547, 6);
  sqcRZGate(q, -0.6409776094738318, 6);
  sqcRYGate(q, -1.9871391813001926, 7);
  sqcRZGate(q, 2.1892568108230477, 7);
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
  sqcRYGate(q, 2.8686048080708115, 0);
  sqcRZGate(q, 2.9422902383564953, 0);
  sqcRYGate(q, -2.9892898539249946, 1);
  sqcRZGate(q, 0.959822719682468, 1);
  sqcRYGate(q, -2.690481889663106, 2);
  sqcRZGate(q, -1.2544204286043772, 2);
  sqcRYGate(q, 2.5359628584132325, 3);
  sqcRZGate(q, 1.106701529077431, 3);
  sqcRYGate(q, 0.9267093738063386, 4);
  sqcRZGate(q, -0.5104398082683348, 4);
  sqcRYGate(q, 1.3527485618165442, 5);
  sqcRZGate(q, 0.6104234490966435, 5);
  sqcRYGate(q, -2.4637389108412653, 6);
  sqcRZGate(q, 1.9213957581836332, 6);
  sqcRYGate(q, -2.3426176684311093, 7);
  sqcRZGate(q, -1.1669550208878665, 7);
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
  sqcRYGate(q, 0.6122032356803102, 0);
  sqcRZGate(q, -0.002850181687285236, 0);
  sqcRYGate(q, 1.4298595419867135, 1);
  sqcRZGate(q, 1.6094490895836777, 1);
  sqcRYGate(q, 1.6015631084793032, 2);
  sqcRZGate(q, 0.7765714037846421, 2);
  sqcRYGate(q, 2.5206048039634763, 3);
  sqcRZGate(q, -1.071298047235436, 3);
  sqcRYGate(q, 0.8177886176962708, 4);
  sqcRZGate(q, -2.3741350602183844, 4);
  sqcRYGate(q, -1.5116542328558886, 5);
  sqcRZGate(q, -2.974420135641399, 5);
  sqcRYGate(q, -1.9638003231106975, 6);
  sqcRZGate(q, 0.07788595989951894, 6);
  sqcRYGate(q, -2.2485796194212915, 7);
  sqcRZGate(q, 0.5672550788876229, 7);
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
  sqcRYGate(q, 0.07744596573085055, 0);
  sqcRZGate(q, -0.21946960167159849, 0);
  sqcRYGate(q, -2.6170139641545935, 1);
  sqcRZGate(q, -0.5354961975693024, 1);
  sqcRYGate(q, -2.6332899445814935, 2);
  sqcRZGate(q, 2.8320527015319032, 2);
  sqcRYGate(q, 2.3300712709657176, 3);
  sqcRZGate(q, 2.374499408424478, 3);
  sqcRYGate(q, -1.5586718715832817, 4);
  sqcRZGate(q, -0.7587571392064625, 4);
  sqcRYGate(q, -0.7612244440375903, 5);
  sqcRZGate(q, 0.33433094469334085, 5);
  sqcRYGate(q, -2.1190265416892484, 6);
  sqcRZGate(q, -1.594863427107753, 6);
  sqcRYGate(q, -2.295351866997921, 7);
  sqcRZGate(q, -2.0915754632461008, 7);
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
  sqcRYGate(q, 2.2463184616348624, 0);
  sqcRZGate(q, -2.552384524228528, 0);
  sqcRYGate(q, -3.1401022782415797, 1);
  sqcRZGate(q, -0.5167585090503549, 1);
  sqcRYGate(q, -1.7816727450212564, 2);
  sqcRZGate(q, -0.8931703309478839, 2);
  sqcRYGate(q, 1.1712472251757813, 3);
  sqcRZGate(q, -0.08594843401923492, 3);
  sqcRYGate(q, 2.4818190037889045, 4);
  sqcRZGate(q, 0.7127510985886457, 4);
  sqcRYGate(q, -2.1352201239117248, 5);
  sqcRZGate(q, -2.818006442545071, 5);
  sqcRYGate(q, 1.7312457022792485, 6);
  sqcRZGate(q, 1.1324805347433078, 6);
  sqcRYGate(q, 2.350741810354116, 7);
  sqcRZGate(q, -1.2123754510001925, 7);

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
