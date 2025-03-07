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

  sqcRYGate(q, -1.8030135530816755, 0);
  sqcRZGate(q, 2.1146919043991, 0);
  sqcRYGate(q, 1.6647433765177941, 1);
  sqcRZGate(q, -1.3329484721785714, 1);
  sqcRYGate(q, 1.8686074768073384, 2);
  sqcRZGate(q, -2.338585824429854, 2);
  sqcRYGate(q, -2.1073250880046146, 3);
  sqcRZGate(q, -2.386188967315566, 3);
  sqcRYGate(q, 2.8298307061308248, 4);
  sqcRZGate(q, -3.080444164860026, 4);
  sqcRYGate(q, -2.5465407330104637, 5);
  sqcRZGate(q, -2.763160890203484, 5);
  sqcRYGate(q, 2.2756973516443884, 6);
  sqcRZGate(q, 0.633174430963005, 6);
  sqcRYGate(q, -2.5536616943653074, 7);
  sqcRZGate(q, 2.8391005245722187, 7);
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
  sqcRYGate(q, 0.6195951477773045, 0);
  sqcRZGate(q, -0.7147863719399004, 0);
  sqcRYGate(q, 2.5708692226718215, 1);
  sqcRZGate(q, -1.6738513405670812, 1);
  sqcRYGate(q, -1.0580474400072215, 2);
  sqcRZGate(q, 1.5519222302303648, 2);
  sqcRYGate(q, 1.2989485873545303, 3);
  sqcRZGate(q, 2.8910141615656606, 3);
  sqcRYGate(q, 1.4040934355712784, 4);
  sqcRZGate(q, -0.029009300260921782, 4);
  sqcRYGate(q, -2.431865869827941, 5);
  sqcRZGate(q, 1.8169261038235003, 5);
  sqcRYGate(q, -0.8018512701263173, 6);
  sqcRZGate(q, 2.8523789742678973, 6);
  sqcRYGate(q, -0.5400861894725955, 7);
  sqcRZGate(q, -2.726392238364554, 7);
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
  sqcRYGate(q, 1.14717927104703, 0);
  sqcRZGate(q, -2.879252332242475, 0);
  sqcRYGate(q, -1.0882456165083016, 1);
  sqcRZGate(q, 0.1756448112726101, 1);
  sqcRYGate(q, 0.8644907411723253, 2);
  sqcRZGate(q, -1.4708121211003808, 2);
  sqcRYGate(q, 1.059281731010638, 3);
  sqcRZGate(q, 1.073731722252484, 3);
  sqcRYGate(q, 2.26206006061376, 4);
  sqcRZGate(q, 2.503781970973623, 4);
  sqcRYGate(q, 1.843346053954783, 5);
  sqcRZGate(q, 2.5137179340213174, 5);
  sqcRYGate(q, 1.801420408368694, 6);
  sqcRZGate(q, 0.8676347889091504, 6);
  sqcRYGate(q, -1.977742290470654, 7);
  sqcRZGate(q, 1.2710322344094194, 7);
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
  sqcRYGate(q, 0.7615383768033492, 0);
  sqcRZGate(q, -0.8694566334227054, 0);
  sqcRYGate(q, 0.6826409660271677, 1);
  sqcRZGate(q, -1.8650850773570706, 1);
  sqcRYGate(q, 0.367039138846601, 2);
  sqcRZGate(q, -0.5793235705365509, 2);
  sqcRYGate(q, 1.2546058956488808, 3);
  sqcRZGate(q, 2.4190468218745362, 3);
  sqcRYGate(q, -2.051370721593192, 4);
  sqcRZGate(q, 2.5377044906197246, 4);
  sqcRYGate(q, -2.0135311679350547, 5);
  sqcRZGate(q, -1.1393047268143384, 5);
  sqcRYGate(q, 1.272136371530821, 6);
  sqcRZGate(q, -2.1580424954858155, 6);
  sqcRYGate(q, 2.4910517922323603, 7);
  sqcRZGate(q, 2.572714793044785, 7);
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
  sqcRYGate(q, -1.7023237744407558, 0);
  sqcRZGate(q, -2.163696828683188, 0);
  sqcRYGate(q, -2.10371817324312, 1);
  sqcRZGate(q, 1.8127463992729327, 1);
  sqcRYGate(q, -2.9599027920428442, 2);
  sqcRZGate(q, -1.9730896245898346, 2);
  sqcRYGate(q, -2.074143938038799, 3);
  sqcRZGate(q, -0.08626862422886195, 3);
  sqcRYGate(q, 1.2055447656924725, 4);
  sqcRZGate(q, 0.5525956996401051, 4);
  sqcRYGate(q, 2.532420624439904, 5);
  sqcRZGate(q, 0.7258212054891199, 5);
  sqcRYGate(q, 2.016218000232227, 6);
  sqcRZGate(q, 2.506636686500632, 6);
  sqcRYGate(q, -0.3691013220832708, 7);
  sqcRZGate(q, -0.48095103468026945, 7);
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
  sqcRYGate(q, 1.4155367485990675, 0);
  sqcRZGate(q, -3.0770889723457557, 0);
  sqcRYGate(q, -2.3587564767148197, 1);
  sqcRZGate(q, -1.5230896528635869, 1);
  sqcRYGate(q, 1.4933167297029488, 2);
  sqcRZGate(q, 2.730644673923198, 2);
  sqcRYGate(q, 1.5920335440063171, 3);
  sqcRZGate(q, -0.5646992499894283, 3);
  sqcRYGate(q, 1.9956077052532848, 4);
  sqcRZGate(q, 1.4741116036436859, 4);
  sqcRYGate(q, 1.8548165444683224, 5);
  sqcRZGate(q, -0.19455320175388555, 5);
  sqcRYGate(q, -1.1975061681917332, 6);
  sqcRZGate(q, -1.1259794422616816, 6);
  sqcRYGate(q, -1.786154520069938, 7);
  sqcRZGate(q, -2.172740321312316, 7);
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
  sqcRYGate(q, 1.781563436312674, 0);
  sqcRZGate(q, 0.22557755646902333, 0);
  sqcRYGate(q, 2.8243965587891355, 1);
  sqcRZGate(q, -2.750581352757773, 1);
  sqcRYGate(q, 0.9282823130083907, 2);
  sqcRZGate(q, -0.9027834814815163, 2);
  sqcRYGate(q, -1.1833415904350453, 3);
  sqcRZGate(q, 1.5101077613579041, 3);
  sqcRYGate(q, 2.7362400319072258, 4);
  sqcRZGate(q, -1.5805946405338638, 4);
  sqcRYGate(q, -0.662977658122265, 5);
  sqcRZGate(q, 0.3844507264797655, 5);
  sqcRYGate(q, 2.3694175642008624, 6);
  sqcRZGate(q, 1.4630991676733158, 6);
  sqcRYGate(q, -2.6679357788706217, 7);
  sqcRZGate(q, -2.591750180815977, 7);
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
  sqcRYGate(q, -1.9320533971613196, 0);
  sqcRZGate(q, 1.6728134673980923, 0);
  sqcRYGate(q, 1.4693104356730249, 1);
  sqcRZGate(q, 0.6588008313322186, 1);
  sqcRYGate(q, -2.833418169887995, 2);
  sqcRZGate(q, 2.269408495727427, 2);
  sqcRYGate(q, 1.8851521481581173, 3);
  sqcRZGate(q, -2.3963109249753187, 3);
  sqcRYGate(q, 0.9906241881185616, 4);
  sqcRZGate(q, 0.3241607594196108, 4);
  sqcRYGate(q, 2.759265400841256, 5);
  sqcRZGate(q, 1.715056172064, 5);
  sqcRYGate(q, 0.6933120821544678, 6);
  sqcRZGate(q, -0.27418717659660885, 6);
  sqcRYGate(q, -0.3075693202969134, 7);
  sqcRZGate(q, 1.335679595453187, 7);
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
  sqcRYGate(q, 1.4715690004755275, 0);
  sqcRZGate(q, -1.0232832020042992, 0);
  sqcRYGate(q, -2.667384067110884, 1);
  sqcRZGate(q, 1.5258406076493096, 1);
  sqcRYGate(q, -1.9143045703992767, 2);
  sqcRZGate(q, -0.7382248951505511, 2);
  sqcRYGate(q, -0.26119230557986567, 3);
  sqcRZGate(q, 1.550762307842099, 3);
  sqcRYGate(q, -1.7684654076143618, 4);
  sqcRZGate(q, -1.28084803699773, 4);
  sqcRYGate(q, -0.8907198489225134, 5);
  sqcRZGate(q, -3.140478318377353, 5);
  sqcRYGate(q, -2.3746260280930125, 6);
  sqcRZGate(q, -0.673353471366575, 6);
  sqcRYGate(q, -0.602452839844295, 7);
  sqcRZGate(q, -2.0133937403486217, 7);
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
  sqcRYGate(q, -1.015388031492174, 0);
  sqcRZGate(q, 0.9801468461327034, 0);
  sqcRYGate(q, -3.070594487748688, 1);
  sqcRZGate(q, -1.3634492078745701, 1);
  sqcRYGate(q, 0.7522579810787033, 2);
  sqcRZGate(q, -2.606730685845571, 2);
  sqcRYGate(q, 1.3532420565832899, 3);
  sqcRZGate(q, -1.4321813548756337, 3);
  sqcRYGate(q, -0.274109445203341, 4);
  sqcRZGate(q, 0.6172187709894242, 4);
  sqcRYGate(q, -2.09159311542735, 5);
  sqcRZGate(q, -0.6281848484206118, 5);
  sqcRYGate(q, -2.6145708219027375, 6);
  sqcRZGate(q, -0.26659037358387927, 6);
  sqcRYGate(q, 1.2257148348889748, 7);
  sqcRZGate(q, -1.0063863128535182, 7);
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
  sqcRYGate(q, -0.9652500177597059, 0);
  sqcRZGate(q, -2.5590695550306526, 0);
  sqcRYGate(q, -1.567461590740641, 1);
  sqcRZGate(q, -2.9615841031296095, 1);
  sqcRYGate(q, -1.0440185175650898, 2);
  sqcRZGate(q, 0.3237536300685094, 2);
  sqcRYGate(q, -2.8840299076489724, 3);
  sqcRZGate(q, -1.7653479779963366, 3);
  sqcRYGate(q, -1.6654880058282062, 4);
  sqcRZGate(q, -2.9464069516122677, 4);
  sqcRYGate(q, 0.34030707905577273, 5);
  sqcRZGate(q, -1.564319931597607, 5);
  sqcRYGate(q, -2.0401321364871956, 6);
  sqcRZGate(q, 2.3160241615005335, 6);
  sqcRYGate(q, 0.5802341858119027, 7);
  sqcRZGate(q, 1.0477798572961232, 7);
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
  sqcRYGate(q, 1.4711919636000594, 0);
  sqcRZGate(q, 3.1187417010661753, 0);
  sqcRYGate(q, 2.3505969758508054, 1);
  sqcRZGate(q, 2.7485824915548314, 1);
  sqcRYGate(q, 2.273167175948922, 2);
  sqcRZGate(q, 0.181212327586314, 2);
  sqcRYGate(q, 2.0393826675891464, 3);
  sqcRZGate(q, 2.508015254631016, 3);
  sqcRYGate(q, 2.1164377047094085, 4);
  sqcRZGate(q, 1.1989740393062738, 4);
  sqcRYGate(q, 1.3572832491914504, 5);
  sqcRZGate(q, -2.516384334073303, 5);
  sqcRYGate(q, -1.6486631459865109, 6);
  sqcRZGate(q, -1.6199547447788687, 6);
  sqcRYGate(q, 1.8965927348786789, 7);
  sqcRZGate(q, -1.3930377964710947, 7);
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
  sqcRYGate(q, -0.3033153061402958, 0);
  sqcRZGate(q, 2.940893700954982, 0);
  sqcRYGate(q, -1.0141650484927043, 1);
  sqcRZGate(q, 1.9024427214349433, 1);
  sqcRYGate(q, -1.5360784503174356, 2);
  sqcRZGate(q, -2.9335445744011643, 2);
  sqcRYGate(q, 1.11747678178034, 3);
  sqcRZGate(q, -0.5777980016152938, 3);
  sqcRYGate(q, -0.5329900926317769, 4);
  sqcRZGate(q, 2.3973731580468, 4);
  sqcRYGate(q, -0.6793444142283471, 5);
  sqcRZGate(q, -2.1776507067134214, 5);
  sqcRYGate(q, -2.9555214650208232, 6);
  sqcRZGate(q, -0.6035696818450198, 6);
  sqcRYGate(q, -2.076149831328751, 7);
  sqcRZGate(q, -2.154407317487463, 7);
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
  sqcRYGate(q, 1.780294242147822, 0);
  sqcRZGate(q, -0.7602658002535988, 0);
  sqcRYGate(q, -2.4716195474485385, 1);
  sqcRZGate(q, 0.5948564852462717, 1);
  sqcRYGate(q, -1.9342557916955765, 2);
  sqcRZGate(q, 1.7873607397715165, 2);
  sqcRYGate(q, 0.7458759693429151, 3);
  sqcRZGate(q, -2.484493263329889, 3);
  sqcRYGate(q, 1.9777083144434886, 4);
  sqcRZGate(q, -1.0865040273104905, 4);
  sqcRYGate(q, -2.097044545491013, 5);
  sqcRZGate(q, 0.9598705274854892, 5);
  sqcRYGate(q, 0.2982355804929373, 6);
  sqcRZGate(q, -0.5655490382233436, 6);
  sqcRYGate(q, -1.4511111806303285, 7);
  sqcRZGate(q, -1.7906830806104086, 7);
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
  sqcRYGate(q, -0.6926626678811321, 0);
  sqcRZGate(q, 1.7020099061832865, 0);
  sqcRYGate(q, 1.503377674457946, 1);
  sqcRZGate(q, 2.022072204986922, 1);
  sqcRYGate(q, 0.8240340104731768, 2);
  sqcRZGate(q, -0.18521084864519058, 2);
  sqcRYGate(q, -1.8693076922676406, 3);
  sqcRZGate(q, 1.8666439606504612, 3);
  sqcRYGate(q, -0.9576037965233857, 4);
  sqcRZGate(q, -0.0011718266578997214, 4);
  sqcRYGate(q, -1.929201395279624, 5);
  sqcRZGate(q, 2.891229842773187, 5);
  sqcRYGate(q, 1.3902387624782158, 6);
  sqcRZGate(q, 2.8087849951266692, 6);
  sqcRYGate(q, 2.106325360970366, 7);
  sqcRZGate(q, 0.027749970013933114, 7);
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
  sqcRYGate(q, 2.292466438378979, 0);
  sqcRZGate(q, 0.7199330295075944, 0);
  sqcRYGate(q, -1.6193235420280139, 1);
  sqcRZGate(q, -0.952745045714992, 1);
  sqcRYGate(q, -2.159081927970705, 2);
  sqcRZGate(q, 0.9421861535245863, 2);
  sqcRYGate(q, 2.940726746857928, 3);
  sqcRZGate(q, 2.9511706375208866, 3);
  sqcRYGate(q, 1.8913033976449998, 4);
  sqcRZGate(q, 2.8480613483070463, 4);
  sqcRYGate(q, 2.4397601447157022, 5);
  sqcRZGate(q, 0.6736100895308609, 5);
  sqcRYGate(q, 0.7783368141390813, 6);
  sqcRZGate(q, 0.5068991156913389, 6);
  sqcRYGate(q, -2.875442010789651, 7);
  sqcRZGate(q, 0.4044814027479405, 7);
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
  sqcRYGate(q, 1.4342441055525184, 0);
  sqcRZGate(q, -0.08510463637193927, 0);
  sqcRYGate(q, -1.5627105221786977, 1);
  sqcRZGate(q, -3.1015034178644965, 1);
  sqcRYGate(q, 1.3662986894959142, 2);
  sqcRZGate(q, 2.9590520583463493, 2);
  sqcRYGate(q, -2.437541165557595, 3);
  sqcRZGate(q, 2.1971621718290315, 3);
  sqcRYGate(q, -2.7540850294718373, 4);
  sqcRZGate(q, 0.5387945167089244, 4);
  sqcRYGate(q, -1.4926808840323949, 5);
  sqcRZGate(q, -0.22818446071268905, 5);
  sqcRYGate(q, 1.0929126763732304, 6);
  sqcRZGate(q, 1.3458625968554427, 6);
  sqcRYGate(q, -2.6067946892909926, 7);
  sqcRZGate(q, -2.0875074868864387, 7);
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
  sqcRYGate(q, -0.2964637088642048, 0);
  sqcRZGate(q, -0.7052813878927964, 0);
  sqcRYGate(q, -2.738905323307651, 1);
  sqcRZGate(q, -1.1774462611380578, 1);
  sqcRYGate(q, -1.1370420018372291, 2);
  sqcRZGate(q, 2.596199853319657, 2);
  sqcRYGate(q, 2.913972271596686, 3);
  sqcRZGate(q, -2.2731863762880957, 3);
  sqcRYGate(q, -3.0084695637185086, 4);
  sqcRZGate(q, -2.854600839720888, 4);
  sqcRYGate(q, -1.530970341072483, 5);
  sqcRZGate(q, -2.4987358614098545, 5);
  sqcRYGate(q, 0.39972511282451695, 6);
  sqcRZGate(q, 0.9232954616543475, 6);
  sqcRYGate(q, 2.0244318582249696, 7);
  sqcRZGate(q, -1.8198619190893024, 7);
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
  sqcRYGate(q, 1.9983241614310536, 0);
  sqcRZGate(q, 2.621051277932021, 0);
  sqcRYGate(q, 1.2714568607592567, 1);
  sqcRZGate(q, 0.8990119100683893, 1);
  sqcRYGate(q, -0.5822195077120338, 2);
  sqcRZGate(q, -1.4839870447940458, 2);
  sqcRYGate(q, 2.597078689930046, 3);
  sqcRZGate(q, -2.3730803078814144, 3);
  sqcRYGate(q, -1.4373578945769525, 4);
  sqcRZGate(q, 2.8343780372178244, 4);
  sqcRYGate(q, -2.050706678543465, 5);
  sqcRZGate(q, 1.0244044557436234, 5);
  sqcRYGate(q, -2.0346172814539374, 6);
  sqcRZGate(q, 1.1884223666989335, 6);
  sqcRYGate(q, -1.5346729985964105, 7);
  sqcRZGate(q, -0.15828533376138684, 7);
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
  sqcRYGate(q, -2.0895512255648825, 0);
  sqcRZGate(q, 0.9418498705477393, 0);
  sqcRYGate(q, -2.2931248478711543, 1);
  sqcRZGate(q, 0.21141996920982567, 1);
  sqcRYGate(q, -0.4951991126047665, 2);
  sqcRZGate(q, 1.2460088780421492, 2);
  sqcRYGate(q, -1.0474919674781855, 3);
  sqcRZGate(q, 1.5422809249539544, 3);
  sqcRYGate(q, -0.19181404025021198, 4);
  sqcRZGate(q, -2.5809016599677044, 4);
  sqcRYGate(q, 0.3035807678854179, 5);
  sqcRZGate(q, 0.9906374683470127, 5);
  sqcRYGate(q, 2.4098540452289443, 6);
  sqcRZGate(q, -2.402086749171736, 6);
  sqcRYGate(q, -1.5266201347148871, 7);
  sqcRZGate(q, 1.0433005592000582, 7);
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
  sqcRYGate(q, 2.487195448805303, 0);
  sqcRZGate(q, 2.689234810418309, 0);
  sqcRYGate(q, 0.6443879175813478, 1);
  sqcRZGate(q, -2.9860528373706625, 1);
  sqcRYGate(q, 1.846743226242272, 2);
  sqcRZGate(q, 0.8864994546677547, 2);
  sqcRYGate(q, -1.0127634974597584, 3);
  sqcRZGate(q, 0.9717580631113306, 3);
  sqcRYGate(q, 2.292172858024342, 4);
  sqcRZGate(q, 2.260682880723868, 4);
  sqcRYGate(q, 0.6738422664369201, 5);
  sqcRZGate(q, -2.8845245181205175, 5);
  sqcRYGate(q, -0.19600464381836427, 6);
  sqcRZGate(q, -2.8053382743180855, 6);
  sqcRYGate(q, -2.198037417677879, 7);
  sqcRZGate(q, -1.1984385638741823, 7);
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
  sqcRYGate(q, -2.7811713354827527, 0);
  sqcRZGate(q, 1.8139928173192092, 0);
  sqcRYGate(q, -0.06989653548742261, 1);
  sqcRZGate(q, 0.8576378367767861, 1);
  sqcRYGate(q, 0.21188211946105096, 2);
  sqcRZGate(q, 1.7877500053245274, 2);
  sqcRYGate(q, -1.7373935254591961, 3);
  sqcRZGate(q, -0.30164358706999467, 3);
  sqcRYGate(q, -2.712721774391261, 4);
  sqcRZGate(q, -2.510514112292313, 4);
  sqcRYGate(q, 0.8254257454908542, 5);
  sqcRZGate(q, 0.5255283765957481, 5);
  sqcRYGate(q, 2.202699939398867, 6);
  sqcRZGate(q, 2.6892799756506536, 6);
  sqcRYGate(q, 2.928539131013136, 7);
  sqcRZGate(q, 2.1993457586519094, 7);

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
