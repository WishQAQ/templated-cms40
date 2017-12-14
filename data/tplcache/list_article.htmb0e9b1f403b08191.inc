<?php
$z[0]=Array("field","",271,290);
$z[0][4]['name']="title";
$z[1]=Array("global","",291,317);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",358,387);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",427,485);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",781,816);
$z[4][4]['filename']="head.htm";
$z[5]=Array("list","\r\n        <li><a href=\"[field:arcurl/]\">[field:title/]</a>\r\n          <p>[field:description function='cn_substr(@me,200)'/]...</p>\r\n        </li>\r\n        ",1018,1209);
$z[5][4]['pagesize']="6";
$z[6]=Array("pagelist","",1278,1332);
$z[6][4]['listitem']="index,end,pre,next,pageno";
$z[7]=Array("include","",1448,1485);
$z[7][4]['filename']="footer.htm";

?>