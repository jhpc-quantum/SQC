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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, -2.8774722822237533, 0);
  sqcRYGate(q, -0.23006630470058217, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.906860506342344, 0);
  sqcRYGate(q, 0.5394541296979255, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3033528931648073, 1);
  sqcRYGate(q, -1.594845177218116, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.709262163978612, 1);
  sqcRYGate(q, -2.746609329819988, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8323483695172023, 2);
  sqcRYGate(q, -2.7534921200997755, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5415350734694115, 2);
  sqcRYGate(q, -0.768405099671864, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.076743518389935, 3);
  sqcRYGate(q, -3.118794094591927, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.455033401238678, 3);
  sqcRYGate(q, -1.7081126174129475, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.2507480880756173, 4);
  sqcRYGate(q, 1.5896492517506247, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1680694988651312, 4);
  sqcRYGate(q, 0.02890450796624311, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7648306977105461, 5);
  sqcRYGate(q, -1.6903284614394076, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.975103381761422, 5);
  sqcRYGate(q, 0.061624343654093756, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.41355861022481477, 6);
  sqcRYGate(q, -2.0537704892156743, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.684293657248315, 6);
  sqcRYGate(q, 1.5704302092815405, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8605043270600756, 7);
  sqcRYGate(q, 1.7651657796700844, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.1886961473108935, 7);
  sqcRYGate(q, 3.024216277561957, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.651606952708377, 8);
  sqcRYGate(q, 0.663549086860542, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.0097358684230926, 8);
  sqcRYGate(q, 2.381749346494512, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.8002827571824924, 9);
  sqcRYGate(q, 1.5743947991652862, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.8944388540155357, 9);
  sqcRYGate(q, 3.1246550993573976, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.9544145559109348, 10);
  sqcRYGate(q, 2.0577538065678853, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.9689707412865833, 10);
  sqcRYGate(q, -0.43864335876538085, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.024655555721543543, 0);
  sqcRYGate(q, 1.0046569685393532, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2928462397888336, 0);
  sqcRYGate(q, 2.380531210255994, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8775914570489096, 1);
  sqcRYGate(q, 2.2592011818662248, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6367232366269652, 1);
  sqcRYGate(q, -0.3527980599501568, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9731455694731617, 2);
  sqcRYGate(q, -0.05233681833964621, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.044759043367356, 2);
  sqcRYGate(q, 1.0333773793655858, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.182923247961595, 3);
  sqcRYGate(q, -0.07799420330277672, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6553862823766108, 3);
  sqcRYGate(q, -1.901035505384602, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.3087006311356997, 4);
  sqcRYGate(q, -1.3853309592515086, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.538002052497116, 4);
  sqcRYGate(q, -0.05513736885096243, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4793609709516415, 5);
  sqcRYGate(q, -1.0970731113664964, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.722562303829255, 5);
  sqcRYGate(q, 0.11649823391234775, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.106779824866883, 6);
  sqcRYGate(q, 1.96076768757426, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0068904098140172, 6);
  sqcRYGate(q, 0.1956267493719608, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.053801497826863276, 7);
  sqcRYGate(q, 0.5137054315359739, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.399750954960758, 7);
  sqcRYGate(q, -1.150653108638959, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.5607591127199336, 8);
  sqcRYGate(q, 1.346311320894782, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.3927795979250126, 8);
  sqcRYGate(q, 2.9661372618364292, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.4827515089407988, 9);
  sqcRYGate(q, -2.7102827509997356, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.038518060521124, 9);
  sqcRYGate(q, -0.029852680927941577, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.8288496521641778, 10);
  sqcRYGate(q, -2.2872398826306997, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.2080643913229805, 10);
  sqcRYGate(q, 0.2546717250767826, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.994973640341736, 0);
  sqcRYGate(q, 1.8611834959144722, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2727768598132645, 0);
  sqcRYGate(q, -0.622983956231967, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2708057230420664, 1);
  sqcRYGate(q, 2.3046587752895364, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.26366269481119337, 1);
  sqcRYGate(q, -1.3096938749479468, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5521157941159176, 2);
  sqcRYGate(q, -0.524440303251402, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.611516188441146, 2);
  sqcRYGate(q, -1.141146346673122, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.885585603385271, 3);
  sqcRYGate(q, -0.11676037829289557, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.009108885295967706, 3);
  sqcRYGate(q, 0.7026018580733556, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.33150910440528, 4);
  sqcRYGate(q, 0.4475786671673762, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.8072174445871285, 4);
  sqcRYGate(q, 3.1413000677936647, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3570084351150071, 5);
  sqcRYGate(q, 3.0873087767555627, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.0254548620480857, 5);
  sqcRYGate(q, -0.11667400364411482, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.0121866338624215, 6);
  sqcRYGate(q, 1.0503891062761626, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7672811607824945, 6);
  sqcRYGate(q, -1.06533761727406, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6778505574340705, 7);
  sqcRYGate(q, 0.5069829995572982, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.177456190863015, 7);
  sqcRYGate(q, -2.2311267712972382, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.3708834062779549, 8);
  sqcRYGate(q, -2.651355402800475, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.44343809830773895, 8);
  sqcRYGate(q, 2.7901954575428705, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.758537389695597, 9);
  sqcRYGate(q, 0.45436016454693817, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.1211178262376267, 9);
  sqcRYGate(q, 0.032890366060106334, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.324140234232436, 10);
  sqcRYGate(q, 1.3305517661067663, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.19959207977885907, 10);
  sqcRYGate(q, 2.871363693679167, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.8353492763533135, 0);
  sqcRYGate(q, -1.0671679809847356, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.917952206730802, 0);
  sqcRYGate(q, -2.4788876247101057, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0305493422438383, 1);
  sqcRYGate(q, 0.66595223557254, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0198199769110827, 1);
  sqcRYGate(q, -1.9553000542980863, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3013881666128757, 2);
  sqcRYGate(q, 1.1216744324950911, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.754389416934618, 2);
  sqcRYGate(q, 1.7773793549910577, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7280062893415193, 3);
  sqcRYGate(q, -1.327123435611211, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6878448758049152, 3);
  sqcRYGate(q, -1.6847223919320375, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.1304092520038356, 4);
  sqcRYGate(q, 0.011176545261604524, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0306735306746657, 4);
  sqcRYGate(q, 0.10473289746608265, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.1376874078263376, 5);
  sqcRYGate(q, -2.3216987638694113, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.026892309168868422, 5);
  sqcRYGate(q, -3.1162013031517795, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.903484855621061, 6);
  sqcRYGate(q, -2.559234034315773, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.010743750218082, 6);
  sqcRYGate(q, 1.695958402160402, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5511475895880453, 7);
  sqcRYGate(q, 1.0644250440609015, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.3258614855972436, 7);
  sqcRYGate(q, -2.5207664284813434, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.0224401999915615, 8);
  sqcRYGate(q, 2.2436522957347442, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.2187170115885007, 8);
  sqcRYGate(q, -0.40277187002900156, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.6759144404322224, 9);
  sqcRYGate(q, -3.0600727915245916, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.7399147394108698, 9);
  sqcRYGate(q, -0.18981246501330862, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.24803214807968832, 10);
  sqcRYGate(q, -1.4434385603026945, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.34156724401471994, 10);
  sqcRYGate(q, 0.1282862361507015, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.597119557695074, 0);
  sqcRYGate(q, 1.6750304077003, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3256917993411816, 0);
  sqcRYGate(q, 2.2566025110662924, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.604870365670446, 1);
  sqcRYGate(q, 1.4624134500222137, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3509131479306742, 1);
  sqcRYGate(q, -2.3819451533199065, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5422176305574173, 2);
  sqcRYGate(q, -2.016317374881795, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2183023030705744, 2);
  sqcRYGate(q, -2.8256951890061024, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1908916277407602, 3);
  sqcRYGate(q, 3.047190431529922, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0162505061583564, 3);
  sqcRYGate(q, -2.022642088503848, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.04694794445535688, 4);
  sqcRYGate(q, -1.9963553321571823, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.868278424357289, 4);
  sqcRYGate(q, 3.0203104691287384, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4717427315103226, 5);
  sqcRYGate(q, 2.6003753266350444, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.13543468892861554, 5);
  sqcRYGate(q, 1.3973877707791096, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.149291820648592, 6);
  sqcRYGate(q, -2.5883122442115862, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.117704221662707, 6);
  sqcRYGate(q, 0.08669742346465092, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0703934065216436, 7);
  sqcRYGate(q, 1.7601499962297535, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.7339567487609298, 7);
  sqcRYGate(q, 2.740302639674979, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.6559745066081275, 8);
  sqcRYGate(q, -2.1392896504917376, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.1703751108895228, 8);
  sqcRYGate(q, 0.7979146994876176, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.45609651760602277, 9);
  sqcRYGate(q, 0.9060944726510183, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.46085660310766485, 9);
  sqcRYGate(q, 0.9543015119257328, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.488915209523479, 10);
  sqcRYGate(q, -2.769259258650935, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.1062512831392173, 10);
  sqcRYGate(q, -2.3295590420483854, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.9983353542589803, 0);
  sqcRYGate(q, 2.1441566769886355, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2125123273917158, 0);
  sqcRYGate(q, 1.6969701786694515, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8926077104885913, 1);
  sqcRYGate(q, -0.007172056568223831, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1664000474422753, 1);
  sqcRYGate(q, -1.6354832464292872, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.011586151973092, 2);
  sqcRYGate(q, 0.7359380467852975, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0735638160666867, 2);
  sqcRYGate(q, 1.1770788450919494, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3519216565280798, 3);
  sqcRYGate(q, -1.5190100670803999, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5567295384893479, 3);
  sqcRYGate(q, 0.1503864313998074, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.3388064482542394, 4);
  sqcRYGate(q, 2.2262108377376855, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.106111443064778, 4);
  sqcRYGate(q, 3.134383122311855, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2974821965420098, 5);
  sqcRYGate(q, 1.555924965168745, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.14637114629574158, 5);
  sqcRYGate(q, 0.2461170447479759, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.105914758062222, 6);
  sqcRYGate(q, -2.8990591665778593, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.10418662593832907, 6);
  sqcRYGate(q, -2.7810686527547532, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.4894174216967775, 7);
  sqcRYGate(q, 0.45899972545227685, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.0216338991541747, 7);
  sqcRYGate(q, 0.0326831882211458, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.928372561372189, 8);
  sqcRYGate(q, -0.6441337962033655, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.2551478225024208, 8);
  sqcRYGate(q, -3.0913955545515477, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.9494358629606054, 9);
  sqcRYGate(q, -2.769969616705731, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.5376176629188327, 9);
  sqcRYGate(q, 2.836888139015815, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5897413398698124, 10);
  sqcRYGate(q, 0.4039509208945322, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.011638004371926414, 10);
  sqcRYGate(q, 1.250262909806686, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.883482892437609, 0);
  sqcRYGate(q, -1.0568105638221228, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.119914087823955, 0);
  sqcRYGate(q, -1.2560883759060646, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4213307288825989, 1);
  sqcRYGate(q, -0.3028078113224133, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.29211887446127505, 1);
  sqcRYGate(q, -0.5418345405915226, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0265687767527902, 2);
  sqcRYGate(q, 1.1576951294078461, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5903847305053747, 2);
  sqcRYGate(q, -0.9459483755029209, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2062491251449052, 3);
  sqcRYGate(q, -1.996521008455682, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.652917119567304, 3);
  sqcRYGate(q, 0.2917425376102102, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.433660248880296, 4);
  sqcRYGate(q, 1.946521991187892, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.840743068395687, 4);
  sqcRYGate(q, -0.44079871971986545, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0142834262018274, 5);
  sqcRYGate(q, 1.2615596827154187, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1402442744027397, 5);
  sqcRYGate(q, 0.21830348955536039, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.0336649559570854, 6);
  sqcRYGate(q, 2.4759762926799693, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9565611451649865, 6);
  sqcRYGate(q, 1.2063534858340832, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.1579711509759687, 7);
  sqcRYGate(q, -2.138551486135364, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.9872248882522867, 7);
  sqcRYGate(q, -3.1328273876230925, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.0075080400487266, 8);
  sqcRYGate(q, -0.11454145875555179, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.0946785793027147, 8);
  sqcRYGate(q, -0.359420951271751, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.8173751874300157, 9);
  sqcRYGate(q, -2.641138957461009, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.5738000350963333, 9);
  sqcRYGate(q, 0.11091156380261234, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.0421235829615145, 10);
  sqcRYGate(q, 1.1208684689416586, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.3333651546915748, 10);
  sqcRYGate(q, -1.8237266689599543, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.38854587655677, 0);
  sqcRYGate(q, 2.595112979765788, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6719292457111772, 0);
  sqcRYGate(q, 2.8213785851015967, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.06970039641019, 1);
  sqcRYGate(q, 0.471275872990935, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1173243079059114, 1);
  sqcRYGate(q, -0.2628509658815074, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.36154374132517814, 2);
  sqcRYGate(q, 0.8872094958821001, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.20817870585986412, 2);
  sqcRYGate(q, 0.6550020108498749, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7256132766952057, 3);
  sqcRYGate(q, -1.8130359943028, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.5144196316186735, 3);
  sqcRYGate(q, -3.1207636046175917, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.9115412110748222, 4);
  sqcRYGate(q, -0.20182166126024367, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.20935238671013232, 4);
  sqcRYGate(q, -0.41864019807989816, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0161123430428596, 5);
  sqcRYGate(q, 1.655746941093815, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5149371673322367, 5);
  sqcRYGate(q, 0.03323593340510467, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5818891598480898, 6);
  sqcRYGate(q, -2.3743131926513716, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5583249699174786, 6);
  sqcRYGate(q, 1.967357557391214, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.575138608712055, 7);
  sqcRYGate(q, 1.3246390591111536, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5772173022115679, 7);
  sqcRYGate(q, -0.11474847754908742, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.468344568800419, 8);
  sqcRYGate(q, 0.8768613872743982, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5591602507175653, 8);
  sqcRYGate(q, 0.0009743689976649464, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5738490191570644, 9);
  sqcRYGate(q, 2.6381910737451424, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5687086791575062, 9);
  sqcRYGate(q, -1.8777600070891367, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.564730968785409, 10);
  sqcRYGate(q, 0.6697059833369128, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.759091309550585, 10);
  sqcRYGate(q, -0.3152010601403685, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.4452273433406906, 0);
  sqcRYGate(q, 0.9136837302370866, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.570652590761963, 0);
  sqcRYGate(q, -2.591358501933917, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.015882602272172, 1);
  sqcRYGate(q, -0.7655072207584366, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5703630510786173, 1);
  sqcRYGate(q, -0.5871255944960898, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4160861440957317, 2);
  sqcRYGate(q, 1.1054703617416843, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.042147066465186886, 2);
  sqcRYGate(q, -2.433522852435468, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6210557157047585, 3);
  sqcRYGate(q, -1.2271759818449868, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.8581488484438338, 3);
  sqcRYGate(q, 3.051771571760076, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.968897340827908, 4);
  sqcRYGate(q, 2.8234194142674687, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.0098263652731734, 4);
  sqcRYGate(q, -3.008439361983985, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.7642100149859834, 5);
  sqcRYGate(q, 1.5446094716232783, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.7267189788365993, 5);
  sqcRYGate(q, 1.0182917844676513, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.543021659589146, 6);
  sqcRYGate(q, 1.5636420458861542, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.21639907542781778, 6);
  sqcRYGate(q, -2.499330896663453, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5667866781007005, 7);
  sqcRYGate(q, 2.9260469078496696, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.0006341894472982389, 7);
  sqcRYGate(q, -2.7039759394168392, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.029520266107191, 8);
  sqcRYGate(q, -0.8787170611685395, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.002275495462199936, 8);
  sqcRYGate(q, -1.780704602915841, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.265429976522708, 9);
  sqcRYGate(q, 0.14378452571029943, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.0022791524675920267, 9);
  sqcRYGate(q, -0.9777869463898736, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.9938735757964356, 10);
  sqcRYGate(q, 2.476798880468875, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.9057090364280698, 10);
  sqcRYGate(q, -2.6954402296098534, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.956836443945749, 0);
  sqcRYGate(q, -1.8272252046294435, 1);
  sqcRYGate(q, 1.3834974202059318, 2);
  sqcRYGate(q, -1.5080701106233052, 3);
  sqcRYGate(q, -1.955103163281505, 4);
  sqcRYGate(q, 1.9392198109889476, 5);
  sqcRYGate(q, -1.5676671266536397, 6);
  sqcRYGate(q, -1.5640155309785486, 7);
  sqcRYGate(q, -1.5724223588503818, 8);
  sqcRYGate(q, 1.5748768390365482, 9);
  sqcRYGate(q, 1.569727885336839, 10);
  sqcRYGate(q, -2.2214554766077335, 11);

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
