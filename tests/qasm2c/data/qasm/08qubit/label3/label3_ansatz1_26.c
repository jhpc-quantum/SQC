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

  sqcRYGate(q, -1.9558210855321585, 0);
  sqcRZGate(q, -1.1674981294275175, 0);
  sqcRYGate(q, -0.3637542630062436, 1);
  sqcRZGate(q, 0.1545153756108677, 1);
  sqcRYGate(q, -1.3011473840049033, 2);
  sqcRZGate(q, 2.566842027250939, 2);
  sqcRYGate(q, -0.5061226997844734, 3);
  sqcRZGate(q, 0.4192529352955674, 3);
  sqcRYGate(q, 2.972496428606858, 4);
  sqcRZGate(q, 2.7815617318132975, 4);
  sqcRYGate(q, 1.7211078120340346, 5);
  sqcRZGate(q, -2.2103718154659497, 5);
  sqcRYGate(q, -1.859637914022813, 6);
  sqcRZGate(q, -2.162878515763463, 6);
  sqcRYGate(q, 0.2488095939621804, 7);
  sqcRZGate(q, 1.5133483006589386, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.8676792453506441, 0);
  sqcRZGate(q, -0.4779430941868049, 0);
  sqcRYGate(q, -2.5831104142325336, 1);
  sqcRZGate(q, 2.7852378125072415, 1);
  sqcRYGate(q, 0.05033266879199158, 2);
  sqcRZGate(q, -1.6688139446340822, 2);
  sqcRYGate(q, 0.5136926000296552, 3);
  sqcRZGate(q, -0.13578251878498104, 3);
  sqcRYGate(q, 2.903830252829242, 4);
  sqcRZGate(q, -0.08468723969958733, 4);
  sqcRYGate(q, -1.6316343438113066, 5);
  sqcRZGate(q, 1.1015994118693566, 5);
  sqcRYGate(q, -0.6857286637995186, 6);
  sqcRZGate(q, -1.946918756444938, 6);
  sqcRYGate(q, -3.105607026000308, 7);
  sqcRZGate(q, -1.3260929441818479, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.8396632891296036, 0);
  sqcRZGate(q, 0.5596690464648081, 0);
  sqcRYGate(q, 2.7677758489140456, 1);
  sqcRZGate(q, -0.3975114378518319, 1);
  sqcRYGate(q, 0.031303000267913994, 2);
  sqcRZGate(q, -0.6142559210870386, 2);
  sqcRYGate(q, -0.16700218842526038, 3);
  sqcRZGate(q, -1.7483633294586953, 3);
  sqcRYGate(q, -0.08211383333396505, 4);
  sqcRZGate(q, -2.3207111249461714, 4);
  sqcRYGate(q, 0.9460497898330401, 5);
  sqcRZGate(q, -2.4800393952826387, 5);
  sqcRYGate(q, 2.0429838526538218, 6);
  sqcRZGate(q, 0.8669818186077178, 6);
  sqcRYGate(q, 0.2645675523738511, 7);
  sqcRZGate(q, 0.10546329091573092, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.7330507939279416, 0);
  sqcRZGate(q, -2.315731121218786, 0);
  sqcRYGate(q, 0.11244011459601924, 1);
  sqcRZGate(q, 3.118912816760996, 1);
  sqcRYGate(q, -0.16553866342710943, 2);
  sqcRZGate(q, -0.5693105546068143, 2);
  sqcRYGate(q, 1.7033653189168714, 3);
  sqcRZGate(q, -0.40127239235731055, 3);
  sqcRYGate(q, 0.8766169660335148, 4);
  sqcRZGate(q, -0.7291375509682725, 4);
  sqcRYGate(q, -2.3178611645247766, 5);
  sqcRZGate(q, -0.4907592365141425, 5);
  sqcRYGate(q, -2.222884297073521, 6);
  sqcRZGate(q, -0.7914374428933604, 6);
  sqcRYGate(q, 2.9663085242358553, 7);
  sqcRZGate(q, -0.5227602108819411, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.6801490947866355, 0);
  sqcRZGate(q, 0.6526906525105521, 0);
  sqcRYGate(q, 2.619680121467088, 1);
  sqcRZGate(q, 0.3454983950858918, 1);
  sqcRYGate(q, -1.2327383201857662, 2);
  sqcRZGate(q, -2.9728761829987103, 2);
  sqcRYGate(q, -0.03968690392522589, 3);
  sqcRZGate(q, 2.5325163807887194, 3);
  sqcRYGate(q, 2.8328409468209705, 4);
  sqcRZGate(q, 2.23091126144641, 4);
  sqcRYGate(q, -1.5259619551398786, 5);
  sqcRZGate(q, 0.6610331077488532, 5);
  sqcRYGate(q, 2.427921188137093, 6);
  sqcRZGate(q, 1.045455070401736, 6);
  sqcRYGate(q, 0.8061540328431428, 7);
  sqcRZGate(q, -0.4416840064828147, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.212756144352839, 0);
  sqcRZGate(q, -0.604502454856807, 0);
  sqcRYGate(q, 1.6704536648060688, 1);
  sqcRZGate(q, -2.7743979449443943, 1);
  sqcRYGate(q, -1.047543234333493, 2);
  sqcRZGate(q, -0.8463665980903973, 2);
  sqcRYGate(q, 0.024184078376916125, 3);
  sqcRZGate(q, 1.7667381593563178, 3);
  sqcRYGate(q, -1.6269707693415478, 4);
  sqcRZGate(q, -1.6200445925154543, 4);
  sqcRYGate(q, -1.819283037487332, 5);
  sqcRZGate(q, 3.0832198073306514, 5);
  sqcRYGate(q, 0.5651441663722406, 6);
  sqcRZGate(q, -0.8966901984343457, 6);
  sqcRYGate(q, 1.2244388113562672, 7);
  sqcRZGate(q, 2.430262708266875, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.1328892056578432, 0);
  sqcRZGate(q, -3.0950444224278524, 0);
  sqcRYGate(q, -1.1845697220621199, 1);
  sqcRZGate(q, 2.715036364098536, 1);
  sqcRYGate(q, -0.6296994551198964, 2);
  sqcRZGate(q, -1.6327844404869256, 2);
  sqcRYGate(q, -2.936094659074837, 3);
  sqcRZGate(q, -2.211344259422642, 3);
  sqcRYGate(q, -2.6935664079144206, 4);
  sqcRZGate(q, 1.351933981045859, 4);
  sqcRYGate(q, -2.41479350049987, 5);
  sqcRZGate(q, -2.369866610476584, 5);
  sqcRYGate(q, -0.05984715327125581, 6);
  sqcRZGate(q, 1.1233103183118924, 6);
  sqcRYGate(q, -3.0122463616084545, 7);
  sqcRZGate(q, 2.265719533044679, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.9459371053871624, 0);
  sqcRZGate(q, 1.9260893373716415, 0);
  sqcRYGate(q, 0.3454443229440134, 1);
  sqcRZGate(q, -1.4884095047709067, 1);
  sqcRYGate(q, 2.9929882784172586, 2);
  sqcRZGate(q, 0.3459078506336457, 2);
  sqcRYGate(q, 0.01855431985679612, 3);
  sqcRZGate(q, -1.692021319902806, 3);
  sqcRYGate(q, 0.39812295013165416, 4);
  sqcRZGate(q, -2.8638872052183277, 4);
  sqcRYGate(q, 0.461148088339891, 5);
  sqcRZGate(q, 2.9605884511150142, 5);
  sqcRYGate(q, -0.6341292180007408, 6);
  sqcRZGate(q, -1.9752223948862513, 6);
  sqcRYGate(q, 1.7669056239627823, 7);
  sqcRZGate(q, -2.4189553794813072, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.139851923674656, 0);
  sqcRZGate(q, 0.6755754207524274, 0);
  sqcRYGate(q, -1.8897350800375958, 1);
  sqcRZGate(q, -1.789010634877218, 1);
  sqcRYGate(q, -0.17397350298562922, 2);
  sqcRZGate(q, -2.112205082322802, 2);
  sqcRYGate(q, 2.9603141263039263, 3);
  sqcRZGate(q, -3.0510857178727346, 3);
  sqcRYGate(q, 0.7015179784380402, 4);
  sqcRZGate(q, 0.06656543177252817, 4);
  sqcRYGate(q, 2.973116909320079, 5);
  sqcRZGate(q, 0.10826460108343383, 5);
  sqcRYGate(q, 0.5716920864932034, 6);
  sqcRZGate(q, 0.2271145359187923, 6);
  sqcRYGate(q, 0.5646934886870574, 7);
  sqcRZGate(q, 1.1688377138060728, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.0148449979260352, 0);
  sqcRZGate(q, 0.6063542454679687, 0);
  sqcRYGate(q, 3.08259446403316, 1);
  sqcRZGate(q, 2.2056415039614774, 1);
  sqcRYGate(q, -1.4245952492909115, 2);
  sqcRZGate(q, 0.013201773451607817, 2);
  sqcRYGate(q, -1.3846273299873213, 3);
  sqcRZGate(q, 1.68455467557485, 3);
  sqcRYGate(q, 0.827989379808638, 4);
  sqcRZGate(q, -0.4885525262749715, 4);
  sqcRYGate(q, -0.07149787660918427, 5);
  sqcRZGate(q, -2.8763015572609314, 5);
  sqcRYGate(q, 1.6743257304074266, 6);
  sqcRZGate(q, 2.4052565959058865, 6);
  sqcRYGate(q, 2.2065824102777034, 7);
  sqcRZGate(q, -0.749877784929522, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.8148633411521633, 0);
  sqcRZGate(q, -2.509104582035699, 0);
  sqcRYGate(q, -2.340396113196769, 1);
  sqcRZGate(q, -2.206660510159896, 1);
  sqcRYGate(q, 0.9620355936690457, 2);
  sqcRZGate(q, 3.1348295442123564, 2);
  sqcRYGate(q, -0.005500774155088982, 3);
  sqcRZGate(q, 1.4006478237665618, 3);
  sqcRYGate(q, 3.1108758233394678, 4);
  sqcRZGate(q, 1.9994667738869163, 4);
  sqcRYGate(q, -1.2620719461715018, 5);
  sqcRZGate(q, 0.5658855900470501, 5);
  sqcRYGate(q, -2.999832949633443, 6);
  sqcRZGate(q, -0.6400680997141697, 6);
  sqcRYGate(q, 0.6365025135791758, 7);
  sqcRZGate(q, 0.8339649408793645, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.5183161857866492, 0);
  sqcRZGate(q, -0.0016384902953623937, 0);
  sqcRYGate(q, -0.0009009327388593515, 1);
  sqcRZGate(q, -0.23245014948477752, 1);
  sqcRYGate(q, -0.8726164263656119, 2);
  sqcRZGate(q, 3.141081719265905, 2);
  sqcRYGate(q, -1.3280094448401032, 3);
  sqcRZGate(q, 0.45002307256086316, 3);
  sqcRYGate(q, -0.7005360943696421, 4);
  sqcRZGate(q, -2.4146974779637045, 4);
  sqcRYGate(q, 1.7316006672716684, 5);
  sqcRZGate(q, -0.38630892475304635, 5);
  sqcRYGate(q, -2.6323498860630283, 6);
  sqcRZGate(q, 2.2075706595843636, 6);
  sqcRYGate(q, -0.9993223049392865, 7);
  sqcRZGate(q, -0.8808347317443125, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.0368610068384232, 0);
  sqcRZGate(q, -1.8102842059945365, 0);
  sqcRYGate(q, 0.40236858161769984, 1);
  sqcRZGate(q, 2.0980619545051598, 1);
  sqcRYGate(q, 1.960517933918603, 2);
  sqcRZGate(q, -0.47105529606786595, 2);
  sqcRYGate(q, -2.6190810032673952, 3);
  sqcRZGate(q, 0.4567358166382202, 3);
  sqcRYGate(q, 1.3121387516006155, 4);
  sqcRZGate(q, 2.579930937246802, 4);
  sqcRYGate(q, -2.873111649115588, 5);
  sqcRZGate(q, -1.0451028928375998, 5);
  sqcRYGate(q, -0.45277345149163667, 6);
  sqcRZGate(q, 1.3177050506502195, 6);
  sqcRYGate(q, 0.6943218730693304, 7);
  sqcRZGate(q, -3.0740651979797793, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.6759211454801166, 0);
  sqcRZGate(q, -0.4179853104449744, 0);
  sqcRYGate(q, 1.356648447676597, 1);
  sqcRZGate(q, -1.9081458752257356, 1);
  sqcRYGate(q, -1.7753797923137897, 2);
  sqcRZGate(q, -3.095611493834658, 2);
  sqcRYGate(q, -1.6173796679227985, 3);
  sqcRZGate(q, -2.8655794808505135, 3);
  sqcRYGate(q, -0.15315838878236426, 4);
  sqcRZGate(q, -1.6988817784423853, 4);
  sqcRYGate(q, 0.5451221271364277, 5);
  sqcRZGate(q, -2.677324434372276, 5);
  sqcRYGate(q, 2.8637142710341044, 6);
  sqcRZGate(q, 0.657916711635262, 6);
  sqcRYGate(q, -1.7282687177059182, 7);
  sqcRZGate(q, -1.3907623393208848, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.37695201077722196, 0);
  sqcRZGate(q, 1.0743093182559071, 0);
  sqcRYGate(q, -0.47408771196921595, 1);
  sqcRZGate(q, 1.218922295254079, 1);
  sqcRYGate(q, -2.9180283198873007, 2);
  sqcRZGate(q, -1.815892746499638, 2);
  sqcRYGate(q, -1.9611058730236728, 3);
  sqcRZGate(q, 1.4191989441579715, 3);
  sqcRYGate(q, -1.5204592167773843, 4);
  sqcRZGate(q, -2.273485323220393, 4);
  sqcRYGate(q, -1.1771088119881936, 5);
  sqcRZGate(q, -0.07375128079767687, 5);
  sqcRYGate(q, 0.1125891424995745, 6);
  sqcRZGate(q, 1.5550400901851837, 6);
  sqcRYGate(q, -2.430056140607365, 7);
  sqcRZGate(q, 2.276781145053973, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.4400734607638603, 0);
  sqcRZGate(q, -1.822979564003841, 0);
  sqcRYGate(q, -2.3947898894567166, 1);
  sqcRZGate(q, 1.584461052928237, 1);
  sqcRYGate(q, -2.350155383375635, 2);
  sqcRZGate(q, -1.3660602624255036, 2);
  sqcRYGate(q, 2.4492231364333024, 3);
  sqcRZGate(q, -0.34076553510170005, 3);
  sqcRYGate(q, 3.135019162382182, 4);
  sqcRZGate(q, -1.5151819374713338, 4);
  sqcRYGate(q, 2.9174838829232597, 5);
  sqcRZGate(q, -3.1317959762633896, 5);
  sqcRYGate(q, 0.00814560545912002, 6);
  sqcRZGate(q, -2.2000936169607685, 6);
  sqcRYGate(q, 2.5221736660510246, 7);
  sqcRZGate(q, 0.9568992422544458, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.1309867867604524, 0);
  sqcRZGate(q, 1.930625882778832, 0);
  sqcRYGate(q, 0.9200142556927782, 1);
  sqcRZGate(q, 1.271596476231018, 1);
  sqcRYGate(q, 2.822800558674747, 2);
  sqcRZGate(q, 2.218659955397376, 2);
  sqcRYGate(q, 1.2061959827913755, 3);
  sqcRZGate(q, 1.964168967890673, 3);
  sqcRYGate(q, -2.6322508894564156, 4);
  sqcRZGate(q, -1.8867457656834592, 4);
  sqcRYGate(q, -1.6994204467048437, 5);
  sqcRZGate(q, 1.5382648537787755, 5);
  sqcRYGate(q, -3.139340614608285, 6);
  sqcRZGate(q, -0.950324364127595, 6);
  sqcRYGate(q, 2.9080107320987074, 7);
  sqcRZGate(q, 0.20507766031217667, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.8283183074980173, 0);
  sqcRZGate(q, 2.9142857002097635, 0);
  sqcRYGate(q, -0.6804237257286188, 1);
  sqcRZGate(q, -1.9239078415634632, 1);
  sqcRYGate(q, 0.30654339934653496, 2);
  sqcRZGate(q, -1.616150871156905, 2);
  sqcRYGate(q, -2.552454054891563, 3);
  sqcRZGate(q, -2.3910655911719325, 3);
  sqcRYGate(q, 0.20339781148485764, 4);
  sqcRZGate(q, 0.28973849323174866, 4);
  sqcRYGate(q, -1.3442926844099006, 5);
  sqcRZGate(q, -0.21849678605143852, 5);
  sqcRYGate(q, -2.8271888897266875, 6);
  sqcRZGate(q, 1.6433689884685414, 6);
  sqcRYGate(q, -2.327843838712165, 7);
  sqcRZGate(q, 2.787655705715788, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.9299853045257382, 0);
  sqcRZGate(q, 3.086677084502908, 0);
  sqcRYGate(q, 0.9909704591314878, 1);
  sqcRZGate(q, -3.0365599224414646, 1);
  sqcRYGate(q, 3.05297836141229, 2);
  sqcRZGate(q, -2.250885727049912, 2);
  sqcRYGate(q, 1.2436400955054097, 3);
  sqcRZGate(q, -2.2624897288358365, 3);
  sqcRYGate(q, 1.3549798089087046, 4);
  sqcRZGate(q, 2.964202861079983, 4);
  sqcRYGate(q, -0.23811668706939249, 5);
  sqcRZGate(q, 2.6034080921256257, 5);
  sqcRYGate(q, -0.5196263636922156, 6);
  sqcRZGate(q, 0.4112513476723063, 6);
  sqcRYGate(q, -1.2269394525427708, 7);
  sqcRZGate(q, 1.780054865720556, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.823607236762077, 0);
  sqcRZGate(q, -1.5633303669449596, 0);
  sqcRYGate(q, 0.0004894704301605656, 1);
  sqcRZGate(q, 0.6722341148211284, 1);
  sqcRYGate(q, -1.8557057479353398, 2);
  sqcRZGate(q, -0.5124679609344515, 2);
  sqcRYGate(q, 1.3183522261895768, 3);
  sqcRZGate(q, 0.08543545631264673, 3);
  sqcRYGate(q, 0.38078171775558745, 4);
  sqcRZGate(q, 1.9830416093217647, 4);
  sqcRYGate(q, 1.7207166209730775, 5);
  sqcRZGate(q, -0.12614436797373685, 5);
  sqcRYGate(q, 1.8191140037237314, 6);
  sqcRZGate(q, -0.5428679923095985, 6);
  sqcRYGate(q, 2.708916096391076, 7);
  sqcRZGate(q, -1.0817634789681059, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.06035659022286754, 0);
  sqcRZGate(q, -1.8843755768379102, 0);
  sqcRYGate(q, -2.547947810365156, 1);
  sqcRZGate(q, -2.9775495191677623, 1);
  sqcRYGate(q, 0.028584670748502752, 2);
  sqcRZGate(q, 0.2589215772668429, 2);
  sqcRYGate(q, 1.4942317809795593, 3);
  sqcRZGate(q, 1.425354492736343, 3);
  sqcRYGate(q, 2.4701436042232823, 4);
  sqcRZGate(q, 1.4628199640807682, 4);
  sqcRYGate(q, -1.3930561096340506, 5);
  sqcRZGate(q, -2.05156852801713, 5);
  sqcRYGate(q, 0.11703089037792933, 6);
  sqcRZGate(q, 2.3607191572392923, 6);
  sqcRYGate(q, -3.132139175551217, 7);
  sqcRZGate(q, 0.9973080256020602, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.6914130864340957, 0);
  sqcRZGate(q, 0.13002357222153993, 0);
  sqcRYGate(q, 3.0899267389970064, 1);
  sqcRZGate(q, 3.122935479091486, 1);
  sqcRYGate(q, -2.813090435464951, 2);
  sqcRZGate(q, -1.6510326957399029, 2);
  sqcRYGate(q, 3.077437218390411, 3);
  sqcRZGate(q, 1.0501718156663769, 3);
  sqcRYGate(q, -0.0022864283522697803, 4);
  sqcRZGate(q, -0.07233495714915517, 4);
  sqcRYGate(q, -2.8006826335857236, 5);
  sqcRZGate(q, 0.9879927276984402, 5);
  sqcRYGate(q, -1.7626130917772622, 6);
  sqcRZGate(q, -1.1508171263949447, 6);
  sqcRYGate(q, 1.6889247908709324, 7);
  sqcRZGate(q, 1.1560321315941737, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.20952634837988082, 0);
  sqcRZGate(q, -1.0519547253261923, 0);
  sqcRYGate(q, -1.333695372914801, 1);
  sqcRZGate(q, -0.9736516290368811, 1);
  sqcRYGate(q, -0.20572283401084238, 2);
  sqcRZGate(q, 2.842806803944047, 2);
  sqcRYGate(q, -1.6183908235320867, 3);
  sqcRZGate(q, -2.564845786277628, 3);
  sqcRYGate(q, -1.4183881167223313, 4);
  sqcRZGate(q, 1.9785259893600582, 4);
  sqcRYGate(q, -0.7934967327437306, 5);
  sqcRZGate(q, 2.82195233623581, 5);
  sqcRYGate(q, -2.892275397619682, 6);
  sqcRZGate(q, 0.9000669482206929, 6);
  sqcRYGate(q, 0.7624846626132503, 7);
  sqcRZGate(q, 0.012908200862004726, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.124124696127774, 0);
  sqcRZGate(q, -3.0237188643432926, 0);
  sqcRYGate(q, -2.808663487045435, 1);
  sqcRZGate(q, -1.1096444585302834, 1);
  sqcRYGate(q, 1.2073860052487424, 2);
  sqcRZGate(q, -1.4504379995059105, 2);
  sqcRYGate(q, -1.4093596636944354, 3);
  sqcRZGate(q, -0.2584464285313268, 3);
  sqcRYGate(q, 3.0978700983294694, 4);
  sqcRZGate(q, 0.3730875026259184, 4);
  sqcRYGate(q, -0.3523807211890748, 5);
  sqcRZGate(q, 2.090427031190441, 5);
  sqcRYGate(q, -3.1358414498388507, 6);
  sqcRZGate(q, -0.6208088248441266, 6);
  sqcRYGate(q, 0.14135248910404996, 7);
  sqcRZGate(q, -0.009307959568797486, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.5907185220368607, 0);
  sqcRZGate(q, -1.5570304544364435, 0);
  sqcRYGate(q, -2.657617584802972, 1);
  sqcRZGate(q, -1.7052504144749268, 1);
  sqcRYGate(q, -0.06691941097145587, 2);
  sqcRZGate(q, 2.377722648380603, 2);
  sqcRYGate(q, 0.28530705695950864, 3);
  sqcRZGate(q, -1.5781417385207315, 3);
  sqcRYGate(q, 1.4830166980124206, 4);
  sqcRZGate(q, -1.8899551853978664, 4);
  sqcRYGate(q, -2.1289557648519577, 5);
  sqcRZGate(q, -0.5113699228980026, 5);
  sqcRYGate(q, 1.4821184660847415, 6);
  sqcRZGate(q, 0.6609720807390724, 6);
  sqcRYGate(q, -2.3718811742074224, 7);
  sqcRZGate(q, 2.7267777879766717, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5545981406105525, 0);
  sqcRZGate(q, -0.7558133552698298, 0);
  sqcRYGate(q, 1.5759880773181414, 1);
  sqcRZGate(q, 1.6070501898869902, 1);
  sqcRYGate(q, -0.02127374393205006, 2);
  sqcRZGate(q, 1.7070319092168922, 2);
  sqcRYGate(q, -2.1955086024943116, 3);
  sqcRZGate(q, -1.1645276858266174, 3);
  sqcRYGate(q, 0.026339427472236384, 4);
  sqcRZGate(q, -2.4008541794914833, 4);
  sqcRYGate(q, 2.9424331636876295, 5);
  sqcRZGate(q, 0.2577407632632731, 5);
  sqcRYGate(q, 2.908680719699258, 6);
  sqcRZGate(q, -1.1940497247128796, 6);
  sqcRYGate(q, 1.5878611729754797, 7);
  sqcRZGate(q, 0.29879328865936383, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.5695623196286377, 0);
  sqcRZGate(q, 1.4829082977756984, 0);
  sqcRYGate(q, 0.12183648906488198, 1);
  sqcRZGate(q, 3.0873459001986503, 1);
  sqcRYGate(q, -0.0029060004742965952, 2);
  sqcRZGate(q, 0.0003176404870064158, 2);
  sqcRYGate(q, 3.040624510402569, 3);
  sqcRZGate(q, -3.017538301416933, 3);
  sqcRYGate(q, -0.33565423160812163, 4);
  sqcRZGate(q, -3.097001410600371, 4);
  sqcRYGate(q, 1.1341875812590578, 5);
  sqcRZGate(q, 1.5623112103620724, 5);
  sqcRYGate(q, 1.6180267176755425, 6);
  sqcRZGate(q, -0.47469282346529346, 6);
  sqcRYGate(q, -0.007791909584362543, 7);
  sqcRZGate(q, 1.8936821977798077, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.868812612172772, 0);
  sqcRZGate(q, 3.060053607904062, 0);
  sqcRYGate(q, 1.5602049143084893, 1);
  sqcRZGate(q, -1.5482835659345744, 1);
  sqcRYGate(q, 1.4018160021718653, 2);
  sqcRZGate(q, 1.7898967044313083, 2);
  sqcRYGate(q, -0.8416595333753838, 3);
  sqcRZGate(q, 2.7294526971300233, 3);
  sqcRYGate(q, -3.054956908461395, 4);
  sqcRZGate(q, -0.6390252296532888, 4);
  sqcRYGate(q, 1.6090843453476298, 5);
  sqcRZGate(q, -1.5954670445623238, 5);
  sqcRYGate(q, -1.5551042759260614, 6);
  sqcRZGate(q, 0.48343574526268185, 6);
  sqcRYGate(q, -2.815987447046556, 7);
  sqcRZGate(q, 1.2183762314812887, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.5767824720093533, 0);
  sqcRZGate(q, -1.233421431355944, 0);
  sqcRYGate(q, 1.597207602608802, 1);
  sqcRZGate(q, 2.5384020310284243, 1);
  sqcRYGate(q, -0.05498706994348869, 2);
  sqcRZGate(q, -0.6051423990055474, 2);
  sqcRYGate(q, -3.1033443113559946, 3);
  sqcRZGate(q, -3.0570782325699493, 3);
  sqcRYGate(q, 0.030988125589450414, 4);
  sqcRZGate(q, -0.4745859918829231, 4);
  sqcRYGate(q, -1.5731589470571852, 5);
  sqcRZGate(q, 1.7265824803884837, 5);
  sqcRYGate(q, 0.2203086765124552, 6);
  sqcRZGate(q, -2.3691682993932517, 6);
  sqcRYGate(q, -0.00156241722612406, 7);
  sqcRZGate(q, -2.517100476874894, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.853985448647854, 0);
  sqcRZGate(q, -1.0582237971812891, 0);
  sqcRYGate(q, -0.9693450505225434, 1);
  sqcRZGate(q, 1.1431367247228519, 1);
  sqcRYGate(q, -2.585228716835944, 2);
  sqcRZGate(q, 2.113930402942664, 2);
  sqcRYGate(q, -1.9528365289052638, 3);
  sqcRZGate(q, -2.846599211592996, 3);
  sqcRYGate(q, -1.0109276903502697, 4);
  sqcRZGate(q, 1.5788273492117617, 4);
  sqcRYGate(q, -2.248569383142842, 5);
  sqcRZGate(q, -2.819341444177161, 5);
  sqcRYGate(q, 1.9213859932281556, 6);
  sqcRZGate(q, 0.9674491724499444, 6);
  sqcRYGate(q, -1.6612298188425556, 7);
  sqcRZGate(q, 0.46928307258314816, 7);

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
