/*
This program produces an ASCII art of Mizuno Ai.

The raw image can be found from <https://www.pixiv.net/artworks/72126656>.

## Know more about Mizuno Ai

- <https://zombieland-saga.fandom.com/wiki/Ai_Mizuno>

## Know more about ASCII art

- <https://ursinus-cs173-s2020.github.io/CoursePage/Assignments/HW7_ASCIIArt/>

*/
#include <sysu/stdio.h>
long long wk_puts(const char s[]) {
  long long i = 0;
  if (s[i])
    do {
      sysu_putchar(s[i]);
      i = i + 1;
    } while (s[i]);
  const char r[9] = "\\\\\\\"", t[9] = "\n\\\"\\n\\\\\\";
  sysu_putchar(t[0]);
  return i + 1;
}
int main() {
  return wk_puts(
      "                                                                        "
      "     \"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\n"
      "                                                                    "
      "\"\"\"\"\"[([[[[)[))[[[))))))[)[[[[)([([\"\"\"\"\n"
      "                                                               "
      "\"\"[[[)[[((@]]]]]]]]]]]]]]]]]]]]]]]]]]]]@()[))[\"\"\n"
      "                                                          "
      "\"[[[)[[]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]](([[[)([\"\"\"\n"
      "                                                      "
      "\"[[[[((]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]](]](([)[[(["
      "\"\n"
      "                                               "
      "\"\"\"\"((()]@]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]"
      "]]]]]](]]()[[[!\"\"\"\"\n"
      "                                            "
      "\"\"\"[[[[(]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]"
      "]]]]]]]]]]]]]]]]()[[[\"\"\"\n"
      "                                          "
      "\"\"[[((]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]"
      "]]]]]]]]]]]]]]]]]]]]](()(\"\"\"\"\n"
      "                                        "
      "\"\"[)((]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]"
      "]]]@)(]]]]]]]]]]]]]]]]]]]]]()[[ \"\n"
      "                                     "
      "\"\"[))]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]@]]]]]]]]]]]]]]]]]]]]]]]]"
      "]]]]]]]()]]]]]]]]]]]]]]]]]]]]]]]]([[\"\"\n"
      "                                   "
      "\"\"[)(]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]])]]]]]]]]]]]]]]]]]]]]]]"
      "]]]]]]]]]]][]]]]]]]]]]]]]]]]]]]]]]]]]]))[\"\"\n"
      "                                 "
      "\"\"))(]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]()]]]]]]]]]]]]]]]]]]]]"
      "]]]]]]]]]]]]])[]]]]]]]]]]]]]]]]]]]]]]]]]]]([(\"\"\n"
      "                                "
      "\"[)(]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]@)]]]]]]]]]]]]]]]]]]]]"
      "]]]]]]]]]]]]]@)]]]]]]]]]]]]]]]]]]]]]]]]]]]]]()[\"\"\"\n"
      "                              "
      "\"[)(]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]([]]]]]]]]]]]]]]]]]]"
      "]]]]]]]]]]]]]]]]()]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]()[\"\"\n"
      "                             "
      "\")[@]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]])]]]]]]]]]]]]]]]]]"
      "]]]]]]]]]]]]]]]]]([]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]()[\"\n"
      "                          "
      "\"\")[(]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]][]]]]]]]]]])]]]]]]]]]]]]]"
      "]]]]]]]]]]]]]]]]]]]]]])(]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]][[\"\"\n"
      "                          "
      "!()]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]()]]]]]]]]][(]]]]]]]]]]]]]]"
      "]]]]]]]]]]]]]]]]]]]]()@]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]([)\"\"\n"
      "                        "
      "\"[)(]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]][(]]]]]]]]((]]]]]]]]]]]"
      "]]]]]]]]]]]]]]]]]]]]]]]))]]]]]]]]]]]]]]()]]]]]]]]]]]]]]]]]]]]()\"\"\n"
      "                      "
      "\"\"[[(]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]()(]]]]]]]][]]]]]]]]"
      "]]]]]]]]]]]]]]]]]]]]]]]]]]([]]]]]]]]]]]]]]))]]]]]]]]]]]]]]]]]]]]]][[\n"
      "                      "
      "![(]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]][)]]]]]]]])]]]]]]]]]]"
      "]]]]]]]]]]]]]]]]]]]]]]]]][(]]]]]]]]]]]]][(]]]]]]]]]]]]]]]]]]]]]]])[\"\n"
      "                   "
      "\"\"[[(]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]](((]]]]]]][(]]]]"
      "]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]))]]]]]]]]]]]]([]]]]]]]]]]]]]]]]]]]]]]]]])"
      ")\"\n"
      "                   "
      "\"()(]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]()(]]]]]]][]]]]]"
      "]]]]]]]]]]]]]]]]]]]]]]]]]]]]][)]]]]]]]]]]]]))]]]]]]]]]]]]]]]]]]]]]]]]]()"
      "(\"\n"
      "                 "
      "\"\"))@]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]][)]]]]]]@)]]"
      "]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]][[]]]]]]]]]]]()(]]()]]]]]]]]]]]]]]]]]]]]"
      "]]][[\"\"\n"
      "                 "
      "\"[[]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]))[]]]]]]]]]]"
      "]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]@[)]]]]]]]]@([[[]]]([]]]]]]]]]]]]]]]]]]]]]"
      "]]][[\"\n"
      "               "
      "\"\"[)(]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]](]]]]]]]]]]]]]]]]]]][[[\"[)(]]]]"
      "]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]()(]]]]]]]()(()@]]]([]]]]]]]]]]]]]]]]]"
      "]]]]]]]@)[\"\"\n"
      "                "
      "[[(]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]][]]]]]]]]]]([@]]]]]([\"///"
      "[(]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]([(]]]]([)(]])[(]]]()]]]]]]]]]]]"
      "]]]]]]]]]]]]]]@[[\n"
      "               "
      "\"[(]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]((]]]]]]]]]]@[@]]@()!////"
      "!![(]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]])[]]]][)(@]@)([[(]]()]]]]]]]]]]"
      "]]]]]]]]]]]](]]]]))\"\n"
      "              "
      "\"[[(]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]][(((]]]]]]]]([@]])[///////"
      "!!)(]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]))]]))@(]]])(!/"
      "[]]]()]]]]]]]]]]]]]]]]]]]]]]@((]]][[\n"
      "              "
      "[(]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]([]]]@)()@]]])[([)!//////////"
      "!)(]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]@)([(]]]]]())//"
      "!([@])[]]]]]]]]]]]]]]]]]]]]]]]])))(@()\"\"\"\n"
      "            "
      "\"[)[]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]))]]]]]])([(@)[[)!////////////"
      "!)(]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]][)((]]]]]@)[////"
      "[[(()[]]]]]]]]]]]]]]]]]]]]]]]]([[\"([)([\"\n"
      "            "
      "\"([]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]][(]]]]]][)]]()[!\"!/////////////"
      "!)[]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]()[@]]]]]]([[\"////"
      "!)]][[@]]]]]]]]]]]]]]]]][(]]]]]([\"  \"\")[)[\"\n"
      "            "
      "[[(]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]][)]]]]]]]()]]][[[))[/////////////"
      "![(]]]]]]]]]]]]]]]]]]]]]]]]]]]([([(]]]]]])[[///////"
      "(()[)(]]]]]]]]]]]]]]]]][(]]]]]][[\"\n"
      "          "
      "\"\"[[]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]))]]]]]]]]))]]([\"/![[[[/!////"
      "/////\"[)]]]]]]]]]]]]]]]]]]]]]]]]([(]([(]]]]@[))[[))[[\"\"()[/"
      "[(@]]]]]]]]]]]]]]]])(]]]]]]])(\"\n"
      "          "
      "\"[[(]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]())]]]]]]]])[]]([!/////!)[[!////"
      "/////[[(]]]]]]]]]]]]]]]]]]]]()((]@[(]]]][[[[[[[[[[[[[[[!/"
      "!)(]]]]]]]]]]]]]]]][(]]]]]]]()\"\n"
      "          "
      "\"[)]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]()@]]]]]]][[)[]]))\"///////"
      "!()[!///////!)(]]]]]]]]]]]]]]]]]][(@]]@))]]]([[\"\"\" "
      "\"\"\"\"\"[[[[[[[[[]]]]]]]]]]]]]]]]]))]]]]]]]()(\"\n"
      "          "
      "[)(]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]([(]]]]]@[[/\"[)@()!!!!!!!///"
      "!![[[!/////"
      "[[]](]]]]]]]]]]]]]]]]]]]])[@]([[\"[[)[[\"\"\"\"\"\"\"\"![[[[[]]]]]]]]]]]"
      "]]]]]][(]]]]]]]]()[\"\n"
      "        "
      "\"\"[[@]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]][)@]]]]()[/"
      "!![[[[([[[[[[[[[[[[\"////////!)(][[(]]]]]]]]]]]]]]]]][)((([   "
      "[)@))@[[)\"\"   \"[)[)(]]]]]]]]]]]]]]]][(]]]]]]]]])[\"\n"
      "        "
      "\"\"[[]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]][)]]]@([![)[[[[)[[[["
      "\"\"\"\"\"\"\"\"[[[)[!/////!((](![[(]]]]]]]]]]]]]][[[)[\"[\"\" "
      "\"[[()[)([[[!\"   \"[[)]]]]]]]]]]]]]]]([]]]]]]]]]]([)\"\"\n"
      "        \"\"))]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]][[@]])[[[[[[[\"\"   "
      "\"\"![)[[[[\"\"\"\"\"!///////[[()//"
      "![]]]]]]]]]]]]]([))\"![[[\"\"[[([([@)([([(\"\" "
      "\"\"))(]]]]]]]]]]]]]])[]]]]]]]]]]]([\"\"\n"
      "        \"[[(]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]][[(])[[[[)\"\"     "
      "!(([[((@[@[()[\"\"\"//////[)[/////"
      "))]]]]]]]]]]([[\"\"\"[[@[([()[[[)[))(([[[\"   "
      "\"()]]]]]]]]]]]]]])[]]]]]]]]]]]][[\"\n"
      "        \"[)(]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]])[@[)[[)\"\"      "
      "\"![[)[(((()[[@)[(\"\"//////)[//////[[]]]]]]]]@)[/\" "
      "\")@)@[[([([()[))@)@@[)\"  \"![(]]]]]]]]]]]][[)]]]]]]]]]]]][[\"\n"
      "        \"[)(]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]()()[[)\"\"         "
      "\"[)[[([[))([@)()\"\"/////[///////![)]]]]]]@[[///"
      "\"\"[([)([([([[@[@([@()()!  \"\"([(]]]]]]]]]])[()@]]]]]]]]]]]@[[\"\"\n"
      "        \"[(]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]][[[[[)\"     \"))[ "
      "\"\")([)[[(([(()@[()\"!/////!///////![]]]]]@)[////"
      "\"\"))))()[@[()[@[([[([([[    [))]]]]]]]]]([()[]]]]]]]]]]]]][)\"\n"
      "      \"\"[[]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]][)[[[[\"    "
      "\"!)@)([[)[()@[)[@[([()([[\"//////////////)(]]]()[////"
      "!\"\"[([)[[@)][[@)@([[[(@[!  \"\"[[[[]]]]]](@)(][[]]]]]]]]]]]]]][)\n"
      "       \"[(]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]()[))      "
      "\"[[[()(([[(([@)@[@[[[[[([\"!////////////\"[(]][)//////"
      "!\"\"[)[([[[[()@[@)[[[[)()\"  \"\")/![)@]]]]((@]][[]]]]]]]]]]]]]][)\"\n"
      "     \"\"[[]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]([[[[      "
      "\"[)()@[)[()@[@)([([[[[[[[\"!/////////////\"[()[!////////"
      "!\"[[([[[[[[[[[[[[[[([[ \" \"/////[)]]])[]]]])[]]]]]]]]]]]]]]([[\"\n"
      "     \"))]][@]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]][[)\"      "
      "\"[[)[)[[[[@)@[@[@)[[[[[[[\"!!////////////![!///////////"
      "\"\"\"[[()[[[[[[[[[[[()[\"\"\"///////\"[))[(]]]]])[]]]]]]]]]]]]]]])(\"\n"
      "   \"\"))]][[]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]])[)\"      "
      "\"[[[[)[[[[((@[)[[[[[[[[[[\"/////////////////////////////"
      "!\"\"\"[[()([[[[[[([)\"\"\"///////////[)(@]]]]][[]]]]]]]]]]]]]]]))\"\n"
      "   !)[@[[[[]]]]]]][]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]([[[       "
      "\")[[@)[[[[[[[[[[[[[[[[(\"\"////////////////////////!//////"
      "!\"\"\"!()[(()[)[\"//!//[\"/////!!//[)(]]]]])(]]([]]]]]]]]]]]([[\n"
      "\"[[[[[[\"\"[[]]]]]]([]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]][))[\"     "
      "\"\")[(@@)[[[[[[[[[[[[[[\"/!////////////////////////!!/////////"
      "\"!\"\"\"\"/!//!!!!![[!!![!![[!![[)]]]]()(]]@)]]]]]]]]]]]][[\n"
      "\"\"\"\" \"\" \"[)]]]]]]([]]]]]]]]]]]]]]]]]]]]]]]]]]((]]]]([/\"[[\"\"\" "
      "  "
      "\"\"[[(@@@()([)))[)!\"\"//////////////////////////////////////////////"
      "!![!!![)!!![!![[!![!!)[]]][[@]]([]]]]]]]]]]]][[\"\"\n"
      "        "
      "\"))]]]]]]()@]]]]]]]]]]]]]]]]]]]]]]]]]][(]]]([[//![\"/"
      "\"\"\"\"\"\"\"\"[[[)[[[[[\"\"\"/////////////////////////////////////////"
      "///////!![!!![(!!!)[![[!![[!![[(]][(]]][[]]]]]]]]]]]])[\"\"\n"
      "        "
      "\")[]]]]]([[@]]]]]]]]]]]]]]]]]]]]]]]]]]][[]]][[////////\"!///!\"\"/!!!!/"
      "/////////////////////////////////////////////////////"
      "![!!![!!![[![[!![[!!!\")[][)]]]([[]]]]]]]]]]]]()[\"\n"
      "        "
      "\"[)]]]]]@[[@]]]]]]]]]]]]]]]]]]]]]]]]]]]][((]])[!////!!)!!!(!!!![!!([!/"
      "[)////////////////////////////////////////////////"
      "![!!![[!![[!!)!!!(!!!!/)[([(]]])[)(]]]]]]]]]]]])[\"\n"
      "        "
      "\"[)@]]]]())(]]]]]]]]]]]]]]]]]]]]]]]]]]]]()[]][[!///"
      "!!)!!!)!!!![!!)[!![[!/////////////////////!//![[[[[[!//!//////![([!/////"
      "![[!!![!!)!!![!!!\"//[[[]]]][[[[]]]]]]]]]]]]][[\"\n"
      "        "
      "\"![@]]]])[[((]]]]]]]]]]]]]]]]]]]]]]]]]]]]][[@])[///"
      "[[!![)!!![(!!(!!![[!/////[[!\"!///!!\"/![[[[)[[[[[[[[[[[[[[[[[[[[[[)\"//"
      "///!!//////[!//\"!//////[[(]]]([\")(]]]]]]]]]]]]]))\"\n"
      "         "
      "\")(]]]][(()@]]]]]]]]]]]]]]]]]]]]]]]]]]]]][[[(()[![[!![[!!![)!![!!![!!//"
      "////!![([\"\"!)![[[![[!!!![[!![[[[[[[[[[[[[[[[[/!///////////////////////"
      "/)[]]]([!\"[(]]]]]]]]]]]]]))\"\n"
      "        "
      "\"\"[)]]]])(@[(]]]]]]]]]]]]]]]]]((((]]]]]]]]()![[()!!!![[!!![[!![!!![!!!"
      "//////![[!)[[)[!!!!!!!!!!!!!!!!!![![[[[[[[[[[[[!////////////////////////"
      "!)[]]((!\"[)]]]]]]]]]]]]]])[\"\n"
      "         "
      "\"[[]]]([]][[@]]]]]]]]]]](](([!!!)(](((]]]][[/[[[[\"/)!!!![[!![!!!!//!//"
      "////!([!!!!!!!!!!!!!!!!!!!!!!!!!!!!![![[[[[[[[!///////////////////////"
      "![(]@[(\"\"[[]]]]]]]]]]]]]]]))\"\n"
      "          "
      "\"[(]]([@]()]]]]]]]]]]]()[[[[!!![))[![)(]]()!//[)[[!///[!//!////////////"
      "//!)!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!![[[[)///////////////////////"
      "![)(([[  !)(]]]]]]]]]]]]]]()[\"\n"
      "          "
      "\"[[@]][]]([(]]]]]]]]]])[!!!!!!!!!!!!!)(]]()!////![(////////////////////"
      "//![!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!)[//////////////////////"
      "\"[[[[[  \"[)(]]]]]]]]]]]]]]][[\"\"\n"
      "          "
      "\"))(]@[]]][[(]]]]]]]]]@([[!!!!!!!!![((]]]](!///////!///////////////////"
      "//![[!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!![)//////////////////////"
      "[[)[\"\" \"\"([]]]]]]]]]]]]]]]]])[\n"
      "          "
      "\")[[]][@]]][(]]]]]]]]]()[!!!!!!!!!!![[(]]@)!///////////////////////////"
      "/!/[[!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!![)[///////////////////"
      "![))([)\"\"\"[)(@(]]]]]]]]]]]]]]]][[\n"
      "          "
      "\")[[(][(]]]([]]]]]]]]])[!!!!!!!!!!!!!![]]][!///////////////////////////"
      "///!)[!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!![[[///////////////////"
      "[[[(]]()[)[@][([[(]]]]]]]]]]]]][)\"\n"
      "          "
      "\"[)))]([]]]]()]]]]]]]](()[[[!!!!!))[))]]]][////////////////////////////"
      "////![[!!!!!!!!!!!!!!!!!!!!!!!!!!!!!![([!/////////////////"
      "![[[@]]]]([@()[[[!!![(!![(]]]]]]]][[\"\n"
      "          "
      "\"[[]))][@]]]][(]]]]]]]]]]]([!!!![(]]]]]]]))[/!/////////////////////////"
      "/////![[[!!!!!!!!!!!!!!!!!!!!!!!!!![[()!///////////////"
      "!([)(@]]]]]]]]((!!!!!!!!!!!((@]]]]]][)\"\n"
      "          "
      "\"[[]][(])]]]]([]]]]]]]]]]]]]())(]]]]]]]]])[([)[!!//////////////////////"
      "///////[[[[[!!!!!!!!!!!!!!!!!!!![![(([/////////////"
      "!!))[(]]]]]]]]@))[]()[!!!!!!!![(]]]]]]]()\"\"\n"
      "          "
      "\"[(]]([@][@]]]([(]]]]]]]]]]]]]]]]]]]]]]]()@]]]]([)(\"//////////////////"
      "/////////!([[[!!!!!!!!!!!!!!![!![[[[!///////////"
      "!![[[)(]]]]]]]]]())!\"[()[!!!!!!!!!!!)(]]]]()!\n"
      "          "
      "[[@]]]()(]()]](([]]]]]]]]]]]]]]]]]]]]]]][)]]]]]]]]([)[(!////////////////"
      "/////////!/[[[[)[[[[[[[[[))[)[[///////////![()[)]]]]]]]]]]]]@)[\"  "
      "\"[([!!![[!!!![[))]]]]([!\"\n"
      "        "
      "\"\"))(]]]([)]](())(([]]]]]]]]]]]]]]]]]]]]]@[(]]]]]]]]]]]]([)))[////////"
      "//////////////////!!!!![[[!!!/!////////!/![)))(((]]]]]]]]]]]]]()[\"    "
      "\")(]((()!!!![(]@]]]@((\"\n"
      "        "
      "\"\"[(]]]([@()]]]]]])[)(]]]]]]]]]]]]]]]]]]())(]]((]]]]]]]]]]]]@[[[[[[!//"
      "///////////////////////////////!/![[)[([!\"\")(]]]]]]]]@]]]]]]([[\"     "
      " [[(]]]]()[[[(]]]]]@)[\"\"\n"
      "        "
      "\"[[]]])[)[]@[(@]]]]]]]]]]]]]]]]]]]]]]]]]()]]]((()@]]]]]]]]([))())((([[["
      "[)[[!!//////////////!!![[[)[[))((())[)[\"\"\"[]]]]]@[)[@]]]]@[(\"       "
      " [)]]]]]]]]]]]]]]]([\"\"\n"
      "       "
      "\"))[[)[\"\"\"[(]]()(]]]]]]]]]]]]]]]]]]]]]]]]))]]([\"\"\"))](([([[(((()["
      "((((([[!![)[)[[[///////////!([!!!))[[()[((((((()))([[[[\"\" )(]]]][!\"  "
      "      \")(]]]]]]]]]]]]][[\"\"\"\n"
      "       \"\"\"\"\" \"  \"\")[@]@([[]@]]]]]]]]]]]]]]]]]]]@[)@[[\"  "
      "\"\"[[)(((((((([)((((((()[[)(@[)@())[[!\"\"\"/"
      "\"[(![)[@@[@([)(([))(((((((([)\"\"\" [[]]([\"         "
      "\"[)]]]]](]@]]]]]()\"\"\n"
      "                   ()(((\"\"![([(]]]]]]]]]]]]]]]]([([[\"   "
      "\"[)((((((((()[(((((((([[[)(@[(@@@[@[([[)[[[[@[[@@@[@([[[(((([[((((((([["
      "[\" \"[]])[\"         \"[(]]@[)[())(]]]][(\"\n"
      "                     [[[      \"\"\"[([(]]]]]]]]]]])[\"     "
      "!)((((((((([[(((((((((([[)[[[[[[[[[[[[[[[)[[[[[[[[[[[[[([((([(((((((((()"
      "[\"\"\"(@[\"          [[[[\"\"\"    \"()[((()(\"\"\n"
      "                                   \"[))]]]]]]]]]])[   "
      "\"\"[)(((((((([[[[((((((((())@(@[(@@@[@[[@@)([@[@[[@@@[@([@()(()(((((((("
      "(((()[  \"[)\"\"                      \"\"\"[)[[)[\"\n"
      "                                     \"\"[)(]@]]]]])[\"  "
      "\"[((((((((((((()[[)))((((()[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[)[)))[[)(((("
      "(((([[\"  \"\"\"                             \"\"\"!\"\n"
      "                                       "
      "\"\"\"[()((@]][)\"\")[((((((((((((((([[[[[))(()[[[[[[[[[[[[)[!!!))[[[[[["
      "[[[[[[)[)[(((([((((((((()(\"\n"
      "                                            "
      "\"\"\"\"\"\"!!\")((((((((((((([[)(((((((((()[(@[)@@@[[)[[[!!!!)[[[@@@[@("
      "[@@[[(@)[(()(((((((((([[\"\n"
      "                                                   "
      "![((((((((((((((()(((((((((()@[)@[)@[))@[[)(!!!!)()[()[[)([@[[[(@[()()[("
      "((((((((()[\"\"\n"
      "                                                 "
      "\"![(((((((((((((((()[(((((((()[@([[)[(@@[@[[([!!!![([[@@@[@([[[@[(@[@@("
      "[)((((((((((()[\"\n"
      "                                                 "
      "\"[(((((((((((((((((()[((((((()[[[[[[[(()[([[[[!!!!!)[[[[[[[[[(([[[[[[[["
      ")[(((((((((((([!\"\n");
}