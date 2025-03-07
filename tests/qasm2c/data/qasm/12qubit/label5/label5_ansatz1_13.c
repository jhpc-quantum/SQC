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

  sqcRYGate(q, 2.7621784707549497, 0);
  sqcRZGate(q, 1.3776724938425058, 0);
  sqcRYGate(q, -3.1032120188031977, 1);
  sqcRZGate(q, 2.2673771412602504, 1);
  sqcRYGate(q, 3.129479266805536, 2);
  sqcRZGate(q, 0.7965298387344246, 2);
  sqcRYGate(q, 1.4402403818112939, 3);
  sqcRZGate(q, 1.986876824668171, 3);
  sqcRYGate(q, -1.5504897633444512, 4);
  sqcRZGate(q, -2.7641346681307883, 4);
  sqcRYGate(q, 2.3675278004641123, 5);
  sqcRZGate(q, -1.1144522575373754, 5);
  sqcRYGate(q, 3.0667518889147525, 6);
  sqcRZGate(q, -2.1699804926863595, 6);
  sqcRYGate(q, 0.050790694140993096, 7);
  sqcRZGate(q, 1.9930684484334469, 7);
  sqcRYGate(q, -0.05219095766130835, 8);
  sqcRZGate(q, -0.5978462692681737, 8);
  sqcRYGate(q, 2.1597938661893865, 9);
  sqcRZGate(q, -2.6513673717401707, 9);
  sqcRYGate(q, 2.3175407408393545, 10);
  sqcRZGate(q, 1.5660836897627686, 10);
  sqcRYGate(q, 2.799439101448705, 11);
  sqcRZGate(q, -1.7197093881820509, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.9980707629511123, 0);
  sqcRZGate(q, 2.089019243960681, 0);
  sqcRYGate(q, -0.9169076449198972, 1);
  sqcRZGate(q, 1.1561780477374886, 1);
  sqcRYGate(q, -0.061187555013869854, 2);
  sqcRZGate(q, -1.7489764240327599, 2);
  sqcRYGate(q, 0.4129864038528899, 3);
  sqcRZGate(q, 1.271211904626466, 3);
  sqcRYGate(q, -1.4936907870025031, 4);
  sqcRZGate(q, 1.7156965762472982, 4);
  sqcRYGate(q, -1.6803395664090488, 5);
  sqcRZGate(q, 1.4122667159368703, 5);
  sqcRYGate(q, 3.084929137592235, 6);
  sqcRZGate(q, 1.524559857889475, 6);
  sqcRYGate(q, -1.6736130496764254, 7);
  sqcRZGate(q, 1.3175777523589438, 7);
  sqcRYGate(q, 0.11357990780318428, 8);
  sqcRZGate(q, -1.4077147339228777, 8);
  sqcRYGate(q, -1.3496412577047883, 9);
  sqcRZGate(q, 0.3411850311699647, 9);
  sqcRYGate(q, 2.227256804680647, 10);
  sqcRZGate(q, 0.031635850308249266, 10);
  sqcRYGate(q, 1.7968262026942972, 11);
  sqcRZGate(q, -2.242854801202827, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.04602919411749706, 0);
  sqcRZGate(q, -0.9748807221272493, 0);
  sqcRYGate(q, -0.12175218510091625, 1);
  sqcRZGate(q, 2.0044174001792605, 1);
  sqcRYGate(q, 1.9894819868905103, 2);
  sqcRZGate(q, -3.0931346342352803, 2);
  sqcRYGate(q, -1.8793128404909671, 3);
  sqcRZGate(q, -1.1750615133743998, 3);
  sqcRYGate(q, 2.2148192323928706, 4);
  sqcRZGate(q, -2.1501526663576684, 4);
  sqcRYGate(q, -0.692823059557556, 5);
  sqcRZGate(q, 0.1516028621902974, 5);
  sqcRYGate(q, -3.1256779166912194, 6);
  sqcRZGate(q, -2.0424387051294826, 6);
  sqcRYGate(q, -2.6383495540013087, 7);
  sqcRZGate(q, 1.3794885685579938, 7);
  sqcRYGate(q, -1.8215560778515556, 8);
  sqcRZGate(q, -3.140173393220453, 8);
  sqcRYGate(q, 2.015246332048385, 9);
  sqcRZGate(q, 1.1924319147281093, 9);
  sqcRYGate(q, 1.9039945089874404, 10);
  sqcRZGate(q, 0.02287444503592706, 10);
  sqcRYGate(q, 1.949125076689401, 11);
  sqcRZGate(q, 2.8863204318323676, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.401590591570512, 0);
  sqcRZGate(q, -0.9428012451979724, 0);
  sqcRYGate(q, 1.2217801012009746, 1);
  sqcRZGate(q, 3.068990933691452, 1);
  sqcRYGate(q, -3.131945202865376, 2);
  sqcRZGate(q, -3.0393658912275203, 2);
  sqcRYGate(q, -0.010472898848314795, 3);
  sqcRZGate(q, 2.271071284041468, 3);
  sqcRYGate(q, -2.8985283966128343, 4);
  sqcRZGate(q, 1.3921316911774937, 4);
  sqcRYGate(q, -2.1175531682900717, 5);
  sqcRZGate(q, 1.5328326285332388, 5);
  sqcRYGate(q, -3.0967458036570936, 6);
  sqcRZGate(q, -2.4205935052762033, 6);
  sqcRYGate(q, 3.033752073692958, 7);
  sqcRZGate(q, 0.04150554080006418, 7);
  sqcRYGate(q, -1.9193375284664618, 8);
  sqcRZGate(q, 3.0258560050839436, 8);
  sqcRYGate(q, -2.0780817170357064, 9);
  sqcRZGate(q, -3.1182020751816197, 9);
  sqcRYGate(q, 1.8969512211717938, 10);
  sqcRZGate(q, -0.546098950542344, 10);
  sqcRYGate(q, -1.5649031338392796, 11);
  sqcRZGate(q, -2.3482583276758002, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.9724804064923314, 0);
  sqcRZGate(q, 2.768029175278875, 0);
  sqcRYGate(q, -3.0769568691453193, 1);
  sqcRZGate(q, 1.4276531728419133, 1);
  sqcRYGate(q, -0.9938930947778601, 2);
  sqcRZGate(q, -2.5803340550772034, 2);
  sqcRYGate(q, 0.30644421233579955, 3);
  sqcRZGate(q, 0.703530079483776, 3);
  sqcRYGate(q, 0.6750519823169849, 4);
  sqcRZGate(q, -0.38190597890633, 4);
  sqcRYGate(q, -1.34654139693966, 5);
  sqcRZGate(q, 1.8319120712953465, 5);
  sqcRYGate(q, -1.4041521561148873, 6);
  sqcRZGate(q, 1.5619291476249533, 6);
  sqcRYGate(q, 1.5519207504156842, 7);
  sqcRZGate(q, 1.2368579629366896, 7);
  sqcRYGate(q, 2.0377092675377653, 8);
  sqcRZGate(q, -0.7959222844406773, 8);
  sqcRYGate(q, -1.6392410610046397, 9);
  sqcRZGate(q, -3.029579063934205, 9);
  sqcRYGate(q, -0.004892169738187598, 10);
  sqcRZGate(q, -1.6922927064029922, 10);
  sqcRYGate(q, -2.2352193095969546, 11);
  sqcRZGate(q, 0.6012700899182183, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.6375224824236072, 0);
  sqcRZGate(q, -1.6673268062709197, 0);
  sqcRYGate(q, -2.4476734234191926, 1);
  sqcRZGate(q, 2.7655133772028044, 1);
  sqcRYGate(q, -3.1290843801662755, 2);
  sqcRZGate(q, 3.137010591501544, 2);
  sqcRYGate(q, -1.6086768921242842, 3);
  sqcRZGate(q, -2.927957433892224, 3);
  sqcRYGate(q, 3.065250768109326, 4);
  sqcRZGate(q, 2.3684731877772944, 4);
  sqcRYGate(q, 3.134921569081288, 5);
  sqcRZGate(q, 1.7887671833853567, 5);
  sqcRYGate(q, -2.6053782067911455, 6);
  sqcRZGate(q, -0.0009627559348652781, 6);
  sqcRYGate(q, -0.0025352641633493247, 7);
  sqcRZGate(q, 0.4517355836226768, 7);
  sqcRYGate(q, -2.9815748443861656, 8);
  sqcRZGate(q, 2.370261514400321, 8);
  sqcRYGate(q, 1.6201064750364553, 9);
  sqcRZGate(q, 2.3197958375050334, 9);
  sqcRYGate(q, 1.8173789219003387, 10);
  sqcRZGate(q, 2.203926946483939, 10);
  sqcRYGate(q, -0.4701542897875806, 11);
  sqcRZGate(q, 1.2019698199996065, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.6483141176679006, 0);
  sqcRZGate(q, 2.017185823141939, 0);
  sqcRYGate(q, 1.6617786922394395, 1);
  sqcRZGate(q, -1.6325128981721324, 1);
  sqcRYGate(q, -1.700412394184056, 2);
  sqcRZGate(q, 1.6368962642410612, 2);
  sqcRYGate(q, 3.136344667466047, 3);
  sqcRZGate(q, -2.872915710689769, 3);
  sqcRYGate(q, -0.07377316178754434, 4);
  sqcRZGate(q, -2.845636400041024, 4);
  sqcRYGate(q, 1.5953217753893194, 5);
  sqcRZGate(q, -3.1321936254246188, 5);
  sqcRYGate(q, -1.597333496720692, 6);
  sqcRZGate(q, -2.946176656656419, 6);
  sqcRYGate(q, 1.5573308450803534, 7);
  sqcRZGate(q, 2.8406566897742453, 7);
  sqcRYGate(q, 0.9345783012755731, 8);
  sqcRZGate(q, 0.29267559877269494, 8);
  sqcRYGate(q, -0.08431479063169087, 9);
  sqcRZGate(q, 2.384941245768393, 9);
  sqcRYGate(q, 3.0068356476306297, 10);
  sqcRZGate(q, 1.8610572378368593, 10);
  sqcRYGate(q, -0.08237813820403697, 11);
  sqcRZGate(q, 0.5217978930164069, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.02364069318236228, 0);
  sqcRZGate(q, 2.173337699505832, 0);
  sqcRYGate(q, 3.001320999211241, 1);
  sqcRZGate(q, 3.011115840753708, 1);
  sqcRYGate(q, 1.650570226485092, 2);
  sqcRZGate(q, -0.7533519821744451, 2);
  sqcRYGate(q, 3.0237049204313786, 3);
  sqcRZGate(q, 1.8344981609782078, 3);
  sqcRYGate(q, -1.6941851110464121, 4);
  sqcRZGate(q, -0.891531799431137, 4);
  sqcRYGate(q, -1.5704340548926286, 5);
  sqcRZGate(q, -3.110294062188298, 5);
  sqcRYGate(q, 2.534691086500251, 6);
  sqcRZGate(q, -2.9201355626295253, 6);
  sqcRYGate(q, -0.03389228688659252, 7);
  sqcRZGate(q, -2.834362646688959, 7);
  sqcRYGate(q, -1.6266039095512763, 8);
  sqcRZGate(q, 1.1950627058273668, 8);
  sqcRYGate(q, 1.498954262168188, 9);
  sqcRZGate(q, 2.9494526144937443, 9);
  sqcRYGate(q, 1.4606921316613937, 10);
  sqcRZGate(q, 0.8258287832187232, 10);
  sqcRYGate(q, -0.39396715300565877, 11);
  sqcRZGate(q, 2.6643277094793416, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.975984635554215, 0);
  sqcRZGate(q, -2.6053360907222456, 0);
  sqcRYGate(q, -0.04671091750857405, 1);
  sqcRZGate(q, 0.4066560777976914, 1);
  sqcRYGate(q, 2.2050991835148746, 2);
  sqcRZGate(q, -0.46416146653525464, 2);
  sqcRYGate(q, -0.13520515423479473, 3);
  sqcRZGate(q, -0.5693543680787361, 3);
  sqcRYGate(q, 3.119198821439746, 4);
  sqcRZGate(q, -1.8000942448508508, 4);
  sqcRYGate(q, -0.04711380153043448, 5);
  sqcRZGate(q, -0.5749372714710221, 5);
  sqcRYGate(q, -1.5334628915604034, 6);
  sqcRZGate(q, -3.1346483821880655, 6);
  sqcRYGate(q, 1.5994607135012113, 7);
  sqcRZGate(q, 3.0992706129158973, 7);
  sqcRYGate(q, 3.1302560116370466, 8);
  sqcRZGate(q, 2.768982219565665, 8);
  sqcRYGate(q, 0.9179975615277232, 9);
  sqcRZGate(q, 1.545540100060074, 9);
  sqcRYGate(q, -1.6006495033181165, 10);
  sqcRZGate(q, 0.09667333722530978, 10);
  sqcRYGate(q, -2.8723283906225157, 11);
  sqcRZGate(q, -0.28205057839213643, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 3.0573090978781465, 0);
  sqcRZGate(q, 1.9970934643600105, 0);
  sqcRYGate(q, 0.01837305355180341, 1);
  sqcRZGate(q, 2.573274225173424, 1);
  sqcRYGate(q, 3.0470538634939093, 2);
  sqcRZGate(q, -2.9294784073768994, 2);
  sqcRYGate(q, 3.1356406524210083, 3);
  sqcRZGate(q, 1.208208358406104, 3);
  sqcRYGate(q, 0.17973317370683617, 4);
  sqcRZGate(q, -1.261556686216207, 4);
  sqcRYGate(q, 3.1245804933685446, 5);
  sqcRZGate(q, 2.62484340195495, 5);
  sqcRYGate(q, -1.5923345259494237, 6);
  sqcRZGate(q, -0.5527279195628525, 6);
  sqcRYGate(q, 2.4202267258318484, 7);
  sqcRZGate(q, 2.958433496179896, 7);
  sqcRYGate(q, 1.5384225034080035, 8);
  sqcRZGate(q, 2.9057099879990207, 8);
  sqcRYGate(q, 2.7116536667779156, 9);
  sqcRZGate(q, 3.0977430832167525, 9);
  sqcRYGate(q, 0.06644468379384616, 10);
  sqcRZGate(q, -1.8707407540708132, 10);
  sqcRYGate(q, 1.2232305239060164, 11);
  sqcRZGate(q, 0.03852288096867973, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.5068192237773634, 0);
  sqcRZGate(q, -0.08383470099543722, 0);
  sqcRYGate(q, 1.5699456507186813, 1);
  sqcRZGate(q, 2.7180026488345206, 1);
  sqcRYGate(q, -1.319084810477885, 2);
  sqcRZGate(q, -0.5787921499857923, 2);
  sqcRYGate(q, -1.5421519468701839, 3);
  sqcRZGate(q, 1.617990663808758, 3);
  sqcRYGate(q, 3.1189431179890907, 4);
  sqcRZGate(q, -0.7585195556857159, 4);
  sqcRYGate(q, 1.5701940490868216, 5);
  sqcRZGate(q, -1.67588460401599, 5);
  sqcRYGate(q, 0.06573064469054213, 6);
  sqcRZGate(q, -1.0175324380919148, 6);
  sqcRYGate(q, 3.1397107979933314, 7);
  sqcRZGate(q, 2.746717059435646, 7);
  sqcRYGate(q, 0.04725644672131011, 8);
  sqcRZGate(q, -0.2062917953392338, 8);
  sqcRYGate(q, -1.9539311470130984, 9);
  sqcRZGate(q, 2.8987156572662762, 9);
  sqcRYGate(q, 0.07593409971740764, 10);
  sqcRZGate(q, 0.06926823899669637, 10);
  sqcRYGate(q, -0.05036391965767528, 11);
  sqcRZGate(q, -1.006341376289389, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.013093181420589853, 0);
  sqcRZGate(q, -0.9328086063770499, 0);
  sqcRYGate(q, 0.020994085899648237, 1);
  sqcRZGate(q, 2.359665104581882, 1);
  sqcRYGate(q, -1.6622345917251031, 2);
  sqcRZGate(q, -1.5726053647286191, 2);
  sqcRYGate(q, -1.7312452670649812, 3);
  sqcRZGate(q, -2.8533568477888096, 3);
  sqcRYGate(q, -1.5711086906329363, 4);
  sqcRZGate(q, -2.73501148954698, 4);
  sqcRYGate(q, 3.0681822700599586, 5);
  sqcRZGate(q, -0.10630478199738837, 5);
  sqcRYGate(q, -1.5697501351230836, 6);
  sqcRZGate(q, 1.8184989640040792, 6);
  sqcRYGate(q, 0.09294873711599116, 7);
  sqcRZGate(q, 0.1225693152590539, 7);
  sqcRYGate(q, -0.07529628891346297, 8);
  sqcRZGate(q, -2.775424535807895, 8);
  sqcRYGate(q, -1.033699532841653, 9);
  sqcRZGate(q, -1.3720587450793822, 9);
  sqcRYGate(q, 2.212109273613082, 10);
  sqcRZGate(q, -0.7968002699100585, 10);
  sqcRYGate(q, 3.0168511430077127, 11);
  sqcRZGate(q, 1.8596208948748174, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.5128380961020441, 0);
  sqcRZGate(q, -2.9944815481897438, 0);
  sqcRYGate(q, -2.1127429081607567, 1);
  sqcRZGate(q, 1.111406490678072, 1);
  sqcRYGate(q, 3.0728783610580415, 2);
  sqcRZGate(q, -1.8028246326012622, 2);
  sqcRYGate(q, -2.5293286428004618, 3);
  sqcRZGate(q, 1.7018974737091028, 3);
  sqcRYGate(q, -3.141528733546809, 4);
  sqcRZGate(q, 2.4838092235407547, 4);
  sqcRYGate(q, 1.570888621356326, 5);
  sqcRZGate(q, -1.5733920028349528, 5);
  sqcRYGate(q, -0.1481921267044628, 6);
  sqcRZGate(q, 2.8427050831866385, 6);
  sqcRYGate(q, 3.1070926077025987, 7);
  sqcRZGate(q, -2.54076763885986, 7);
  sqcRYGate(q, 2.0195532985209197, 8);
  sqcRZGate(q, -1.274577306581885, 8);
  sqcRYGate(q, -1.8248650112834388, 9);
  sqcRZGate(q, -1.0404655466278525, 9);
  sqcRYGate(q, 0.016184417178798004, 10);
  sqcRZGate(q, -2.611115321037029, 10);
  sqcRYGate(q, 0.017082210505789803, 11);
  sqcRZGate(q, 0.7362739801718535, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.0006239899207974575, 0);
  sqcRZGate(q, 1.0774562497974223, 0);
  sqcRYGate(q, -0.013399989592001837, 1);
  sqcRZGate(q, -2.515245478589777, 1);
  sqcRYGate(q, 0.20029438424228355, 2);
  sqcRZGate(q, 1.6513414522651602, 2);
  sqcRYGate(q, -2.156525232095791, 3);
  sqcRZGate(q, -2.9800872276539416, 3);
  sqcRYGate(q, 0.012605605473865467, 4);
  sqcRZGate(q, -2.344269944014665, 4);
  sqcRYGate(q, 1.563638751905275, 5);
  sqcRZGate(q, 2.942020659752156, 5);
  sqcRYGate(q, 1.5700247610383182, 6);
  sqcRZGate(q, -0.000621346876237716, 6);
  sqcRYGate(q, -3.1253028045936984, 7);
  sqcRZGate(q, 0.7231127507915104, 7);
  sqcRYGate(q, 3.139171115050645, 8);
  sqcRZGate(q, 1.6155188562673979, 8);
  sqcRYGate(q, 3.1298171732538105, 9);
  sqcRZGate(q, 2.0622988082015747, 9);
  sqcRYGate(q, -1.577031539666286, 10);
  sqcRZGate(q, 2.9620712359879597, 10);
  sqcRYGate(q, 1.038316676863878, 11);
  sqcRZGate(q, -2.629810138459636, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.877442311047656, 0);
  sqcRZGate(q, -1.6741431278058998, 0);
  sqcRYGate(q, 1.2605663881408506, 1);
  sqcRZGate(q, -2.1325794083307805, 1);
  sqcRYGate(q, -0.009643602842380083, 2);
  sqcRZGate(q, 1.4473639186288858, 2);
  sqcRYGate(q, -1.6024039198449644, 3);
  sqcRZGate(q, 0.7855638683801365, 3);
  sqcRYGate(q, -0.001693323904467192, 4);
  sqcRZGate(q, 0.26654991408420436, 4);
  sqcRYGate(q, 0.00022625663177196795, 5);
  sqcRZGate(q, -2.9742423889851013, 5);
  sqcRYGate(q, -1.5684435059851396, 6);
  sqcRZGate(q, -1.741913263320309, 6);
  sqcRYGate(q, 1.604943154247456, 7);
  sqcRZGate(q, 0.005262855025312563, 7);
  sqcRYGate(q, 0.42809264292502164, 8);
  sqcRZGate(q, 0.22520670505338194, 8);
  sqcRYGate(q, -0.6346483065124886, 9);
  sqcRZGate(q, 2.9137091737508456, 9);
  sqcRYGate(q, 0.0009242205130932939, 10);
  sqcRZGate(q, -2.80094934331461, 10);
  sqcRYGate(q, 1.8143109712011416, 11);
  sqcRZGate(q, -1.492641038946165, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.5691422619294966, 0);
  sqcRZGate(q, -3.1331159578849337, 0);
  sqcRYGate(q, -1.5860850314642234, 1);
  sqcRZGate(q, -3.1361793902110433, 1);
  sqcRYGate(q, 1.5681908360834054, 2);
  sqcRZGate(q, -0.002334308500303806, 2);
  sqcRYGate(q, 0.8555107932027816, 3);
  sqcRZGate(q, -2.9977537572644426, 3);
  sqcRYGate(q, -2.186262807077018, 4);
  sqcRZGate(q, 1.569030978577987, 4);
  sqcRYGate(q, 2.9960686528056906, 5);
  sqcRZGate(q, -0.1059004600906004, 5);
  sqcRYGate(q, 0.004353309662328463, 6);
  sqcRZGate(q, 0.1687167234123379, 6);
  sqcRYGate(q, 0.9064123912590204, 7);
  sqcRZGate(q, 1.5707957748203678, 7);
  sqcRYGate(q, 0.9379526486371866, 8);
  sqcRZGate(q, 1.570732116231701, 8);
  sqcRYGate(q, -0.00277422651538739, 9);
  sqcRZGate(q, 2.9786784431659545, 9);
  sqcRYGate(q, -3.1071050379644136, 10);
  sqcRZGate(q, 2.9271784998022348, 10);
  sqcRYGate(q, -1.4712395403864384, 11);
  sqcRZGate(q, -3.0539703310321427, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.4466398376868426, 0);
  sqcRZGate(q, 2.686690179105901, 0);
  sqcRYGate(q, -1.505848644983008, 1);
  sqcRZGate(q, -2.1133981103355906, 1);
  sqcRYGate(q, 1.5721399043366109, 2);
  sqcRZGate(q, 1.119837192868824, 2);
  sqcRYGate(q, 1.5616527621528955, 3);
  sqcRZGate(q, 0.9939560246044205, 3);
  sqcRYGate(q, -1.5711568514101104, 4);
  sqcRZGate(q, 2.6991286697912185, 4);
  sqcRYGate(q, 1.5705007560998405, 5);
  sqcRZGate(q, -0.5558118251873996, 5);
  sqcRYGate(q, -1.5710947676008207, 6);
  sqcRZGate(q, 2.6847614559982067, 6);
  sqcRYGate(q, -1.5703731532800456, 7);
  sqcRZGate(q, -0.5253573753878851, 7);
  sqcRYGate(q, -1.571696597413936, 8);
  sqcRZGate(q, -2.0206332720115827, 8);
  sqcRYGate(q, 1.5775791591764783, 9);
  sqcRZGate(q, -2.13894537463364, 9);
  sqcRYGate(q, -0.00480897272735125, 10);
  sqcRZGate(q, -1.648457987923221, 10);
  sqcRYGate(q, -1.200084943321757, 11);
  sqcRZGate(q, -0.14225591024826834, 11);

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
