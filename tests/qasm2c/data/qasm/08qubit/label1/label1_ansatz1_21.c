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

  sqcRYGate(q, 0.6207855043656894, 0);
  sqcRZGate(q, 0.4176802689001241, 0);
  sqcRYGate(q, 1.1597901450762285, 1);
  sqcRZGate(q, -1.822145890401021, 1);
  sqcRYGate(q, 1.667002887458047, 2);
  sqcRZGate(q, 2.9823462432168912, 2);
  sqcRYGate(q, -2.5374909056449653, 3);
  sqcRZGate(q, -2.5233487556334273, 3);
  sqcRYGate(q, -0.9095504364128991, 4);
  sqcRZGate(q, -0.46205436508451575, 4);
  sqcRYGate(q, 0.9613826535548531, 5);
  sqcRZGate(q, 2.261277711759343, 5);
  sqcRYGate(q, -0.07561523742081733, 6);
  sqcRZGate(q, -2.1780119456968086, 6);
  sqcRYGate(q, 3.1390081993426167, 7);
  sqcRZGate(q, -2.8820698891354612, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.14880250933440137, 0);
  sqcRZGate(q, -0.6034330571162998, 0);
  sqcRYGate(q, 0.00046145491229204565, 1);
  sqcRZGate(q, 0.8891920565503463, 1);
  sqcRYGate(q, -2.7309067365890307, 2);
  sqcRZGate(q, 1.7494611437831793, 2);
  sqcRYGate(q, 0.0840493314910855, 3);
  sqcRZGate(q, -3.071671843443426, 3);
  sqcRYGate(q, 1.0800275256067926, 4);
  sqcRZGate(q, -2.9636336417236033, 4);
  sqcRYGate(q, -0.2849792356901875, 5);
  sqcRZGate(q, -2.2936426466137103, 5);
  sqcRYGate(q, 0.8125193863468861, 6);
  sqcRZGate(q, 2.854593024751379, 6);
  sqcRYGate(q, -0.018340102811495562, 7);
  sqcRZGate(q, 1.5962681937060226, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.080802085701064, 0);
  sqcRZGate(q, 0.4794532408860163, 0);
  sqcRYGate(q, -0.07582909199136816, 1);
  sqcRZGate(q, 0.5707926711111, 1);
  sqcRYGate(q, 1.716209953385959, 2);
  sqcRZGate(q, 2.0798369361292326, 2);
  sqcRYGate(q, -2.644163051441207, 3);
  sqcRZGate(q, 1.3897943445655443, 3);
  sqcRYGate(q, -1.3498004554648388, 4);
  sqcRZGate(q, -2.111352400786262, 4);
  sqcRYGate(q, -1.6469145721229976, 5);
  sqcRZGate(q, -3.0985630913917723, 5);
  sqcRYGate(q, 2.2318022303501346, 6);
  sqcRZGate(q, 0.9631523002969189, 6);
  sqcRYGate(q, -1.6569979634446117, 7);
  sqcRZGate(q, -0.01885242531416598, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.5808198550357808, 0);
  sqcRZGate(q, -0.16362445851743357, 0);
  sqcRYGate(q, -0.0008989368701879386, 1);
  sqcRZGate(q, -1.5763813098141393, 1);
  sqcRYGate(q, -0.1991653398205158, 2);
  sqcRZGate(q, -0.11202012774563563, 2);
  sqcRYGate(q, 0.04475692194458425, 3);
  sqcRZGate(q, -0.14084423720057454, 3);
  sqcRYGate(q, 1.850217138941714, 4);
  sqcRZGate(q, 1.0030303659672715, 4);
  sqcRYGate(q, -2.0752505338059537, 5);
  sqcRZGate(q, 0.34281487689985984, 5);
  sqcRYGate(q, 1.9022425875521394, 6);
  sqcRZGate(q, 0.10506093366032854, 6);
  sqcRYGate(q, -0.14485056689638132, 7);
  sqcRZGate(q, 1.2405613957791433, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.050893195592579, 0);
  sqcRZGate(q, 2.5423015882851097, 0);
  sqcRYGate(q, 2.815653824408575, 1);
  sqcRZGate(q, -2.4069461334800026, 1);
  sqcRYGate(q, -1.793755659456559, 2);
  sqcRZGate(q, -1.323694300478807, 2);
  sqcRYGate(q, 1.2544069356824243, 3);
  sqcRZGate(q, -3.0882732691292696, 3);
  sqcRYGate(q, -1.9475758057028738, 4);
  sqcRZGate(q, -1.918453638852067, 4);
  sqcRYGate(q, 3.1341601123643192, 5);
  sqcRZGate(q, -2.2281586679291543, 5);
  sqcRYGate(q, -1.1398465948283665, 6);
  sqcRZGate(q, -2.757763357285469, 6);
  sqcRYGate(q, -2.393426393199082, 7);
  sqcRZGate(q, -0.5827395432028881, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.0052987342490978, 0);
  sqcRZGate(q, -0.6118765959342405, 0);
  sqcRYGate(q, -3.0353778450373228, 1);
  sqcRZGate(q, 1.0671428578092117, 1);
  sqcRYGate(q, -0.039989559010423115, 2);
  sqcRZGate(q, -2.140332039025414, 2);
  sqcRYGate(q, 1.3556628812304015, 3);
  sqcRZGate(q, -2.051232491722934, 3);
  sqcRYGate(q, -0.5489473936288759, 4);
  sqcRZGate(q, -2.9651707856643594, 4);
  sqcRYGate(q, -3.1206426579898965, 5);
  sqcRZGate(q, -0.21312625985202072, 5);
  sqcRYGate(q, 2.9059923596474224, 6);
  sqcRZGate(q, -0.024396139152976476, 6);
  sqcRYGate(q, -2.529151773661738, 7);
  sqcRZGate(q, 1.242940983614253, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.778248258359719, 0);
  sqcRZGate(q, 3.029179846796397, 0);
  sqcRYGate(q, 0.416894158288021, 1);
  sqcRZGate(q, 1.769841974017762, 1);
  sqcRYGate(q, -0.149167941645765, 2);
  sqcRZGate(q, 2.9614868004795327, 2);
  sqcRYGate(q, 0.4137539426152528, 3);
  sqcRZGate(q, -0.07097293801688753, 3);
  sqcRYGate(q, 1.8214593748644874, 4);
  sqcRZGate(q, 3.025532198496951, 4);
  sqcRYGate(q, -0.021316702867750347, 5);
  sqcRZGate(q, -1.8465701649354953, 5);
  sqcRYGate(q, 2.9643641970538863, 6);
  sqcRZGate(q, -1.369951947620292, 6);
  sqcRYGate(q, -1.6772175463733816, 7);
  sqcRZGate(q, 1.1647000696418388, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.076302005027943, 0);
  sqcRZGate(q, -1.475428043903297, 0);
  sqcRYGate(q, 1.206539739371181, 1);
  sqcRZGate(q, 0.4325089226567041, 1);
  sqcRYGate(q, -1.964755492907611, 2);
  sqcRZGate(q, -2.6096548958659818, 2);
  sqcRYGate(q, 0.2696883232473843, 3);
  sqcRZGate(q, 1.8723072191565249, 3);
  sqcRYGate(q, -3.069173587135181, 4);
  sqcRZGate(q, 1.4036084547539471, 4);
  sqcRYGate(q, 1.8833321166664918, 5);
  sqcRZGate(q, -1.6803784416030307, 5);
  sqcRYGate(q, -1.240922495526064, 6);
  sqcRZGate(q, 0.958621632976013, 6);
  sqcRYGate(q, 0.3419447866493517, 7);
  sqcRZGate(q, -2.052400947464398, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.2181579000308633, 0);
  sqcRZGate(q, 1.2873717319370814, 0);
  sqcRYGate(q, -0.3649521296595216, 1);
  sqcRZGate(q, -2.374166853488371, 1);
  sqcRYGate(q, 1.2572475007553525, 2);
  sqcRZGate(q, 1.691738424088182, 2);
  sqcRYGate(q, -1.7267584236329805, 3);
  sqcRZGate(q, 3.129005930770571, 3);
  sqcRYGate(q, 3.1310487164622804, 4);
  sqcRZGate(q, 0.32186546067498334, 4);
  sqcRYGate(q, -0.018882663130085835, 5);
  sqcRZGate(q, 1.6094549439029906, 5);
  sqcRYGate(q, -0.1075011018289579, 6);
  sqcRZGate(q, 0.1928141944324003, 6);
  sqcRYGate(q, -2.181710437789565, 7);
  sqcRZGate(q, 0.201821158535072, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.6438463465125343, 0);
  sqcRZGate(q, -2.139042899896791, 0);
  sqcRYGate(q, 2.681071436501499, 1);
  sqcRZGate(q, 1.4786617465124898, 1);
  sqcRYGate(q, 1.4141862010547157, 2);
  sqcRZGate(q, 0.3877091790094358, 2);
  sqcRYGate(q, -2.1813548505881597, 3);
  sqcRZGate(q, -3.0601635619153984, 3);
  sqcRYGate(q, -0.004788887078023568, 4);
  sqcRZGate(q, -0.9829607791328829, 4);
  sqcRYGate(q, 1.9981029665188395, 5);
  sqcRZGate(q, -1.270092117272998, 5);
  sqcRYGate(q, -2.1762170772402856, 6);
  sqcRZGate(q, 2.925457430467728, 6);
  sqcRYGate(q, 2.3452427444005246, 7);
  sqcRZGate(q, 0.609680196154818, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.7238152016635464, 0);
  sqcRZGate(q, 2.0937316023608923, 0);
  sqcRYGate(q, 3.102273817627951, 1);
  sqcRZGate(q, -1.4257072463921625, 1);
  sqcRYGate(q, -1.5152075947763692, 2);
  sqcRZGate(q, 2.9840299720344863, 2);
  sqcRYGate(q, -2.3707980592480307, 3);
  sqcRZGate(q, -2.8680542672696765, 3);
  sqcRYGate(q, -1.8302308238771006, 4);
  sqcRZGate(q, -2.8202238113333475, 4);
  sqcRYGate(q, 2.8098176702986803, 5);
  sqcRZGate(q, -0.8897783813662291, 5);
  sqcRYGate(q, 3.139551339434578, 6);
  sqcRZGate(q, -1.1484771585491864, 6);
  sqcRYGate(q, 0.7066224390802294, 7);
  sqcRZGate(q, -1.4309927810774075, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.8160790490430725, 0);
  sqcRZGate(q, 2.750535541916551, 0);
  sqcRYGate(q, 0.5801263293294578, 1);
  sqcRZGate(q, -2.262492193771937, 1);
  sqcRYGate(q, 2.9282186427596746, 2);
  sqcRZGate(q, 1.121645360098352, 2);
  sqcRYGate(q, 2.9577376425844695, 3);
  sqcRZGate(q, -2.7277617875978684, 3);
  sqcRYGate(q, -3.0837511819936383, 4);
  sqcRZGate(q, -1.6221118560258392, 4);
  sqcRYGate(q, 2.8983696411977844, 5);
  sqcRZGate(q, 0.3194079305976257, 5);
  sqcRYGate(q, 2.835949244377557, 6);
  sqcRZGate(q, -1.693576201538347, 6);
  sqcRYGate(q, 0.17285957276925254, 7);
  sqcRZGate(q, -2.11327834646096, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.8881314178283173, 0);
  sqcRZGate(q, -2.712813760343313, 0);
  sqcRYGate(q, -1.4148961921316607, 1);
  sqcRZGate(q, 0.3996047504870326, 1);
  sqcRYGate(q, 2.117478444015047, 2);
  sqcRZGate(q, 3.0723864831904613, 2);
  sqcRYGate(q, -0.7325698130517398, 3);
  sqcRZGate(q, -2.017336858076888, 3);
  sqcRYGate(q, 1.5223091677123346, 4);
  sqcRZGate(q, 0.41783651251806925, 4);
  sqcRYGate(q, 2.5799056382381185, 5);
  sqcRZGate(q, -2.819763996871422, 5);
  sqcRYGate(q, 1.4579165935835574, 6);
  sqcRZGate(q, 1.6325903677631448, 6);
  sqcRYGate(q, 2.99596566354426, 7);
  sqcRZGate(q, 2.5019694276984463, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5545359080152863, 0);
  sqcRZGate(q, -1.2954058286614107, 0);
  sqcRYGate(q, 0.14670854891068966, 1);
  sqcRZGate(q, 0.06316407540322881, 1);
  sqcRYGate(q, 2.9726162500085107, 2);
  sqcRZGate(q, -0.13847417267482598, 2);
  sqcRYGate(q, 0.1382988362482598, 3);
  sqcRZGate(q, 0.4570879821206946, 3);
  sqcRYGate(q, -0.4662741041015153, 4);
  sqcRZGate(q, 0.7453375985727035, 4);
  sqcRYGate(q, -3.1043048833216655, 5);
  sqcRZGate(q, 1.606260988675434, 5);
  sqcRYGate(q, -2.44098274629558, 6);
  sqcRZGate(q, -1.4859220128549437, 6);
  sqcRYGate(q, 0.3767695594608647, 7);
  sqcRZGate(q, 1.997839443521623, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.1017526364823778, 0);
  sqcRZGate(q, 1.7860006163595834, 0);
  sqcRYGate(q, -1.7339088059086276, 1);
  sqcRZGate(q, 1.7170242458949931, 1);
  sqcRYGate(q, -1.1209555749973328, 2);
  sqcRZGate(q, -0.4479228152548275, 2);
  sqcRYGate(q, 3.10733557433866, 3);
  sqcRZGate(q, 3.0308778153425977, 3);
  sqcRYGate(q, -0.4783747793960476, 4);
  sqcRZGate(q, -2.279530836700035, 4);
  sqcRYGate(q, 0.04792385907527521, 5);
  sqcRZGate(q, 2.2959617592938795, 5);
  sqcRYGate(q, -0.7483029967223003, 6);
  sqcRZGate(q, -3.031267984940971, 6);
  sqcRYGate(q, -0.5833035071716921, 7);
  sqcRZGate(q, 0.06334158687958065, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.7077861561369936, 0);
  sqcRZGate(q, 1.4017974167390896, 0);
  sqcRYGate(q, 2.24998143875631, 1);
  sqcRZGate(q, 0.6826751685134553, 1);
  sqcRYGate(q, 2.451502028908745, 2);
  sqcRZGate(q, 2.207001895941435, 2);
  sqcRYGate(q, 2.755226122266267, 3);
  sqcRZGate(q, -1.7772922686097223, 3);
  sqcRYGate(q, 2.620380222470322, 4);
  sqcRZGate(q, -2.7785081431378855, 4);
  sqcRYGate(q, 2.9088442544404485, 5);
  sqcRZGate(q, -1.9966672323875478, 5);
  sqcRYGate(q, 1.8968230625577251, 6);
  sqcRZGate(q, 1.1424023057740367, 6);
  sqcRYGate(q, -1.0384831931502552, 7);
  sqcRZGate(q, 0.4012504601896066, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.07625848535581699, 0);
  sqcRZGate(q, -0.9130286928281457, 0);
  sqcRYGate(q, -2.2285717265026483, 1);
  sqcRZGate(q, -2.4653924741608737, 1);
  sqcRYGate(q, 3.1276866547488353, 2);
  sqcRZGate(q, -0.4627597679126828, 2);
  sqcRYGate(q, -0.019143012046756665, 3);
  sqcRZGate(q, 1.654619725930763, 3);
  sqcRYGate(q, -3.0455619493109047, 4);
  sqcRZGate(q, -0.45243357500815684, 4);
  sqcRYGate(q, -3.1332838159202665, 5);
  sqcRZGate(q, -1.1067322819139955, 5);
  sqcRYGate(q, 0.2764302344582238, 6);
  sqcRZGate(q, -1.4818912955526438, 6);
  sqcRYGate(q, 1.9914580530843304, 7);
  sqcRZGate(q, 1.9070672280202998, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.432502562230863, 0);
  sqcRZGate(q, -1.7922990514931385, 0);
  sqcRYGate(q, 0.22714187172683342, 1);
  sqcRZGate(q, -2.661971743701391, 1);
  sqcRYGate(q, 3.102557575994749, 2);
  sqcRZGate(q, 0.611943645790749, 2);
  sqcRYGate(q, 0.49268194456146647, 3);
  sqcRZGate(q, 1.8670679114207946, 3);
  sqcRYGate(q, 0.7106848302844959, 4);
  sqcRZGate(q, 0.12603667679765176, 4);
  sqcRYGate(q, -0.18062669340130277, 5);
  sqcRZGate(q, -1.7126086654155754, 5);
  sqcRYGate(q, 1.2970744501724445, 6);
  sqcRZGate(q, 0.036835129940680465, 6);
  sqcRYGate(q, -2.7206847394423663, 7);
  sqcRZGate(q, 2.526196825657035, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.4859755434561555, 0);
  sqcRZGate(q, -0.844384882410881, 0);
  sqcRYGate(q, 2.616189452587117, 1);
  sqcRZGate(q, -1.3967991474570434, 1);
  sqcRYGate(q, -1.6697012478625162, 2);
  sqcRZGate(q, -1.257367312780004, 2);
  sqcRYGate(q, 2.586343538574265, 3);
  sqcRZGate(q, 0.754647520303706, 3);
  sqcRYGate(q, 0.038162479504816285, 4);
  sqcRZGate(q, 0.3371639439269655, 4);
  sqcRYGate(q, 0.19369782001546862, 5);
  sqcRZGate(q, 1.862401930506813, 5);
  sqcRYGate(q, 1.7800484035144, 6);
  sqcRZGate(q, 0.7350946254076929, 6);
  sqcRYGate(q, -0.5386642794916305, 7);
  sqcRZGate(q, 1.714258599720412, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.597087945150304, 0);
  sqcRZGate(q, -0.38902568825545264, 0);
  sqcRYGate(q, 1.1569819757116209, 1);
  sqcRZGate(q, -1.754552908647697, 1);
  sqcRYGate(q, 3.08045513506264, 2);
  sqcRZGate(q, -0.17213762104437613, 2);
  sqcRYGate(q, -0.012833254763519647, 3);
  sqcRZGate(q, -0.7479409959114571, 3);
  sqcRYGate(q, -3.135577719523639, 4);
  sqcRZGate(q, 1.826319689335067, 4);
  sqcRYGate(q, -1.1321268519264942, 5);
  sqcRZGate(q, 2.9733680373199602, 5);
  sqcRYGate(q, 2.5216529585238985, 6);
  sqcRZGate(q, -1.2859653726486702, 6);
  sqcRYGate(q, -2.189101700274935, 7);
  sqcRZGate(q, 1.0928496573270599, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.9811228217837298, 0);
  sqcRZGate(q, 0.4605421392903957, 0);
  sqcRYGate(q, -1.7521447867103626, 1);
  sqcRZGate(q, -1.8762927656808868, 1);
  sqcRYGate(q, 0.5371111286400382, 2);
  sqcRZGate(q, -0.6485976332792379, 2);
  sqcRYGate(q, 0.6757360313217573, 3);
  sqcRZGate(q, 1.7333527722829414, 3);
  sqcRYGate(q, 0.059191588441032214, 4);
  sqcRZGate(q, -2.584926078161658, 4);
  sqcRYGate(q, 0.6686287506320597, 5);
  sqcRZGate(q, -0.05442360329602391, 5);
  sqcRYGate(q, 0.053722558227397244, 6);
  sqcRZGate(q, -1.0757989093482223, 6);
  sqcRYGate(q, 1.9001186368758223, 7);
  sqcRZGate(q, -0.9196754872596921, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.7531956500792023, 0);
  sqcRZGate(q, 0.9996045189013997, 0);
  sqcRYGate(q, 2.6652942843636565, 1);
  sqcRZGate(q, 2.9666484258811607, 1);
  sqcRYGate(q, -2.3043144464726444, 2);
  sqcRZGate(q, 1.2680097780138617, 2);
  sqcRYGate(q, 3.13259577331706, 3);
  sqcRZGate(q, 1.2495573310761248, 3);
  sqcRYGate(q, -0.013949896581866739, 4);
  sqcRZGate(q, -2.360881804627068, 4);
  sqcRYGate(q, -1.0413041099268323, 5);
  sqcRZGate(q, -1.8617982973771756, 5);
  sqcRYGate(q, 0.4922177721154686, 6);
  sqcRZGate(q, -1.6550733349569826, 6);
  sqcRYGate(q, 0.5490969969080766, 7);
  sqcRZGate(q, -2.8911546343194914, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.1542065230795997, 0);
  sqcRZGate(q, 0.41407450529532935, 0);
  sqcRYGate(q, 0.006021806569691535, 1);
  sqcRZGate(q, 2.444358671672259, 1);
  sqcRYGate(q, -2.9643668237612473, 2);
  sqcRZGate(q, -1.5993507859961813, 2);
  sqcRYGate(q, 0.06471336607632239, 3);
  sqcRZGate(q, 0.4356255683464615, 3);
  sqcRYGate(q, 1.230802514949286, 4);
  sqcRZGate(q, 0.7099296445397689, 4);
  sqcRYGate(q, -1.2946444044487189, 5);
  sqcRZGate(q, 0.529312743376171, 5);
  sqcRYGate(q, 2.7169346419558833, 6);
  sqcRZGate(q, -1.3807599924273584, 6);
  sqcRYGate(q, 1.3664751769931258, 7);
  sqcRZGate(q, 0.0326991778700938, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.2445856724710556, 0);
  sqcRZGate(q, 1.0070959161277104, 0);
  sqcRYGate(q, 2.7954234478418734, 1);
  sqcRZGate(q, -2.856459031665269, 1);
  sqcRYGate(q, 1.1121888974542449, 2);
  sqcRZGate(q, 1.3181945518948617, 2);
  sqcRYGate(q, -0.00594068231183531, 3);
  sqcRZGate(q, 0.9852870102480242, 3);
  sqcRYGate(q, -0.0015692417633230704, 4);
  sqcRZGate(q, 2.6189860036121084, 4);
  sqcRYGate(q, -0.05706995546362389, 5);
  sqcRZGate(q, 1.1895597093071517, 5);
  sqcRYGate(q, -0.2867139214734564, 6);
  sqcRZGate(q, 1.566441518171425, 6);
  sqcRYGate(q, -2.6752378204950946, 7);
  sqcRZGate(q, 1.8686171991154472, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.1261375224600174, 0);
  sqcRZGate(q, -1.0877899711252184, 0);
  sqcRYGate(q, 3.031156678469616, 1);
  sqcRZGate(q, -0.24922663011217505, 1);
  sqcRYGate(q, -2.0964677996745174, 2);
  sqcRZGate(q, -1.0066088225395884, 2);
  sqcRYGate(q, -1.006598325648472, 3);
  sqcRZGate(q, 1.4751120012781682, 3);
  sqcRYGate(q, 1.6200182689111293, 4);
  sqcRZGate(q, 1.143053377362099, 4);
  sqcRYGate(q, -2.9639692318263977, 5);
  sqcRZGate(q, -1.0448301494087866, 5);
  sqcRYGate(q, 0.917006336933097, 6);
  sqcRZGate(q, -0.004277828105268, 6);
  sqcRYGate(q, -1.976434918758363, 7);
  sqcRZGate(q, 1.1774033925950234, 7);

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
