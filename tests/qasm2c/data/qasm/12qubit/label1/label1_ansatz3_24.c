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

  sqcRYGate(q, 2.3355287290502162, 0);
  sqcRZGate(q, -1.5393679449425974, 0);
  sqcRYGate(q, 0.0902092863847983, 1);
  sqcRZGate(q, -2.2394568519414717, 1);
  sqcRYGate(q, 0.2287365475936247, 2);
  sqcRZGate(q, -0.0036525431191728823, 2);
  sqcRYGate(q, -1.7854107543550777, 3);
  sqcRZGate(q, -2.325500783226015, 3);
  sqcRYGate(q, 0.22726659431886187, 4);
  sqcRZGate(q, 0.119590082181542, 4);
  sqcRYGate(q, 0.21839927837690967, 5);
  sqcRZGate(q, 0.4450335169745063, 5);
  sqcRYGate(q, -0.7242872637593689, 6);
  sqcRZGate(q, 1.4764902809115676, 6);
  sqcRYGate(q, 3.000666084283958, 7);
  sqcRZGate(q, 1.331264570312018, 7);
  sqcRYGate(q, -3.1105609238685306, 8);
  sqcRZGate(q, 0.9297033335307029, 8);
  sqcRYGate(q, -0.007752307804670222, 9);
  sqcRZGate(q, -2.2929705090498067, 9);
  sqcRYGate(q, 2.330388466484563, 10);
  sqcRZGate(q, 1.5143918091269013, 10);
  sqcRYGate(q, -0.6056016519491214, 11);
  sqcRZGate(q, -1.3836098833240715, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -2.0778904364940827, 0);
  sqcRZGate(q, 1.1291221492869319, 0);
  sqcRYGate(q, 0.016715658248201967, 1);
  sqcRZGate(q, -2.8344790067319012, 1);
  sqcRYGate(q, 2.6188097890628335, 2);
  sqcRZGate(q, 2.492301476745441, 2);
  sqcRYGate(q, -1.076483945279181, 3);
  sqcRZGate(q, 0.16145417705913276, 3);
  sqcRYGate(q, -0.13425505124759862, 4);
  sqcRZGate(q, 0.4681857702753971, 4);
  sqcRYGate(q, -0.9892775604287806, 5);
  sqcRZGate(q, -1.7154469484967916, 5);
  sqcRYGate(q, -0.3107207834615515, 6);
  sqcRZGate(q, -0.012298165805938958, 6);
  sqcRYGate(q, -1.1020639578833173, 7);
  sqcRZGate(q, -0.21532020681387024, 7);
  sqcRYGate(q, -3.1236574155696735, 8);
  sqcRZGate(q, -1.63759576570117, 8);
  sqcRYGate(q, 0.0006053208757572648, 9);
  sqcRZGate(q, -1.2966927357579143, 9);
  sqcRYGate(q, -1.2961060163458757, 10);
  sqcRZGate(q, -0.09733348116875389, 10);
  sqcRYGate(q, 0.41975283734739205, 11);
  sqcRZGate(q, -2.890823376316908, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 0.9691391590446035, 0);
  sqcRZGate(q, 2.6810942272776352, 0);
  sqcRYGate(q, 0.06627583022585955, 1);
  sqcRZGate(q, -1.373607433317396, 1);
  sqcRYGate(q, 2.657318560002597, 2);
  sqcRZGate(q, -2.57335621502913, 2);
  sqcRYGate(q, 0.5959398439944819, 3);
  sqcRZGate(q, 1.2612827833543072, 3);
  sqcRYGate(q, 3.026143713468252, 4);
  sqcRZGate(q, -2.899639671292587, 4);
  sqcRYGate(q, 0.16289604857023487, 5);
  sqcRZGate(q, -1.2710887821612047, 5);
  sqcRYGate(q, 1.0322595630902653, 6);
  sqcRZGate(q, 2.9089044007595404, 6);
  sqcRYGate(q, 2.4718315740728123, 7);
  sqcRZGate(q, -1.9203075691963987, 7);
  sqcRYGate(q, 0.014077600566488345, 8);
  sqcRZGate(q, -2.7310160247400392, 8);
  sqcRYGate(q, 2.5712471656488356, 9);
  sqcRZGate(q, 0.9772656006683533, 9);
  sqcRYGate(q, -0.1318720950296983, 10);
  sqcRZGate(q, 1.3007519151566385, 10);
  sqcRYGate(q, -2.9705403579735092, 11);
  sqcRZGate(q, -0.03279855116353559, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 0.8921716125433184, 0);
  sqcRZGate(q, 0.2607496020369622, 0);
  sqcRYGate(q, -0.04933405294228603, 1);
  sqcRZGate(q, -1.111044263755547, 1);
  sqcRYGate(q, -2.9373447274695073, 2);
  sqcRZGate(q, -0.3836362368117143, 2);
  sqcRYGate(q, -0.5793103265494582, 3);
  sqcRZGate(q, -0.8458290428868774, 3);
  sqcRYGate(q, 1.1104964738111427, 4);
  sqcRZGate(q, 2.360999954498751, 4);
  sqcRYGate(q, 1.1982884917578325, 5);
  sqcRZGate(q, -0.04689739098569224, 5);
  sqcRYGate(q, -2.762009272102213, 6);
  sqcRZGate(q, -3.122467458905411, 6);
  sqcRYGate(q, -0.00716742445876406, 7);
  sqcRZGate(q, -1.214958496535454, 7);
  sqcRYGate(q, -0.026268748211047743, 8);
  sqcRZGate(q, 0.48058848219348854, 8);
  sqcRYGate(q, -3.1325548913567594, 9);
  sqcRZGate(q, -2.530009853252786, 9);
  sqcRYGate(q, -1.4881356540043131, 10);
  sqcRZGate(q, -1.7034392500976585, 10);
  sqcRYGate(q, -0.19074839976637833, 11);
  sqcRZGate(q, 2.9003847204130158, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.4740498802439204, 0);
  sqcRZGate(q, 2.364502454991983, 0);
  sqcRYGate(q, -3.049844912983509, 1);
  sqcRZGate(q, 0.5292998279625517, 1);
  sqcRYGate(q, -1.312236694153331, 2);
  sqcRZGate(q, -0.3702391156474567, 2);
  sqcRYGate(q, -1.343792530113567, 3);
  sqcRZGate(q, 1.7742159990416901, 3);
  sqcRYGate(q, -3.0014564956361798, 4);
  sqcRZGate(q, 0.888652506167249, 4);
  sqcRYGate(q, -2.9879850586921752, 5);
  sqcRZGate(q, -1.2864171118655432, 5);
  sqcRYGate(q, 2.7134661013300225, 6);
  sqcRZGate(q, 1.169972439471187, 6);
  sqcRYGate(q, 2.7318890030796426, 7);
  sqcRZGate(q, 2.200848239516757, 7);
  sqcRYGate(q, 3.0744919683025658, 8);
  sqcRZGate(q, 2.292145671939158, 8);
  sqcRYGate(q, -1.2169596060054282, 9);
  sqcRZGate(q, 1.0187505439645914, 9);
  sqcRYGate(q, 0.2076370316758771, 10);
  sqcRZGate(q, 2.237907460369041, 10);
  sqcRYGate(q, 1.304162511495612, 11);
  sqcRZGate(q, 1.5458315123538218, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 0.351138943354413, 0);
  sqcRZGate(q, 1.851842655487637, 0);
  sqcRYGate(q, 1.535118547739267, 1);
  sqcRZGate(q, -1.5723326230192267, 1);
  sqcRYGate(q, 0.36942749204965963, 2);
  sqcRZGate(q, 1.7517122130717935, 2);
  sqcRYGate(q, -0.9459484458717249, 3);
  sqcRZGate(q, -0.1677959854520757, 3);
  sqcRYGate(q, 2.946501220920447, 4);
  sqcRZGate(q, 3.1222955621231456, 4);
  sqcRYGate(q, 0.9642019973767217, 5);
  sqcRZGate(q, 0.3120829980579174, 5);
  sqcRYGate(q, 0.278420954428289, 6);
  sqcRZGate(q, 2.194000369857254, 6);
  sqcRYGate(q, -3.1237452693260486, 7);
  sqcRZGate(q, -2.1358800736265255, 7);
  sqcRYGate(q, -0.009721049829057285, 8);
  sqcRZGate(q, 0.5498661996166145, 8);
  sqcRYGate(q, -0.015109849576296241, 9);
  sqcRZGate(q, 2.141741895507179, 9);
  sqcRYGate(q, 2.17684060141666, 10);
  sqcRZGate(q, 0.6404451308383744, 10);
  sqcRYGate(q, 2.141095974159163, 11);
  sqcRZGate(q, 0.9330930322952763, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.942386221970479, 0);
  sqcRZGate(q, 3.0643969396644035, 0);
  sqcRYGate(q, 1.3977103808221139, 1);
  sqcRZGate(q, 2.6090006160440726, 1);
  sqcRYGate(q, 0.6812297248998798, 2);
  sqcRZGate(q, -2.315221914788549, 2);
  sqcRYGate(q, -3.1017624108151773, 3);
  sqcRZGate(q, 1.5853067676174524, 3);
  sqcRYGate(q, -0.18429244681240942, 4);
  sqcRZGate(q, 1.3364803614738257, 4);
  sqcRYGate(q, 2.9161477896424417, 5);
  sqcRZGate(q, -1.5689231990106658, 5);
  sqcRYGate(q, -0.5496420881106685, 6);
  sqcRZGate(q, 1.5219592440983885, 6);
  sqcRYGate(q, 1.346303415146659, 7);
  sqcRZGate(q, 2.871434924543232, 7);
  sqcRYGate(q, -3.0859131884463364, 8);
  sqcRZGate(q, -2.1530621391577522, 8);
  sqcRYGate(q, 2.4069724190247466, 9);
  sqcRZGate(q, -2.5357119469451677, 9);
  sqcRYGate(q, 0.18970617565611492, 10);
  sqcRZGate(q, -0.5786002299231799, 10);
  sqcRYGate(q, -0.33863063405978533, 11);
  sqcRZGate(q, 2.359668943937201, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.0684395210083508, 0);
  sqcRZGate(q, 1.014690060939178, 0);
  sqcRYGate(q, -0.1783492102469169, 1);
  sqcRZGate(q, 1.8247219968281003, 1);
  sqcRYGate(q, -0.051577581214567125, 2);
  sqcRZGate(q, -0.7182286458004343, 2);
  sqcRYGate(q, 1.3588460342124131, 3);
  sqcRZGate(q, 1.1996799244280474, 3);
  sqcRYGate(q, 2.4773266271337673, 4);
  sqcRZGate(q, -2.9898255665780384, 4);
  sqcRYGate(q, -0.054960885676864635, 5);
  sqcRZGate(q, 0.22972646306402034, 5);
  sqcRYGate(q, 1.2299532277041578, 6);
  sqcRZGate(q, 1.1453149590955976, 6);
  sqcRYGate(q, -0.014375553466093033, 7);
  sqcRZGate(q, -2.607018183090141, 7);
  sqcRYGate(q, -0.058554950619121755, 8);
  sqcRZGate(q, 0.11092322442999794, 8);
  sqcRYGate(q, 0.004300940586317026, 9);
  sqcRZGate(q, 2.2814142547217013, 9);
  sqcRYGate(q, 2.918188375895758, 10);
  sqcRZGate(q, -0.7595117860666124, 10);
  sqcRYGate(q, 0.746957791157555, 11);
  sqcRZGate(q, 1.4658795117820682, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 0.8673545831963327, 0);
  sqcRZGate(q, 2.255238566849832, 0);
  sqcRYGate(q, 3.1287006761402494, 1);
  sqcRZGate(q, -1.8527089407671182, 1);
  sqcRYGate(q, 1.9494531177278767, 2);
  sqcRZGate(q, -0.617122446258474, 2);
  sqcRYGate(q, -0.011373064939461847, 3);
  sqcRZGate(q, 0.1711101829738628, 3);
  sqcRYGate(q, 3.1318584565171212, 4);
  sqcRZGate(q, -2.1786485634730064, 4);
  sqcRYGate(q, -0.685693204777011, 5);
  sqcRZGate(q, -2.583860535691548, 5);
  sqcRYGate(q, 3.079885898307362, 6);
  sqcRZGate(q, 1.3553684639746209, 6);
  sqcRYGate(q, -1.6426115346326466, 7);
  sqcRZGate(q, -2.568143970634724, 7);
  sqcRYGate(q, 0.002568998941180567, 8);
  sqcRZGate(q, -0.8457012953085847, 8);
  sqcRYGate(q, 2.5327021787301898, 9);
  sqcRZGate(q, -0.6946268944001002, 9);
  sqcRYGate(q, -0.669932460608382, 10);
  sqcRZGate(q, 0.884475440517205, 10);
  sqcRYGate(q, 1.818109656665129, 11);
  sqcRZGate(q, 1.1435244297203166, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -2.117615901035691, 0);
  sqcRZGate(q, -0.012922876979457596, 0);
  sqcRYGate(q, -1.7916429033540378, 1);
  sqcRZGate(q, -2.9125942134713294, 1);
  sqcRYGate(q, -0.042808741330631506, 2);
  sqcRZGate(q, 2.2741350231851793, 2);
  sqcRYGate(q, -2.727068607969157, 3);
  sqcRZGate(q, 0.41556749719165875, 3);
  sqcRYGate(q, 2.939115678709131, 4);
  sqcRZGate(q, -0.8282320904990274, 4);
  sqcRYGate(q, 0.0749696425860094, 5);
  sqcRZGate(q, 0.004257308349901384, 5);
  sqcRYGate(q, -1.087565603668713, 6);
  sqcRZGate(q, -2.50971883890666, 6);
  sqcRYGate(q, -0.014727020868182861, 7);
  sqcRZGate(q, 2.7446341602745, 7);
  sqcRYGate(q, 3.1130548471897055, 8);
  sqcRZGate(q, 1.8428433525456014, 8);
  sqcRYGate(q, 0.061948761813292424, 9);
  sqcRZGate(q, -2.4019305770618127, 9);
  sqcRYGate(q, 3.091668006408018, 10);
  sqcRZGate(q, -2.3783970681475606, 10);
  sqcRYGate(q, -0.10498868133824447, 11);
  sqcRZGate(q, 2.309866339762725, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.8719421023918521, 0);
  sqcRZGate(q, 0.0820649588783763, 0);
  sqcRYGate(q, -1.155163347316872, 1);
  sqcRZGate(q, 2.3204607854663872, 1);
  sqcRYGate(q, 0.7983582596196611, 2);
  sqcRZGate(q, -1.1164443779018058, 2);
  sqcRYGate(q, 2.5344405605285503, 3);
  sqcRZGate(q, -0.8142486454063692, 3);
  sqcRYGate(q, -0.08911464919764224, 4);
  sqcRZGate(q, -0.43143331805255863, 4);
  sqcRYGate(q, -2.1950298806037063, 5);
  sqcRZGate(q, -2.6702850255621646, 5);
  sqcRYGate(q, -3.1071818203969075, 6);
  sqcRZGate(q, 2.305432939742919, 6);
  sqcRYGate(q, -1.7299641895412636, 7);
  sqcRZGate(q, 1.3515882577027698, 7);
  sqcRYGate(q, 1.645848785308681, 8);
  sqcRZGate(q, 1.5443376245622418, 8);
  sqcRYGate(q, 2.9087000797276548, 9);
  sqcRZGate(q, 3.092693785500638, 9);
  sqcRYGate(q, 0.4373950119705529, 10);
  sqcRZGate(q, -2.7038009242187453, 10);
  sqcRYGate(q, 1.534847800507918, 11);
  sqcRZGate(q, 1.6925332825689203, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.8254166360886384, 0);
  sqcRZGate(q, 1.6079743505657162, 0);
  sqcRYGate(q, 1.5476655427839503, 1);
  sqcRZGate(q, -1.6574737318437593, 1);
  sqcRYGate(q, -0.0373441184312848, 2);
  sqcRZGate(q, 1.1330855938745457, 2);
  sqcRYGate(q, 1.9022407193200002, 3);
  sqcRZGate(q, -1.9211443028286457, 3);
  sqcRYGate(q, -1.3034492866820946, 4);
  sqcRZGate(q, 2.6002200109760296, 4);
  sqcRYGate(q, 0.137683107250341, 5);
  sqcRZGate(q, -2.037941667517707, 5);
  sqcRYGate(q, 0.4469991999771592, 6);
  sqcRZGate(q, 1.5705376986286994, 6);
  sqcRYGate(q, -3.1278730674210165, 7);
  sqcRZGate(q, -2.147787372412802, 7);
  sqcRYGate(q, 1.7901832934139588, 8);
  sqcRZGate(q, 1.2880590619077859, 8);
  sqcRYGate(q, -2.095343521871929, 9);
  sqcRZGate(q, -1.5883064586014095, 9);
  sqcRYGate(q, -1.8918327553930352, 10);
  sqcRZGate(q, 2.8728456940470855, 10);
  sqcRYGate(q, 1.7270523892179774, 11);
  sqcRZGate(q, 0.3280132253050695, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.979223921276228, 0);
  sqcRZGate(q, 1.5075213296209382, 0);
  sqcRYGate(q, -0.025191936964768402, 1);
  sqcRZGate(q, -1.6244019181141462, 1);
  sqcRYGate(q, 2.7357393393461606, 2);
  sqcRZGate(q, -1.9732684838481203, 2);
  sqcRYGate(q, -3.1167311048579642, 3);
  sqcRZGate(q, 2.457512907888833, 3);
  sqcRYGate(q, 0.005617986402488397, 4);
  sqcRZGate(q, 2.2904238852950987, 4);
  sqcRYGate(q, 1.4857569559422767, 5);
  sqcRZGate(q, 0.8883766607588419, 5);
  sqcRYGate(q, -0.0024218084245610783, 6);
  sqcRZGate(q, -1.6347186143415198, 6);
  sqcRYGate(q, -3.1390149454158305, 7);
  sqcRZGate(q, -1.8237074301629943, 7);
  sqcRYGate(q, 0.06735203221933517, 8);
  sqcRZGate(q, 2.5072864100159227, 8);
  sqcRYGate(q, 0.2615736848849191, 9);
  sqcRZGate(q, 2.901074556035966, 9);
  sqcRYGate(q, 1.470743391141088, 10);
  sqcRZGate(q, -1.1850789500004524, 10);
  sqcRYGate(q, 1.1642341316976643, 11);
  sqcRZGate(q, -0.24570045890768188, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -2.4916676630662122, 0);
  sqcRZGate(q, -0.41768884489716884, 0);
  sqcRYGate(q, 1.6077805213684704, 1);
  sqcRZGate(q, 0.8727221880533972, 1);
  sqcRYGate(q, 3.1032869443796556, 2);
  sqcRZGate(q, -1.7167737023185143, 2);
  sqcRYGate(q, -2.2374996879996507, 3);
  sqcRZGate(q, 0.7242972614636755, 3);
  sqcRYGate(q, -1.031170615559309, 4);
  sqcRZGate(q, 3.0900414980011823, 4);
  sqcRYGate(q, 2.89467022384993, 5);
  sqcRZGate(q, -2.7744030511541746, 5);
  sqcRYGate(q, 0.4263823154616928, 6);
  sqcRZGate(q, 3.052013159163478, 6);
  sqcRYGate(q, -3.084313768344372, 7);
  sqcRZGate(q, -3.0441345322733726, 7);
  sqcRYGate(q, -2.943420848645576, 8);
  sqcRZGate(q, -1.7514286280822562, 8);
  sqcRYGate(q, 1.8590576479139924, 9);
  sqcRZGate(q, 0.3920952230159864, 9);
  sqcRYGate(q, 3.1283687302111383, 10);
  sqcRZGate(q, 0.15891523137479702, 10);
  sqcRYGate(q, 1.9657814921674455, 11);
  sqcRZGate(q, -0.3760109359534662, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.2175536845346229, 0);
  sqcRZGate(q, -2.9350493700455176, 0);
  sqcRYGate(q, -0.09975981369313519, 1);
  sqcRZGate(q, -1.9972638908431706, 1);
  sqcRYGate(q, 2.3141022073209445, 2);
  sqcRZGate(q, 3.0038959725079666, 2);
  sqcRYGate(q, 0.11846112383696135, 3);
  sqcRZGate(q, -2.387243478267348, 3);
  sqcRYGate(q, -3.0034047121522645, 4);
  sqcRZGate(q, 1.357384235862377, 4);
  sqcRYGate(q, 0.004398066668059641, 5);
  sqcRZGate(q, -0.04584279212997621, 5);
  sqcRYGate(q, 3.1334245752995096, 6);
  sqcRZGate(q, 2.2247477331517223, 6);
  sqcRYGate(q, -3.1358997724598323, 7);
  sqcRZGate(q, 0.018475960467586205, 7);
  sqcRYGate(q, 2.3764763325255793, 8);
  sqcRZGate(q, 2.225954056893645, 8);
  sqcRYGate(q, 0.03755485707324225, 9);
  sqcRZGate(q, 1.825931321898708, 9);
  sqcRYGate(q, -2.4683285732532605, 10);
  sqcRZGate(q, 2.745188073443645, 10);
  sqcRYGate(q, -2.7689351213253186, 11);
  sqcRZGate(q, 1.9418631066203194, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.0837743889230242, 0);
  sqcRZGate(q, 1.6688528235863307, 0);
  sqcRYGate(q, -0.20473304862421937, 1);
  sqcRZGate(q, 2.7986036047994105, 1);
  sqcRYGate(q, 0.0644140749735218, 2);
  sqcRZGate(q, -0.7283134949700774, 2);
  sqcRYGate(q, 1.400937636431851, 3);
  sqcRZGate(q, 0.1315854296202756, 3);
  sqcRYGate(q, 1.4165705867714233, 4);
  sqcRZGate(q, 0.3317542691506823, 4);
  sqcRYGate(q, 2.748905005228718, 5);
  sqcRZGate(q, 0.5548284078993956, 5);
  sqcRYGate(q, 3.1235835804017746, 6);
  sqcRZGate(q, -1.7036659975717576, 6);
  sqcRYGate(q, 3.081433649729426, 7);
  sqcRZGate(q, -1.4874723904475682, 7);
  sqcRYGate(q, -1.2768955260459967, 8);
  sqcRZGate(q, -0.03735867253214842, 8);
  sqcRYGate(q, 2.261472564841821, 9);
  sqcRZGate(q, -1.0657403338345939, 9);
  sqcRYGate(q, -2.5399913696618626, 10);
  sqcRZGate(q, -1.9622444166859843, 10);
  sqcRYGate(q, 1.5064198576861805, 11);
  sqcRZGate(q, -0.48859768078261334, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.4304189576089794, 0);
  sqcRZGate(q, 3.049081565904041, 0);
  sqcRYGate(q, -1.5619495235465022, 1);
  sqcRZGate(q, -0.8533041299743392, 1);
  sqcRYGate(q, -0.510202230588894, 2);
  sqcRZGate(q, 2.8965915055399654, 2);
  sqcRYGate(q, 1.8778786825667524, 3);
  sqcRZGate(q, 2.3542155598075323, 3);
  sqcRYGate(q, -3.1400612196234428, 4);
  sqcRZGate(q, 2.867847083779503, 4);
  sqcRYGate(q, -2.8997886602581318, 5);
  sqcRZGate(q, -0.8103406944693932, 5);
  sqcRYGate(q, 3.140640304134458, 6);
  sqcRZGate(q, -1.4303541676134695, 6);
  sqcRYGate(q, -0.00990720849607385, 7);
  sqcRZGate(q, -0.5563306932581926, 7);
  sqcRYGate(q, 1.903666790376222, 8);
  sqcRZGate(q, -2.3323883459806396, 8);
  sqcRYGate(q, 0.09568508006815883, 9);
  sqcRZGate(q, -1.979891498749179, 9);
  sqcRYGate(q, -2.8642703540390606, 10);
  sqcRZGate(q, -0.6999954004964397, 10);
  sqcRYGate(q, 0.595644932147283, 11);
  sqcRZGate(q, 1.662461361921137, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 0.0337453871638278, 0);
  sqcRZGate(q, 1.38546548154536, 0);
  sqcRYGate(q, -2.727377834540857, 1);
  sqcRZGate(q, -0.6058041708912166, 1);
  sqcRYGate(q, 1.284838417659908, 2);
  sqcRZGate(q, 2.7599288215137054, 2);
  sqcRYGate(q, -2.8832667727335632, 3);
  sqcRZGate(q, -0.15015675688077118, 3);
  sqcRYGate(q, 2.880031136874814, 4);
  sqcRZGate(q, -0.7944455432743687, 4);
  sqcRYGate(q, -0.2161336469200874, 5);
  sqcRZGate(q, 0.5321975452033944, 5);
  sqcRYGate(q, -2.933988867659123, 6);
  sqcRZGate(q, -2.068885619023324, 6);
  sqcRYGate(q, 0.0018730749214670437, 7);
  sqcRZGate(q, -2.7863627971910074, 7);
  sqcRYGate(q, -1.1885872090959406, 8);
  sqcRZGate(q, -0.8831296783418885, 8);
  sqcRYGate(q, -2.2716994662999914, 9);
  sqcRZGate(q, -0.4631070062658509, 9);
  sqcRYGate(q, 2.03943652736129, 10);
  sqcRZGate(q, -0.20052886924381677, 10);
  sqcRYGate(q, 2.6383718084664594, 11);
  sqcRZGate(q, -1.9325059065770878, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.03877697869880503, 0);
  sqcRZGate(q, -1.9473308360729682, 0);
  sqcRYGate(q, -1.020252631839953, 1);
  sqcRZGate(q, 1.7215637069411382, 1);
  sqcRYGate(q, -1.848541868451754, 2);
  sqcRZGate(q, -2.296906592152716, 2);
  sqcRYGate(q, 1.2772805830963856, 3);
  sqcRZGate(q, -1.289414781537599, 3);
  sqcRYGate(q, 0.038882475664293904, 4);
  sqcRZGate(q, -1.3226626827494634, 4);
  sqcRYGate(q, -1.922468818607626, 5);
  sqcRZGate(q, -0.3365273412193048, 5);
  sqcRYGate(q, 0.003785228852862822, 6);
  sqcRZGate(q, -1.0177346834380394, 6);
  sqcRYGate(q, 0.012980078667396625, 7);
  sqcRZGate(q, 0.9893856029962691, 7);
  sqcRYGate(q, -3.115612077777821, 8);
  sqcRZGate(q, -0.1638348761072972, 8);
  sqcRYGate(q, 0.18838099485616056, 9);
  sqcRZGate(q, -0.29015990859566365, 9);
  sqcRYGate(q, 2.784866902720101, 10);
  sqcRZGate(q, 0.619112235911708, 10);
  sqcRYGate(q, 1.7911594675384936, 11);
  sqcRZGate(q, -0.9944491100332025, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 0.8469610844364215, 0);
  sqcRZGate(q, -2.3604061508902845, 0);
  sqcRYGate(q, -2.6459251796343923, 1);
  sqcRZGate(q, -2.1767969625991785, 1);
  sqcRYGate(q, 1.4252866429235844, 2);
  sqcRZGate(q, 0.14434465826734488, 2);
  sqcRYGate(q, -2.5521474706229634, 3);
  sqcRZGate(q, 1.766252242906925, 3);
  sqcRYGate(q, 2.709635331077525, 4);
  sqcRZGate(q, 1.4252475012204697, 4);
  sqcRYGate(q, 1.3513504027109402, 5);
  sqcRZGate(q, -3.1253138491315346, 5);
  sqcRYGate(q, 2.9245607404513527, 6);
  sqcRZGate(q, -1.61018040273043, 6);
  sqcRYGate(q, 3.1264453359367517, 7);
  sqcRZGate(q, -1.1560182640766528, 7);
  sqcRYGate(q, -2.8434023239444066, 8);
  sqcRZGate(q, -2.280391447039749, 8);
  sqcRYGate(q, -0.24379687773026884, 9);
  sqcRZGate(q, -0.6344168177150483, 9);
  sqcRYGate(q, 0.35078540746646336, 10);
  sqcRZGate(q, -2.253649868460789, 10);
  sqcRYGate(q, 1.324572198280129, 11);
  sqcRZGate(q, -0.21341805845629602, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 2.6310678071004343, 0);
  sqcRZGate(q, 0.9310324190151354, 0);
  sqcRYGate(q, 3.0525986134730383, 1);
  sqcRZGate(q, 2.6008705440018822, 1);
  sqcRYGate(q, 0.23061483350962234, 2);
  sqcRZGate(q, -2.2307730432392456, 2);
  sqcRYGate(q, 0.8818574560569401, 3);
  sqcRZGate(q, 3.0405499795871513, 3);
  sqcRYGate(q, 0.053837709347819285, 4);
  sqcRZGate(q, -2.405036043677906, 4);
  sqcRYGate(q, -0.09276862229715349, 5);
  sqcRZGate(q, 0.14359967539773344, 5);
  sqcRYGate(q, 0.01119403659224183, 6);
  sqcRZGate(q, -0.023468464201809702, 6);
  sqcRYGate(q, 3.1366895570034368, 7);
  sqcRZGate(q, 2.9222767198558763, 7);
  sqcRYGate(q, 2.934114598986014, 8);
  sqcRZGate(q, 1.9046730155412483, 8);
  sqcRYGate(q, 2.9223603862186884, 9);
  sqcRZGate(q, -2.2595981890366534, 9);
  sqcRYGate(q, -1.9666011261026861, 10);
  sqcRZGate(q, -2.8985482527400195, 10);
  sqcRYGate(q, 1.0388086751272478, 11);
  sqcRZGate(q, 3.1406296098746553, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 2.36630791824625, 0);
  sqcRZGate(q, 1.6761907714210453, 0);
  sqcRYGate(q, -3.056585884456411, 1);
  sqcRZGate(q, 1.5807150441723, 1);
  sqcRYGate(q, -0.025639041448595634, 2);
  sqcRZGate(q, 3.0392127184999147, 2);
  sqcRYGate(q, -1.36473100526254, 3);
  sqcRZGate(q, -3.0576244943069906, 3);
  sqcRYGate(q, -1.019984913997802, 4);
  sqcRZGate(q, -0.11993905123879411, 4);
  sqcRYGate(q, -1.756273706573733, 5);
  sqcRZGate(q, -1.375499933405051, 5);
  sqcRYGate(q, 2.9450205594178014, 6);
  sqcRZGate(q, 2.033280244077346, 6);
  sqcRYGate(q, -3.099884465961254, 7);
  sqcRZGate(q, -1.2635335845129216, 7);
  sqcRYGate(q, -0.5121730902960646, 8);
  sqcRZGate(q, 1.0270694504013913, 8);
  sqcRYGate(q, -0.4500969336023346, 9);
  sqcRZGate(q, 2.8460248465980946, 9);
  sqcRYGate(q, -0.7915751555558286, 10);
  sqcRZGate(q, 1.023677097533751, 10);
  sqcRYGate(q, 0.8768759265454248, 11);
  sqcRZGate(q, 0.2854551678220365, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -2.884959942202457, 0);
  sqcRZGate(q, -0.926534257048859, 0);
  sqcRYGate(q, 2.617673296132467, 1);
  sqcRZGate(q, 2.159443179792743, 1);
  sqcRYGate(q, -0.3084692383575153, 2);
  sqcRZGate(q, -0.5034064180736469, 2);
  sqcRYGate(q, 1.8754112986165223, 3);
  sqcRZGate(q, -0.8144888637084132, 3);
  sqcRYGate(q, 3.1297747818400525, 4);
  sqcRZGate(q, 0.38202528469065294, 4);
  sqcRYGate(q, -0.31712919706749254, 5);
  sqcRZGate(q, -1.5487257054358885, 5);
  sqcRYGate(q, 0.0022245249582079755, 6);
  sqcRZGate(q, -3.112794701999113, 6);
  sqcRYGate(q, -3.1352244318584748, 7);
  sqcRZGate(q, -1.2171396695669572, 7);
  sqcRYGate(q, 0.6337920751236235, 8);
  sqcRZGate(q, 1.5434816870328794, 8);
  sqcRYGate(q, -0.3288460854665569, 9);
  sqcRZGate(q, 0.16036606103137607, 9);
  sqcRYGate(q, -1.0983848653004822, 10);
  sqcRZGate(q, -0.7762890653536311, 10);
  sqcRYGate(q, 1.2603200826428589, 11);
  sqcRZGate(q, -2.3396486429694896, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.11746283170255664, 0);
  sqcRZGate(q, -1.5111234806033422, 0);
  sqcRYGate(q, 0.055726173817087776, 1);
  sqcRZGate(q, -2.965388232795973, 1);
  sqcRYGate(q, 0.023538363988277133, 2);
  sqcRZGate(q, -0.26105968032125937, 2);
  sqcRYGate(q, -2.5991610537823115, 3);
  sqcRZGate(q, 2.69333535547979, 3);
  sqcRYGate(q, -1.6335201578852478, 4);
  sqcRZGate(q, -1.6334018489686715, 4);
  sqcRYGate(q, 0.7173482082656131, 5);
  sqcRZGate(q, 1.4809092365877237, 5);
  sqcRYGate(q, 1.4133215094668325, 6);
  sqcRZGate(q, 2.6742393537268287, 6);
  sqcRYGate(q, -1.4335016151198814, 7);
  sqcRZGate(q, -2.7980384520601573, 7);
  sqcRYGate(q, 1.6724211275885796, 8);
  sqcRZGate(q, 1.3199305940146253, 8);
  sqcRYGate(q, 1.6508947641370764, 9);
  sqcRZGate(q, 1.1655027866046186, 9);
  sqcRYGate(q, -1.1248653782816138, 10);
  sqcRZGate(q, 0.3211843933430414, 10);
  sqcRYGate(q, -2.280915340803494, 11);
  sqcRZGate(q, -0.5223658699115976, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.49156091924917766, 0);
  sqcRZGate(q, -0.503671833590388, 0);
  sqcRYGate(q, -1.7917737946105738, 1);
  sqcRZGate(q, -1.7171397255421184, 1);
  sqcRYGate(q, -0.4965988681704836, 2);
  sqcRZGate(q, -1.0211129605471942, 2);
  sqcRYGate(q, -1.0176148763339654, 3);
  sqcRZGate(q, 0.7754318555962083, 3);
  sqcRYGate(q, 0.021747440956203512, 4);
  sqcRZGate(q, 1.2257910217614094, 4);
  sqcRYGate(q, -0.10923764766790311, 5);
  sqcRZGate(q, 2.9990832563598846, 5);
  sqcRYGate(q, -3.029743255552063, 6);
  sqcRZGate(q, -2.5160944810402617, 6);
  sqcRYGate(q, 0.001969316199827098, 7);
  sqcRZGate(q, 2.438733565720653, 7);
  sqcRYGate(q, 3.136698280309211, 8);
  sqcRZGate(q, 2.7014199032709154, 8);
  sqcRYGate(q, -0.5469565236716507, 9);
  sqcRZGate(q, 2.2709033826825085, 9);
  sqcRYGate(q, 0.013231285784627289, 10);
  sqcRZGate(q, 0.8971519462338522, 10);
  sqcRYGate(q, -1.7336422168054764, 11);
  sqcRZGate(q, 3.093926363436755, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.265397052823007, 0);
  sqcRZGate(q, -2.84858052087531, 0);
  sqcRYGate(q, -0.2918131087970894, 1);
  sqcRZGate(q, -1.4036429074994254, 1);
  sqcRYGate(q, -3.090682622173636, 2);
  sqcRZGate(q, -0.24965595055464965, 2);
  sqcRYGate(q, -0.15042821329771527, 3);
  sqcRZGate(q, -0.24076480747985318, 3);
  sqcRYGate(q, 2.778717946615783, 4);
  sqcRZGate(q, -1.8436273439487945, 4);
  sqcRYGate(q, 2.8710425921527154, 5);
  sqcRZGate(q, 2.949314866563414, 5);
  sqcRYGate(q, 2.9334595065067757, 6);
  sqcRZGate(q, -2.6087145822778908, 6);
  sqcRYGate(q, -0.1676876352114629, 7);
  sqcRZGate(q, 2.4205439588860966, 7);
  sqcRYGate(q, 0.45094656567883185, 8);
  sqcRZGate(q, 1.7740224112744443, 8);
  sqcRYGate(q, 2.4583575506609705, 9);
  sqcRZGate(q, 1.781106336177349, 9);
  sqcRYGate(q, -0.5209363964609937, 10);
  sqcRZGate(q, -1.0942976950068992, 10);
  sqcRYGate(q, 1.0068552918111833, 11);
  sqcRZGate(q, -1.59733939612019, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.7846524660117131, 0);
  sqcRZGate(q, -2.7980060901295447, 0);
  sqcRYGate(q, -2.963304033821116, 1);
  sqcRZGate(q, 2.95994690342319, 1);
  sqcRYGate(q, -0.05241138212059138, 2);
  sqcRZGate(q, 0.21428419021777897, 2);
  sqcRYGate(q, 0.21319087899233222, 3);
  sqcRZGate(q, -1.5991637726923456, 3);
  sqcRYGate(q, -0.035440607135540876, 4);
  sqcRZGate(q, 0.21898835668787694, 4);
  sqcRYGate(q, 3.0265804556356306, 5);
  sqcRZGate(q, 2.4440354075412194, 5);
  sqcRYGate(q, 0.14057554527178473, 6);
  sqcRZGate(q, -3.0462226199587783, 6);
  sqcRYGate(q, -0.004642224136671409, 7);
  sqcRZGate(q, -0.5102242644671566, 7);
  sqcRYGate(q, 0.006289217369676692, 8);
  sqcRZGate(q, -0.1381312322093322, 8);
  sqcRYGate(q, -3.1368971534506627, 9);
  sqcRZGate(q, -0.6755988034431859, 9);
  sqcRYGate(q, -2.971708294981996, 10);
  sqcRZGate(q, 1.7707839419627478, 10);
  sqcRYGate(q, 1.5586353768461223, 11);
  sqcRZGate(q, 1.912370601258332, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.969945097554592, 0);
  sqcRZGate(q, -1.3850439149894234, 0);
  sqcRYGate(q, -1.896874615350348, 1);
  sqcRZGate(q, -0.42269393135163114, 1);
  sqcRYGate(q, -3.091679274729322, 2);
  sqcRZGate(q, 1.0826400678267587, 2);
  sqcRYGate(q, 1.4957317443451392, 3);
  sqcRZGate(q, -0.10033320020548687, 3);
  sqcRYGate(q, 1.384697004336734, 4);
  sqcRZGate(q, 2.105850903971571, 4);
  sqcRYGate(q, -0.31066961006985355, 5);
  sqcRZGate(q, 1.718068384410108, 5);
  sqcRYGate(q, -1.5282584612716548, 6);
  sqcRZGate(q, -0.9234201862419686, 6);
  sqcRYGate(q, 1.4749932867478586, 7);
  sqcRZGate(q, -2.5261193262840433, 7);
  sqcRYGate(q, 1.4374677118192187, 8);
  sqcRZGate(q, -1.8041762750739836, 8);
  sqcRYGate(q, -0.293210176193039, 9);
  sqcRZGate(q, -1.1977060529359393, 9);
  sqcRYGate(q, 1.3049614557854592, 10);
  sqcRZGate(q, -1.274080910292011, 10);
  sqcRYGate(q, -1.6180324782956899, 11);
  sqcRZGate(q, 0.23312587857000097, 11);

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
