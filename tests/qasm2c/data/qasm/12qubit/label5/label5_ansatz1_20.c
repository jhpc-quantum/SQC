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

  sqcRYGate(q, -1.8227221796399653, 0);
  sqcRZGate(q, -0.18461671270700986, 0);
  sqcRYGate(q, -1.629096861594026, 1);
  sqcRZGate(q, 0.9507522209478134, 1);
  sqcRYGate(q, -1.9286229775456583, 2);
  sqcRZGate(q, -1.1268021826347718, 2);
  sqcRYGate(q, -2.040906161015891, 3);
  sqcRZGate(q, -1.1241396013389333, 3);
  sqcRYGate(q, -0.07808381357004268, 4);
  sqcRZGate(q, -2.9164612345477297, 4);
  sqcRYGate(q, -3.1084842086381426, 5);
  sqcRZGate(q, 2.2942788046120093, 5);
  sqcRYGate(q, -1.4355826946252384, 6);
  sqcRZGate(q, 0.32882617901355266, 6);
  sqcRYGate(q, -0.34888083333044884, 7);
  sqcRZGate(q, -2.4503057184554544, 7);
  sqcRYGate(q, 1.235227219198541, 8);
  sqcRZGate(q, -2.61974779999876, 8);
  sqcRYGate(q, 3.138452427287355, 9);
  sqcRZGate(q, -0.4592750232330029, 9);
  sqcRYGate(q, -2.479495894794237, 10);
  sqcRZGate(q, -0.18216657208297352, 10);
  sqcRYGate(q, -2.5521882460993015, 11);
  sqcRZGate(q, -2.201154024691278, 11);
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
  sqcRYGate(q, 1.3408787007523069, 0);
  sqcRZGate(q, -2.6031407657375407, 0);
  sqcRYGate(q, -1.2861203342906657, 1);
  sqcRZGate(q, -3.0435299097817565, 1);
  sqcRYGate(q, 0.8379667033100036, 2);
  sqcRZGate(q, -2.595221528188422, 2);
  sqcRYGate(q, 2.92726088762639, 3);
  sqcRZGate(q, 2.794174456818627, 3);
  sqcRYGate(q, 1.5685950099160149, 4);
  sqcRZGate(q, -2.2773584241495417, 4);
  sqcRYGate(q, -3.07672304963695, 5);
  sqcRZGate(q, -2.855001212955171, 5);
  sqcRYGate(q, -1.4122675211975797, 6);
  sqcRZGate(q, -2.5110029608199995, 6);
  sqcRYGate(q, -1.0704963118402908, 7);
  sqcRZGate(q, -0.0737742703842115, 7);
  sqcRYGate(q, -1.874614361870429, 8);
  sqcRZGate(q, 0.20869129378509219, 8);
  sqcRYGate(q, -0.0033164138433070534, 9);
  sqcRZGate(q, 1.8105848726466958, 9);
  sqcRYGate(q, 0.09826596447193034, 10);
  sqcRZGate(q, -2.2539641291080175, 10);
  sqcRYGate(q, -1.7027165069731347, 11);
  sqcRZGate(q, -0.737251447420034, 11);
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
  sqcRYGate(q, -3.063178305878058, 0);
  sqcRZGate(q, -3.0801586006739865, 0);
  sqcRYGate(q, -2.550029701303148, 1);
  sqcRZGate(q, 2.236897466913587, 1);
  sqcRYGate(q, 2.561065704985276, 2);
  sqcRZGate(q, -2.908504927788947, 2);
  sqcRYGate(q, 2.5807672652534714, 3);
  sqcRZGate(q, -0.9140708872008032, 3);
  sqcRYGate(q, 3.030256634631105, 4);
  sqcRZGate(q, 0.4708766587350167, 4);
  sqcRYGate(q, -2.0354045078216645, 5);
  sqcRZGate(q, -3.120231771040826, 5);
  sqcRYGate(q, 2.5974835421412297, 6);
  sqcRZGate(q, 1.3621700818833173, 6);
  sqcRYGate(q, -0.632124334811131, 7);
  sqcRZGate(q, 2.4005106003253958, 7);
  sqcRYGate(q, 2.755407243316295, 8);
  sqcRZGate(q, 1.2272986936553498, 8);
  sqcRYGate(q, -0.01782721218060157, 9);
  sqcRZGate(q, 0.5825616737764762, 9);
  sqcRYGate(q, -0.7022572580331161, 10);
  sqcRZGate(q, 0.04922882608222587, 10);
  sqcRYGate(q, -2.774165736243133, 11);
  sqcRZGate(q, -0.10855623296098615, 11);
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
  sqcRYGate(q, 0.37761946005220903, 0);
  sqcRZGate(q, -1.8940525760168423, 0);
  sqcRYGate(q, -1.717266530198947, 1);
  sqcRZGate(q, 0.9648221022762283, 1);
  sqcRYGate(q, -0.549562853978661, 2);
  sqcRZGate(q, -0.826894670754668, 2);
  sqcRYGate(q, 1.3026550090591416, 3);
  sqcRZGate(q, -0.8062358871638743, 3);
  sqcRYGate(q, -3.090344432381345, 4);
  sqcRZGate(q, 1.769561547066258, 4);
  sqcRYGate(q, -0.05488594290491188, 5);
  sqcRZGate(q, 2.966142040231444, 5);
  sqcRYGate(q, 0.37022281799228285, 6);
  sqcRZGate(q, -1.6461969697067937, 6);
  sqcRYGate(q, -1.5695646922114788, 7);
  sqcRZGate(q, 1.3533760639583208, 7);
  sqcRYGate(q, 0.12055496176928138, 8);
  sqcRZGate(q, 2.09428390582899, 8);
  sqcRYGate(q, 0.004902532003961503, 9);
  sqcRZGate(q, -1.4590305115711493, 9);
  sqcRYGate(q, -0.26761489473769373, 10);
  sqcRZGate(q, -1.9395202112907945, 10);
  sqcRYGate(q, 0.5629094002611001, 11);
  sqcRZGate(q, -1.351946711202292, 11);
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
  sqcRYGate(q, -0.6865433405998074, 0);
  sqcRZGate(q, 1.4497724545993798, 0);
  sqcRYGate(q, -2.020015361456516, 1);
  sqcRZGate(q, -1.9686679723260758, 1);
  sqcRYGate(q, 2.339937945292343, 2);
  sqcRZGate(q, 0.16788104144977023, 2);
  sqcRYGate(q, 0.7597896952028629, 3);
  sqcRZGate(q, 2.2914734630723834, 3);
  sqcRYGate(q, -0.5009317445645415, 4);
  sqcRZGate(q, -1.8458408024399933, 4);
  sqcRYGate(q, -1.2445294958006823, 5);
  sqcRZGate(q, -1.3392258542906479, 5);
  sqcRYGate(q, 0.5512037577216269, 6);
  sqcRZGate(q, 2.2256075194692446, 6);
  sqcRYGate(q, 2.4857493384406157, 7);
  sqcRZGate(q, -0.10929651620435443, 7);
  sqcRYGate(q, -1.2336471124921942, 8);
  sqcRZGate(q, 2.8539102954755378, 8);
  sqcRYGate(q, 3.0317710022236004, 9);
  sqcRZGate(q, 3.024239268251766, 9);
  sqcRYGate(q, 0.8969897043156444, 10);
  sqcRZGate(q, -0.9776630525196146, 10);
  sqcRYGate(q, 2.9980455530820818, 11);
  sqcRZGate(q, 1.482138165537348, 11);
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
  sqcRYGate(q, -0.3673149239424438, 0);
  sqcRZGate(q, -0.48281637631981855, 0);
  sqcRYGate(q, -2.1225511984779457, 1);
  sqcRZGate(q, 2.65048209796251, 1);
  sqcRYGate(q, -0.05333517971309596, 2);
  sqcRZGate(q, 1.4929929639908062, 2);
  sqcRYGate(q, 0.046389251759712216, 3);
  sqcRZGate(q, -1.3994944950165715, 3);
  sqcRYGate(q, -3.1353703361054515, 4);
  sqcRZGate(q, 3.0115749381971586, 4);
  sqcRYGate(q, -3.13487147680993, 5);
  sqcRZGate(q, -1.7397834857769297, 5);
  sqcRYGate(q, -1.8594520944703916, 6);
  sqcRZGate(q, -1.0621979143065028, 6);
  sqcRYGate(q, -2.847234580886137, 7);
  sqcRZGate(q, 0.15410523955057176, 7);
  sqcRYGate(q, 0.09257097676247028, 8);
  sqcRZGate(q, -1.1830443969439435, 8);
  sqcRYGate(q, 3.0911530237121396, 9);
  sqcRZGate(q, 3.061390587498569, 9);
  sqcRYGate(q, 3.103800477404606, 10);
  sqcRZGate(q, -0.5814313836044284, 10);
  sqcRYGate(q, -1.1433424138402168, 11);
  sqcRZGate(q, 1.701308474415093, 11);
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
  sqcRYGate(q, 2.942004484887637, 0);
  sqcRZGate(q, 0.805832329695571, 0);
  sqcRYGate(q, -2.025899250861432, 1);
  sqcRZGate(q, 1.7909262145220322, 1);
  sqcRYGate(q, -1.8794396065998455, 2);
  sqcRZGate(q, 2.3659273331375634, 2);
  sqcRYGate(q, -2.58662753990164, 3);
  sqcRZGate(q, -1.7870681777896738, 3);
  sqcRYGate(q, 1.5302361139351355, 4);
  sqcRZGate(q, 0.7420493760959301, 4);
  sqcRYGate(q, -3.0778777826129224, 5);
  sqcRZGate(q, 0.6710479673167096, 5);
  sqcRYGate(q, -1.5316685245233828, 6);
  sqcRZGate(q, -0.9696443034821594, 6);
  sqcRYGate(q, -2.826871884417433, 7);
  sqcRZGate(q, -2.908039975971407, 7);
  sqcRYGate(q, -2.8850300345544824, 8);
  sqcRZGate(q, 0.7574365478031879, 8);
  sqcRYGate(q, 3.0302585354326124, 9);
  sqcRZGate(q, 0.6262463582418532, 9);
  sqcRYGate(q, -2.659082920175518, 10);
  sqcRZGate(q, 0.41347610552266495, 10);
  sqcRYGate(q, 2.0277261791173, 11);
  sqcRZGate(q, 2.1686622800186397, 11);
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
  sqcRYGate(q, 1.2846325703828165, 0);
  sqcRZGate(q, -1.8155299428806266, 0);
  sqcRYGate(q, 1.6149257310004392, 1);
  sqcRZGate(q, -2.3190734447812504, 1);
  sqcRYGate(q, 3.095283961412372, 2);
  sqcRZGate(q, -0.7698771286120794, 2);
  sqcRYGate(q, -1.1023994027063742, 3);
  sqcRZGate(q, 0.028671508809751434, 3);
  sqcRYGate(q, 0.048030931938286336, 4);
  sqcRZGate(q, 2.459771483572084, 4);
  sqcRYGate(q, 0.0008786118760714865, 5);
  sqcRZGate(q, 2.6500804437657566, 5);
  sqcRYGate(q, 2.450255527865199, 6);
  sqcRZGate(q, -1.8755364250742597, 6);
  sqcRYGate(q, 0.1765069913003252, 7);
  sqcRZGate(q, -0.24350307308931193, 7);
  sqcRYGate(q, 2.1409454903672924, 8);
  sqcRZGate(q, 2.9414433471753316, 8);
  sqcRYGate(q, 1.5150498544808553, 9);
  sqcRZGate(q, 0.6079000387318408, 9);
  sqcRYGate(q, 0.16326352658041848, 10);
  sqcRZGate(q, 2.3081707259325492, 10);
  sqcRYGate(q, 1.5814044545563215, 11);
  sqcRZGate(q, 2.693178096416548, 11);
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
  sqcRYGate(q, 2.3560995976899366, 0);
  sqcRZGate(q, -3.0989981135966875, 0);
  sqcRYGate(q, -1.0665030805952618, 1);
  sqcRZGate(q, 0.4803721245661662, 1);
  sqcRYGate(q, 2.1508026348254345, 2);
  sqcRZGate(q, -1.7143670264333983, 2);
  sqcRYGate(q, 0.48906498295408657, 3);
  sqcRZGate(q, -1.7415059163485318, 3);
  sqcRYGate(q, -0.09595347605090437, 4);
  sqcRZGate(q, 1.048782460186765, 4);
  sqcRYGate(q, -1.8964381863750859, 5);
  sqcRZGate(q, -0.3370392823665991, 5);
  sqcRYGate(q, 1.7678634026563556, 6);
  sqcRZGate(q, -2.258893557415312, 6);
  sqcRYGate(q, 3.1386105983418138, 7);
  sqcRZGate(q, 2.632924844285578, 7);
  sqcRYGate(q, -3.139907452021411, 8);
  sqcRZGate(q, 0.9141504085541816, 8);
  sqcRYGate(q, 3.134905407464057, 9);
  sqcRZGate(q, 1.8562075897406822, 9);
  sqcRYGate(q, 1.6105329594982774, 10);
  sqcRZGate(q, 0.6888419796785277, 10);
  sqcRYGate(q, -0.1809103495483546, 11);
  sqcRZGate(q, 2.226536425199873, 11);
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
  sqcRYGate(q, 0.9013058998706596, 0);
  sqcRZGate(q, -2.382746480193786, 0);
  sqcRYGate(q, -1.3018294284728225, 1);
  sqcRZGate(q, -2.3066165031286867, 1);
  sqcRYGate(q, -1.210547169121985, 2);
  sqcRZGate(q, 0.13016503203916274, 2);
  sqcRYGate(q, -1.5040162346681205, 3);
  sqcRZGate(q, 0.5876691404790528, 3);
  sqcRYGate(q, -0.01661554518107522, 4);
  sqcRZGate(q, -2.2805478804829082, 4);
  sqcRYGate(q, -0.666234219833886, 5);
  sqcRZGate(q, -1.589445698860733, 5);
  sqcRYGate(q, -2.412540207962106, 6);
  sqcRZGate(q, -0.8827672419182964, 6);
  sqcRYGate(q, 2.781977814966232, 7);
  sqcRZGate(q, 1.2626759151193663, 7);
  sqcRYGate(q, -2.0775918988294455, 8);
  sqcRZGate(q, -1.6736985188816211, 8);
  sqcRYGate(q, -0.8350581658965558, 9);
  sqcRZGate(q, 1.7246708392003527, 9);
  sqcRYGate(q, -0.5238695255273242, 10);
  sqcRZGate(q, -2.126436227816136, 10);
  sqcRYGate(q, 0.5819337990859674, 11);
  sqcRZGate(q, 2.0420106553004804, 11);
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
  sqcRYGate(q, -1.652858280148636, 0);
  sqcRZGate(q, 0.5146974478791675, 0);
  sqcRYGate(q, 2.3603076523151, 1);
  sqcRZGate(q, -0.4103515776730805, 1);
  sqcRYGate(q, -2.9753550303692613, 2);
  sqcRZGate(q, 2.206256264838454, 2);
  sqcRYGate(q, 2.6455566606820127, 3);
  sqcRZGate(q, -1.118223450750002, 3);
  sqcRYGate(q, 0.02271479687767641, 4);
  sqcRZGate(q, 1.3033713069192459, 4);
  sqcRYGate(q, 1.5647252899016972, 5);
  sqcRZGate(q, 1.0793968627293995, 5);
  sqcRYGate(q, -1.3926866684051742, 6);
  sqcRZGate(q, -1.632674022284122, 6);
  sqcRYGate(q, -0.913565378387756, 7);
  sqcRZGate(q, -1.2975243008005863, 7);
  sqcRYGate(q, -1.5688600682585823, 8);
  sqcRZGate(q, 1.8315820191131706, 8);
  sqcRYGate(q, -0.9031852811213676, 9);
  sqcRZGate(q, -1.5648737221475129, 9);
  sqcRYGate(q, -1.1613347385794661, 10);
  sqcRZGate(q, -0.6511797426239889, 10);
  sqcRYGate(q, -0.877059803704299, 11);
  sqcRZGate(q, -0.10281016461638258, 11);
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
  sqcRYGate(q, -1.0577915238035098, 0);
  sqcRZGate(q, -0.6601857366018944, 0);
  sqcRYGate(q, -2.267951441155125, 1);
  sqcRZGate(q, -1.0723354683372035, 1);
  sqcRYGate(q, 2.2587906120052605, 2);
  sqcRZGate(q, -1.3895603903898734, 2);
  sqcRYGate(q, -0.15128885870886144, 3);
  sqcRZGate(q, -1.4514155980340133, 3);
  sqcRYGate(q, 0.04091219577888364, 4);
  sqcRZGate(q, -0.14297313835899583, 4);
  sqcRYGate(q, -1.5806402822895953, 5);
  sqcRZGate(q, -1.6078854236660283, 5);
  sqcRYGate(q, 1.2110904973838414, 6);
  sqcRZGate(q, 0.7663039794897444, 6);
  sqcRYGate(q, -1.5756267402950774, 7);
  sqcRZGate(q, -3.1390254879275834, 7);
  sqcRYGate(q, 3.07991446850516, 8);
  sqcRZGate(q, 0.14029621927571848, 8);
  sqcRYGate(q, 1.7296533491805084, 9);
  sqcRZGate(q, -1.1800742621731937, 9);
  sqcRYGate(q, -2.52203459862968, 10);
  sqcRZGate(q, 0.6926868122038733, 10);
  sqcRYGate(q, 2.8820309443242924, 11);
  sqcRZGate(q, -1.6878930721691239, 11);
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
  sqcRYGate(q, -0.7888945124809299, 0);
  sqcRZGate(q, 1.6148433246993266, 0);
  sqcRYGate(q, -2.8824047654717955, 1);
  sqcRZGate(q, 2.2844034998703364, 1);
  sqcRYGate(q, -1.1732369724460026, 2);
  sqcRZGate(q, -1.484040141156291, 2);
  sqcRYGate(q, 0.22300366553651088, 3);
  sqcRZGate(q, -0.09392730362992234, 3);
  sqcRYGate(q, 1.5548628343870172, 4);
  sqcRZGate(q, -2.011331702210889, 4);
  sqcRYGate(q, -0.023909548744172077, 5);
  sqcRZGate(q, 0.03274747265813805, 5);
  sqcRYGate(q, -0.0016187890556356081, 6);
  sqcRZGate(q, 2.368596613035964, 6);
  sqcRYGate(q, -0.7020179081358675, 7);
  sqcRZGate(q, 1.5033797992223288, 7);
  sqcRYGate(q, 2.815918237563104, 8);
  sqcRZGate(q, -0.0290185404559077, 8);
  sqcRYGate(q, -0.003512092277196412, 9);
  sqcRZGate(q, -0.363319534934798, 9);
  sqcRYGate(q, 3.1270248261818643, 10);
  sqcRZGate(q, -2.641675933510745, 10);
  sqcRYGate(q, 0.4301679765451214, 11);
  sqcRZGate(q, 0.37785852905017286, 11);
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
  sqcRYGate(q, -1.7764623108538256, 0);
  sqcRZGate(q, -0.8912204608406719, 0);
  sqcRYGate(q, 2.355776540177054, 1);
  sqcRZGate(q, 0.8353980756769248, 1);
  sqcRYGate(q, 2.9961495162098855, 2);
  sqcRZGate(q, 0.560841366004213, 2);
  sqcRYGate(q, 0.07346682512616903, 3);
  sqcRZGate(q, 0.6859993281916248, 3);
  sqcRYGate(q, -0.47244891774451486, 4);
  sqcRZGate(q, 2.8393398998290125, 4);
  sqcRYGate(q, 1.5785080300741958, 5);
  sqcRZGate(q, 2.8808813292227695, 5);
  sqcRYGate(q, 1.6415429417203489, 6);
  sqcRZGate(q, 2.8699463862592065, 6);
  sqcRYGate(q, -2.9968660505014646, 7);
  sqcRZGate(q, 1.5385097219322938, 7);
  sqcRYGate(q, 0.04517183019575732, 8);
  sqcRZGate(q, 1.4913265422792188, 8);
  sqcRYGate(q, -3.1397781866550525, 9);
  sqcRZGate(q, -2.9927869952420325, 9);
  sqcRYGate(q, -2.911683701680188, 10);
  sqcRZGate(q, -1.6286924769722688, 10);
  sqcRYGate(q, 2.3038915733607883, 11);
  sqcRZGate(q, -1.867157703586924, 11);
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
  sqcRYGate(q, -2.5235192725273303, 0);
  sqcRZGate(q, 1.347068918041212, 0);
  sqcRYGate(q, -1.273364123255656, 1);
  sqcRZGate(q, -1.656010363767634, 1);
  sqcRYGate(q, -3.0077614879230152, 2);
  sqcRZGate(q, -1.2530612625997488, 2);
  sqcRYGate(q, 3.119206699196294, 3);
  sqcRZGate(q, 2.2543827872698214, 3);
  sqcRYGate(q, 3.1224864360633444, 4);
  sqcRZGate(q, 0.9765855722409089, 4);
  sqcRYGate(q, 9.248895807509369e-05, 5);
  sqcRZGate(q, -2.8875629724325576, 5);
  sqcRYGate(q, -1.571103897997269, 6);
  sqcRZGate(q, -1.058278130445527, 6);
  sqcRYGate(q, 0.02621563288644862, 7);
  sqcRZGate(q, -0.034841070823336644, 7);
  sqcRYGate(q, 1.589699517131282, 8);
  sqcRZGate(q, -1.970729995982265, 8);
  sqcRYGate(q, 1.3953187645075777, 9);
  sqcRZGate(q, 1.7131129347455067, 9);
  sqcRYGate(q, -3.125230225254118, 10);
  sqcRZGate(q, 0.005460658078135894, 10);
  sqcRYGate(q, 1.2132237632951108, 11);
  sqcRZGate(q, -2.0859974343138563, 11);
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
  sqcRYGate(q, -1.4501409447018991, 0);
  sqcRZGate(q, 1.1113599041783624, 0);
  sqcRYGate(q, 2.8095753840175317, 1);
  sqcRZGate(q, 1.9950925388758058, 1);
  sqcRYGate(q, -1.2951713096832869, 2);
  sqcRZGate(q, -0.1256772440124258, 2);
  sqcRYGate(q, 2.0950859697696447, 3);
  sqcRZGate(q, 2.9781568007779518, 3);
  sqcRYGate(q, 1.9690315177070012, 4);
  sqcRZGate(q, 0.4448220427969882, 4);
  sqcRYGate(q, -0.9591797100353965, 5);
  sqcRZGate(q, -0.0007820375415699132, 5);
  sqcRYGate(q, 0.0025136645374228377, 6);
  sqcRZGate(q, 1.0629138628281383, 6);
  sqcRYGate(q, -2.1128685393045075, 7);
  sqcRZGate(q, 3.141505993051744, 7);
  sqcRYGate(q, 3.134221849843975, 8);
  sqcRZGate(q, 1.139854167532359, 8);
  sqcRYGate(q, 2.1521131114668792, 9);
  sqcRZGate(q, 2.75426008573048, 9);
  sqcRYGate(q, 3.0567735316742763, 10);
  sqcRZGate(q, -1.4615079270344706, 10);
  sqcRYGate(q, -0.7808591950394526, 11);
  sqcRZGate(q, -2.055662282217667, 11);
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
  sqcRYGate(q, -2.344769150977528, 0);
  sqcRZGate(q, 0.05697303185117342, 0);
  sqcRYGate(q, 0.9785453947259087, 1);
  sqcRZGate(q, 1.6578647548104826, 1);
  sqcRYGate(q, -3.1141560492792038, 2);
  sqcRZGate(q, 1.7558800452012535, 2);
  sqcRYGate(q, -3.1318138975259644, 3);
  sqcRZGate(q, -0.07760522365916511, 3);
  sqcRYGate(q, 2.4098574262291907, 4);
  sqcRZGate(q, -1.1890572689864678, 4);
  sqcRYGate(q, 0.577895307532664, 5);
  sqcRZGate(q, -3.1407496428680495, 5);
  sqcRYGate(q, -1.5723108935110632, 6);
  sqcRZGate(q, 0.00013875656551311282, 6);
  sqcRYGate(q, 1.5436196039799794, 7);
  sqcRZGate(q, 1.6246590023240681, 7);
  sqcRYGate(q, 3.113545516593753, 8);
  sqcRZGate(q, 0.309493853663658, 8);
  sqcRYGate(q, -2.9786321702978635, 9);
  sqcRZGate(q, 2.5416501330198553, 9);
  sqcRYGate(q, -3.0431566409262727, 10);
  sqcRZGate(q, -0.061447590552435274, 10);
  sqcRYGate(q, -3.0072935706443156, 11);
  sqcRZGate(q, -2.1796941875849827, 11);
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
  sqcRYGate(q, 0.04297257051587522, 0);
  sqcRZGate(q, -1.3847417529176507, 0);
  sqcRYGate(q, -0.8058646897138111, 1);
  sqcRZGate(q, 2.328266874029623, 1);
  sqcRYGate(q, -3.019617085369308, 2);
  sqcRZGate(q, 2.126516779041109, 2);
  sqcRYGate(q, 1.9928077562102038, 3);
  sqcRZGate(q, 0.30113256657772863, 3);
  sqcRYGate(q, -3.1414891155266194, 4);
  sqcRZGate(q, 1.9568402640619924, 4);
  sqcRYGate(q, 1.556764891111012, 5);
  sqcRZGate(q, -3.140192272484132, 5);
  sqcRYGate(q, -1.6751896669545563, 6);
  sqcRZGate(q, 3.141164714111415, 6);
  sqcRYGate(q, 3.141333902390502, 7);
  sqcRZGate(q, 1.5259733422335617, 7);
  sqcRYGate(q, 2.96538085929452, 8);
  sqcRZGate(q, -1.5306573911016181, 8);
  sqcRYGate(q, 2.537405840962817, 9);
  sqcRZGate(q, 2.917958221847826, 9);
  sqcRYGate(q, 1.6339293796364525, 10);
  sqcRZGate(q, 1.6113273160880892, 10);
  sqcRYGate(q, -2.0828426592443714, 11);
  sqcRZGate(q, -0.27532655721321664, 11);
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
  sqcRYGate(q, -1.5917002707824741, 0);
  sqcRZGate(q, 0.8655473819474528, 0);
  sqcRYGate(q, -2.590524320936822, 1);
  sqcRZGate(q, -1.941233917130948, 1);
  sqcRYGate(q, 1.5709500002779564, 2);
  sqcRZGate(q, -0.6982566066795489, 2);
  sqcRYGate(q, -3.1410310727090427, 3);
  sqcRZGate(q, 1.3900929723247044, 3);
  sqcRYGate(q, 1.698126466915931, 4);
  sqcRZGate(q, -3.1373572935061604, 4);
  sqcRYGate(q, 1.4795362578701454, 5);
  sqcRZGate(q, -3.0383001097814146, 5);
  sqcRYGate(q, -3.0172612983237017, 6);
  sqcRZGate(q, -3.0358393613911168, 6);
  sqcRYGate(q, -2.3995246066734897, 7);
  sqcRZGate(q, 1.8064598825717944, 7);
  sqcRYGate(q, -1.865147350209102, 8);
  sqcRZGate(q, -2.8684229419928853, 8);
  sqcRYGate(q, 1.5281817742987518, 9);
  sqcRZGate(q, -0.0681624643882798, 9);
  sqcRYGate(q, 1.4279818601416203, 10);
  sqcRZGate(q, -1.9046430038832105, 10);
  sqcRYGate(q, 2.188711541566505, 11);
  sqcRZGate(q, 0.48781577224318967, 11);
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
  sqcRYGate(q, 2.2338474080307513, 0);
  sqcRZGate(q, 1.9418141087323348, 0);
  sqcRYGate(q, 1.5584262235508153, 1);
  sqcRZGate(q, 1.3298200865543706, 1);
  sqcRYGate(q, -1.5130184395132378, 2);
  sqcRZGate(q, -1.5183400212957376, 2);
  sqcRYGate(q, -3.121519005373289, 3);
  sqcRZGate(q, -0.6092916814432507, 3);
  sqcRYGate(q, -1.4884982310014294, 4);
  sqcRZGate(q, 0.008407386431982944, 4);
  sqcRYGate(q, -0.04107316297538605, 5);
  sqcRZGate(q, 3.0275801218899394, 5);
  sqcRYGate(q, -0.015481140468659737, 6);
  sqcRZGate(q, -2.1756144446689873, 6);
  sqcRYGate(q, -3.140866703272444, 7);
  sqcRZGate(q, 1.8406476574602837, 7);
  sqcRYGate(q, -3.1412447149164504, 8);
  sqcRZGate(q, 0.8867338467546803, 8);
  sqcRYGate(q, 0.0386789251799044, 9);
  sqcRZGate(q, 0.03172927642175459, 9);
  sqcRYGate(q, -3.1380671273570617, 10);
  sqcRZGate(q, -2.113660000497397, 10);
  sqcRYGate(q, 2.859459166688378, 11);
  sqcRZGate(q, 0.48257801808716033, 11);
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
  sqcRYGate(q, -2.6073993052715245, 0);
  sqcRZGate(q, 0.658721581890023, 0);
  sqcRYGate(q, -1.8390032452262863, 1);
  sqcRZGate(q, 2.6306867353578696, 1);
  sqcRYGate(q, -0.00203572343868409, 2);
  sqcRZGate(q, 3.1411371852805012, 2);
  sqcRYGate(q, -3.140633404722315, 3);
  sqcRZGate(q, -1.6976134614080092, 3);
  sqcRYGate(q, -0.22339291402670372, 4);
  sqcRZGate(q, 1.8809170068611953, 4);
  sqcRYGate(q, 0.7611164081356039, 5);
  sqcRZGate(q, -0.00015322325177269391, 5);
  sqcRYGate(q, 3.140651788450152, 6);
  sqcRZGate(q, 1.1016809116301056, 6);
  sqcRYGate(q, -2.106124009970173, 7);
  sqcRZGate(q, -0.07767725973439185, 7);
  sqcRYGate(q, 1.7916991851716406, 8);
  sqcRZGate(q, -1.3818349340453455, 8);
  sqcRYGate(q, 2.208958173236934, 9);
  sqcRZGate(q, -0.060333490843929916, 9);
  sqcRYGate(q, -0.1466143364741539, 10);
  sqcRZGate(q, 0.26775012661196146, 10);
  sqcRYGate(q, -0.9753825259028452, 11);
  sqcRZGate(q, 0.42461449860019845, 11);
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
  sqcRYGate(q, 0.001644336999790018, 0);
  sqcRZGate(q, 1.8579173258114166, 0);
  sqcRYGate(q, 0.09983746340771078, 1);
  sqcRZGate(q, -1.5599082140362022, 1);
  sqcRYGate(q, 2.060533654156491, 2);
  sqcRZGate(q, -1.2465693673445513, 2);
  sqcRYGate(q, -1.4499054635014235, 3);
  sqcRZGate(q, -0.01711859429040885, 3);
  sqcRYGate(q, -0.0046518716186367826, 4);
  sqcRZGate(q, -1.8817055908005638, 4);
  sqcRYGate(q, 2.8616497757733845, 5);
  sqcRZGate(q, 3.1392666148975557, 5);
  sqcRYGate(q, 3.092640204713254, 6);
  sqcRZGate(q, -3.1123029686274046, 6);
  sqcRYGate(q, -1.5625082742847871, 7);
  sqcRZGate(q, 3.1411833442178505, 7);
  sqcRYGate(q, -2.228526791979067, 8);
  sqcRZGate(q, 0.003296190698544699, 8);
  sqcRYGate(q, 1.5686174727080069, 9);
  sqcRZGate(q, -0.056035164766674576, 9);
  sqcRYGate(q, 1.710796976587537, 10);
  sqcRZGate(q, -3.135955366069278, 10);
  sqcRYGate(q, 1.7803759040844966, 11);
  sqcRZGate(q, 1.7366336650098224, 11);
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
  sqcRYGate(q, 0.5086681516345559, 0);
  sqcRZGate(q, -2.53844807087696, 0);
  sqcRYGate(q, -1.8455783274272397, 1);
  sqcRZGate(q, -1.4094506438956715, 1);
  sqcRYGate(q, -0.0009486367424598184, 2);
  sqcRZGate(q, 1.2534880600386735, 2);
  sqcRYGate(q, 0.7777115127444448, 3);
  sqcRZGate(q, -1.571102064410523, 3);
  sqcRYGate(q, -0.55213590138459, 4);
  sqcRZGate(q, -1.5793981021988686, 4);
  sqcRYGate(q, -0.5549040067923912, 5);
  sqcRZGate(q, -1.5816591138809493, 5);
  sqcRYGate(q, -1.5721665309491304, 6);
  sqcRZGate(q, 1.571635581231752, 6);
  sqcRYGate(q, 1.7304785605540864, 7);
  sqcRZGate(q, 1.5708523266703238, 7);
  sqcRYGate(q, -1.5877150915838025, 8);
  sqcRZGate(q, -1.5703129115608172, 8);
  sqcRYGate(q, -3.1242184224538887, 9);
  sqcRZGate(q, 1.511870873350103, 9);
  sqcRYGate(q, -1.570146043367551, 10);
  sqcRZGate(q, -1.649323986299593, 10);
  sqcRYGate(q, -1.568709597049356, 11);
  sqcRZGate(q, -1.550223118815001, 11);
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
  sqcRYGate(q, -0.007923043359377357, 0);
  sqcRZGate(q, 2.803642355867901, 0);
  sqcRYGate(q, -0.022420403969732446, 1);
  sqcRZGate(q, 2.982083833613872, 1);
  sqcRYGate(q, 1.5825071964025799, 2);
  sqcRZGate(q, 1.6145188272369737, 2);
  sqcRYGate(q, 1.5702347789306845, 3);
  sqcRZGate(q, -2.1031164008141134, 3);
  sqcRYGate(q, -1.5711181056443957, 4);
  sqcRZGate(q, -3.0700720858170802, 4);
  sqcRYGate(q, 1.5729181409257507, 5);
  sqcRZGate(q, 2.458184431956795, 5);
  sqcRYGate(q, -1.5699854036638845, 6);
  sqcRZGate(q, 0.0549863794890193, 6);
  sqcRYGate(q, 1.5701193636837143, 7);
  sqcRZGate(q, -2.251209452642387, 7);
  sqcRYGate(q, 1.5705897273545013, 8);
  sqcRZGate(q, -2.8690210896951758, 8);
  sqcRYGate(q, -1.5707897548464884, 9);
  sqcRZGate(q, -2.265770041476408, 9);
  sqcRYGate(q, -1.5788000050740543, 10);
  sqcRZGate(q, -2.9785417212268435, 10);
  sqcRYGate(q, 1.5615111458375583, 11);
  sqcRZGate(q, 0.8688402520787379, 11);

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
