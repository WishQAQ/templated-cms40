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
$z[5]=Array("list","\r\n      <li> <a href=\"[field:arcurl/]\" class=\"red-jia\"><img src=\"/skin/images/red_jia.png\"  /></a> <a href=\"[field:arcurl/]\" class=\"product-thumbnail\"><img src=\"[field:picname/]\" width=\"198px\" height=\"245px\" /> <span class=\"focus-product-bt\">·&nbsp;&nbsp;[field:title/]</span> <span class=\"focus-product-content\">\r\n        <h2>[field:title/]</h2>\r\n        <p>[field:description function='cn_substr(@me,60)'/]...</p>\r\n        </span></a> </li>\r\n      ",1006,1493);
$z[5][4]['pagesize']="8";
$z[6]=Array("pagelist","",1554,1608);
$z[6][4]['listitem']="index,end,pre,next,pageno";
$z[7]=Array("include","",1708,1745);
$z[7][4]['filename']="footer.htm";

?>