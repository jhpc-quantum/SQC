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

  sqcRYGate(q, 1.277702037012472, 0);
  sqcRYGate(q, -2.8991116418067873, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.830703747600193, 0);
  sqcRYGate(q, -0.15160508938585782, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5503916933391617, 2);
  sqcRYGate(q, 2.0053122211106134, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.10828843612183145, 2);
  sqcRYGate(q, -0.5739820626647258, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.862348529809711, 4);
  sqcRYGate(q, 0.08265051757911657, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.5954283135381244, 4);
  sqcRYGate(q, -1.9712478560895248, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5863005816795157, 6);
  sqcRYGate(q, 2.869446644746314, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.4557157721102845, 6);
  sqcRYGate(q, -1.6192279638195193, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0670214232340332, 1);
  sqcRYGate(q, -1.9340580079746843, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.575941622055375, 1);
  sqcRYGate(q, -2.8393320341335486, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6289659374381498, 3);
  sqcRYGate(q, 1.7573562529975133, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.0708860234863375, 3);
  sqcRYGate(q, -0.08749381192196458, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.7773557529640174, 5);
  sqcRYGate(q, -0.7001330545693217, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.3678576077158473, 5);
  sqcRYGate(q, -3.020413999345861, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5542722469428351, 0);
  sqcRYGate(q, 0.7481880174520023, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.367852761608331, 0);
  sqcRYGate(q, -2.2307539986963927, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7231084029092254, 2);
  sqcRYGate(q, -2.7181378279431123, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.245532676851063, 2);
  sqcRYGate(q, 1.1337870373431178, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.716591909538753, 4);
  sqcRYGate(q, -2.7856409002499896, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8431007445226953, 4);
  sqcRYGate(q, -1.6864707427577617, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.6129008165165915, 6);
  sqcRYGate(q, 2.691281493332942, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8920082456539786, 6);
  sqcRYGate(q, 1.651066035247577, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0680759160344304, 1);
  sqcRYGate(q, 0.30273178665636635, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9697458406361243, 1);
  sqcRYGate(q, 0.6410319096383521, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8836267589260918, 3);
  sqcRYGate(q, 0.7033977864774439, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.9817435690413345, 3);
  sqcRYGate(q, -0.9537437485282093, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1403356952153674, 5);
  sqcRYGate(q, -2.1962063809206276, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9813833938106855, 5);
  sqcRYGate(q, -3.0230162985228097, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5405017439265898, 0);
  sqcRYGate(q, -1.556263397476024, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7228339731203068, 0);
  sqcRYGate(q, -1.2954643123569245, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9365896626928398, 2);
  sqcRYGate(q, -0.9891616872484372, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9617243311734036, 2);
  sqcRYGate(q, 2.514571088427158, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.581442792260076, 4);
  sqcRYGate(q, -0.8427024315395801, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6825127366274825, 4);
  sqcRYGate(q, -1.8155627401750887, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4275461373969078, 6);
  sqcRYGate(q, -0.4444765461421225, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.364155319199693, 6);
  sqcRYGate(q, -2.6637975891893357, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.060903132306154566, 1);
  sqcRYGate(q, 1.6631518370833844, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9826729277064024, 1);
  sqcRYGate(q, -0.25921808330583307, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1382241180366597, 3);
  sqcRYGate(q, 0.39120071174550713, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.9664709129276687, 3);
  sqcRYGate(q, 1.4776719971969188, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.29303518119300165, 5);
  sqcRYGate(q, 2.8065039170026003, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.1360071701941674, 5);
  sqcRYGate(q, 1.4830128814645454, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.3128882517402847, 0);
  sqcRYGate(q, 0.27830181392668285, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.0037799491671357544, 0);
  sqcRYGate(q, -2.9189729592024842, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.886726624553411, 2);
  sqcRYGate(q, 3.064692041426028, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6344363801892721, 2);
  sqcRYGate(q, -3.128830601297846, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.176725211117223, 4);
  sqcRYGate(q, 0.17549532531150963, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5372637486271326, 4);
  sqcRYGate(q, -2.9280607582774136, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.32622064376394316, 6);
  sqcRYGate(q, 3.121271798718695, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.7832127519160776, 6);
  sqcRYGate(q, -0.29228793266347436, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.853385109246787, 1);
  sqcRYGate(q, 2.381358986908252, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.322286030937286, 1);
  sqcRYGate(q, -1.6956558901801217, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1484830168429472, 3);
  sqcRYGate(q, -0.2889277676044977, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.26426695893783597, 3);
  sqcRYGate(q, 0.465905623590323, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.38807941683073044, 5);
  sqcRYGate(q, 1.9180466565658083, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.0555943073673513, 5);
  sqcRYGate(q, 0.987556409787585, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.0590967147758557, 0);
  sqcRYGate(q, 0.6112905121798583, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.866545103138625, 0);
  sqcRYGate(q, -2.400933543960661, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.417299416614202, 2);
  sqcRYGate(q, 2.3689895819460394, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2344185976274065, 2);
  sqcRYGate(q, 2.733211828011224, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.75531201873958, 4);
  sqcRYGate(q, -0.9452052206718475, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3130898917819902, 4);
  sqcRYGate(q, -0.6569467457831878, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2220441080615805, 6);
  sqcRYGate(q, -2.7248014313739373, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3329820323706727, 6);
  sqcRYGate(q, -2.1699649580747282, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.352404068716326, 1);
  sqcRYGate(q, -2.3723075399340314, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.020079509472756246, 1);
  sqcRYGate(q, 3.1340708420412433, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8675559999732585, 3);
  sqcRYGate(q, -1.7525743880561033, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.4026647409680302, 3);
  sqcRYGate(q, -1.9967593803457029, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.3338845216973456, 5);
  sqcRYGate(q, 1.7514199969509576, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.688595886357581, 5);
  sqcRYGate(q, -0.46325200810474154, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.005851220630056275, 0);
  sqcRYGate(q, 2.331100481947489, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6818542006905393, 0);
  sqcRYGate(q, 0.625577903548465, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6159748674696982, 2);
  sqcRYGate(q, 1.2931582114384876, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8287305355770891, 2);
  sqcRYGate(q, -1.3413991884348544, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1141900239252254, 4);
  sqcRYGate(q, 2.291544850386889, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.43701178944450536, 4);
  sqcRYGate(q, -1.6776896438025342, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.313178422192326, 6);
  sqcRYGate(q, 2.0469646590461963, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.077032489587159, 6);
  sqcRYGate(q, 1.5379708864249757, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6111925773147162, 1);
  sqcRYGate(q, 2.2101383397186445, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2854593556039613, 1);
  sqcRYGate(q, 0.04978700258486985, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.268367627754901, 3);
  sqcRYGate(q, 2.9784375711342106, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7786988311697793, 3);
  sqcRYGate(q, -2.10358918273828, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.4447028968503544, 5);
  sqcRYGate(q, -1.5698539959919904, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8604452704795414, 5);
  sqcRYGate(q, -1.7696072148890138, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6174832132121213, 0);
  sqcRYGate(q, -2.1242960667177684, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0000163555541683, 0);
  sqcRYGate(q, -2.341329630716534, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8867862406198723, 2);
  sqcRYGate(q, -3.1299874591194228, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.023295001953218, 2);
  sqcRYGate(q, -0.5921621549144949, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9435463445170043, 4);
  sqcRYGate(q, -1.6209453610866102, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.38688259408163955, 4);
  sqcRYGate(q, -2.8104598073632965, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4322951415319427, 6);
  sqcRYGate(q, 1.5863447430253221, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7284847739480114, 6);
  sqcRYGate(q, -2.604494386505426, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8951971060149155, 1);
  sqcRYGate(q, -1.9824124981692632, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9820508696190765, 1);
  sqcRYGate(q, 2.6721778381562564, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5767378272156903, 3);
  sqcRYGate(q, 0.8850260917156358, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.0533785757623226, 3);
  sqcRYGate(q, 0.27776087029180146, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.9384567311029999, 5);
  sqcRYGate(q, -3.064646444032676, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.646541410649755, 5);
  sqcRYGate(q, 1.3401753587300815, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.0767184837095016, 0);
  sqcRYGate(q, -0.577790994697344, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1956706257822765, 0);
  sqcRYGate(q, 2.123975638868274, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5792177540147434, 2);
  sqcRYGate(q, 1.1626578161526604, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.787646171814083, 2);
  sqcRYGate(q, 2.478430408198551, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6433488291845824, 4);
  sqcRYGate(q, 0.8494637201258033, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.2963089586683658, 4);
  sqcRYGate(q, 1.8669662129307572, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.29120116572703747, 6);
  sqcRYGate(q, -2.260594535213377, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.32050676293005864, 6);
  sqcRYGate(q, -3.069665033145542, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.11386426550337092, 1);
  sqcRYGate(q, 2.744024525734374, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5780572817477925, 1);
  sqcRYGate(q, 2.1955344973118063, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7928004852639837, 3);
  sqcRYGate(q, 1.7388073218849087, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.8013589866128505, 3);
  sqcRYGate(q, 2.6733383871519822, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.8833945995200965, 5);
  sqcRYGate(q, 1.7689441875927931, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.5429355852380686, 5);
  sqcRYGate(q, 0.17527493709729214, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.8616106470723985, 0);
  sqcRYGate(q, 0.8262168065671475, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.472513274968146, 0);
  sqcRYGate(q, 0.8105242284469538, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4879979231117217, 2);
  sqcRYGate(q, 2.8307263723722165, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2672132291866527, 2);
  sqcRYGate(q, 1.3591629012341988, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9277717745170309, 4);
  sqcRYGate(q, -1.619265250614478, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.080723520496895, 4);
  sqcRYGate(q, -1.6789034934280107, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.4814534680939464, 6);
  sqcRYGate(q, -1.1078736265346436, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6430503808675584, 6);
  sqcRYGate(q, 2.3052397630109254, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.406599344088463, 1);
  sqcRYGate(q, 2.09895211918227, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3615061567406306, 1);
  sqcRYGate(q, 1.91131391144501, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7910987873557217, 3);
  sqcRYGate(q, -1.0084756030708322, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.4247984616216165, 3);
  sqcRYGate(q, 2.897413772636531, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8792989204063286, 5);
  sqcRYGate(q, -2.126698628594286, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.0206732272355015, 5);
  sqcRYGate(q, -0.28023344432123487, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.3160634679899834, 0);
  sqcRYGate(q, -3.022449457543342, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1204983762426695, 0);
  sqcRYGate(q, 3.137435182266362, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4961683431178694, 2);
  sqcRYGate(q, -2.650505611384261, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5476099024453855, 2);
  sqcRYGate(q, 2.208219381709359, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4493841244230539, 4);
  sqcRYGate(q, -0.9211630854273309, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.067536800019481, 4);
  sqcRYGate(q, 2.4069621778259167, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.491082746620274, 6);
  sqcRYGate(q, -1.0149176687506491, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.923078085849262, 6);
  sqcRYGate(q, -1.948066330969047, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3145535243065276, 1);
  sqcRYGate(q, 1.35668844934691, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.755429457580331, 1);
  sqcRYGate(q, 1.852822431912541, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2423220173844238, 3);
  sqcRYGate(q, -2.6326823731234175, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5844537101252142, 3);
  sqcRYGate(q, -1.335668623457524, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.7782453808456093, 5);
  sqcRYGate(q, 3.0486079359913685, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.4309535558238196, 5);
  sqcRYGate(q, 1.7420132148580239, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4953980077226596, 0);
  sqcRYGate(q, -0.9968190211404045, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.953890722974469, 0);
  sqcRYGate(q, 0.41334907069117643, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4325964006477707, 2);
  sqcRYGate(q, -2.620888205228801, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4137216411459896, 2);
  sqcRYGate(q, 0.9990338127927112, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.01676212715033, 4);
  sqcRYGate(q, -2.5717134122731435, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5447064920976985, 4);
  sqcRYGate(q, -1.6777136794769465, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.31075548809896514, 6);
  sqcRYGate(q, -0.4088481715929195, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.735200280926711, 6);
  sqcRYGate(q, -2.130631795101511, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.815301493785126, 1);
  sqcRYGate(q, -0.4104863223925267, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9031270086205496, 1);
  sqcRYGate(q, 2.362268006463794, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4563701284727117, 3);
  sqcRYGate(q, -1.294873166696954, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.7012165257573262, 3);
  sqcRYGate(q, -1.701248020194965, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.8836961668746031, 5);
  sqcRYGate(q, -2.0720144057131415, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1214417689849006, 5);
  sqcRYGate(q, -0.7261294044758984, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.555209316675449, 0);
  sqcRYGate(q, 0.4165554313181108, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.617930203116757, 0);
  sqcRYGate(q, -2.184667568771151, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3775791046858548, 2);
  sqcRYGate(q, 2.6933996870135584, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.130201813400892, 2);
  sqcRYGate(q, 2.8572131004648402, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.709347882878239, 4);
  sqcRYGate(q, 2.1604796846561714, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.732451962022014, 4);
  sqcRYGate(q, -0.41915056001032003, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.117549211107218, 6);
  sqcRYGate(q, 0.07007670034139231, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.796554207923638, 6);
  sqcRYGate(q, 2.483768375546006, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.533179392205274, 1);
  sqcRYGate(q, 1.674661924899283, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7710583472261434, 1);
  sqcRYGate(q, -0.03466719808532066, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7830000338788211, 3);
  sqcRYGate(q, 1.5577671191166635, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.030986737119097, 3);
  sqcRYGate(q, -2.762099983261725, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.911084375402944, 5);
  sqcRYGate(q, -3.0059158638217536, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.2900773822307205, 5);
  sqcRYGate(q, -0.4192803001824163, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.3675404492870373, 0);
  sqcRYGate(q, -1.3758566699957655, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8529066773284657, 0);
  sqcRYGate(q, 0.4970801692899487, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.075341459370402, 2);
  sqcRYGate(q, 1.5003562764792209, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.249413158868666, 2);
  sqcRYGate(q, -2.9171275888933126, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.710415160886036, 4);
  sqcRYGate(q, 0.767641003045128, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.949207275619043, 4);
  sqcRYGate(q, -1.7951425109797254, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.120314822090529, 6);
  sqcRYGate(q, 0.6502612744493783, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.023717112939664272, 6);
  sqcRYGate(q, 2.165627781354731, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.770964850183262, 1);
  sqcRYGate(q, 1.7484451511252117, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.22511026571355455, 1);
  sqcRYGate(q, -2.3298586656076132, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6417323632091368, 3);
  sqcRYGate(q, -3.130662635090994, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5237872544660442, 3);
  sqcRYGate(q, -2.3963176771396677, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.48932189141758187, 5);
  sqcRYGate(q, 2.2798809132024385, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9188690676073993, 5);
  sqcRYGate(q, -0.8498014596358923, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.3003433375196358, 0);
  sqcRYGate(q, -1.8210392375777777, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8904836367249613, 0);
  sqcRYGate(q, 3.1398941035366588, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.890506155921987, 2);
  sqcRYGate(q, 0.3454143507635295, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.638279693787017, 2);
  sqcRYGate(q, -1.79486278345869, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8196560440003688, 4);
  sqcRYGate(q, -2.390521543642437, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6325782793672978, 4);
  sqcRYGate(q, 2.5846564304791277, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8898231977204087, 6);
  sqcRYGate(q, -1.781908979993485, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.652313910690645, 6);
  sqcRYGate(q, -1.2097505729312186, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.576914340747753, 1);
  sqcRYGate(q, -1.1467651163408066, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.222222702495487, 1);
  sqcRYGate(q, 0.31124141097452807, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3598553559448181, 3);
  sqcRYGate(q, -2.0218386115631266, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.23766444718958635, 3);
  sqcRYGate(q, -0.6176455260199303, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.9712922368632828, 5);
  sqcRYGate(q, -1.41065024451565, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5634595238109874, 5);
  sqcRYGate(q, 1.1925905130135872, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.3064468728269736, 0);
  sqcRYGate(q, 0.7077979140936632, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3381056049511223, 0);
  sqcRYGate(q, -1.0206760012038405, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.819429576397461, 2);
  sqcRYGate(q, -2.5314462906556137, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1410929133014815, 2);
  sqcRYGate(q, -1.9398128795950933, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2290818493764886, 4);
  sqcRYGate(q, 0.1906767758755157, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.554234279277141, 4);
  sqcRYGate(q, -2.033428550880719, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.29004883512179197, 6);
  sqcRYGate(q, -0.32811537814747904, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.17361314743633557, 6);
  sqcRYGate(q, -0.9548051503678562, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.8380084965142562, 1);
  sqcRYGate(q, 3.0652555372744867, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9397077950825592, 1);
  sqcRYGate(q, 1.063545374627243, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.063871836050893, 3);
  sqcRYGate(q, -2.9411265072184287, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.3175827658336794, 3);
  sqcRYGate(q, 1.8023985213409721, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6234397953877523, 5);
  sqcRYGate(q, 1.6691008631387403, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5055055893108733, 5);
  sqcRYGate(q, 1.8124172943247263, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6666963273661128, 0);
  sqcRYGate(q, -2.8792861325410453, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8151435168451278, 0);
  sqcRYGate(q, 2.3928208269220366, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9575692710085777, 2);
  sqcRYGate(q, 2.59572176676683, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6310491085105611, 2);
  sqcRYGate(q, 2.392334026716049, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9088558146748181, 4);
  sqcRYGate(q, 1.0474039129769548, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6052305249646786, 4);
  sqcRYGate(q, 3.094555281970859, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.013033302310198586, 6);
  sqcRYGate(q, 0.16949467289893955, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8366306416966046, 6);
  sqcRYGate(q, 0.8554609592166644, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9445165773576198, 1);
  sqcRYGate(q, -1.7689735511394349, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.49660297903043626, 1);
  sqcRYGate(q, 2.1195752976946105, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8623509509795855, 3);
  sqcRYGate(q, -1.8333801355211292, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.037174043002893, 3);
  sqcRYGate(q, 3.099435589212284, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1107364970944946, 5);
  sqcRYGate(q, -2.9483397884168348, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6968852899173743, 5);
  sqcRYGate(q, -1.3523163377204988, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.375731776273939, 0);
  sqcRYGate(q, 3.078175951089831, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4455380747277924, 0);
  sqcRYGate(q, -1.1863656206855238, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.24223357176844829, 2);
  sqcRYGate(q, 0.7778255540649921, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9238820354324673, 2);
  sqcRYGate(q, -1.024130393858103, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.582693499901373, 4);
  sqcRYGate(q, 3.0569316316787756, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7881721356270015, 4);
  sqcRYGate(q, -0.6242591727181601, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1959069144547092, 6);
  sqcRYGate(q, -2.7162231434043553, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.057381637230848, 6);
  sqcRYGate(q, 2.474871466565901, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.06682582881689242, 1);
  sqcRYGate(q, -1.215393028420606, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.18199252787276077, 1);
  sqcRYGate(q, 0.1599097640803243, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8024695833471203, 3);
  sqcRYGate(q, 1.8990645936811479, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.19989779553636258, 3);
  sqcRYGate(q, -2.7448233602829704, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.9776972091771547, 5);
  sqcRYGate(q, 2.2760169679089217, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.716638566842822, 5);
  sqcRYGate(q, -1.579455417245985, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.02129420276974514, 0);
  sqcRYGate(q, -0.7041852213635771, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3539715470406604, 0);
  sqcRYGate(q, -1.93682252746434, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4771078915282114, 2);
  sqcRYGate(q, -1.1381832733881918, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5926443081175488, 2);
  sqcRYGate(q, 0.8487127006222154, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.387635595065515, 4);
  sqcRYGate(q, 2.1600090688487983, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.660928541451712, 4);
  sqcRYGate(q, -0.357657379024877, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1564878858495184, 6);
  sqcRYGate(q, 2.7743745288762787, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.23166156168403, 6);
  sqcRYGate(q, -2.6150292986169346, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.0615142637859334, 1);
  sqcRYGate(q, 1.0173869399469577, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5635950907006068, 1);
  sqcRYGate(q, 0.03781164162522573, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4400420550679743, 3);
  sqcRYGate(q, -0.11635803049646931, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.07451888835504458, 3);
  sqcRYGate(q, -0.3592765053699763, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.1446180233004677, 5);
  sqcRYGate(q, -1.0361149202302584, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.9545744308226178, 5);
  sqcRYGate(q, 1.386179147085186, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9200044020911209, 0);
  sqcRYGate(q, -0.6146498386363958, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6057808156559619, 0);
  sqcRYGate(q, -1.2282779987919081, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4028872850659933, 2);
  sqcRYGate(q, 0.9433821774335083, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5501862180145444, 2);
  sqcRYGate(q, 0.18177763382342568, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0106517104464974, 4);
  sqcRYGate(q, 0.4243492705479565, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.710975841232561, 4);
  sqcRYGate(q, -1.0268260365824056, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.7905478529865295, 6);
  sqcRYGate(q, 1.6936118356660468, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.18739317556559953, 6);
  sqcRYGate(q, -2.8669539138084157, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0939627268210517, 1);
  sqcRYGate(q, -2.0571228406135997, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5187016588733294, 1);
  sqcRYGate(q, 2.1717296121956093, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2685535873817213, 3);
  sqcRYGate(q, 0.2574225847874745, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1403713966395865, 3);
  sqcRYGate(q, 0.6345985758277113, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.3647692451508434, 5);
  sqcRYGate(q, 3.066736715207327, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5851566009941127, 5);
  sqcRYGate(q, -2.286568312303125, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7892000418793832, 0);
  sqcRYGate(q, -2.1664644628290866, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.43669085830818233, 0);
  sqcRYGate(q, -0.6747418901656285, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.877689253870442, 2);
  sqcRYGate(q, -0.15469077211205942, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.392993289517518, 2);
  sqcRYGate(q, -2.4320872464596373, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3822687683530501, 4);
  sqcRYGate(q, -0.7624245045248411, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6903793815537872, 4);
  sqcRYGate(q, 2.6725810801263847, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.8979653169839317, 6);
  sqcRYGate(q, 0.22081702313935075, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.15696754860688156, 6);
  sqcRYGate(q, 0.34138181667985656, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5891045976899574, 1);
  sqcRYGate(q, -0.9325527577573257, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.139290856819321, 1);
  sqcRYGate(q, -1.2580077770961036, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.12805839216779127, 3);
  sqcRYGate(q, 0.6425975247470157, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.2061324101599125, 3);
  sqcRYGate(q, 2.8322474813792717, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.8090645944349157, 5);
  sqcRYGate(q, 1.007311307849668, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6843868764038081, 5);
  sqcRYGate(q, -2.7755440827636444, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5407713137552665, 0);
  sqcRYGate(q, 0.7363264973077692, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.135742818716258, 0);
  sqcRYGate(q, 1.6263922383197968, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5073093140169069, 2);
  sqcRYGate(q, 2.29671174301193, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5045137324941744, 2);
  sqcRYGate(q, -2.2705078087660766, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5541461698408574, 4);
  sqcRYGate(q, 2.737258687138072, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.8249601453024735, 4);
  sqcRYGate(q, 1.8655485777085874, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7505989816135497, 6);
  sqcRYGate(q, 1.5309483909990371, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7589087530994874, 6);
  sqcRYGate(q, 0.9776546326530016, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1081055960240258, 1);
  sqcRYGate(q, -2.577634444970801, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9298155571836544, 1);
  sqcRYGate(q, 0.0026730932883411995, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.826682453521567, 3);
  sqcRYGate(q, 0.09387368164525756, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.0636503557826273, 3);
  sqcRYGate(q, -2.866432071740659, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.8977691451681347, 5);
  sqcRYGate(q, 3.1413464501653774, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.0222565711489424, 5);
  sqcRYGate(q, 2.0121038839369163, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.3366559710748485, 0);
  sqcRYGate(q, 2.3990562301682234, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.22512439764182446, 0);
  sqcRYGate(q, -2.1810230559552357, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.05220410404296594, 2);
  sqcRYGate(q, 2.15772868701207, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7081773642531766, 2);
  sqcRYGate(q, -0.9171160792537698, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5141387857065096, 4);
  sqcRYGate(q, 1.9709739380645068, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.6544448717380713, 4);
  sqcRYGate(q, 2.7157492872477302, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9319013988335696, 6);
  sqcRYGate(q, -2.1527484498090095, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.7890113869474984, 6);
  sqcRYGate(q, 2.7047944497651737, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5154057208566891, 1);
  sqcRYGate(q, -0.7460559012234015, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3162772761478543, 1);
  sqcRYGate(q, 2.020952497098911, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7500154463653992, 3);
  sqcRYGate(q, 1.7134130157937402, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8159712286067653, 3);
  sqcRYGate(q, 0.9468525201884948, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.44078038895835825, 5);
  sqcRYGate(q, 2.1886339800646724, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.19964165112000298, 5);
  sqcRYGate(q, -1.1672482446240355, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.097915810808185, 0);
  sqcRYGate(q, -0.26523708664441925, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1533055667896916, 0);
  sqcRYGate(q, -0.9986873565391976, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.531807866076981, 2);
  sqcRYGate(q, -0.782798223295548, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9470823992037528, 2);
  sqcRYGate(q, -2.935674904547739, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0948484137526586, 4);
  sqcRYGate(q, -3.0526857884226697, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8199887012185555, 4);
  sqcRYGate(q, -2.437087018771318, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5580154113308595, 6);
  sqcRYGate(q, -0.5374939525465576, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.08832691503000234, 6);
  sqcRYGate(q, -0.9081097766809098, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.176116416333433, 1);
  sqcRYGate(q, -0.10295234818309762, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0171095244403663, 1);
  sqcRYGate(q, -2.6631622212288573, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1223216116569992, 3);
  sqcRYGate(q, -0.4582355492258613, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.121334905537659, 3);
  sqcRYGate(q, -1.3374607180259828, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2298006848070502, 5);
  sqcRYGate(q, 0.10487665907239686, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.9122071165819579, 5);
  sqcRYGate(q, 3.0971130380265355, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.8846393447952687, 0);
  sqcRYGate(q, 1.139044380712461, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2514707836128467, 0);
  sqcRYGate(q, -2.551693676213153, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8070311859077774, 2);
  sqcRYGate(q, -1.7436026618214813, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3211139354710275, 2);
  sqcRYGate(q, -0.6714561313776413, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.271975129971156, 4);
  sqcRYGate(q, 0.5990578632061228, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9632685792314697, 4);
  sqcRYGate(q, -1.51963357904644, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6522595464766159, 6);
  sqcRYGate(q, -1.1205614892927018, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5996481257353684, 6);
  sqcRYGate(q, -1.1766386000486306, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.8914937033297319, 1);
  sqcRYGate(q, -0.1326605900399951, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0854285735348335, 1);
  sqcRYGate(q, -2.9966796880233764, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8577317070261898, 3);
  sqcRYGate(q, 0.6077703819575492, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.36659736719146, 3);
  sqcRYGate(q, -2.1498187922926766, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1410737067283279, 5);
  sqcRYGate(q, 1.8314151073131386, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.34758538947517, 5);
  sqcRYGate(q, 0.425847300193853, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.6662223204274427, 0);
  sqcRYGate(q, 2.2665991388137083, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3602042260218121, 0);
  sqcRYGate(q, -1.3723105046953932, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8082553419900256, 2);
  sqcRYGate(q, -3.0597115620480184, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.1261275595434196, 2);
  sqcRYGate(q, -1.12204334597691, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4832998856324267, 4);
  sqcRYGate(q, 3.052144359214028, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.676676046085862, 4);
  sqcRYGate(q, -0.5526469134245078, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7846466527100621, 6);
  sqcRYGate(q, -2.614142728206703, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.4430142527775116, 6);
  sqcRYGate(q, -0.9428745276790358, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.653292525544673, 1);
  sqcRYGate(q, 1.601985233617394, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.568027150403986, 1);
  sqcRYGate(q, -1.2551896145143244, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8182321028589774, 3);
  sqcRYGate(q, -1.1729630333302667, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.600093930123972, 3);
  sqcRYGate(q, -1.7752005647359228, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.16360277780249, 5);
  sqcRYGate(q, -2.500334944181367, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.3282058993142742, 5);
  sqcRYGate(q, -0.07612233915748372, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.3354785304233431, 0);
  sqcRYGate(q, -0.5271801299837682, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9340670034285914, 0);
  sqcRYGate(q, 2.3467363366716336, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4692078964425814, 2);
  sqcRYGate(q, 0.6296523989724447, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8743183239517354, 2);
  sqcRYGate(q, 0.871091037752353, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7552960666515318, 4);
  sqcRYGate(q, -0.2206580331849563, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4959706210748407, 4);
  sqcRYGate(q, 0.8000864853774408, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0237936187227739, 6);
  sqcRYGate(q, 0.8939456367223771, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.632459928897715, 6);
  sqcRYGate(q, 2.969539924698982, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.580240484011121, 1);
  sqcRYGate(q, -0.38765824247320424, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5530160432804765, 1);
  sqcRYGate(q, -2.857584836768528, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5729961516649507, 3);
  sqcRYGate(q, 0.9081199596100992, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.0654573637912436, 3);
  sqcRYGate(q, 0.34148110268072407, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.352910412101904, 5);
  sqcRYGate(q, 3.092272091104082, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6842962451386327, 5);
  sqcRYGate(q, -1.584936706478489, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.056504497600057, 0);
  sqcRYGate(q, 0.5831086411277063, 1);
  sqcRYGate(q, 2.708538840919905, 2);
  sqcRYGate(q, 2.6957627606701844, 3);
  sqcRYGate(q, -0.7400776792952463, 4);
  sqcRYGate(q, 2.548717676390266, 5);
  sqcRYGate(q, 1.0512941163819427, 6);
  sqcRYGate(q, -2.4048053197578474, 7);

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
