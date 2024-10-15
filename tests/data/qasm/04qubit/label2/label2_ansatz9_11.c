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

  sqcRYGate(q, -1.3736026440499138, 0);
  sqcRYGate(q, 1.6338546006002428, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2219595611860479, 0);
  sqcRYGate(q, -0.05731754859071735, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2608337913480874, 2);
  sqcRYGate(q, -0.4542084616964057, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.723296183511626, 2);
  sqcRYGate(q, -1.8825722792716935, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.963566646449304, 0);
  sqcRYGate(q, 1.1770114327923151, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.093029373650271, 0);
  sqcRYGate(q, 0.11029691221007099, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.852052484935719, 1);
  sqcRYGate(q, 2.030617388008735, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9407174664951885, 1);
  sqcRYGate(q, 0.44646209901561384, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.2273918872720655, 0);
  sqcRYGate(q, 1.0212769652217855, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.4591314810834506, 0);
  sqcRYGate(q, -0.11776240849807974, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.0639824904683612, 1);
  sqcRYGate(q, 0.5499952270764448, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8645060710767818, 1);
  sqcRYGate(q, 0.11460620459739168, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3535233738419095, 0);
  sqcRYGate(q, 0.46010908640667925, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5441526469127522, 0);
  sqcRYGate(q, -2.3380453725856234, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.359698392691648, 2);
  sqcRYGate(q, 1.5660852242547856, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8499078894248474, 2);
  sqcRYGate(q, -2.5471663757484593, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.16192646214362938, 0);
  sqcRYGate(q, 2.7359164008156536, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9329289353277384, 0);
  sqcRYGate(q, 1.6822841280940874, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6008809418883168, 1);
  sqcRYGate(q, 0.752925599974864, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2649766013605277, 1);
  sqcRYGate(q, -1.9889259199108373, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5738155499545166, 0);
  sqcRYGate(q, -1.9121656204178408, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.7975933226398357, 0);
  sqcRYGate(q, -0.5180012520867567, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.3180666824285857, 1);
  sqcRYGate(q, 0.642572218239847, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4796877240570336, 1);
  sqcRYGate(q, -1.9679622139438777, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.85364836894623, 0);
  sqcRYGate(q, 1.4365517617171992, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3696170756208241, 0);
  sqcRYGate(q, -0.23654993217505033, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.43091340859113403, 2);
  sqcRYGate(q, -1.0928225502400313, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0019804616474746, 2);
  sqcRYGate(q, -2.7041220167173843, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1973415383908494, 0);
  sqcRYGate(q, 0.41247711375063467, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6648373988578344, 0);
  sqcRYGate(q, -2.4259135175291244, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8692517055669109, 1);
  sqcRYGate(q, -0.6249315094040694, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.647232366161598, 1);
  sqcRYGate(q, -2.635983823662101, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5416999659754076, 0);
  sqcRYGate(q, -1.3842426967965622, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.3157921375554573, 0);
  sqcRYGate(q, 0.9616378614126849, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.30485766723676555, 1);
  sqcRYGate(q, 1.4046163963601455, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5987890532032303, 1);
  sqcRYGate(q, -0.5427727075165426, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4474944035717581, 0);
  sqcRYGate(q, 0.30423226679938353, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.951549517749211, 0);
  sqcRYGate(q, -0.6617024791787687, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0908860413274624, 2);
  sqcRYGate(q, -2.6098065957885814, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.934258981695307, 2);
  sqcRYGate(q, -1.0092863229976672, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0678268962325292, 0);
  sqcRYGate(q, -0.41633338065099934, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4571655746244745, 0);
  sqcRYGate(q, 1.391863046348152, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.292888978996447, 1);
  sqcRYGate(q, 0.5712737007898907, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8538396692890773, 1);
  sqcRYGate(q, -1.114308458259492, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5438165860353276, 0);
  sqcRYGate(q, 1.2976428631358585, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.1283524652539496, 0);
  sqcRYGate(q, 0.12999703525416972, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.617872260448823, 1);
  sqcRYGate(q, 2.16695487205894, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9745030998332727, 1);
  sqcRYGate(q, -2.662371764844658, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3490325456994876, 0);
  sqcRYGate(q, -1.083734701527152, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0042198672322735, 0);
  sqcRYGate(q, -2.3535655815563006, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.08310990917359395, 2);
  sqcRYGate(q, 2.0659162370694233, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.13469785080774, 2);
  sqcRYGate(q, -0.057757245790992506, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.970487842003681, 0);
  sqcRYGate(q, 2.605841129233611, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7617854104212167, 0);
  sqcRYGate(q, -2.7206366569064486, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.693877712385183, 1);
  sqcRYGate(q, -1.2786661020049879, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.40656471092760055, 1);
  sqcRYGate(q, 2.1151144171242784, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3250475974763496, 0);
  sqcRYGate(q, 2.5966940460040813, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.030521974000344, 0);
  sqcRYGate(q, 3.115786442614358, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.7971409162893206, 1);
  sqcRYGate(q, 0.116111095512478, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.06655585149788247, 1);
  sqcRYGate(q, -3.1063307108226863, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.184901039819194, 0);
  sqcRYGate(q, -0.011194698940932443, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4535883088320594, 0);
  sqcRYGate(q, -0.23520183688802784, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7054850697599486, 2);
  sqcRYGate(q, -0.27334757287810335, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.889538011760547, 2);
  sqcRYGate(q, -0.5632969146132183, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6697663247721724, 0);
  sqcRYGate(q, -0.31185260500381773, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.609960733956543, 0);
  sqcRYGate(q, 0.6737898740688211, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.5841132994848905, 1);
  sqcRYGate(q, 2.351520653336618, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3214603696553144, 1);
  sqcRYGate(q, 2.3606562574078973, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.392581519344891, 0);
  sqcRYGate(q, 1.4353958785134768, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.021645579321683, 0);
  sqcRYGate(q, -2.997613751626778, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.8763122374397434, 1);
  sqcRYGate(q, -0.9939555343410991, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9810357739161226, 1);
  sqcRYGate(q, 0.29636447353657097, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0249215974003925, 0);
  sqcRYGate(q, 2.822080847880701, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6141810486679375, 0);
  sqcRYGate(q, -0.9009477470075832, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.124507060359821, 2);
  sqcRYGate(q, -2.8300059516924634, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1135360132547802, 2);
  sqcRYGate(q, 1.9432663121108193, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2553893774384957, 0);
  sqcRYGate(q, 1.6767378187328204, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2141260830213343, 0);
  sqcRYGate(q, -0.028960964068709155, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8733388259996158, 1);
  sqcRYGate(q, -1.7218758227125974, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5433799929895076, 1);
  sqcRYGate(q, -0.5562440143112773, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.9836210458617023, 0);
  sqcRYGate(q, 0.0012002802416564151, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.39259745004386176, 0);
  sqcRYGate(q, -2.4465029180712428, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.0154426045075353, 1);
  sqcRYGate(q, -3.0591590120378735, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2857779999456949, 1);
  sqcRYGate(q, -1.468198430523592, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.48860095907300166, 0);
  sqcRYGate(q, -2.5807294186884477, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7657583769077994, 0);
  sqcRYGate(q, 2.7448295598289976, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.884952958320737, 2);
  sqcRYGate(q, -2.261732336068169, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7921817546746226, 2);
  sqcRYGate(q, -2.984345700163608, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8503624677917583, 0);
  sqcRYGate(q, 1.8452441558198593, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1677215517321624, 0);
  sqcRYGate(q, -1.9182701577587247, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.882547068286506, 1);
  sqcRYGate(q, -0.4921594315249873, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0577788871544351, 1);
  sqcRYGate(q, -3.0621490709074104, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.08720918729623588, 0);
  sqcRYGate(q, 1.536857211249499, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.8411789112694548, 0);
  sqcRYGate(q, -2.6905062085831624, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.651944068945895, 1);
  sqcRYGate(q, -0.9095118530020522, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0871373593014226, 1);
  sqcRYGate(q, -0.763805460478145, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.870950095672509, 0);
  sqcRYGate(q, -3.083053550794214, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.11353892815085231, 0);
  sqcRYGate(q, 2.349995170762076, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.39811390320935214, 2);
  sqcRYGate(q, -1.605845278659327, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7087166535554997, 2);
  sqcRYGate(q, -2.3178989118063176, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0306897058186637, 0);
  sqcRYGate(q, 0.7917514139622748, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.09193256252747695, 0);
  sqcRYGate(q, -0.41072307676482384, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.1749059849322645, 1);
  sqcRYGate(q, 0.3424244876535419, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2835579989257688, 1);
  sqcRYGate(q, -2.96212596249522, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2771387097515663, 0);
  sqcRYGate(q, -0.9373325062235462, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.17301095451982207, 0);
  sqcRYGate(q, -2.8008775583435455, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.7631942718153395, 1);
  sqcRYGate(q, -2.9768131528312263, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2734491814553581, 1);
  sqcRYGate(q, -2.1605818588985954, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.983128579914093, 0);
  sqcRYGate(q, -2.946925178593874, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.837568559524382, 0);
  sqcRYGate(q, -2.6875641982609655, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1179869582304214, 2);
  sqcRYGate(q, -1.6989313159733375, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6471632060587948, 2);
  sqcRYGate(q, 0.6885029642754028, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.027232996791037, 0);
  sqcRYGate(q, 0.8728314282904513, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.843574756093517, 0);
  sqcRYGate(q, 0.40767960963563526, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.139059007332968, 1);
  sqcRYGate(q, 3.0664182937041993, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.677393064206598, 1);
  sqcRYGate(q, -1.1860212686156117, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.610498231473431, 0);
  sqcRYGate(q, -1.586605633982821, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.7536789466534355, 0);
  sqcRYGate(q, -2.3086565297787005, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.373102886963827, 1);
  sqcRYGate(q, 2.6122427810483297, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1785924534765133, 1);
  sqcRYGate(q, -3.0659469778658224, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1160297152411824, 0);
  sqcRYGate(q, -2.6347117955100865, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1710815731500315, 0);
  sqcRYGate(q, 0.22181593440190242, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9587924258578104, 2);
  sqcRYGate(q, -2.73808076639824, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4054230377921861, 2);
  sqcRYGate(q, -1.4441576124333997, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9639551810044418, 0);
  sqcRYGate(q, 0.686495467156381, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6693684290079185, 0);
  sqcRYGate(q, -2.5446875032579337, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6672329791951572, 1);
  sqcRYGate(q, 0.5565353774653072, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.241426100621003, 1);
  sqcRYGate(q, -0.7400384237264745, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.374837181675846, 0);
  sqcRYGate(q, -1.197332683008412, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.5877146330019536, 0);
  sqcRYGate(q, 1.0656177038400818, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.054871434418267, 1);
  sqcRYGate(q, -2.6242296981426936, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.36108880975672336, 1);
  sqcRYGate(q, -2.1701222828593396, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.22357402537444968, 0);
  sqcRYGate(q, 1.2515882551863524, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0064433981167173, 0);
  sqcRYGate(q, 1.6192405192296517, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.10577512925534016, 2);
  sqcRYGate(q, 2.0600296549060246, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5377435426777236, 2);
  sqcRYGate(q, -2.089279576880805, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7002111227169188, 0);
  sqcRYGate(q, 1.8302209325352026, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.26400650823635907, 0);
  sqcRYGate(q, 2.0090643119238347, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.8686883488616033, 1);
  sqcRYGate(q, -0.20456861555057862, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9848319054648584, 1);
  sqcRYGate(q, 1.8391524716825278, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9421132555261638, 0);
  sqcRYGate(q, -0.9430063301849475, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.8559302751377991, 0);
  sqcRYGate(q, 2.8798551868182, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.422908537717588, 1);
  sqcRYGate(q, -0.9416839877428798, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2971070836635379, 1);
  sqcRYGate(q, 2.202230126107945, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.05943054766275857, 0);
  sqcRYGate(q, -0.6950251344338298, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9534002309865173, 0);
  sqcRYGate(q, 1.0457129207603044, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4570839111994673, 2);
  sqcRYGate(q, -0.7446738564395124, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.021419775042112, 2);
  sqcRYGate(q, -0.9793518473584444, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5260824157625563, 0);
  sqcRYGate(q, -1.161908767135217, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7121393847362787, 0);
  sqcRYGate(q, -0.8768123502653326, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9702708018900646, 1);
  sqcRYGate(q, 1.6338986243958284, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5831851698391284, 1);
  sqcRYGate(q, -1.7180650120207819, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.11625632243819532, 0);
  sqcRYGate(q, 2.5220161499311566, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.17294119461759028, 0);
  sqcRYGate(q, -0.0021532327741287105, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.3922903447666929, 1);
  sqcRYGate(q, -0.0804328388561829, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3811844503960304, 1);
  sqcRYGate(q, 0.006946254219374606, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7120150738150182, 0);
  sqcRYGate(q, 1.1002299078933655, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2654965742447224, 0);
  sqcRYGate(q, -1.611870820657594, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4099435968945049, 2);
  sqcRYGate(q, -2.7027499916746494, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7603748839979705, 2);
  sqcRYGate(q, 1.7097133122423904, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.47643206264786375, 0);
  sqcRYGate(q, -0.2529528018474396, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5011925927087679, 0);
  sqcRYGate(q, 0.25171349946410326, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.758277247897702, 1);
  sqcRYGate(q, -1.7105466949760744, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.345616136613176, 1);
  sqcRYGate(q, -0.7411293809807527, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8990680472828605, 0);
  sqcRYGate(q, -0.9093169922916423, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.3382489768773631, 0);
  sqcRYGate(q, -2.0845195193544823, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.910229458175875, 1);
  sqcRYGate(q, -1.8982739000361617, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2046954639428513, 1);
  sqcRYGate(q, -2.1672488234681047, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.872759378339161, 0);
  sqcRYGate(q, -0.4700631693395066, 1);
  sqcRYGate(q, 0.9156410359910118, 2);
  sqcRYGate(q, 1.828810404728647, 3);

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
