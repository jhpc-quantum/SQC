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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, -1.0768383647607873, 0);
  sqcRYGate(q, -0.4701704698940734, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1714237653463855, 0);
  sqcRYGate(q, 2.26509791332015, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7084109860432133, 0);
  sqcRYGate(q, 2.358032861780326, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.594226329538609, 0);
  sqcRYGate(q, 2.5562954940287015, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5555486319804737, 0);
  sqcRYGate(q, -2.403016688950155, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.1086717605982113, 0);
  sqcRYGate(q, -0.8596713791109796, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.4406971990678676, 1);
  sqcRYGate(q, -0.3738632086254563, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.266209585972543, 1);
  sqcRYGate(q, 0.6285526926218117, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8764347891067457, 1);
  sqcRYGate(q, 0.06138032006411071, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4815111483709691, 1);
  sqcRYGate(q, 0.5932178018885753, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.438523773866412, 2);
  sqcRYGate(q, -2.643663322974243, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.686479891911556, 2);
  sqcRYGate(q, 0.4413242340896816, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.140832777263485, 0);
  sqcRYGate(q, -0.9561678910057839, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9309204051130564, 0);
  sqcRYGate(q, 3.092093177117945, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6878174367422583, 0);
  sqcRYGate(q, 1.933382315649371, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.1312473875298186, 0);
  sqcRYGate(q, -2.094458701630363, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4134170059237183, 0);
  sqcRYGate(q, 0.6237265891210724, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.9482851269222508, 0);
  sqcRYGate(q, 0.54498070179977, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.5125368906027719, 1);
  sqcRYGate(q, 0.3708672356450462, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1229633100156855, 1);
  sqcRYGate(q, -2.8041413859549174, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.612546373950784, 1);
  sqcRYGate(q, -2.474912999310667, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7879711443477984, 1);
  sqcRYGate(q, 1.167203676446146, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.27525432110346115, 2);
  sqcRYGate(q, -3.1402142412157774, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3692894036742915, 2);
  sqcRYGate(q, -1.7995856902040275, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6587450991667727, 0);
  sqcRYGate(q, -1.6347041723166578, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.052933243183442, 0);
  sqcRYGate(q, 3.1228741220309244, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.89104896597309, 0);
  sqcRYGate(q, -1.6738585345761718, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.620329782789173, 0);
  sqcRYGate(q, -2.484466279265082, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5434512997337304, 0);
  sqcRYGate(q, 1.9128587417078942, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.1362608083484127, 0);
  sqcRYGate(q, -0.23345465386011546, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3951679957362257, 1);
  sqcRYGate(q, -2.5974651295938638, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.83451692084585, 1);
  sqcRYGate(q, 1.404626168937115, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.188462352776938, 1);
  sqcRYGate(q, 1.3759826519399965, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.180492452074931, 1);
  sqcRYGate(q, 1.8309001152532958, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5976534432341944, 2);
  sqcRYGate(q, 2.623409654278871, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.014782991681153, 2);
  sqcRYGate(q, 0.9171566445973687, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.582479403429847, 0);
  sqcRYGate(q, -0.3001219241655312, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7860721632870051, 0);
  sqcRYGate(q, 3.1119676297525656, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5932233527088107, 0);
  sqcRYGate(q, 2.8497630736592123, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7326010032337305, 0);
  sqcRYGate(q, -0.13327415241909704, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1850462488201838, 0);
  sqcRYGate(q, -0.5683386976495077, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.1439608609824163, 0);
  sqcRYGate(q, 2.513252546969959, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6802091298618702, 1);
  sqcRYGate(q, -3.017352869297956, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1643448404871384, 1);
  sqcRYGate(q, 2.849241309555442, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1552133208209208, 1);
  sqcRYGate(q, 0.5294068119363492, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0988522748448517, 1);
  sqcRYGate(q, 2.6576640750230456, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.10871024100756911, 2);
  sqcRYGate(q, 1.4874578199122892, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6198530380630602, 2);
  sqcRYGate(q, 1.9205949437658432, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3005110053104834, 0);
  sqcRYGate(q, 0.6403230321333806, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.904927328445084, 0);
  sqcRYGate(q, 1.3723474109673113, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7536095511509201, 0);
  sqcRYGate(q, 1.930102117453746, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0676647894177824, 0);
  sqcRYGate(q, 1.2712666923646196, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3942158233927686, 0);
  sqcRYGate(q, 1.5424118832519076, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.0927361553781996, 0);
  sqcRYGate(q, -0.28909826427495, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.2849094792470206, 1);
  sqcRYGate(q, -1.3448077670169631, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.0963084011198383, 1);
  sqcRYGate(q, 2.6080932433080046, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7656801119946142, 1);
  sqcRYGate(q, 1.7158470268126849, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.577777659827177, 1);
  sqcRYGate(q, 2.751628631862551, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0453495323852686, 2);
  sqcRYGate(q, -0.9104295445533108, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.975640674289091, 2);
  sqcRYGate(q, -2.071840942345938, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5435329565427408, 0);
  sqcRYGate(q, 3.0814327544189197, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6773326133342015, 0);
  sqcRYGate(q, 0.25110215894589416, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7142421410024982, 0);
  sqcRYGate(q, -0.4943303197924776, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6897621586101037, 0);
  sqcRYGate(q, 0.5207972696825536, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2550433082452876, 0);
  sqcRYGate(q, 3.0732709526437456, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.289146857900437, 0);
  sqcRYGate(q, -2.2401594363156887, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.5824043261979819, 1);
  sqcRYGate(q, -1.7810186642498276, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2149701624716887, 1);
  sqcRYGate(q, -1.0808620380249767, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9415148273563414, 1);
  sqcRYGate(q, 2.7699003543355056, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0687575544153667, 1);
  sqcRYGate(q, -2.9484267359577365, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.586906304924653, 2);
  sqcRYGate(q, -2.432602770694775, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.296331572810075, 2);
  sqcRYGate(q, -0.9929043135614348, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.529519611783798, 0);
  sqcRYGate(q, 2.8714185353983357, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1648410965858615, 0);
  sqcRYGate(q, -2.104941727900484, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7635169850193915, 0);
  sqcRYGate(q, 1.8123439991644708, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5605352890993194, 0);
  sqcRYGate(q, -0.1708656744339354, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.591323010994631, 0);
  sqcRYGate(q, -2.8308625010691304, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.098996868418982, 0);
  sqcRYGate(q, -2.176624039429372, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.0650910048442146, 1);
  sqcRYGate(q, 0.47709771695951275, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.156563258898581, 1);
  sqcRYGate(q, 0.07110490591982446, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.49235697992362915, 1);
  sqcRYGate(q, 0.9480999010835405, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3916652060555852, 1);
  sqcRYGate(q, 0.5775222166881866, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3124328214478727, 2);
  sqcRYGate(q, 0.9067458387173244, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.142884067684255, 2);
  sqcRYGate(q, 2.5566789309594857, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2682866893376526, 0);
  sqcRYGate(q, -1.7014261173618062, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4069796678331417, 0);
  sqcRYGate(q, -0.0651675874495714, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4093627067709456, 0);
  sqcRYGate(q, -0.4761461856422855, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3368294912219223, 0);
  sqcRYGate(q, 2.153709902147013, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3063246931453456, 0);
  sqcRYGate(q, -1.7666912282072529, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.6957553319503231, 0);
  sqcRYGate(q, 1.0379019285099877, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.6751646854102002, 1);
  sqcRYGate(q, -2.334733928260081, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.732852411494044, 1);
  sqcRYGate(q, -0.8425698318854629, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6688947830780045, 1);
  sqcRYGate(q, 0.41203877436043657, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7771997620885438, 1);
  sqcRYGate(q, 0.8119780051334212, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8888666476719025, 2);
  sqcRYGate(q, -2.132199071039281, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.31749508551766775, 2);
  sqcRYGate(q, -0.2983939648231484, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9303447456494197, 0);
  sqcRYGate(q, -1.6039827613813429, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1866054649781375, 0);
  sqcRYGate(q, 2.9168976586583626, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0586257483373167, 0);
  sqcRYGate(q, -1.6994147819240055, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7804677299753322, 0);
  sqcRYGate(q, 2.6038441841276536, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.35784396539449137, 0);
  sqcRYGate(q, 2.132384926091637, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.381797600962138, 0);
  sqcRYGate(q, -0.1723413623875647, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.817129241803842, 1);
  sqcRYGate(q, -0.011895739910786345, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.32220171786568313, 1);
  sqcRYGate(q, 0.8345363244312214, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7360673805598656, 1);
  sqcRYGate(q, -1.5747109198603508, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8559017922618245, 1);
  sqcRYGate(q, 1.8544575077096341, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.075651063611723, 2);
  sqcRYGate(q, 0.8808146338164462, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.727789511950079, 2);
  sqcRYGate(q, -1.235088176096925, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4513801181127519, 0);
  sqcRYGate(q, -0.5436048045641879, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0124038078281323, 0);
  sqcRYGate(q, 0.9795992279101451, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1139835348762333, 0);
  sqcRYGate(q, -1.9435583208471656, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.12300839653750478, 0);
  sqcRYGate(q, 1.8391469803521536, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.013102288878939381, 0);
  sqcRYGate(q, 2.6061157924585068, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.8079266131680827, 0);
  sqcRYGate(q, -0.7090713244472066, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.742414316274509, 1);
  sqcRYGate(q, 0.46968936350204415, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.703128811927175, 1);
  sqcRYGate(q, 0.12151474825316762, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7725743819227138, 1);
  sqcRYGate(q, -2.5367534826625597, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.169969130585228, 1);
  sqcRYGate(q, -1.918468492535989, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6038965300426202, 2);
  sqcRYGate(q, 0.8290002662512244, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3744106351206704, 2);
  sqcRYGate(q, -2.435952331195549, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3507120972341971, 0);
  sqcRYGate(q, -0.41832156934050824, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.16704171789048916, 0);
  sqcRYGate(q, -2.404761477160894, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.185014125846653, 0);
  sqcRYGate(q, 0.15894037194709185, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.0498963020073133, 0);
  sqcRYGate(q, 1.5525339559191709, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.904584136449367, 0);
  sqcRYGate(q, -0.3515374918644722, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.5646602518465555, 0);
  sqcRYGate(q, -2.6165998943043647, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.39386634706548485, 1);
  sqcRYGate(q, 0.3465456726239034, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3161801819834116, 1);
  sqcRYGate(q, -2.6002793257166164, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9570555628150919, 1);
  sqcRYGate(q, -1.6139856737240998, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4487271798855748, 1);
  sqcRYGate(q, 2.757016676466047, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8103791387730572, 2);
  sqcRYGate(q, -2.7410101871185817, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8673944198054038, 2);
  sqcRYGate(q, 0.9043772171653522, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9833361884487997, 0);
  sqcRYGate(q, 0.8025820516129746, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.033339245672372, 0);
  sqcRYGate(q, -1.810858247748735, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.54054510441237, 0);
  sqcRYGate(q, -3.0174278818263667, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.172490837808843, 0);
  sqcRYGate(q, 1.0114413445667862, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4743195307240966, 0);
  sqcRYGate(q, 1.1889783465589039, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.4249240427200247, 0);
  sqcRYGate(q, 1.1889525662378255, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.8377355847741645, 1);
  sqcRYGate(q, -0.7882671809338024, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.025406891889026, 1);
  sqcRYGate(q, 0.8912643639381106, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1080363290757083, 1);
  sqcRYGate(q, -0.4783235432233015, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.9981560531284766, 1);
  sqcRYGate(q, -1.7291229123891005, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4034844375711275, 2);
  sqcRYGate(q, -0.6861428516694899, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.161618418381368, 2);
  sqcRYGate(q, 0.571751541273394, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8673591838694947, 0);
  sqcRYGate(q, 1.758706247193202, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.532343991887352, 0);
  sqcRYGate(q, 2.181645435114871, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.628225067171685, 0);
  sqcRYGate(q, -1.395067333036117, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.761924486207085, 0);
  sqcRYGate(q, 2.47155103729873, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8599527549610055, 0);
  sqcRYGate(q, -1.4261216906867384, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.1189966718853137, 0);
  sqcRYGate(q, -1.3852553583820075, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.8244168589060097, 1);
  sqcRYGate(q, 1.0907443111263078, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.009944748458601, 1);
  sqcRYGate(q, 2.7012132168746334, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.05327031296358165, 1);
  sqcRYGate(q, 1.516062091567028, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2563383699111554, 1);
  sqcRYGate(q, 2.425628265018827, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6023580473535741, 2);
  sqcRYGate(q, 1.6691205272985732, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8921546589920943, 2);
  sqcRYGate(q, 1.1026881950085032, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4146707659067559, 0);
  sqcRYGate(q, -0.004393723291358136, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9600065244550113, 0);
  sqcRYGate(q, -2.6259995118655395, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.825695464160454, 0);
  sqcRYGate(q, 1.0553413838414085, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7061594961473354, 0);
  sqcRYGate(q, 0.2319900518625619, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3932166244317163, 0);
  sqcRYGate(q, -0.29798983546752655, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.700234176916525, 0);
  sqcRYGate(q, 1.4890559327444626, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.4449602391835716, 1);
  sqcRYGate(q, 1.1750483291672904, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.038981569588151, 1);
  sqcRYGate(q, 0.9484212413893597, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2666827915735375, 1);
  sqcRYGate(q, 2.3358119300307947, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2385943583205323, 1);
  sqcRYGate(q, -1.5231417323788807, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5510326117325591, 2);
  sqcRYGate(q, -1.2891925619897777, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4067631848821494, 2);
  sqcRYGate(q, 2.3007983955999376, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.151784117254854, 0);
  sqcRYGate(q, -0.6769634411246249, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3739463421496084, 0);
  sqcRYGate(q, 1.036435250900903, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9406608863491974, 0);
  sqcRYGate(q, 1.4334459358450289, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5065233377266374, 0);
  sqcRYGate(q, 1.3850114718952096, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6408408267536299, 0);
  sqcRYGate(q, 0.6782135048316928, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5204574693456702, 0);
  sqcRYGate(q, -2.798433601425653, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.5058183577787356, 1);
  sqcRYGate(q, -2.365374138839371, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.113779462704561, 1);
  sqcRYGate(q, 2.5738465638683428, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8406706984891863, 1);
  sqcRYGate(q, 3.0765534066531943, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3659024533742719, 1);
  sqcRYGate(q, -0.6344653003427269, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.649748125140406, 2);
  sqcRYGate(q, 0.7684098392004896, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.12950337981800888, 2);
  sqcRYGate(q, 2.646083529287884, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9391488241168711, 0);
  sqcRYGate(q, -0.20347281821053806, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5340960708547492, 0);
  sqcRYGate(q, -1.32066854095317, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.009755530789476389, 0);
  sqcRYGate(q, -0.1741495574472116, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.581363045942631, 0);
  sqcRYGate(q, 2.6298900134309293, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5226739662813147, 0);
  sqcRYGate(q, 0.3253129811170981, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.9980267177958997, 0);
  sqcRYGate(q, 0.9369551900456291, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.664544715840911, 1);
  sqcRYGate(q, 2.888618258289317, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.203942751461309, 1);
  sqcRYGate(q, -2.2032019676698287, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.883423172214138, 1);
  sqcRYGate(q, 1.4147357293774494, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7053105100565158, 1);
  sqcRYGate(q, -2.482879047098659, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.170225915979219, 2);
  sqcRYGate(q, 0.8084636369269581, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8876409613590599, 2);
  sqcRYGate(q, -0.8943784350395375, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2831534371473508, 0);
  sqcRYGate(q, -1.4965119803523794, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.577872624485423, 0);
  sqcRYGate(q, -0.4419522873339358, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.540941177906276, 0);
  sqcRYGate(q, -2.9604794930558325, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8166336391083155, 0);
  sqcRYGate(q, -0.5525039820104293, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2411402394463797, 0);
  sqcRYGate(q, 2.122507757023398, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.924566974002318, 0);
  sqcRYGate(q, -1.563076970723845, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.595508280619226, 1);
  sqcRYGate(q, 2.776046165044345, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.124754695070599, 1);
  sqcRYGate(q, -2.6386139490575764, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9935445215405432, 1);
  sqcRYGate(q, -1.9485822188471993, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8848852534484895, 1);
  sqcRYGate(q, 0.45358132659929234, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0602854114412854, 2);
  sqcRYGate(q, 2.7713749294302343, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9375382189553073, 2);
  sqcRYGate(q, -2.7834780935119396, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5458996318187461, 0);
  sqcRYGate(q, -2.2033949810367406, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.33942932085783273, 0);
  sqcRYGate(q, -0.5746469854118663, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8027871841521885, 0);
  sqcRYGate(q, -3.125684706782756, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8957899306962273, 0);
  sqcRYGate(q, 0.10726298365309983, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5060111678572285, 0);
  sqcRYGate(q, 0.7358771107066788, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.2239801422270906, 0);
  sqcRYGate(q, -1.730568847395422, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7969300707600215, 1);
  sqcRYGate(q, -0.23185600154698258, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4169420871201344, 1);
  sqcRYGate(q, -0.33889644671703323, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6217212829508503, 1);
  sqcRYGate(q, -1.11239984958845, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.349432313051242, 1);
  sqcRYGate(q, -3.0327358405188796, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.976206660823292, 2);
  sqcRYGate(q, 2.525781219998946, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.07289755049688118, 2);
  sqcRYGate(q, 2.6542494341299667, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4853633150163086, 0);
  sqcRYGate(q, 1.28396010513799, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5905249691749908, 0);
  sqcRYGate(q, -0.7178993641577245, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1216629685064001, 0);
  sqcRYGate(q, -1.104536386362855, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4802709135308953, 0);
  sqcRYGate(q, 2.389294808011935, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5867452764914072, 0);
  sqcRYGate(q, 2.488386390650731, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.5739434203729712, 0);
  sqcRYGate(q, 2.9310404148456595, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.365318584612285, 1);
  sqcRYGate(q, -0.23272213483828885, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.750030322499723, 1);
  sqcRYGate(q, -1.2309408765422216, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1715460078341384, 1);
  sqcRYGate(q, -0.39889932911441317, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7246689020201886, 1);
  sqcRYGate(q, -0.6806921672406706, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.383180509845869, 2);
  sqcRYGate(q, -0.8483858714334627, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2455170617661753, 2);
  sqcRYGate(q, -2.717515074557696, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1909585656576054, 0);
  sqcRYGate(q, 2.1687478729828067, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8694263127318784, 0);
  sqcRYGate(q, -1.8471544111628448, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8024431019960854, 0);
  sqcRYGate(q, -2.4618761160106626, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.537811144551385, 0);
  sqcRYGate(q, 0.8721873684109068, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6678655882142623, 0);
  sqcRYGate(q, 1.8929814812917645, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.14977340940661588, 0);
  sqcRYGate(q, -2.7763360472058234, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.979561160141002, 1);
  sqcRYGate(q, 2.6624897103973835, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9264427280084817, 1);
  sqcRYGate(q, 0.2819953647677895, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5200711166674221, 1);
  sqcRYGate(q, -2.1959887617792027, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.400560923190134, 1);
  sqcRYGate(q, 2.551916248142935, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.008110249373332046, 2);
  sqcRYGate(q, -0.5731660797957112, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9663141730830733, 2);
  sqcRYGate(q, -2.0911733603149365, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1832385396101008, 0);
  sqcRYGate(q, -2.887015259629325, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5810278066365608, 0);
  sqcRYGate(q, 0.9065441614063063, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2501581368042167, 0);
  sqcRYGate(q, -1.9644238409693835, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.675128262446809, 0);
  sqcRYGate(q, -2.4717413511075677, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8144504824063891, 0);
  sqcRYGate(q, 0.42618215020298766, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.2264461128483473, 0);
  sqcRYGate(q, 1.8954041692830117, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.17527314007395448, 1);
  sqcRYGate(q, -1.2289470087838725, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4982091277203864, 1);
  sqcRYGate(q, -0.6012667243180605, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3892910679095678, 1);
  sqcRYGate(q, -0.6481844494197252, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9622082084285328, 1);
  sqcRYGate(q, 0.6160203195550684, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.876404403932442, 2);
  sqcRYGate(q, 1.300835673120282, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.0785573864199085, 2);
  sqcRYGate(q, 2.23649427869593, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.004673940539288601, 0);
  sqcRYGate(q, 2.9040786348140886, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9090714177427985, 0);
  sqcRYGate(q, 0.348426016287327, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9891042302229787, 0);
  sqcRYGate(q, -1.7693793483744749, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.355273709094576, 0);
  sqcRYGate(q, -1.363573191850488, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.42060762106835, 0);
  sqcRYGate(q, -2.3864618945336327, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.2978233262890218, 0);
  sqcRYGate(q, -2.7689631674513424, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.883534659187195, 1);
  sqcRYGate(q, 2.40886935588043, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.611556850320375, 1);
  sqcRYGate(q, -1.5347295083262407, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4921169081328562, 1);
  sqcRYGate(q, -2.753788054131741, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.43767169947316553, 1);
  sqcRYGate(q, -0.8307210906648534, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7430490141631372, 2);
  sqcRYGate(q, -2.6399226889764935, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3288153085344665, 2);
  sqcRYGate(q, -2.3568024433692467, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.1781243301957094, 0);
  sqcRYGate(q, -1.5381303681053755, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9777191445498006, 0);
  sqcRYGate(q, 0.14275601600680368, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.09401861575370288, 0);
  sqcRYGate(q, -1.0534182613544685, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.740898590720299, 0);
  sqcRYGate(q, -1.4391041174093244, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2951552225146723, 0);
  sqcRYGate(q, 1.4829224871072384, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.253453497075709, 0);
  sqcRYGate(q, 0.07145606051630024, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.4920203828510472, 1);
  sqcRYGate(q, -2.5869818526334134, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6021964183401234, 1);
  sqcRYGate(q, 0.14477350983312934, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.577196428435402, 1);
  sqcRYGate(q, -1.911577102798989, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9212677929451134, 1);
  sqcRYGate(q, 0.8948773659391931, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8777804132322986, 2);
  sqcRYGate(q, 0.7121369547726006, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6655885668961363, 2);
  sqcRYGate(q, -1.168794768768386, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.441068095809288, 0);
  sqcRYGate(q, 2.37526240238761, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0634820179000837, 0);
  sqcRYGate(q, 2.196945357978446, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8693629796529456, 0);
  sqcRYGate(q, 2.651960135868147, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9759945678932076, 0);
  sqcRYGate(q, -2.6899573146762665, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2510727973099383, 0);
  sqcRYGate(q, -2.209239235187665, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.346369351435739, 0);
  sqcRYGate(q, 0.24821954936950952, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.2059076789694893, 1);
  sqcRYGate(q, -0.2600475279351553, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.410597127075598, 1);
  sqcRYGate(q, -2.841534472523698, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5119790013497183, 1);
  sqcRYGate(q, -1.8212899216390783, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.11257803354554864, 1);
  sqcRYGate(q, 0.7886546502324752, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.3676537554671135, 2);
  sqcRYGate(q, 0.08636750855968633, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1564953663635356, 2);
  sqcRYGate(q, 1.4819717401168715, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8823827608214785, 0);
  sqcRYGate(q, 1.8441771318641764, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8205694976889681, 0);
  sqcRYGate(q, 2.0243345855888544, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5454605933004684, 0);
  sqcRYGate(q, 1.4091796655491537, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.0037106303097012017, 0);
  sqcRYGate(q, -0.37468369131576656, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0000749744473343, 0);
  sqcRYGate(q, -2.3387553395142517, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2362976117615883, 0);
  sqcRYGate(q, 1.2418217213781793, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.373282182062281, 1);
  sqcRYGate(q, 2.203805329702247, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7380475448491337, 1);
  sqcRYGate(q, -0.2081250126910108, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.21068971785286017, 1);
  sqcRYGate(q, 2.2267673831871475, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.858901942796198, 1);
  sqcRYGate(q, -3.071090621859717, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5962905218763037, 2);
  sqcRYGate(q, -2.5804783107606997, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.216904183022476, 2);
  sqcRYGate(q, 0.6225505850827568, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8758782860364599, 0);
  sqcRYGate(q, 0.20000358044433036, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.20769928290144435, 0);
  sqcRYGate(q, -1.7586947806473507, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2446730569511892, 0);
  sqcRYGate(q, 0.9407245141333327, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3388675654576274, 0);
  sqcRYGate(q, -0.058339607426860056, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4993946114803833, 0);
  sqcRYGate(q, 1.3664484623436017, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.642194965781336, 0);
  sqcRYGate(q, -2.190627841028561, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.8755980040089466, 1);
  sqcRYGate(q, 0.681147569822686, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5128460944160196, 1);
  sqcRYGate(q, 0.16005731716432342, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8148227300530912, 1);
  sqcRYGate(q, -0.4446542812988108, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.766621296258254, 1);
  sqcRYGate(q, 2.2895532052500323, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8504559824952698, 2);
  sqcRYGate(q, -1.972266279248336, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.347058991320221, 2);
  sqcRYGate(q, -2.38573864028524, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5796067465841133, 0);
  sqcRYGate(q, 1.330904015148875, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0919284072853044, 0);
  sqcRYGate(q, 0.5554514599013558, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6492442401977323, 0);
  sqcRYGate(q, 0.22553633140909618, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3027093517414556, 0);
  sqcRYGate(q, -0.41102472376798627, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.255146949217, 0);
  sqcRYGate(q, 1.4876394933515733, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.2597774058119295, 0);
  sqcRYGate(q, -2.168328012202408, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.055952518503251, 1);
  sqcRYGate(q, 0.2191083574150851, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3592118756236566, 1);
  sqcRYGate(q, -1.0365211910705865, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1962640610544668, 1);
  sqcRYGate(q, 0.9657910559048448, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1258491399338357, 1);
  sqcRYGate(q, 3.0118006717160717, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.17333659081563907, 2);
  sqcRYGate(q, -1.532455101671686, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2287829627687623, 2);
  sqcRYGate(q, -2.102816723324782, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.15888045267336534, 0);
  sqcRYGate(q, -1.595389896723255, 1);
  sqcRYGate(q, -1.7486207988691422, 2);
  sqcRYGate(q, 3.0809362128312943, 3);

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
