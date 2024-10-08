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

  sqcRYGate(q, -1.568756131396489, 0);
  sqcRYGate(q, -1.389197445647901, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5260661009001915, 0);
  sqcRYGate(q, 2.1246207048893364, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.004270574344481, 2);
  sqcRYGate(q, 0.9273732238424088, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9999510395166056, 2);
  sqcRYGate(q, -0.3482855832717915, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.476793151282352, 4);
  sqcRYGate(q, 0.3181135099923181, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0852540511806126, 4);
  sqcRYGate(q, -2.1028879841638863, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.10801379441176, 6);
  sqcRYGate(q, 0.4843022849676491, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6559348914663801, 6);
  sqcRYGate(q, 3.050873689373801, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6747316936285567, 0);
  sqcRYGate(q, 0.9853332987356498, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1358961594781882, 0);
  sqcRYGate(q, 0.6559206635368039, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.05774984131963948, 2);
  sqcRYGate(q, -0.04635804211487752, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.1531447471640277, 2);
  sqcRYGate(q, -2.2728631634427674, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.6041210091703142, 4);
  sqcRYGate(q, -1.4442813070463636, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.0119518404219368, 4);
  sqcRYGate(q, 1.3074248334551877, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.9987473009913304, 1);
  sqcRYGate(q, 2.992314743729591, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.444941512578362, 1);
  sqcRYGate(q, 2.263774494654027, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.714950216461873, 3);
  sqcRYGate(q, -0.6415506035176498, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.3399294528810572, 3);
  sqcRYGate(q, -2.061996042800321, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.748708679755185, 5);
  sqcRYGate(q, -3.0155043702240665, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.789075538598807, 5);
  sqcRYGate(q, -1.7607439645124352, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.1291312194158962, 0);
  sqcRYGate(q, 1.224722956757982, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.8191022439762643, 0);
  sqcRYGate(q, -2.6034420729334826, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.085311306747832, 1);
  sqcRYGate(q, 0.44551580842947874, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7243563594384517, 1);
  sqcRYGate(q, -1.2784795675018232, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.765130381204409, 2);
  sqcRYGate(q, -0.7850042435033375, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.2979316599956165, 2);
  sqcRYGate(q, 1.6929065499927578, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.1274494419021264, 3);
  sqcRYGate(q, -0.4992209837810911, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.454448867894995, 3);
  sqcRYGate(q, 1.2325148474660073, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.2751844435042703, 4);
  sqcRYGate(q, 0.8416421092961412, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.711425278181692, 4);
  sqcRYGate(q, -0.7068134913852573, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.5270256315531205, 5);
  sqcRYGate(q, -2.0259683341200554, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9900652065381886, 5);
  sqcRYGate(q, -3.11130749632199, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.9912474489407104, 0);
  sqcRYGate(q, 1.3885355568846078, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5261486756917235, 0);
  sqcRYGate(q, 1.7021364682748312, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8385153756624161, 2);
  sqcRYGate(q, 1.9767940950835214, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8673085458245287, 2);
  sqcRYGate(q, 0.34248293792548273, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.17732268009021207, 4);
  sqcRYGate(q, 1.7246329264360816, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2926869739592688, 4);
  sqcRYGate(q, 2.258029897530382, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.182790733535052, 6);
  sqcRYGate(q, -2.6412030862531783, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7704138004217154, 6);
  sqcRYGate(q, -0.13404847155566232, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7029458758522402, 0);
  sqcRYGate(q, -2.54055176800424, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.228373173009083, 0);
  sqcRYGate(q, 0.5518443164479193, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.796812249921206, 2);
  sqcRYGate(q, -0.782334712608452, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.0308150298416094, 2);
  sqcRYGate(q, 1.158283852578412, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.27578051955879407, 4);
  sqcRYGate(q, -0.3482057086768373, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.9852542514806961, 4);
  sqcRYGate(q, -0.4429024555445594, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.8329460835877445, 1);
  sqcRYGate(q, -0.6119720583977138, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5250257452968489, 1);
  sqcRYGate(q, 0.6960232233335688, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.09746669627937522, 3);
  sqcRYGate(q, -0.07732607026250349, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.9859426954568138, 3);
  sqcRYGate(q, -0.11834857633438567, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.5325352435809316, 5);
  sqcRYGate(q, -0.5045913696662865, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.0962691073161728, 5);
  sqcRYGate(q, -0.22981925013462817, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.07369090625946, 0);
  sqcRYGate(q, 0.16864652914720332, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.3174762828184443, 0);
  sqcRYGate(q, 1.9074582521448271, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.2750930576532076, 1);
  sqcRYGate(q, -0.02846854655344865, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.18131292246936148, 1);
  sqcRYGate(q, 2.3448390906161136, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8834355180672041, 2);
  sqcRYGate(q, -0.11002621982009142, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.2253353115227723, 2);
  sqcRYGate(q, 1.6776636741391713, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.2110032180801902, 3);
  sqcRYGate(q, 2.256401387634182, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6594216146492566, 3);
  sqcRYGate(q, 3.1005490138052725, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.06342792958174392, 4);
  sqcRYGate(q, -2.4880416517470865, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.8742067913251186, 4);
  sqcRYGate(q, 2.6177292452509513, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 3.117316074380762, 5);
  sqcRYGate(q, 0.5262888254993912, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.9344924397030425, 5);
  sqcRYGate(q, 0.8842872295297202, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.7928640423797908, 0);
  sqcRYGate(q, -0.1758136553033438, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1431515727022767, 0);
  sqcRYGate(q, 2.7561632672470533, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8323313824707075, 2);
  sqcRYGate(q, -1.9786609616975859, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5154716319728143, 2);
  sqcRYGate(q, 1.6492630417835121, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0354005465328306, 4);
  sqcRYGate(q, 2.4742011782217417, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.492924414390371, 4);
  sqcRYGate(q, -0.5888665713775856, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.295312952563297, 6);
  sqcRYGate(q, 1.4073260460423604, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.715518572088748, 6);
  sqcRYGate(q, 0.26485228323529286, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.945177269046423, 0);
  sqcRYGate(q, -1.5409887974565373, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6239082522357076, 0);
  sqcRYGate(q, -0.037768727411704096, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.0502560860695165, 2);
  sqcRYGate(q, -0.45984459528715327, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.4322814914707647, 2);
  sqcRYGate(q, -0.8779412114397626, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.5741338321404648, 4);
  sqcRYGate(q, 0.11984954160919958, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.5853454778985595, 4);
  sqcRYGate(q, 0.5556016804174985, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.6621762426322964, 1);
  sqcRYGate(q, -0.5279998766641268, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.286351037574799, 1);
  sqcRYGate(q, -3.111627213544607, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.69084088420828, 3);
  sqcRYGate(q, 2.8524152309707302, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.15664461122271867, 3);
  sqcRYGate(q, 1.3289726005034834, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.4528884296843998, 5);
  sqcRYGate(q, -3.0623435971853814, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.8885679294803684, 5);
  sqcRYGate(q, -3.135239475096579, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.286203152745824, 0);
  sqcRYGate(q, -0.08234141265397485, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.0039021855819321, 0);
  sqcRYGate(q, -2.742976456776297, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.0930160113727865, 1);
  sqcRYGate(q, -3.1358530662603896, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4903208480345262, 1);
  sqcRYGate(q, 0.2871151121974051, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9544362071116117, 2);
  sqcRYGate(q, 2.2302316574478143, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.1601385036532097, 2);
  sqcRYGate(q, -2.017056137609397, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.1611776859275347, 3);
  sqcRYGate(q, 0.8835764283091451, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.7329127549246135, 3);
  sqcRYGate(q, -3.0853753629169716, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.29336031832647436, 4);
  sqcRYGate(q, -0.7761751778883286, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.4172869179225485, 4);
  sqcRYGate(q, -2.2482738768464205, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.7219783184765399, 5);
  sqcRYGate(q, 0.2799781007120803, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8548019134236641, 5);
  sqcRYGate(q, 0.16722990159443274, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6247654277597667, 0);
  sqcRYGate(q, 1.6398497598035604, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.922585107497128, 0);
  sqcRYGate(q, -2.223223173209912, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0310615527879525, 2);
  sqcRYGate(q, 0.09477001206381998, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4981189327385662, 2);
  sqcRYGate(q, 1.3041466459723772, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.848387795843674, 4);
  sqcRYGate(q, 0.7792098658167061, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5282606182019778, 4);
  sqcRYGate(q, -2.589135550369226, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5885934565343609, 6);
  sqcRYGate(q, 1.9630803014031257, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.193648375578471, 6);
  sqcRYGate(q, 1.327284840399407, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.0619908400648512, 0);
  sqcRYGate(q, 0.6535316109805328, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.572252122386078, 0);
  sqcRYGate(q, 2.578638451569533, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4360552628110215, 2);
  sqcRYGate(q, -0.18684568149814537, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.021657319617503796, 2);
  sqcRYGate(q, 0.24422731725588762, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.9101467732417654, 4);
  sqcRYGate(q, -1.2248102036267667, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.5005745285718177, 4);
  sqcRYGate(q, -0.9178978137761415, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.1172708014784138, 1);
  sqcRYGate(q, -2.4350707574346497, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.014954576614475634, 1);
  sqcRYGate(q, 1.2889499753276403, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.945619979534146, 3);
  sqcRYGate(q, 2.015777434176654, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.9431102147710555, 3);
  sqcRYGate(q, 1.618528234312299, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.3336749656744772, 5);
  sqcRYGate(q, -1.9956070585160282, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.203364962398669, 5);
  sqcRYGate(q, -1.944006305802918, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.0563820814282276, 0);
  sqcRYGate(q, 2.9833239204225457, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5967927148152633, 0);
  sqcRYGate(q, 2.5819799284211764, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.8350717139584019, 1);
  sqcRYGate(q, -2.110099084110109, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0883622747503647, 1);
  sqcRYGate(q, 0.8073520630804073, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9135644522794941, 2);
  sqcRYGate(q, 2.963266677740001, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.475217940134702, 2);
  sqcRYGate(q, 1.3753055620274157, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.976944136730074, 3);
  sqcRYGate(q, 0.9241431097872274, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5035168826076406, 3);
  sqcRYGate(q, -2.624257795877991, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.04096998164674123, 4);
  sqcRYGate(q, -2.3686075238601614, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.2736597896565467, 4);
  sqcRYGate(q, -2.582841793672685, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.5121418665256421, 5);
  sqcRYGate(q, 2.844891001648043, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.16026499823572674, 5);
  sqcRYGate(q, -0.8095307042498305, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.409615881722805, 0);
  sqcRYGate(q, 2.3028636007998657, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6799357490420685, 0);
  sqcRYGate(q, -2.874987961961546, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0384718614192474, 2);
  sqcRYGate(q, 1.381973724537868, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.992673335681764, 2);
  sqcRYGate(q, 0.24289487978446056, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0822779511671214, 4);
  sqcRYGate(q, 2.4473583193789006, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.962604904531303, 4);
  sqcRYGate(q, -1.4133526968519823, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9780774676487585, 6);
  sqcRYGate(q, 0.5972405623216372, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.8043184375918084, 6);
  sqcRYGate(q, -1.4104346693367618, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9560664466817521, 0);
  sqcRYGate(q, -0.19570777628225855, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.5124309401443714, 0);
  sqcRYGate(q, 2.478624411748232, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5682431555940264, 2);
  sqcRYGate(q, -2.782221957174028, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.1187022610968356, 2);
  sqcRYGate(q, 2.7980090892623783, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.7300317416430158, 4);
  sqcRYGate(q, -1.4533814656109714, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.4129032062171216, 4);
  sqcRYGate(q, 0.6313200262543903, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.093563317639138, 1);
  sqcRYGate(q, -1.07992859063737, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6840765944107479, 1);
  sqcRYGate(q, -3.120945174443093, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8251609049766386, 3);
  sqcRYGate(q, -1.301356844085853, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.2083427680766343, 3);
  sqcRYGate(q, 0.1668642443487107, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.5670060133748192, 5);
  sqcRYGate(q, 1.1692322886824904, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.514585655094608, 5);
  sqcRYGate(q, -0.00304204196811586, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.537006086103629, 0);
  sqcRYGate(q, -1.9433074657478304, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.9742888804432681, 0);
  sqcRYGate(q, 3.0123026313092374, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.4821665770366999, 1);
  sqcRYGate(q, 1.1653696377296552, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6958089167111611, 1);
  sqcRYGate(q, -0.2031482111495965, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3047984195671658, 2);
  sqcRYGate(q, 2.830744806418334, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.755940585316657, 2);
  sqcRYGate(q, 0.2669772889706135, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.803792255519673, 3);
  sqcRYGate(q, 0.2866510518830019, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.957810626862446, 3);
  sqcRYGate(q, -0.1889465271421841, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.9332531704492637, 4);
  sqcRYGate(q, 1.6426855707578933, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.6906630661421921, 4);
  sqcRYGate(q, 2.5868048749614485, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.800650519272879, 5);
  sqcRYGate(q, -0.36535554206385523, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.9468258878383495, 5);
  sqcRYGate(q, -1.5634001234358401, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.069908989552201, 0);
  sqcRYGate(q, 0.35418242678632517, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7447233301404284, 0);
  sqcRYGate(q, -1.1945851448597642, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6174869229809291, 2);
  sqcRYGate(q, 2.6458999284391087, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2375789793759946, 2);
  sqcRYGate(q, 0.06780571867025653, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1780280889138186, 4);
  sqcRYGate(q, -0.45271212451222487, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.993506838289587, 4);
  sqcRYGate(q, -2.6090547577533068, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6214990762989931, 6);
  sqcRYGate(q, -1.6689873569299523, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.448790879537464, 6);
  sqcRYGate(q, -2.176031958057791, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8578093091719385, 0);
  sqcRYGate(q, 1.489400457736723, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.910813990360801, 0);
  sqcRYGate(q, 1.7214169579030436, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.739177943080513, 2);
  sqcRYGate(q, -0.18396726585410306, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.6633753388592671, 2);
  sqcRYGate(q, -1.0575840188274608, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.138939111055988, 4);
  sqcRYGate(q, 1.1141425301507057, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.8697646065746005, 4);
  sqcRYGate(q, -2.5564709561929555, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.5295724887864193, 1);
  sqcRYGate(q, 2.2775150354404943, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9282471144406568, 1);
  sqcRYGate(q, 3.125268140573259, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.091076973238529, 3);
  sqcRYGate(q, 2.4009925871223294, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.83249448569586, 3);
  sqcRYGate(q, 2.065280837459979, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.818211467516452, 5);
  sqcRYGate(q, -1.1963422535945067, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.794883898626276, 5);
  sqcRYGate(q, 0.21685931104366565, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.434086672398196, 0);
  sqcRYGate(q, 0.8780857365408336, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.14425080041187233, 0);
  sqcRYGate(q, -2.154768612732374, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5065426263250393, 1);
  sqcRYGate(q, 2.6611287315878855, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6160893704668426, 1);
  sqcRYGate(q, 0.5276972627454208, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.838467725119636, 2);
  sqcRYGate(q, -1.6259955571356393, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.0796486743236307, 2);
  sqcRYGate(q, 0.4060981849588392, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.2951970009883862, 3);
  sqcRYGate(q, 1.5621244711177618, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5606209369104924, 3);
  sqcRYGate(q, 2.22198011959216, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7727411339871438, 4);
  sqcRYGate(q, 0.13399732190655378, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.6613092708354399, 4);
  sqcRYGate(q, 0.4815140334157136, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.6965544076999794, 5);
  sqcRYGate(q, -1.6464380212677314, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.0207219163956864, 5);
  sqcRYGate(q, -0.5755251801960055, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.9743462735295183, 0);
  sqcRYGate(q, -2.477380220417506, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.03664050444861022, 0);
  sqcRYGate(q, -2.2088146903502843, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.241088723914668, 2);
  sqcRYGate(q, -1.955138328709235, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.376798738706724, 2);
  sqcRYGate(q, -1.1795164126690914, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.30844929037605273, 4);
  sqcRYGate(q, 2.3126801753444157, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9892146297208203, 4);
  sqcRYGate(q, 0.9633861696373535, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5400307089630019, 6);
  sqcRYGate(q, 1.6599642084403454, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.4686770147964276, 6);
  sqcRYGate(q, 1.9890742101742651, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.5327237854235, 0);
  sqcRYGate(q, -0.7094905208182933, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6691901526243913, 0);
  sqcRYGate(q, 2.969231762782653, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0584129332386643, 2);
  sqcRYGate(q, 2.4132009063863746, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.3527843273657316, 2);
  sqcRYGate(q, 3.0603390812219846, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.28999343444609615, 4);
  sqcRYGate(q, 2.887724450625839, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.373028531357138, 4);
  sqcRYGate(q, -1.585206206599227, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.151595267788187, 1);
  sqcRYGate(q, 0.4143899224592861, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.1129755028253876, 1);
  sqcRYGate(q, -2.0215641689000057, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.19441656697398546, 3);
  sqcRYGate(q, 1.9099903162511198, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.23182070312971, 3);
  sqcRYGate(q, 0.6016055073245674, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.3180950254255146, 5);
  sqcRYGate(q, 1.327338773079857, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.7019266039484149, 5);
  sqcRYGate(q, 3.013236956543532, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.6003022305449348, 0);
  sqcRYGate(q, 1.8287022581617176, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.0625068627423249, 0);
  sqcRYGate(q, 0.4395411272713208, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.33327365650833185, 1);
  sqcRYGate(q, 3.0090429141462383, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.28759827073931, 1);
  sqcRYGate(q, 1.8479211890313598, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.664554648260702, 2);
  sqcRYGate(q, 2.3837795341950323, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.071626226102695, 2);
  sqcRYGate(q, 0.6347674004903777, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.8336253664441733, 3);
  sqcRYGate(q, -2.001776746991214, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5880610696676447, 3);
  sqcRYGate(q, -1.7504801071919518, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.21723256194121063, 4);
  sqcRYGate(q, -1.0125033232600371, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.6857991510056731, 4);
  sqcRYGate(q, -2.4934702764808003, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.2866985696778883, 5);
  sqcRYGate(q, -1.7905481720047407, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9567217851144783, 5);
  sqcRYGate(q, 0.9298849642512098, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.1662324788440257, 0);
  sqcRYGate(q, -0.3042365011358861, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.173447345814744, 0);
  sqcRYGate(q, 0.6524768092712164, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0243132707755045, 2);
  sqcRYGate(q, -0.5388768736666312, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.07448442971919, 2);
  sqcRYGate(q, 2.126347273701805, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0846076320184146, 4);
  sqcRYGate(q, -0.4799923731984049, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.31701456613373225, 4);
  sqcRYGate(q, -0.8207027695515299, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.066376535413867, 6);
  sqcRYGate(q, -1.0684235678587397, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7232272497978338, 6);
  sqcRYGate(q, -2.0599659294936257, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1161598561942894, 0);
  sqcRYGate(q, -1.7958418569769448, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7650910115062814, 0);
  sqcRYGate(q, -0.13040151088847107, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.138028634452306, 2);
  sqcRYGate(q, -0.5316371646918493, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.1400689776390367, 2);
  sqcRYGate(q, 2.9058760199964144, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.0184232984020039, 4);
  sqcRYGate(q, 1.1541067158325342, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.3996339712791803, 4);
  sqcRYGate(q, 1.6449985160827998, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.0424165785911326, 1);
  sqcRYGate(q, 0.3406513992245701, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.019543857991591, 1);
  sqcRYGate(q, -2.0269100107866884, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.534221730120647, 3);
  sqcRYGate(q, 1.1144668853559194, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.2628176716723436, 3);
  sqcRYGate(q, 0.4795560424628844, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.13815894698158224, 5);
  sqcRYGate(q, 0.0027118461349414794, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.656698287183652, 5);
  sqcRYGate(q, -3.056023188592366, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.011983455212329, 0);
  sqcRYGate(q, 0.7411682984009866, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.9942030908808978, 0);
  sqcRYGate(q, 3.063768910358232, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.4637857941828676, 1);
  sqcRYGate(q, 1.31650916156687, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2268413476027937, 1);
  sqcRYGate(q, -1.0703699515046106, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9226493940736306, 2);
  sqcRYGate(q, 0.5113892970110492, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.306467972650923, 2);
  sqcRYGate(q, 1.4846438803012998, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.7722047870918975, 3);
  sqcRYGate(q, 1.0672607122616222, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.652206231381097, 3);
  sqcRYGate(q, -1.5531329932983349, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.216789979594573, 4);
  sqcRYGate(q, -2.4508981074674216, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.634849293701447, 4);
  sqcRYGate(q, 1.6348813566909843, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.083950030555235, 5);
  sqcRYGate(q, 1.5483431671694163, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.1581224676966366, 5);
  sqcRYGate(q, -1.9951774884736055, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.270484067368387, 0);
  sqcRYGate(q, 2.824042139240722, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.21502050604985534, 0);
  sqcRYGate(q, -0.9942824770305831, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9580627307366005, 2);
  sqcRYGate(q, 2.0456589862288426, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3206838767011725, 2);
  sqcRYGate(q, 0.0798932097545106, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.803197139212254, 4);
  sqcRYGate(q, -2.2105152017527248, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2050419612249588, 4);
  sqcRYGate(q, 0.38224317642842287, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.2722742615331901, 6);
  sqcRYGate(q, 1.7484319803387127, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6158050012539045, 6);
  sqcRYGate(q, 2.3799752947765502, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.7902739680523263, 0);
  sqcRYGate(q, -0.3673294804392473, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8660545767625116, 0);
  sqcRYGate(q, -0.8728817623135433, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6965545226533583, 2);
  sqcRYGate(q, -1.393867786647848, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.7500138929493072, 2);
  sqcRYGate(q, -2.576091220967219, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.817718242166011, 4);
  sqcRYGate(q, 2.1180878336595654, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.4403827634664621, 4);
  sqcRYGate(q, 1.6884447357107666, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.877382272291572, 1);
  sqcRYGate(q, -2.2054815642741996, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6630192095460924, 1);
  sqcRYGate(q, 2.9530707380692514, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.43533088044321905, 3);
  sqcRYGate(q, 0.9956955088620365, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.2717797565520135, 3);
  sqcRYGate(q, -0.9897381421379337, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.03306981681809809, 5);
  sqcRYGate(q, -1.833007011404872, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.645097157727843, 5);
  sqcRYGate(q, 1.6598582911204016, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.4805043289044106, 0);
  sqcRYGate(q, 1.8351619717581544, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9748408824878805, 0);
  sqcRYGate(q, -0.28836087714608194, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5793147985410432, 1);
  sqcRYGate(q, -2.329099051438759, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.343032959982634, 1);
  sqcRYGate(q, -1.9279245379261492, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6937401752564418, 2);
  sqcRYGate(q, -2.2648462580329802, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.1379159099877123, 2);
  sqcRYGate(q, 1.761029731193712, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.5762878749233467, 3);
  sqcRYGate(q, -2.9206640930540684, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.0552696590502898, 3);
  sqcRYGate(q, -0.26356738248053885, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.44009168276074984, 4);
  sqcRYGate(q, 0.553791243332201, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.829908887172572, 4);
  sqcRYGate(q, 2.462416521467685, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.6632641799846128, 5);
  sqcRYGate(q, 0.2229152447012002, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.3591403039153453, 5);
  sqcRYGate(q, -1.813368245050432, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.1122069074476493, 0);
  sqcRYGate(q, 1.8408764740459815, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.73080045580254, 0);
  sqcRYGate(q, -1.6157578902569114, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1717116611924272, 2);
  sqcRYGate(q, -2.1792903366908543, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.21073649644011327, 2);
  sqcRYGate(q, -0.16850537220768735, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.424516717397401, 4);
  sqcRYGate(q, 1.8897411373411324, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.261816776383575, 4);
  sqcRYGate(q, -0.885656512371315, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.7411717874395682, 6);
  sqcRYGate(q, -0.1479404629636667, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8844272747475515, 6);
  sqcRYGate(q, 3.024524402063113, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.644130785870416, 0);
  sqcRYGate(q, 0.3172480315200197, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4007731989789791, 0);
  sqcRYGate(q, 1.9045971227649339, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.1195033181202128, 2);
  sqcRYGate(q, 3.069204042626169, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.35165186628530776, 2);
  sqcRYGate(q, 1.1551211423918832, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.3345382187297647, 4);
  sqcRYGate(q, -0.3751883806495986, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.7541917973934877, 4);
  sqcRYGate(q, -1.9940542918736865, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.6923976615458611, 1);
  sqcRYGate(q, -1.087865603835262, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.09036034296270906, 1);
  sqcRYGate(q, -0.8393333336887504, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5108749286815168, 3);
  sqcRYGate(q, -2.7150001736014184, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.6666056185771836, 3);
  sqcRYGate(q, -1.2566439828777485, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.86482971398903, 5);
  sqcRYGate(q, 0.6021594213293081, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.345795476278793, 5);
  sqcRYGate(q, -2.6233011708869687, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.510672209231017, 0);
  sqcRYGate(q, -2.7394231675012453, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.5492148584356054, 0);
  sqcRYGate(q, -1.5496613239751602, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.74223165908112, 1);
  sqcRYGate(q, -2.8158110139069428, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3909942308522385, 1);
  sqcRYGate(q, -1.7083164030907234, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4033629720869918, 2);
  sqcRYGate(q, 1.709202188799706, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.3327389784026789, 2);
  sqcRYGate(q, 2.666666833948591, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.9630801670953861, 3);
  sqcRYGate(q, 0.18527824863729592, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.24057672605962171, 3);
  sqcRYGate(q, 1.0456492861667952, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6942601638913795, 4);
  sqcRYGate(q, 0.4040818658683065, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.39117068114267006, 4);
  sqcRYGate(q, -1.7014377613616223, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -3.1254975584705105, 5);
  sqcRYGate(q, 2.8229106165375866, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.3987078844691858, 5);
  sqcRYGate(q, 0.23143344583317663, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7821208157576576, 0);
  sqcRYGate(q, 0.23744716679357047, 1);
  sqcRYGate(q, -2.9308171272047168, 2);
  sqcRYGate(q, -1.8927190188829028, 3);
  sqcRYGate(q, -1.3950230150234106, 4);
  sqcRYGate(q, 3.093861525148835, 5);
  sqcRYGate(q, -1.1737793045218932, 6);
  sqcRYGate(q, -3.1142307530507076, 7);

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
