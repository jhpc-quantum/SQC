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

  sqcRYGate(q, -2.0001826111129732, 0);
  sqcRYGate(q, 2.8431765260082016, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.818827601978296, 0);
  sqcRYGate(q, 3.082056769401173, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1454817443143288, 2);
  sqcRYGate(q, -1.969002471204989, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9695053903624404, 2);
  sqcRYGate(q, -1.7104398568885462, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3981712484734063, 4);
  sqcRYGate(q, -1.43195261697457, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7717488746795453, 4);
  sqcRYGate(q, 1.0323103741580353, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.428497215528427, 6);
  sqcRYGate(q, 1.8124131104516952, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0818931512345262, 6);
  sqcRYGate(q, -1.9101488337318697, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.1314438360494576, 1);
  sqcRYGate(q, -2.6226905429087255, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.846436675329441, 1);
  sqcRYGate(q, 3.0728632992060776, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.971331670191185, 3);
  sqcRYGate(q, 0.14436209400796507, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.9118060940255345, 3);
  sqcRYGate(q, 1.6929806277926795, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.7099858067060003, 5);
  sqcRYGate(q, 0.9798153778094614, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.3197881335329004, 5);
  sqcRYGate(q, 2.9665267802204887, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.9664861933351663, 0);
  sqcRYGate(q, -0.32675781060813147, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3628729037353754, 0);
  sqcRYGate(q, 3.0669992727759823, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1830015765595254, 2);
  sqcRYGate(q, -2.3019590749522614, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1136231762896296, 2);
  sqcRYGate(q, -0.2649228974260673, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4539916806882376, 4);
  sqcRYGate(q, -1.752478400291813, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.124919467870657, 4);
  sqcRYGate(q, -2.948535801715059, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.6122737311466606, 6);
  sqcRYGate(q, 1.7728124680509243, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5857484803561726, 6);
  sqcRYGate(q, -2.0801930581201944, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.220458793363479, 1);
  sqcRYGate(q, -2.702711814793331, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.052434042777495, 1);
  sqcRYGate(q, -1.1698820363932323, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4805163205968395, 3);
  sqcRYGate(q, 1.9261104510257923, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.7850923792518253, 3);
  sqcRYGate(q, 2.5977058865356755, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.3868785714794882, 5);
  sqcRYGate(q, 2.795217391646888, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.691599559626581, 5);
  sqcRYGate(q, 2.582130555113866, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.128021128116013, 0);
  sqcRYGate(q, -0.6110761458435325, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8303682106426358, 0);
  sqcRYGate(q, -2.971640433236461, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8849545214262244, 2);
  sqcRYGate(q, 0.13245852096173127, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6666990101573615, 2);
  sqcRYGate(q, 1.4707621712280137, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.923093949777268, 4);
  sqcRYGate(q, -2.582773258426627, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.8486000728978875, 4);
  sqcRYGate(q, 3.070206400941319, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.875039133196544, 6);
  sqcRYGate(q, -2.43219223882773, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.046189841551094, 6);
  sqcRYGate(q, 1.3781293433183985, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0609800973175716, 1);
  sqcRYGate(q, 2.991234780402084, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2514346512757504, 1);
  sqcRYGate(q, 2.6589800040471503, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0363905644494293, 3);
  sqcRYGate(q, 1.0901518285667455, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.12486512589252, 3);
  sqcRYGate(q, -2.135007690355215, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.0621365718773281, 5);
  sqcRYGate(q, -1.0691194534205006, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2959275790951164, 5);
  sqcRYGate(q, 0.3614309031623056, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.5563847004023166, 0);
  sqcRYGate(q, -2.682538671536621, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.09565794695165, 0);
  sqcRYGate(q, -2.7715204277697767, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7730358929639156, 2);
  sqcRYGate(q, -2.742203301649683, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7379950038651913, 2);
  sqcRYGate(q, 0.1068116477513783, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.847872309917481, 4);
  sqcRYGate(q, -1.2742700351016887, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8723480433709999, 4);
  sqcRYGate(q, -1.0800348571014062, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8375114032823792, 6);
  sqcRYGate(q, 1.2100057569011677, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8169025038666788, 6);
  sqcRYGate(q, 2.827668337910213, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9037050104403948, 1);
  sqcRYGate(q, 2.435031050725396, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0992654723928232, 1);
  sqcRYGate(q, -2.7105211382011323, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0318525062288715, 3);
  sqcRYGate(q, -2.5277496953034433, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.7166696925270731, 3);
  sqcRYGate(q, -0.5491144614098156, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.10993862513145912, 5);
  sqcRYGate(q, 1.399509789415772, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.4957211963292681, 5);
  sqcRYGate(q, -2.2140280709348668, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.118725375380234, 0);
  sqcRYGate(q, 2.441414077951616, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2936456474172156, 0);
  sqcRYGate(q, -0.09808091387374698, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.94873734732374, 2);
  sqcRYGate(q, 2.6546132483714593, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6858274849022975, 2);
  sqcRYGate(q, -0.04799357272541994, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6517555924314966, 4);
  sqcRYGate(q, 3.137733854708905, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2366216654857893, 4);
  sqcRYGate(q, -2.5262122150059247, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.521666778531448, 6);
  sqcRYGate(q, 0.24582459895365716, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8070903164330699, 6);
  sqcRYGate(q, 0.7281275040283939, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0734637820667388, 1);
  sqcRYGate(q, -2.574034876225456, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7190686155243275, 1);
  sqcRYGate(q, -2.774732425914086, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0817156799160608, 3);
  sqcRYGate(q, 2.38733785567457, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.8489134822127697, 3);
  sqcRYGate(q, 2.2537466944363227, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.4719659352339414, 5);
  sqcRYGate(q, 1.719863738596074, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.1853734598690115, 5);
  sqcRYGate(q, -0.5630047283279243, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.9005276176248493, 0);
  sqcRYGate(q, -3.017973173974111, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1045807001075514, 0);
  sqcRYGate(q, -0.720845186266782, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0116910660225864, 2);
  sqcRYGate(q, -1.2154452531148074, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2868715465908969, 2);
  sqcRYGate(q, 1.759110941387993, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3692352577312079, 4);
  sqcRYGate(q, 0.29347461148151277, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.08165567600138, 4);
  sqcRYGate(q, 0.9774491422736917, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6341356965497706, 6);
  sqcRYGate(q, 0.5572197224891555, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.0951161125129945, 6);
  sqcRYGate(q, -2.5665675030850554, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.814876808753472, 1);
  sqcRYGate(q, -0.45814891795027535, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.725986885623459, 1);
  sqcRYGate(q, 2.992876810349492, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5850443678875241, 3);
  sqcRYGate(q, -1.0622923909418476, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.01031982877836553, 3);
  sqcRYGate(q, 1.2161301195697902, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.4047089019790224, 5);
  sqcRYGate(q, -0.5546723918149461, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.82346363190558, 5);
  sqcRYGate(q, -1.8812822274529195, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.311468681772945, 0);
  sqcRYGate(q, -1.29460186492613, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2247950333856388, 0);
  sqcRYGate(q, -1.7920737793038812, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9532273730745862, 2);
  sqcRYGate(q, 1.444768093123809, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6244158173962946, 2);
  sqcRYGate(q, 2.0489374565334257, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7798521834296457, 4);
  sqcRYGate(q, -2.4416350806788776, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7139374140289165, 4);
  sqcRYGate(q, 2.4907295040991233, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3574262505951307, 6);
  sqcRYGate(q, -2.7545091946347395, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.155815797479909, 6);
  sqcRYGate(q, 0.1836307062995251, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7807845857314668, 1);
  sqcRYGate(q, -2.30845861958889, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6367054215902914, 1);
  sqcRYGate(q, -0.5747806350575537, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3978041580437646, 3);
  sqcRYGate(q, -2.5440410006957452, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.5618344768080497, 3);
  sqcRYGate(q, 3.0023790940741035, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.470827412062596, 5);
  sqcRYGate(q, 2.099012576016448, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.6276874413008913, 5);
  sqcRYGate(q, 1.8921337930926772, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2267293985009546, 0);
  sqcRYGate(q, 2.051466358437489, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.865039862343043, 0);
  sqcRYGate(q, 1.6129385940357004, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5382645507875021, 2);
  sqcRYGate(q, -0.3487431952181958, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3360472677819475, 2);
  sqcRYGate(q, -2.075062821543155, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.092831690173269, 4);
  sqcRYGate(q, 2.593048665758137, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9120067215587584, 4);
  sqcRYGate(q, -1.8414248990639068, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.813381370985419, 6);
  sqcRYGate(q, -1.9737044353829312, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.03146085400707754, 6);
  sqcRYGate(q, -3.129171382351861, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5254591657681367, 1);
  sqcRYGate(q, -2.05182427217828, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.08969006391751666, 1);
  sqcRYGate(q, -2.317274752052616, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.418540798168352, 3);
  sqcRYGate(q, -2.271681119644589, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.4985902772484451, 3);
  sqcRYGate(q, -0.6093801331647262, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.7128907437248615, 5);
  sqcRYGate(q, -1.878682878158541, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.0272705066175125, 5);
  sqcRYGate(q, -0.07110285479797354, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.2645351283800932, 0);
  sqcRYGate(q, -1.5439433505947182, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8093178805524204, 0);
  sqcRYGate(q, -0.3115364206283103, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9717841080712493, 2);
  sqcRYGate(q, -1.1965337243621974, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.761105327543643, 2);
  sqcRYGate(q, -0.9282150411548714, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8831873155012364, 4);
  sqcRYGate(q, -0.6206659990282191, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.658145457263253, 4);
  sqcRYGate(q, -2.8425445400723044, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.097406717878063, 6);
  sqcRYGate(q, -1.4943702620543413, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7184135835194646, 6);
  sqcRYGate(q, 1.8068206208080846, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.42562793972590995, 1);
  sqcRYGate(q, -3.1103813322352356, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9519868443390598, 1);
  sqcRYGate(q, -0.4508295843365548, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9120500857950433, 3);
  sqcRYGate(q, 1.2662924417186006, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5976868365620405, 3);
  sqcRYGate(q, -1.2595867727628873, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.229085273968492, 5);
  sqcRYGate(q, -1.871044387338883, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.4224095055455246, 5);
  sqcRYGate(q, 1.3769945740573213, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.063606431765455, 0);
  sqcRYGate(q, 2.920962589071519, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.436645405327254, 0);
  sqcRYGate(q, 0.9429340834008499, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.10870761069062276, 2);
  sqcRYGate(q, 0.3496593034960185, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7709068064766726, 2);
  sqcRYGate(q, 1.814569546009123, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5137822713575138, 4);
  sqcRYGate(q, 2.160052187863795, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.3538790753518644, 4);
  sqcRYGate(q, 0.29476240268130915, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5206217115100078, 6);
  sqcRYGate(q, -1.826427571666577, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.2041284392977287, 6);
  sqcRYGate(q, 3.083347921795072, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.2224208729452375, 1);
  sqcRYGate(q, 0.4342246537731406, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.1263362288913763, 1);
  sqcRYGate(q, -0.7865045552575571, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.228557776279787, 3);
  sqcRYGate(q, 0.9608922147488431, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.577481058017553, 3);
  sqcRYGate(q, -2.345134457390557, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.8133394832111858, 5);
  sqcRYGate(q, 1.3715617282310184, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.2723322639984431, 5);
  sqcRYGate(q, 0.15862065323660257, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.506267446967649, 0);
  sqcRYGate(q, -1.1465719646715882, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.927397583241622, 0);
  sqcRYGate(q, 0.07970050373605275, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.608674068529971, 2);
  sqcRYGate(q, -0.8192587797741515, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4609149508721866, 2);
  sqcRYGate(q, -0.8305668946154448, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.860588455763751, 4);
  sqcRYGate(q, 2.7506263534705955, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.503824819827429, 4);
  sqcRYGate(q, 0.3747921217645944, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0767717101015006, 6);
  sqcRYGate(q, -0.1599344231944837, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.081116509736568, 6);
  sqcRYGate(q, -1.4302049743105458, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.053831483291813, 1);
  sqcRYGate(q, -3.0275460648924857, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6230725785247482, 1);
  sqcRYGate(q, 1.0536744610829853, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3488224043836201, 3);
  sqcRYGate(q, 0.22229388991354782, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0403207955176907, 3);
  sqcRYGate(q, 1.8031435703644334, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5212150331103702, 5);
  sqcRYGate(q, 3.0671044500554605, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.6155463615410248, 5);
  sqcRYGate(q, -1.4227286480214687, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.8279260200630754, 0);
  sqcRYGate(q, -2.154080678780218, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.446354048748851, 0);
  sqcRYGate(q, 2.205000445386429, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2771461575015635, 2);
  sqcRYGate(q, -1.6142244000169357, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.139320679941535, 2);
  sqcRYGate(q, -1.5542806901793462, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4677874162611113, 4);
  sqcRYGate(q, -0.6131442463366863, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6743419836535178, 4);
  sqcRYGate(q, 2.6111820696770773, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.1711746711325497, 6);
  sqcRYGate(q, 0.8940861359654875, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.1491675182194676, 6);
  sqcRYGate(q, -0.9404812016014605, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6290626838484767, 1);
  sqcRYGate(q, 0.8438775696415993, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.452136362726705, 1);
  sqcRYGate(q, -2.235657091332785, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5365083148325364, 3);
  sqcRYGate(q, -2.626055325782675, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.7699697759810245, 3);
  sqcRYGate(q, 1.435578415947929, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6841359558477837, 5);
  sqcRYGate(q, -2.245034748554944, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9288480140627193, 5);
  sqcRYGate(q, 2.1947507215479467, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.849016936924158, 0);
  sqcRYGate(q, -0.8851796825319216, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.35009153019263195, 0);
  sqcRYGate(q, 3.079694853621858, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5745320153312925, 2);
  sqcRYGate(q, 2.793086892979113, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6367963191255862, 2);
  sqcRYGate(q, -0.3573351049464195, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7949932223123828, 4);
  sqcRYGate(q, -2.0264725795169563, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.712604291249564, 4);
  sqcRYGate(q, 1.6013711186132626, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.546502335310329, 6);
  sqcRYGate(q, 1.5491057485260178, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0690083461534343, 6);
  sqcRYGate(q, 0.587662505336881, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.070925788831599, 1);
  sqcRYGate(q, -0.6423147095149666, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.17513794521867962, 1);
  sqcRYGate(q, 3.013411004094355, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4534943147374917, 3);
  sqcRYGate(q, 1.2079608656278435, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.579944915071908, 3);
  sqcRYGate(q, -1.8623804676020344, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.873186104590107, 5);
  sqcRYGate(q, -2.478231954842555, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.18806205518320096, 5);
  sqcRYGate(q, 1.981559903203908, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.4639647145648396, 0);
  sqcRYGate(q, 0.8292636306202051, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4728831128796978, 0);
  sqcRYGate(q, -1.506399349253, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.330883606722999, 2);
  sqcRYGate(q, 0.9504400352669794, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.19871769398733627, 2);
  sqcRYGate(q, -0.2580070297949266, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4343339714277272, 4);
  sqcRYGate(q, 1.1099761918250581, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.236221816998359, 4);
  sqcRYGate(q, 1.080664651841234, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7286863007065641, 6);
  sqcRYGate(q, -2.3613116105388032, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6446370469949942, 6);
  sqcRYGate(q, -0.17031626892162594, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.901447613631973, 1);
  sqcRYGate(q, 1.44875936730224, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5945165123236267, 1);
  sqcRYGate(q, 1.7455266456030956, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.663108215927604, 3);
  sqcRYGate(q, 0.22154582092846117, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6787402620401859, 3);
  sqcRYGate(q, -2.2698276391490326, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.8181244110740735, 5);
  sqcRYGate(q, -0.20291049251496796, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6909679626329277, 5);
  sqcRYGate(q, 2.833400888120409, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.3779721886294056, 0);
  sqcRYGate(q, 2.57101174248626, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0700434365795743, 0);
  sqcRYGate(q, 2.420899819302011, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7905915500180746, 2);
  sqcRYGate(q, -2.004714151790583, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2431502082756936, 2);
  sqcRYGate(q, 1.7611094939872833, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5130540606226788, 4);
  sqcRYGate(q, -0.11648174969027014, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.3051997549921994, 4);
  sqcRYGate(q, -0.3145241514457141, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8262916644710105, 6);
  sqcRYGate(q, -0.5080614925158012, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6141038447460907, 6);
  sqcRYGate(q, 0.7679067803094102, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7293048022096489, 1);
  sqcRYGate(q, -2.655869384068379, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.327628633864251, 1);
  sqcRYGate(q, 0.5892589436474679, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3504892258129413, 3);
  sqcRYGate(q, -1.0925455021743595, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.727973980654761, 3);
  sqcRYGate(q, 1.2098273081417554, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.3139303787010284, 5);
  sqcRYGate(q, 2.7024327603269884, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6763752424229263, 5);
  sqcRYGate(q, -0.7843025757756521, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.1543159902543954, 0);
  sqcRYGate(q, -1.5804641766622014, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.22962773099678382, 0);
  sqcRYGate(q, 1.525747480513844, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7138944300811484, 2);
  sqcRYGate(q, -1.460559214314631, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6137786794798419, 2);
  sqcRYGate(q, 1.649768142274434, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7384624918591243, 4);
  sqcRYGate(q, -1.4185041952493647, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.2059122328358507, 4);
  sqcRYGate(q, -1.0119562866172047, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.44854091855811, 6);
  sqcRYGate(q, 1.6956436783277677, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7315961046545603, 6);
  sqcRYGate(q, -0.5402000903517561, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3396463675044397, 1);
  sqcRYGate(q, 1.7105294646957905, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.224663678095528, 1);
  sqcRYGate(q, -2.436374813315246, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.48096547639711407, 3);
  sqcRYGate(q, -1.6923653200012803, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.5182213505206787, 3);
  sqcRYGate(q, 1.6482005852733572, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.3033528711901687, 5);
  sqcRYGate(q, 1.5816886692702259, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6219825767242831, 5);
  sqcRYGate(q, 1.940708048207057, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7386567487130922, 0);
  sqcRYGate(q, -0.4261663639229761, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6006578525214628, 0);
  sqcRYGate(q, -2.932245057534637, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9159405374112521, 2);
  sqcRYGate(q, 2.809537400757543, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.199935385417594, 2);
  sqcRYGate(q, 1.7722190503234874, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9115638418782652, 4);
  sqcRYGate(q, 1.2793983467224823, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4930380176109006, 4);
  sqcRYGate(q, 1.9178839180700915, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.341424199690998, 6);
  sqcRYGate(q, -1.5639428218426208, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6162706999119879, 6);
  sqcRYGate(q, 1.8964937270553976, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7594993220458373, 1);
  sqcRYGate(q, -2.820449770466358, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0748822402987925, 1);
  sqcRYGate(q, -3.0385355436798815, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4794223850767936, 3);
  sqcRYGate(q, 0.07157590253373859, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.30729276047911025, 3);
  sqcRYGate(q, -2.007385625120852, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.427119334061989, 5);
  sqcRYGate(q, -1.79650157776962, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.0564472919483894, 5);
  sqcRYGate(q, 0.14768967747224074, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5641568647780444, 0);
  sqcRYGate(q, -1.1138191595836089, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8643133417407389, 0);
  sqcRYGate(q, 2.7345582110489177, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.13257973731585565, 2);
  sqcRYGate(q, 3.1341246232481583, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8083279312569163, 2);
  sqcRYGate(q, 0.3285855505802338, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5650725843175016, 4);
  sqcRYGate(q, 2.0394425685177326, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9885800814040039, 4);
  sqcRYGate(q, 0.5790727607974777, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.451238454511524, 6);
  sqcRYGate(q, -0.6440486676965387, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.620628412013039, 6);
  sqcRYGate(q, -2.1973628850379727, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.929562730124287, 1);
  sqcRYGate(q, 2.607570605713099, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7514797801897526, 1);
  sqcRYGate(q, 0.6304069898125259, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1592055651848892, 3);
  sqcRYGate(q, 2.6044824597705856, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.6036442695783455, 3);
  sqcRYGate(q, 1.635680565061853, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.4164187068644873, 5);
  sqcRYGate(q, -1.036688457160924, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.292117324850015, 5);
  sqcRYGate(q, 1.3414276179563114, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8466359228941567, 0);
  sqcRYGate(q, 3.0405836206646963, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.457039159274936, 0);
  sqcRYGate(q, -1.1140649153348152, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4520314125195313, 2);
  sqcRYGate(q, -0.1937998015722524, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6501192752171249, 2);
  sqcRYGate(q, 1.3038531813457526, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.03650022074888, 4);
  sqcRYGate(q, 1.9946058521254753, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.080678806520868, 4);
  sqcRYGate(q, 1.9067776292770153, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.5887505754608915, 6);
  sqcRYGate(q, -0.15947386812512931, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.9075196997689443, 6);
  sqcRYGate(q, 0.3371161313295479, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6843900495039303, 1);
  sqcRYGate(q, 2.5310903262922406, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.455414187188058, 1);
  sqcRYGate(q, 2.9533806803777494, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3204859892270555, 3);
  sqcRYGate(q, 0.7032498337965514, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0085603831152894, 3);
  sqcRYGate(q, -0.5871581227722995, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.08113499681060955, 5);
  sqcRYGate(q, -3.048370965605583, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.5545913463440915, 5);
  sqcRYGate(q, -0.8212884431784477, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.5109108002064926, 0);
  sqcRYGate(q, -0.7826134395116594, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5144794824583308, 0);
  sqcRYGate(q, -1.1793874105308984, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7313596463968493, 2);
  sqcRYGate(q, 2.961256212145165, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.35298619104923706, 2);
  sqcRYGate(q, -0.7743040406302537, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6439774578466206, 4);
  sqcRYGate(q, -3.007783900089675, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.43697160691312936, 4);
  sqcRYGate(q, 2.9628686871350793, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.344361137225156, 6);
  sqcRYGate(q, 2.250596930934095, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0834538249287586, 6);
  sqcRYGate(q, -2.6120005061986094, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0891593325167226, 1);
  sqcRYGate(q, -2.2722352411856512, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.662088394513952, 1);
  sqcRYGate(q, -1.1497345100894052, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5982680456290188, 3);
  sqcRYGate(q, 0.42826084237572015, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8506891275934034, 3);
  sqcRYGate(q, -2.39376465921394, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.9938750058576703, 5);
  sqcRYGate(q, -1.7054529360117994, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.057675259295224, 5);
  sqcRYGate(q, -0.054947291836098915, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.8320696872227717, 0);
  sqcRYGate(q, -1.693727417506632, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.847288340341119, 0);
  sqcRYGate(q, -0.5228107911285647, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8579591976266043, 2);
  sqcRYGate(q, -0.7547147490408027, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.018268158668658607, 2);
  sqcRYGate(q, 0.14453491125961845, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8238653656178748, 4);
  sqcRYGate(q, 1.2673239440476172, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.344017676168898, 4);
  sqcRYGate(q, -2.572941667987309, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.580180769389992, 6);
  sqcRYGate(q, 1.140725958784646, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1500127236088293, 6);
  sqcRYGate(q, 0.43003790282052134, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.352039054206692, 1);
  sqcRYGate(q, 2.991819011868527, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.35223465745085303, 1);
  sqcRYGate(q, 2.528130983215791, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.168405304591455, 3);
  sqcRYGate(q, 2.317988746411704, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.4473067747176973, 3);
  sqcRYGate(q, -2.419146569164681, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.2207368572835686, 5);
  sqcRYGate(q, -0.7189861508725058, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.1239114010142002, 5);
  sqcRYGate(q, -0.3412118581599271, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.008303132517100131, 0);
  sqcRYGate(q, -2.971137592105817, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.280918387841277, 0);
  sqcRYGate(q, 2.586572527303445, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7207970367885594, 2);
  sqcRYGate(q, -0.8788656315132551, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2768764343223589, 2);
  sqcRYGate(q, 1.1499970854939763, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8599120635548996, 4);
  sqcRYGate(q, -0.008577472073348188, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.10348977751911767, 4);
  sqcRYGate(q, -2.753194520297077, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.687446424670735, 6);
  sqcRYGate(q, 3.103780633340342, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7820176300028558, 6);
  sqcRYGate(q, -2.0232964917011653, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5288942280524462, 1);
  sqcRYGate(q, -0.8813799751048742, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4115597653427614, 1);
  sqcRYGate(q, -1.9996297711515083, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3767729829311226, 3);
  sqcRYGate(q, -0.06664769034562062, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.7671077722043558, 3);
  sqcRYGate(q, 1.4493276275569675, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.074447401475477, 5);
  sqcRYGate(q, 2.718418599754134, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.2674969259884099, 5);
  sqcRYGate(q, -0.36095644371104196, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.7108718310228668, 0);
  sqcRYGate(q, 1.0756156145420785, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.150734518958762, 0);
  sqcRYGate(q, 3.0811598065584755, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2061364190963353, 2);
  sqcRYGate(q, -2.902175671061795, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8116155914649634, 2);
  sqcRYGate(q, -1.3296687550718809, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1488475414706816, 4);
  sqcRYGate(q, 0.3990529031451331, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6048151370950534, 4);
  sqcRYGate(q, -1.075211211834855, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9261708461091798, 6);
  sqcRYGate(q, 2.8952586255057002, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6822148566483386, 6);
  sqcRYGate(q, 2.4313430536290737, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5228597486459223, 1);
  sqcRYGate(q, 0.014708140029227688, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6045035290154441, 1);
  sqcRYGate(q, -3.0476924254987985, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.310296680197383, 3);
  sqcRYGate(q, -1.6573721730397715, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.307056538944577, 3);
  sqcRYGate(q, 2.5949510367366484, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.347891820159523, 5);
  sqcRYGate(q, -2.3754712280067913, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.265447647296712, 5);
  sqcRYGate(q, -1.0813105473198137, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4191537960712177, 0);
  sqcRYGate(q, -2.7300410532809574, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.697264307149512, 0);
  sqcRYGate(q, -0.9078695476260754, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5237593355412189, 2);
  sqcRYGate(q, 2.609101889639041, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.431942881575257, 2);
  sqcRYGate(q, 2.2182052944126296, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3750915022924515, 4);
  sqcRYGate(q, -2.296665868758194, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9992321830403311, 4);
  sqcRYGate(q, 1.1730201324830647, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5825214773101886, 6);
  sqcRYGate(q, 1.9418433187024826, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3187878072676007, 6);
  sqcRYGate(q, -0.5825802773836078, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.24127049187778926, 1);
  sqcRYGate(q, 2.1590769690110605, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0690561308828501, 1);
  sqcRYGate(q, 1.680373381350354, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2725994213115603, 3);
  sqcRYGate(q, 0.1865970663947843, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.365251640280763, 3);
  sqcRYGate(q, -0.058053506732137175, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7477519452209953, 5);
  sqcRYGate(q, 0.7343503921403789, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.0170540217378061, 5);
  sqcRYGate(q, -2.3552879120252443, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.506278383574967, 0);
  sqcRYGate(q, 0.40924713189015277, 1);
  sqcRYGate(q, 1.4083238598984142, 2);
  sqcRYGate(q, 1.931389199892546, 3);
  sqcRYGate(q, 3.054650304727884, 4);
  sqcRYGate(q, -2.4631977163331764, 5);
  sqcRYGate(q, 0.5519284976829892, 6);
  sqcRYGate(q, -1.2349037647490428, 7);

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
