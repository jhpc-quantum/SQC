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

  sqcRYGate(q, -1.0766465891277968, 0);
  sqcRYGate(q, -0.16122629524728183, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7396288156744921, 0);
  sqcRYGate(q, 0.22636885142900665, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6317843944672894, 2);
  sqcRYGate(q, -1.9887971307114274, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.80114080008893, 2);
  sqcRYGate(q, 1.7013889893576506, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1274640331245227, 4);
  sqcRYGate(q, 1.0860986678638958, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9561114273179998, 4);
  sqcRYGate(q, -0.22297876451995968, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.0298118858514353, 6);
  sqcRYGate(q, 1.1814180107164955, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.551857004173482, 6);
  sqcRYGate(q, 1.274763520052743, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9294371757288538, 0);
  sqcRYGate(q, -0.7070680889654684, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7483614753168237, 0);
  sqcRYGate(q, -3.0288155562968826, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2916144905695908, 2);
  sqcRYGate(q, 1.4054359119582642, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.3915540291119708, 2);
  sqcRYGate(q, 1.8013123635433645, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.196413516289687, 4);
  sqcRYGate(q, -1.795594454615565, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.596811178576, 4);
  sqcRYGate(q, -2.7517757401057317, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.24860346487896057, 1);
  sqcRYGate(q, -0.4607568110926773, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.01628444450689451, 1);
  sqcRYGate(q, -2.2018127321517786, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4444850383083745, 3);
  sqcRYGate(q, -2.9460608662958907, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.080116601038503, 3);
  sqcRYGate(q, -0.9625796146629515, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.073922319211281, 5);
  sqcRYGate(q, -0.9194536611779115, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.3451607631648907, 5);
  sqcRYGate(q, -1.4457907172818365, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.03672291807823683, 0);
  sqcRYGate(q, -0.9142890144343531, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.11294705821454532, 0);
  sqcRYGate(q, -2.4599399444366252, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8795277077466865, 2);
  sqcRYGate(q, -0.9296821822912987, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1767246905230833, 2);
  sqcRYGate(q, 0.1005321316291372, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5646150821640531, 4);
  sqcRYGate(q, -0.4165350419255236, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.3675529584707466, 4);
  sqcRYGate(q, -0.4011108740699896, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.028491373078390225, 6);
  sqcRYGate(q, 2.0418483637658897, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0298779544836476, 6);
  sqcRYGate(q, -0.6705922410373916, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5072416309433883, 0);
  sqcRYGate(q, 2.123652496321865, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1817753561946287, 0);
  sqcRYGate(q, 1.4664892209291134, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.29929501156302, 2);
  sqcRYGate(q, -3.102451950630127, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.8763055241738387, 2);
  sqcRYGate(q, 1.0465466771109084, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.5660887757405133, 4);
  sqcRYGate(q, -0.9397973786995433, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.9970394215888084, 4);
  sqcRYGate(q, 0.6548925129150565, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.4381589285507324, 1);
  sqcRYGate(q, 2.057024181512936, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4499170296445199, 1);
  sqcRYGate(q, -1.4434997043656148, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7879040787572711, 3);
  sqcRYGate(q, -0.19950025400163174, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.895983558969604, 3);
  sqcRYGate(q, -1.614558065118299, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.01527923469075, 5);
  sqcRYGate(q, -2.3942015021525536, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.9546627846187521, 5);
  sqcRYGate(q, -2.069131626687222, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.668190584862113, 0);
  sqcRYGate(q, 0.6054307477634793, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5848213717436757, 0);
  sqcRYGate(q, 2.4512830672240344, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.478568961383127, 2);
  sqcRYGate(q, 0.17362113222743553, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.728593835852555, 2);
  sqcRYGate(q, -1.9909551787628583, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7921766023628373, 4);
  sqcRYGate(q, 2.4773468558693135, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.0985900192620415, 4);
  sqcRYGate(q, 1.7961387730881888, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2463035387313344, 6);
  sqcRYGate(q, 0.22770517330183004, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.662102541432245, 6);
  sqcRYGate(q, -1.544765226040819, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.6467428970985427, 0);
  sqcRYGate(q, -0.8477957721836111, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9442026950357458, 0);
  sqcRYGate(q, -1.2936591104929949, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8935101644962293, 2);
  sqcRYGate(q, 2.906028053496277, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.3138970999675292, 2);
  sqcRYGate(q, -1.4617216097400023, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.7791298531206214, 4);
  sqcRYGate(q, -0.6104476246789714, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.0145456734957916, 4);
  sqcRYGate(q, -3.012708745134535, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.1887693101794063, 1);
  sqcRYGate(q, 1.8819601245776685, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6699569081506174, 1);
  sqcRYGate(q, -2.3678212886711716, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7698054951441596, 3);
  sqcRYGate(q, -2.0113167003427646, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.8929841543723527, 3);
  sqcRYGate(q, 2.8774176896698345, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.6804611606019532, 5);
  sqcRYGate(q, -2.0530870541822814, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.4128808987506911, 5);
  sqcRYGate(q, 1.8752711841020746, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.5977061897268945, 0);
  sqcRYGate(q, -2.4033865158190673, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2528053323567407, 0);
  sqcRYGate(q, -2.352004315022704, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.075813080818814, 2);
  sqcRYGate(q, 1.1449210343014107, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5168406027897066, 2);
  sqcRYGate(q, -0.36691945251935376, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3064832272551317, 4);
  sqcRYGate(q, 2.5405603666545615, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.681619724948095, 4);
  sqcRYGate(q, -0.30104423142370074, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5958546535642191, 6);
  sqcRYGate(q, 1.98872486425082, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0344735667138423, 6);
  sqcRYGate(q, -2.4247907588045057, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.023748964990919497, 0);
  sqcRYGate(q, -1.1861585758581645, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7455552500386178, 0);
  sqcRYGate(q, -2.4336205215903903, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.25567816422177464, 2);
  sqcRYGate(q, -2.25215089959033, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.612684977586288, 2);
  sqcRYGate(q, 1.3290725525332996, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.9911582575452234, 4);
  sqcRYGate(q, -1.3186115840976713, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.7456828042546668, 4);
  sqcRYGate(q, 2.9368526922053166, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.861652566041019, 1);
  sqcRYGate(q, 0.23650225939107367, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.310022010460426, 1);
  sqcRYGate(q, -1.11086059566873, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.39369344094167, 3);
  sqcRYGate(q, 1.7033686279345714, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.868597407444394, 3);
  sqcRYGate(q, 0.07324235016448366, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.06518526562109626, 5);
  sqcRYGate(q, -1.1881514590834894, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.9145558265109366, 5);
  sqcRYGate(q, 3.1278054698982443, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.8834010263422227, 0);
  sqcRYGate(q, -1.5164890568199392, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1788047772121137, 0);
  sqcRYGate(q, -3.0758580224015555, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.05627177514925208, 2);
  sqcRYGate(q, 1.7796076203405002, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9847774910975398, 2);
  sqcRYGate(q, -1.0975465909505007, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.42919987767453766, 4);
  sqcRYGate(q, -0.8792070120155433, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3071915130019915, 4);
  sqcRYGate(q, -0.49339567424733305, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.675051469409909, 6);
  sqcRYGate(q, -2.6386045262568785, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.19986722997692397, 6);
  sqcRYGate(q, -1.7607114375933675, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2876473509318334, 0);
  sqcRYGate(q, -1.386307892684301, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.173950478421616, 0);
  sqcRYGate(q, -3.0590918668800007, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6312582684430106, 2);
  sqcRYGate(q, 0.37257456881093987, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.2373836376591836, 2);
  sqcRYGate(q, 2.5723160477327887, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.8799785661911423, 4);
  sqcRYGate(q, 1.3964629735040317, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.6758249629834802, 4);
  sqcRYGate(q, -2.035096726570369, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.1430364515651075, 1);
  sqcRYGate(q, 0.6702613922023577, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.094199023715979, 1);
  sqcRYGate(q, -0.16123281054040817, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8954972658712235, 3);
  sqcRYGate(q, 2.7056813254395107, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.1077176997531963, 3);
  sqcRYGate(q, -2.92142564257209, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.814305820250865, 5);
  sqcRYGate(q, 2.1343029587059346, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.1027692636039816, 5);
  sqcRYGate(q, -2.3506331046631845, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.18035535678800496, 0);
  sqcRYGate(q, 0.9006209291176416, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0871861179770046, 0);
  sqcRYGate(q, -0.09413768306885711, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.07618870313830506, 2);
  sqcRYGate(q, -0.568803080098907, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8446703847185284, 2);
  sqcRYGate(q, 0.3273437777911288, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6399905954439267, 4);
  sqcRYGate(q, 2.7004796826153563, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1939295046168965, 4);
  sqcRYGate(q, 2.405875352283628, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5825980221591651, 6);
  sqcRYGate(q, -0.7773016064491386, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.796273162798882, 6);
  sqcRYGate(q, -0.700517242492948, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.5458473807349407, 0);
  sqcRYGate(q, 0.8878463979331944, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6423985903861038, 0);
  sqcRYGate(q, 2.671573302889838, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5882203230515167, 2);
  sqcRYGate(q, -2.5491704062595777, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.5610873113582424, 2);
  sqcRYGate(q, -2.213359067300164, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.0643421966334052, 4);
  sqcRYGate(q, -0.5812235777220796, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.874751487281384, 4);
  sqcRYGate(q, -0.618151674114084, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.5699352104084545, 1);
  sqcRYGate(q, 0.6279454073667967, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2530216210191174, 1);
  sqcRYGate(q, 1.0877075151809712, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9150518991747061, 3);
  sqcRYGate(q, 2.739994855287815, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.40128940899960835, 3);
  sqcRYGate(q, -0.3086318480606646, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.3552708360113748, 5);
  sqcRYGate(q, -1.3147870792771712, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.4650598053622597, 5);
  sqcRYGate(q, -0.6736908638530279, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.6544906029720714, 0);
  sqcRYGate(q, 1.7603578247293292, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5394733380195893, 0);
  sqcRYGate(q, 0.9222090075907712, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.689838797154859, 2);
  sqcRYGate(q, 0.5902609034891001, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.829554608812888, 2);
  sqcRYGate(q, -1.3073429459075945, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8708772097476856, 4);
  sqcRYGate(q, -0.030517654574560883, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2367576719480797, 4);
  sqcRYGate(q, -1.8864189331049823, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.3532316304926293, 6);
  sqcRYGate(q, 1.4303359429631506, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1197703091381257, 6);
  sqcRYGate(q, 3.139933801700345, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.8202451012041155, 0);
  sqcRYGate(q, -3.1231658612603654, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.0877231122421893, 0);
  sqcRYGate(q, -2.9623192253048685, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.03265841684898785, 2);
  sqcRYGate(q, 2.9621668991881758, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.8985182357967414, 2);
  sqcRYGate(q, 1.8792809146750653, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.26401870118623094, 4);
  sqcRYGate(q, -2.0881900220221223, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.0247136041850684, 4);
  sqcRYGate(q, -1.5045268574309656, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.5338049717791664, 1);
  sqcRYGate(q, 2.1110909694639965, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9225912148985698, 1);
  sqcRYGate(q, -2.4025526397234755, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.20390355981821617, 3);
  sqcRYGate(q, -2.580830642292963, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.0791278272365075, 3);
  sqcRYGate(q, -2.590521377156009, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.6153308998904103, 5);
  sqcRYGate(q, -1.1678282543711898, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.08133791937665642, 5);
  sqcRYGate(q, -1.3035436772118407, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.20682918557189867, 0);
  sqcRYGate(q, 1.940978262484856, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0559600240440954, 0);
  sqcRYGate(q, -1.3952571216413512, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.291127203921303, 2);
  sqcRYGate(q, 1.4783216810234145, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.79676868596479, 2);
  sqcRYGate(q, -2.8246342799758155, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9758859344944093, 4);
  sqcRYGate(q, -1.2335816028611022, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.5825335415096986, 4);
  sqcRYGate(q, -1.172255009432241, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.8969318383500613, 6);
  sqcRYGate(q, -0.3593827617692367, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8510835612354084, 6);
  sqcRYGate(q, -1.2516029873351622, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6212178225706229, 0);
  sqcRYGate(q, -2.63364223499354, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.649583753272444, 0);
  sqcRYGate(q, -1.1496362913769653, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.43412118102266994, 2);
  sqcRYGate(q, 1.5650608401272974, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.0689808518020607, 2);
  sqcRYGate(q, 1.5120910318590495, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.36869816914818987, 4);
  sqcRYGate(q, -3.015423414580155, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.4918525423641542, 4);
  sqcRYGate(q, 1.652828709743886, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.486521388956298, 1);
  sqcRYGate(q, -2.0351477123483432, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8243164334960329, 1);
  sqcRYGate(q, -0.2753484753023363, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0260469551406652, 3);
  sqcRYGate(q, -2.144757787348722, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.857199280903161, 3);
  sqcRYGate(q, 2.004316584182713, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.0684785213442147, 5);
  sqcRYGate(q, -0.846169570450767, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.07182554998500745, 5);
  sqcRYGate(q, -0.3636340193708982, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.0259919779007385, 0);
  sqcRYGate(q, 0.1924504681869588, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7175115544882349, 0);
  sqcRYGate(q, 1.2953357698065613, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.387361985684233, 2);
  sqcRYGate(q, 3.0227625901510464, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5494581969106105, 2);
  sqcRYGate(q, -1.7544671273446262, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.979845681606337, 4);
  sqcRYGate(q, 1.7825452994564035, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2877332589875747, 4);
  sqcRYGate(q, 2.714764684177972, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.025787843702451244, 6);
  sqcRYGate(q, 0.06372556249939265, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.5703415714080387, 6);
  sqcRYGate(q, -0.0073454492332691145, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.015402617165018562, 0);
  sqcRYGate(q, 0.8494855054308087, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7439859088526114, 0);
  sqcRYGate(q, -2.8453016186540068, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6576348549444333, 2);
  sqcRYGate(q, 1.1051063862622335, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.8253653090032751, 2);
  sqcRYGate(q, -1.3811445070777162, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.810273719971774, 4);
  sqcRYGate(q, 2.8230159821489167, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.7826188861262393, 4);
  sqcRYGate(q, 1.0472140466524957, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.9452606836724682, 1);
  sqcRYGate(q, 1.5843398721039226, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2985330944203506, 1);
  sqcRYGate(q, -0.7866051725438853, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.397056492117561, 3);
  sqcRYGate(q, -2.330625993345051, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.056946747149915794, 3);
  sqcRYGate(q, -2.3724039170302076, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.192902313642004, 5);
  sqcRYGate(q, 2.5725023412595847, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.6004998042146665, 5);
  sqcRYGate(q, 1.9385623854012541, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.404684888890526, 0);
  sqcRYGate(q, -0.5339978175556571, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.25847521957624586, 0);
  sqcRYGate(q, -1.182609493923743, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.647764409379711, 2);
  sqcRYGate(q, -2.422640461218701, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.10758846269112966, 2);
  sqcRYGate(q, -1.9251978266837484, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7192044637704, 4);
  sqcRYGate(q, 0.7316396377973307, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.349407394629082, 4);
  sqcRYGate(q, 0.8621290102644874, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.14480663759427514, 6);
  sqcRYGate(q, 1.286927277800245, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.563951836639167, 6);
  sqcRYGate(q, -1.0578666217316952, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.159692230678683, 0);
  sqcRYGate(q, 1.4906215232477775, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.142167737046245, 0);
  sqcRYGate(q, 0.8155735646001342, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0784713850220333, 2);
  sqcRYGate(q, -1.952084822778823, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.6822103067783318, 2);
  sqcRYGate(q, 0.12787048508786028, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.7851924763943328, 4);
  sqcRYGate(q, 1.552977731721632, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.0636197005047148, 4);
  sqcRYGate(q, -1.0402954607276058, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.5562126394456461, 1);
  sqcRYGate(q, 0.4230592015016488, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.158979915412946, 1);
  sqcRYGate(q, 3.0196469348768025, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8213881187341916, 3);
  sqcRYGate(q, 0.5432562570718753, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.4060366195303873, 3);
  sqcRYGate(q, -1.135807811214888, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.728992207478055, 5);
  sqcRYGate(q, -1.6244384030701884, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.305343552001336, 5);
  sqcRYGate(q, 0.9915176815687001, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.6115964777884333, 0);
  sqcRYGate(q, -1.6602174182471274, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.160809178988017, 0);
  sqcRYGate(q, -1.7988531616351784, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9596933336798505, 2);
  sqcRYGate(q, 1.345306894599264, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4604671665599547, 2);
  sqcRYGate(q, 1.5017935494039563, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.009908563290824, 4);
  sqcRYGate(q, -1.0485831805664072, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9664503878246067, 4);
  sqcRYGate(q, 0.19266779917905552, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6949189168881628, 6);
  sqcRYGate(q, -1.4077030071250904, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5614608305058393, 6);
  sqcRYGate(q, -3.0926288406457876, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.451838962857475, 0);
  sqcRYGate(q, 3.0742178583482307, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.9181684079474985, 0);
  sqcRYGate(q, -0.9727505370355726, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.07042399961017141, 2);
  sqcRYGate(q, -2.292712943989105, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.020366864241, 2);
  sqcRYGate(q, 0.016503347332451845, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.053624868640068, 4);
  sqcRYGate(q, 0.07782193347899449, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.8229970712032326, 4);
  sqcRYGate(q, 0.05196889200347892, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.6698854065954487, 1);
  sqcRYGate(q, -2.4412224792358983, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.052748657903471, 1);
  sqcRYGate(q, 1.3240287008261236, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7188745941259216, 3);
  sqcRYGate(q, 2.729607422738558, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.9784652203846838, 3);
  sqcRYGate(q, -1.0111118027864965, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.7365513861380824, 5);
  sqcRYGate(q, 0.38754644938917343, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.7004751352551293, 5);
  sqcRYGate(q, 1.6894119132976035, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.188216290468183, 0);
  sqcRYGate(q, -1.4947506834443134, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4586555831639685, 0);
  sqcRYGate(q, 2.432808142252902, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2166864774546866, 2);
  sqcRYGate(q, -2.424412009429791, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1781031800564534, 2);
  sqcRYGate(q, 0.6864294695483437, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4138365518041062, 4);
  sqcRYGate(q, -1.2708638788132687, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.3947088865617827, 4);
  sqcRYGate(q, -2.4113522052612506, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2745636387738664, 6);
  sqcRYGate(q, 0.022668142916410824, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.11542585035524636, 6);
  sqcRYGate(q, -2.108837133665232, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8914569001899615, 0);
  sqcRYGate(q, -1.7819370202815596, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6913576805715627, 0);
  sqcRYGate(q, -0.4281561386137138, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.828151039819537, 2);
  sqcRYGate(q, -0.2217600910514544, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.7743713948701734, 2);
  sqcRYGate(q, 0.24327800021913779, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.9979298743177076, 4);
  sqcRYGate(q, 1.479185922941456, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.0197342682076487, 4);
  sqcRYGate(q, -2.2764213482262052, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.9546711572442799, 1);
  sqcRYGate(q, -0.2081681705901901, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.33074452992039666, 1);
  sqcRYGate(q, 0.47609168105398697, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5937550184003083, 3);
  sqcRYGate(q, 1.6434057742358945, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.23391826709815566, 3);
  sqcRYGate(q, 1.6252280962901555, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.49453711184061855, 5);
  sqcRYGate(q, 1.869364266163228, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.4694912380521845, 5);
  sqcRYGate(q, 0.7213157595488572, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.85038007109973, 0);
  sqcRYGate(q, -0.4515253219627984, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.015401628898801, 0);
  sqcRYGate(q, -2.619188577996398, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2431100382129427, 2);
  sqcRYGate(q, -1.0560312719001828, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.679368362342793, 2);
  sqcRYGate(q, -1.3752011067175296, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5749273962124883, 4);
  sqcRYGate(q, 2.894742677466219, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7258918903684783, 4);
  sqcRYGate(q, -2.9258795419414065, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0426198678991425, 6);
  sqcRYGate(q, 1.8116807443122678, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3771582705243754, 6);
  sqcRYGate(q, 0.48314245051397453, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7864806265482425, 0);
  sqcRYGate(q, -2.7979745236167446, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.887216724471229, 0);
  sqcRYGate(q, -1.094143782410537, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.770256540832331, 2);
  sqcRYGate(q, 1.9132864957134597, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.090896052065036, 2);
  sqcRYGate(q, 0.008158956506035153, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.8020034961645779, 4);
  sqcRYGate(q, -1.0890711445984689, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.3604957878041968, 4);
  sqcRYGate(q, -2.8088858767879996, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.8924519508132365, 1);
  sqcRYGate(q, -0.9099042194493565, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.1162739876145964, 1);
  sqcRYGate(q, -0.03083624557375675, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2828375156956795, 3);
  sqcRYGate(q, -0.821240855309349, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.9745726467385172, 3);
  sqcRYGate(q, 2.211986835873458, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.09277196710510616, 5);
  sqcRYGate(q, 2.4515139251342144, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.410442679900779, 5);
  sqcRYGate(q, 1.4699752594359876, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.467554446184018, 0);
  sqcRYGate(q, 2.525177774566882, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3424450098513958, 0);
  sqcRYGate(q, -1.5324073547294974, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.053967827759295, 2);
  sqcRYGate(q, -2.859925826421835, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.432428001486338, 2);
  sqcRYGate(q, -2.7537410510011937, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4547846680437875, 4);
  sqcRYGate(q, -0.46464699458423103, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8420285553263464, 4);
  sqcRYGate(q, -2.5431575172719003, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.36024504705057653, 6);
  sqcRYGate(q, 2.715750989823583, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.641311726133373, 6);
  sqcRYGate(q, 0.8307632302782246, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3908997909566048, 0);
  sqcRYGate(q, 2.6848713014698764, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.3584970755265209, 0);
  sqcRYGate(q, 1.092227357446662, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0083883967523333, 2);
  sqcRYGate(q, 1.2675123305899536, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.5153199486401201, 2);
  sqcRYGate(q, 2.638887818140642, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.37957459747964745, 4);
  sqcRYGate(q, 2.7398999487151583, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.0753060410122766, 4);
  sqcRYGate(q, -2.9049663682079427, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.7452883088170106, 1);
  sqcRYGate(q, 0.12249619752833406, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3493586640415813, 1);
  sqcRYGate(q, -2.3688372826276103, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3800663896502465, 3);
  sqcRYGate(q, -1.7954934280924082, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.4075946346593522, 3);
  sqcRYGate(q, 1.1303953859881941, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.7630436032375956, 5);
  sqcRYGate(q, -1.6899900234075533, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.6303712209988381, 5);
  sqcRYGate(q, 0.5538724657920581, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.6389829120368136, 0);
  sqcRYGate(q, -1.0971571193285052, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9501480684407698, 0);
  sqcRYGate(q, 0.31291879084226615, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5934936421292383, 2);
  sqcRYGate(q, 1.045767193442759, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0221901939637092, 2);
  sqcRYGate(q, 1.0870773475252324, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.097826708752153, 4);
  sqcRYGate(q, 0.8372215053541603, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.593806321983293, 4);
  sqcRYGate(q, 3.0530176420963144, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.972775883405888, 6);
  sqcRYGate(q, 0.12383165549910036, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.7184956193038117, 6);
  sqcRYGate(q, -1.4439292290765948, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.802520347323096, 0);
  sqcRYGate(q, 0.03086999008279978, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.004711694815732, 0);
  sqcRYGate(q, -1.087360801343718, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.2522839614463912, 2);
  sqcRYGate(q, -2.749103049394807, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.5561099104876295, 2);
  sqcRYGate(q, -0.6156739757023901, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.9197689522311929, 4);
  sqcRYGate(q, -0.7542539112481642, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.7244113644027346, 4);
  sqcRYGate(q, -0.7137846498647713, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.192793484252468, 1);
  sqcRYGate(q, 2.0979385225293736, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.061348431990558616, 1);
  sqcRYGate(q, -0.8731497949235404, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.92834293734383, 3);
  sqcRYGate(q, -0.1237489609491634, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.7514498856078449, 3);
  sqcRYGate(q, 2.2666496980686315, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.6533307646673276, 5);
  sqcRYGate(q, -0.22987316311253814, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.3497168634041774, 5);
  sqcRYGate(q, -0.6299505547449195, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.34823478633466, 0);
  sqcRYGate(q, -2.753136550420582, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8185555918743987, 0);
  sqcRYGate(q, -1.5993428986443368, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1802927433349857, 2);
  sqcRYGate(q, 0.4509850704627466, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8313072163431432, 2);
  sqcRYGate(q, 1.4877785081913257, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.06610941156213158, 4);
  sqcRYGate(q, -2.011829024785135, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.4151620133515804, 4);
  sqcRYGate(q, -0.9984310662740175, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5459485739091363, 6);
  sqcRYGate(q, -2.5172133394034666, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.889917221273398, 6);
  sqcRYGate(q, 0.7351351416407343, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.829118944487831, 0);
  sqcRYGate(q, -2.193795162349404, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.43897295932367436, 0);
  sqcRYGate(q, 1.7992670945598372, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.25372155758686077, 2);
  sqcRYGate(q, 0.590618158315019, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.6715337891676297, 2);
  sqcRYGate(q, 0.8729417893897966, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.669998717098275, 4);
  sqcRYGate(q, -1.4719274372784885, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.0365690877263014, 4);
  sqcRYGate(q, 2.4120053893545617, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.8716317997223663, 1);
  sqcRYGate(q, 2.2035433537998608, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.49868568974298716, 1);
  sqcRYGate(q, 1.2828655208834492, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.685395035160937, 3);
  sqcRYGate(q, -0.29195179615110733, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.7984159308567031, 3);
  sqcRYGate(q, 0.5146175723577452, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.7641023163429876, 5);
  sqcRYGate(q, 2.805354640387211, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.9169988983262973, 5);
  sqcRYGate(q, 0.162082936954314, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.219414164173328, 0);
  sqcRYGate(q, 3.041489319620568, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8404653205932613, 0);
  sqcRYGate(q, -1.8170760276974842, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5601539887418956, 2);
  sqcRYGate(q, -2.5889433153322092, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5120886505127301, 2);
  sqcRYGate(q, 0.09682713069940353, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8496869525204964, 4);
  sqcRYGate(q, 0.9640078866666718, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.076414122755251, 4);
  sqcRYGate(q, 2.86691298256663, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.0455395383219903, 6);
  sqcRYGate(q, 0.6364573361146892, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.464683714090625, 6);
  sqcRYGate(q, -2.6650963153218648, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9339502916652451, 0);
  sqcRYGate(q, -2.057363187785918, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.380779218900211, 0);
  sqcRYGate(q, -2.1734267062338297, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.006957585569855, 2);
  sqcRYGate(q, -0.4146108935051611, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.739468330830899, 2);
  sqcRYGate(q, -2.654443091424321, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.5625296810594944, 4);
  sqcRYGate(q, 0.5963570327543621, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.3454465138915603, 4);
  sqcRYGate(q, -0.7821188635945645, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.9352090705440111, 1);
  sqcRYGate(q, -1.4540151426833874, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7458708753749583, 1);
  sqcRYGate(q, -2.628165242289476, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8192417989645302, 3);
  sqcRYGate(q, -0.6792002610463213, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.5374250130060275, 3);
  sqcRYGate(q, -0.49192585117527887, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.9241418974389042, 5);
  sqcRYGate(q, 0.9662067825999526, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.960027165326247, 5);
  sqcRYGate(q, -2.6962670048272344, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.3069970131955158, 0);
  sqcRYGate(q, 1.6435584224522561, 1);
  sqcRYGate(q, 1.285859417631437, 2);
  sqcRYGate(q, 2.7036032679288913, 3);
  sqcRYGate(q, 0.6361646830596376, 4);
  sqcRYGate(q, -2.7816844463657735, 5);
  sqcRYGate(q, 1.8130443478132303, 6);
  sqcRYGate(q, -0.39540393173360744, 7);

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
