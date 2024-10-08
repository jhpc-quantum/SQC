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

  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.06340495084248311, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.07908655193777256, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.002772022276861578, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.021239494661756883, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.08553060393547902, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.07933179251277822, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.06407130297236273, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.5284335826438928, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.3493168649850515, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.08794462786691873, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.3883958680089642, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.6327338584083172, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.4341040162793671, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.9095315351045208, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.006237546258998441, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.5555510230734467, 0);
  sqcRZGate(q, -0.2944353516519832, 1);
  sqcRZGate(q, -0.12107769355652757, 2);
  sqcRZGate(q, -0.8034046121769328, 3);
  sqcRZGate(q, -0.7348732432376005, 4);
  sqcRZGate(q, -0.47373637694879905, 5);
  sqcRZGate(q, -0.4897590957508795, 6);
  sqcRZGate(q, -0.2714924762717476, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.285803173071656, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.49276752553202147, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.08152238090826668, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.02197711844700179, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.006918503842016106, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.6391486970150372, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.10443276511986914, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.460200957650636, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.6749381488838729, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.983139895700109, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.810166778481662, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.7720255138350732, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.7938091096719225, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.5574401423485861, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.017823001437942285, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.5480957184553649, 0);
  sqcRZGate(q, -0.3421610708530886, 1);
  sqcRZGate(q, -0.2144053104171296, 2);
  sqcRZGate(q, -0.8164528980230175, 3);
  sqcRZGate(q, -0.6519945485260089, 4);
  sqcRZGate(q, -0.5446382468169564, 5);
  sqcRZGate(q, -0.5839388969118012, 6);
  sqcRZGate(q, -0.19884644753033726, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.16036836176438146, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.30627939072322957, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.0001818376443004678, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.0023743071997284495, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.028820548225960058, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.3787330217926268, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.17216483875363767, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.48732946675161315, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.5794846345038392, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.7097915246659438, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.7467904127318651, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.5286645525765691, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.8194979600497863, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.6107771347829024, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.05028700765492899, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.48166790398819803, 0);
  sqcRZGate(q, -0.33182813129886746, 1);
  sqcRZGate(q, -0.447926551808693, 2);
  sqcRZGate(q, -0.5581448922707891, 3);
  sqcRZGate(q, -0.30052318218327134, 4);
  sqcRZGate(q, -0.31330879727411187, 5);
  sqcRZGate(q, -0.3170857422182358, 6);
  sqcRZGate(q, -0.5678205747435904, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.6082333930195912, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.12986685057286138, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.19367586269855533, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.03261772296255255, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.9263519115557605, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.40271492673547554, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.07619313425575885, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.8354928316433289, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.07951833111782507, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.11786417481390711, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.9201835953292745, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.3100298421716719, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.4749052417491957, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.8135254522807627, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.01943995502797196, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.35169834447625914, 0);
  sqcRZGate(q, -0.3530828126308853, 1);
  sqcRZGate(q, -0.46462599855433545, 2);
  sqcRZGate(q, -0.11199410114725479, 3);
  sqcRZGate(q, -0.17088153738047818, 4);
  sqcRZGate(q, 0.00547949931705147, 5);
  sqcRZGate(q, -0.14698133229688237, 6);
  sqcRZGate(q, -0.4358565525904178, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.18831934776722087, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.03566020291182431, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.009354797468373643, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.33063733968920395, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.5193087958449325, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.5068754979111861, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.01850681801144773, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.5646627796295788, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.19974367937437704, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.21539045723001954, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 1.0150110093615916, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.7330652486511445, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.0634108390212646, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.6880164683333708, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.10617147604899282, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.2149225077645432, 0);
  sqcRZGate(q, -0.35386997010257293, 1);
  sqcRZGate(q, -0.2554451681878548, 2);
  sqcRZGate(q, -0.012401444517124646, 3);
  sqcRZGate(q, 0.00960762207312307, 4);
  sqcRZGate(q, -0.009530740450888113, 5);
  sqcRZGate(q, -0.00781853232364614, 6);
  sqcRZGate(q, -0.4248072369637276, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.057773643527747776, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.23173156565821898, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.04189286181408237, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.11694610775311227, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.5013111378154226, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.17502451020038212, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.025698648065127325, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.2808670889102857, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.12638455075944233, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.13610905004700066, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 1.2532319962664042, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.9836482373803189, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.495872308500356, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.7203251554803013, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.15687800753506476, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.143564735768799, 0);
  sqcRZGate(q, -0.3137792913104948, 1);
  sqcRZGate(q, -0.11295224118617311, 2);
  sqcRZGate(q, -0.05094707781597112, 3);
  sqcRZGate(q, -0.011844325943819425, 4);
  sqcRZGate(q, -0.008181669541039485, 5);
  sqcRZGate(q, -0.02172281523657238, 6);
  sqcRZGate(q, -0.3204594760996161, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.3655875959433957, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.17976341925308123, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.4032548433074038, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.26227756456948054, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.1939696202259984, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.28415279658718334, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.1055203548667505, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.12055732536668134, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.4035506019161619, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.34572468799927064, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 1.286719124660736, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.4543403472166176, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.11211724444845036, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.5817360225311372, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.4348119249851423, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.04121616318312739, 0);
  sqcRZGate(q, -0.07076111469900195, 1);
  sqcRZGate(q, -0.05621183448089111, 2);
  sqcRZGate(q, 0.015625001864760568, 3);
  sqcRZGate(q, -0.018316223607376746, 4);
  sqcRZGate(q, 0.014227613254690404, 5);
  sqcRZGate(q, -0.0871088091460856, 6);
  sqcRZGate(q, -0.1151372694756447, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.13977248034773446, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.32548644561822926, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.043199337226923734, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.1901330080987894, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -1.0434311187970615, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.3806436109319538, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.46648748007506446, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.2663784787801286, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.6373902136693176, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.21360362733644567, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.8600390230085401, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.030638286917552916, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.6794105923138715, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.12970789971827185, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.0592952625017325, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.028202850305471535, 0);
  sqcRZGate(q, 0.04090772831963846, 1);
  sqcRZGate(q, 0.04476849551854081, 2);
  sqcRZGate(q, -0.018759741508686662, 3);
  sqcRZGate(q, -0.012826020862300273, 4);
  sqcRZGate(q, 0.012991996031886074, 5);
  sqcRZGate(q, -0.051053717204864374, 6);
  sqcRZGate(q, 0.2374822561160935, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.3824594955812385, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.42062169882018957, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.025999621477322134, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.019523261214669775, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.13761247587252995, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.339065579151542, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.33215683669897383, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.0789260572097817, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.4942562510626687, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.35251446311756995, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.4011765594820612, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.10123459767953086, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.5239279449829328, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.40127627960626233, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.44679816637169434, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.017791247699982533, 0);
  sqcRZGate(q, -0.039111769727325656, 1);
  sqcRZGate(q, 0.01968553865640193, 2);
  sqcRZGate(q, 0.004947716466249348, 3);
  sqcRZGate(q, 0.05569572100993767, 4);
  sqcRZGate(q, 0.0113315565307115, 5);
  sqcRZGate(q, 0.011041967832566892, 6);
  sqcRZGate(q, 0.7119195094190301, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.29294738599166176, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.005239255841307286, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.06430351079519793, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.3758037986951608, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.43158619181723035, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.13715941387639785, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.14259752230377512, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.06268258598080281, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.4549751659221211, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.27619306139937105, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.19121536327702696, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.03934046253298074, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.6155888305972318, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.14462036763216857, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.11893364589862306, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.08654989258582942, 0);
  sqcRZGate(q, 0.024278012307239034, 1);
  sqcRZGate(q, 0.06505228783391491, 2);
  sqcRZGate(q, 0.0008346375059155482, 3);
  sqcRZGate(q, -0.04045581990959529, 4);
  sqcRZGate(q, -0.037633357616952794, 5);
  sqcRZGate(q, -0.016160162894572155, 6);
  sqcRZGate(q, 1.0756350618459918, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.32317856924284516, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.5477795959488645, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.06919654525841663, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.34953350119208365, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.3772714199034679, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.07262554431619711, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.5410982045227831, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.4405820090692268, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.31365887964726674, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.06895649385780712, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.40742455622823576, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.7089074506750184, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.2970431289865531, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.392945488361061, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.8818331445368321, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.14107082435740512, 0);
  sqcRZGate(q, -0.010679379221835336, 1);
  sqcRZGate(q, -0.09120140891329793, 2);
  sqcRZGate(q, -0.03532036776449133, 3);
  sqcRZGate(q, 0.015873410478546065, 4);
  sqcRZGate(q, 0.033961418063360053, 5);
  sqcRZGate(q, 0.00979978303536898, 6);
  sqcRZGate(q, 0.8810894251756269, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.08680602647284534, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.0632548217641635, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.06081210604243219, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.39035235708212057, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.14433227465093895, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.12074522967486272, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.3744565971458112, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 1.2133480325204022, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.7369077750800924, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.5538391881314045, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.3463263463954348, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -1.120108489072762, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.19302929853328638, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.4183975115125817, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.7911597828147862, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.06555784975337887, 0);
  sqcRZGate(q, 0.013153705600945378, 1);
  sqcRZGate(q, 0.01387495091721219, 2);
  sqcRZGate(q, -0.0030757747218753437, 3);
  sqcRZGate(q, -0.01102738478787253, 4);
  sqcRZGate(q, 0.012294480871547418, 5);
  sqcRZGate(q, -0.002670915719900039, 6);
  sqcRZGate(q, 0.9216907768214381, 7);

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
