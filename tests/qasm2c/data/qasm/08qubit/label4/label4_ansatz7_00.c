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

  sqcRYGate(q, -2.36235699831383, 0);
  sqcRYGate(q, -1.2760125214155977, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.580816979206814, 0);
  sqcRYGate(q, -1.6387953546116014, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.15196896254306225, 0);
  sqcRYGate(q, 1.1097722113693242, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7493565984557566, 0);
  sqcRYGate(q, 2.634594987307974, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6812072544916452, 0);
  sqcRYGate(q, 3.135456908336522, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.1018381994622986, 0);
  sqcRYGate(q, -1.1726189861867882, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.9484578632269223, 0);
  sqcRYGate(q, 2.044764082525699, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, -1.1052001701745224, 0);
  sqcRYGate(q, 1.8768852237342797, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, -1.3594168349386777, 0);
  sqcRYGate(q, -1.29674280603275, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, -1.9575532042255155, 0);
  sqcRYGate(q, -0.07783784334489319, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, -1.4462971388454005, 0);
  sqcRYGate(q, -1.9977157092443338, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, 2.8623567273039274, 0);
  sqcRYGate(q, 2.438438557274551, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, 1.375937874819577, 0);
  sqcRYGate(q, 0.42826095147003684, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, 0.5117743219321174, 0);
  sqcRYGate(q, -0.18008722112135175, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, 0.0178972511089696, 1);
  sqcRYGate(q, 0.15518727789648343, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6333823388213659, 1);
  sqcRYGate(q, -2.234920941998669, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5764017317047103, 1);
  sqcRYGate(q, 0.2683434621895327, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.407090973430373, 1);
  sqcRYGate(q, -0.6641487209790232, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5982558428477183, 1);
  sqcRYGate(q, -0.8291247608520989, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, 2.7249025276271093, 1);
  sqcRYGate(q, -0.6858175891114732, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, -1.714295943923526, 1);
  sqcRYGate(q, -2.6026835499146705, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, 2.464824113113759, 1);
  sqcRYGate(q, -1.281575191346569, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, -1.393901487749523, 1);
  sqcRYGate(q, 1.84860604759881, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, 0.5588512053854995, 1);
  sqcRYGate(q, -1.4571800581250391, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, -2.0053072989923324, 1);
  sqcRYGate(q, -2.591789760746003, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, 2.4181047231145296, 1);
  sqcRYGate(q, 1.1515336034509769, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, 1.8138817057665044, 2);
  sqcRYGate(q, -2.556338751503134, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.125246016377471, 2);
  sqcRYGate(q, -0.2661441965087672, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4511994627310585, 2);
  sqcRYGate(q, 2.905367588734666, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.2774250470435105, 2);
  sqcRYGate(q, -0.569020996874862, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.0758670114939, 2);
  sqcRYGate(q, -1.9455919347462256, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.1363022605266857, 2);
  sqcRYGate(q, -1.549852720227002, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.6255732658976842, 2);
  sqcRYGate(q, 0.6562144290065846, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, 0.7708854346726959, 2);
  sqcRYGate(q, 2.2675267497165104, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, 0.6745923077586964, 2);
  sqcRYGate(q, 0.29918500656940417, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, 0.6890404213182251, 2);
  sqcRYGate(q, -0.7669035740565128, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, -1.0550109599659119, 3);
  sqcRYGate(q, -3.049675352549656, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.069906090671049, 3);
  sqcRYGate(q, -0.7757220910933593, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.071650459107885, 3);
  sqcRYGate(q, 1.6842074878887845, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.9072356820727633, 3);
  sqcRYGate(q, 1.21954201989043, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.3441886456934504, 3);
  sqcRYGate(q, -0.8466291790397129, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, -2.3864290242699697, 3);
  sqcRYGate(q, -2.380785897635954, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, 0.7770512491771647, 3);
  sqcRYGate(q, -2.977670613892586, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, 2.0894589953514524, 3);
  sqcRYGate(q, -1.7578390293431416, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, -3.108543031156619, 4);
  sqcRYGate(q, -2.295777942872077, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.654198921448262, 4);
  sqcRYGate(q, -0.1948113169468284, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.3866094874929962, 4);
  sqcRYGate(q, -0.047424858576248265, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.7557550110277627, 4);
  sqcRYGate(q, -2.5988641383363675, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.3074685220437559, 4);
  sqcRYGate(q, 3.023960029415049, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.3977848612226236, 4);
  sqcRYGate(q, 3.066373559764753, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.2536865767869838, 5);
  sqcRYGate(q, 1.1184394274102962, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.349778953157398, 5);
  sqcRYGate(q, -1.4793985686641982, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.7350700312337883, 5);
  sqcRYGate(q, -1.3494475355563245, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.8614925988918163, 5);
  sqcRYGate(q, -2.640614590020167, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.658834001953534, 6);
  sqcRYGate(q, -1.3308038669174644, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0302154548722973, 6);
  sqcRYGate(q, 2.274726615091403, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.144815089864218, 0);
  sqcRYGate(q, -1.6240889793934057, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.328093080848463, 0);
  sqcRYGate(q, 2.688715654636576, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6465800927182738, 0);
  sqcRYGate(q, 1.7551825651999513, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.32343870044559075, 0);
  sqcRYGate(q, 1.8034271393745778, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5311380559563217, 0);
  sqcRYGate(q, 1.3626843657224788, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6168819545214747, 0);
  sqcRYGate(q, -1.2459224863956284, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6563750935067487, 0);
  sqcRYGate(q, -1.4451554053624829, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, 2.7917797294749844, 0);
  sqcRYGate(q, 0.016864156158730194, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, -1.1461652575244656, 0);
  sqcRYGate(q, -0.7782626783383636, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, -2.215361206178418, 0);
  sqcRYGate(q, 2.945892152433036, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, -2.5820107015374836, 0);
  sqcRYGate(q, -0.40963234163282347, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, -0.13812661952626315, 0);
  sqcRYGate(q, 2.506906918660223, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, 2.150835162909689, 0);
  sqcRYGate(q, 2.674153007714594, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, 0.6050758971907788, 0);
  sqcRYGate(q, -1.786602920822551, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, -0.0932054265174358, 1);
  sqcRYGate(q, -0.595606722788979, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9714999338657319, 1);
  sqcRYGate(q, -1.1119133466053785, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.956172295542383, 1);
  sqcRYGate(q, 2.328677340272366, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1469983152302756, 1);
  sqcRYGate(q, -1.7960942992528912, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8567205688904274, 1);
  sqcRYGate(q, 0.716088613816202, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, 1.1610762474394125, 1);
  sqcRYGate(q, -2.6860819030462166, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, -2.608174484311032, 1);
  sqcRYGate(q, 0.7567435586236038, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, 1.6364784282988967, 1);
  sqcRYGate(q, -1.09572971599286, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, 0.46103205732605196, 1);
  sqcRYGate(q, 2.253144954000036, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, -3.0075526920907047, 1);
  sqcRYGate(q, 0.8473350963970372, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, -1.3494875666063244, 1);
  sqcRYGate(q, 0.8493484834536403, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, 2.9348850188866575, 1);
  sqcRYGate(q, 1.7808401729356786, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, 0.5935925190989345, 2);
  sqcRYGate(q, 2.8995380959318386, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6023401391727976, 2);
  sqcRYGate(q, 2.1037224844674594, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.820746270627647, 2);
  sqcRYGate(q, -0.08652288043164447, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.35133570553921434, 2);
  sqcRYGate(q, -0.8069108006815657, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.8424166697717617, 2);
  sqcRYGate(q, 0.16315447284543705, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.308359385745983, 2);
  sqcRYGate(q, -0.18357472944914396, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.3402359981726137, 2);
  sqcRYGate(q, -0.6702602516789987, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, 0.7086022053249298, 2);
  sqcRYGate(q, 1.1208339098610698, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, -0.40577316020375775, 2);
  sqcRYGate(q, 1.638988291325913, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, -1.09836188762737, 2);
  sqcRYGate(q, -0.7745038717042361, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, 0.3229102990245527, 3);
  sqcRYGate(q, 1.8212644823087496, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.790333453433802, 3);
  sqcRYGate(q, 2.7180204402518706, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7774980129836848, 3);
  sqcRYGate(q, -1.8639601419823542, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.6000188852438493, 3);
  sqcRYGate(q, 2.3928019442033714, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.2656106398818388, 3);
  sqcRYGate(q, -0.7436058037662754, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, 1.5733995798999858, 3);
  sqcRYGate(q, 2.2335559274793115, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, 2.531200394062561, 3);
  sqcRYGate(q, 1.4313668138019517, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, 1.1539931602128792, 3);
  sqcRYGate(q, 1.345396418611608, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, 2.4188815491308504, 4);
  sqcRYGate(q, -2.102503833785062, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.588559720688199, 4);
  sqcRYGate(q, -1.9862714448936516, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9993285943007804, 4);
  sqcRYGate(q, -1.1335443663563511, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.060784432826282, 4);
  sqcRYGate(q, 2.596043193628776, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.1636072036887075, 4);
  sqcRYGate(q, 2.230841457068287, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.628802563359782, 4);
  sqcRYGate(q, 1.8882908096737747, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.6001644012100495, 5);
  sqcRYGate(q, -0.823080272082576, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6427132526969728, 5);
  sqcRYGate(q, 0.08676348597313677, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.9333944672204773, 5);
  sqcRYGate(q, 2.9919834748753087, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.743339464690627, 5);
  sqcRYGate(q, -2.50922707919757, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.7880256030389813, 6);
  sqcRYGate(q, 1.44680474691014, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6245443158630392, 6);
  sqcRYGate(q, 0.5474748278177043, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5169805197513879, 0);
  sqcRYGate(q, -1.5425461069535826, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4730152981442126, 0);
  sqcRYGate(q, 0.8206023441895258, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5170560939730469, 0);
  sqcRYGate(q, 2.7146215670486744, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3979188653893479, 0);
  sqcRYGate(q, 2.021977993761068, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7508957044442877, 0);
  sqcRYGate(q, 2.6648683381739358, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.410420679527512, 0);
  sqcRYGate(q, -0.4514140613956412, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.703446556581785, 0);
  sqcRYGate(q, -0.7388507177060504, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, -1.54828085997495, 0);
  sqcRYGate(q, 0.8491544007967919, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, 1.066609327730603, 0);
  sqcRYGate(q, -0.8252719899503793, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, -2.9921322993292545, 0);
  sqcRYGate(q, -3.124995817040261, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, -2.186296086372714, 0);
  sqcRYGate(q, -0.4062375498714398, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, 1.5891447402236336, 0);
  sqcRYGate(q, 2.262311619798637, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, 1.3975021877613152, 0);
  sqcRYGate(q, 2.030395412989265, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, -0.5656779900152715, 0);
  sqcRYGate(q, 2.639655155693011, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, 2.412257679680439, 1);
  sqcRYGate(q, 0.720804349657084, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4214350966959743, 1);
  sqcRYGate(q, 0.1558987343415179, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3983227724097445, 1);
  sqcRYGate(q, 1.6424768559459304, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5435017455463615, 1);
  sqcRYGate(q, -1.3681268052125448, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5958771539207701, 1);
  sqcRYGate(q, 2.8670640368994063, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, 2.8092329709210717, 1);
  sqcRYGate(q, -0.876334480643755, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, -2.1443934105162867, 1);
  sqcRYGate(q, 1.9714479276941184, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, -0.6304847107440441, 1);
  sqcRYGate(q, 1.0036982920869697, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, 1.4017074404930119, 1);
  sqcRYGate(q, 0.6373702796401597, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, 1.9630064825100677, 1);
  sqcRYGate(q, -1.8947920266328953, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, -3.0293405034706025, 1);
  sqcRYGate(q, -1.987904449993806, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, 0.7398988032109758, 1);
  sqcRYGate(q, 0.4635368860992939, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, -2.3549327835715794, 2);
  sqcRYGate(q, 0.0717216792435688, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1405164837040331, 2);
  sqcRYGate(q, 2.2232965678886125, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0674448040023754, 2);
  sqcRYGate(q, 1.8344814083108538, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.849816489636316, 2);
  sqcRYGate(q, 1.3888999465478944, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.725876407828504, 2);
  sqcRYGate(q, -2.668479234776886, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.4760755459827615, 2);
  sqcRYGate(q, -1.4679048848100908, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.9278002082991579, 2);
  sqcRYGate(q, -1.9234263294367002, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, 2.6933962820253123, 2);
  sqcRYGate(q, 1.446503726566951, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, 0.05612661823459231, 2);
  sqcRYGate(q, 0.05044253650656926, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, -2.889077510328386, 2);
  sqcRYGate(q, 0.2916718515851633, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, 1.947766270118391, 3);
  sqcRYGate(q, 1.9570617263704406, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.5250188426331546, 3);
  sqcRYGate(q, 0.2586641766276146, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.7602744561947867, 3);
  sqcRYGate(q, -2.5835394772780997, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.3981596541611994, 3);
  sqcRYGate(q, 0.030406787481616175, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.6377960978948947, 3);
  sqcRYGate(q, 2.294377686417123, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, -0.9755936336618176, 3);
  sqcRYGate(q, 1.9544647607813594, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, -1.2973173741260968, 3);
  sqcRYGate(q, 1.4100876376191285, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, -0.6307181133357753, 3);
  sqcRYGate(q, -3.101552361267075, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, 0.45501226259798067, 4);
  sqcRYGate(q, -2.491846576916579, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9346477291060569, 4);
  sqcRYGate(q, 1.2847498712829108, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.6371085400636005, 4);
  sqcRYGate(q, -1.6905377605748804, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.3684122053552172, 4);
  sqcRYGate(q, 2.521553359616008, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.445878266573181, 4);
  sqcRYGate(q, 1.8419244465695883, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.446587434037297, 4);
  sqcRYGate(q, 1.4290162750100137, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.6722375102254481, 5);
  sqcRYGate(q, 0.9004000688156389, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.2656473022973573, 5);
  sqcRYGate(q, -1.433646333137446, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.56454239098357, 5);
  sqcRYGate(q, 2.1547858121478694, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.9640287282675983, 5);
  sqcRYGate(q, 0.2574322568787073, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.3724321241635386, 6);
  sqcRYGate(q, 2.083911356393209, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.07271975662653367, 6);
  sqcRYGate(q, 1.927785948631156, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1133409465600048, 0);
  sqcRYGate(q, -1.8633853311610213, 1);
  sqcRYGate(q, 0.6912954781972959, 2);
  sqcRYGate(q, -0.5772563539396562, 3);
  sqcRYGate(q, -2.643988058266088, 4);
  sqcRYGate(q, 1.90571823771253, 5);
  sqcRYGate(q, 0.6400894509278823, 6);
  sqcRYGate(q, 1.456356364171259, 7);

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
