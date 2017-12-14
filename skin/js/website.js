$(function(){
	//首页焦点产品
	$(".product_ul li a").hover(function(){
			$(this).find(".focus-product-bt").hide()
				$(this).find(".focus-product-content").slideDown();
					},function(){
					$(this).find(".focus-product-bt").fadeIn(1000);
					$(this).find(".focus-product-content").slideUp();
						});
						
	$("div.index-company-news").find("li:odd").addClass("odd");//首页公司动态
	//首页案例介绍
		$(".case-introduced-top li").hover(function(){
			$(this).find("span").fadeIn();
					},function(){
					$(this).find("span").fadeOut();
					});
					
	if($(".slideBox").length){
		jQuery(".slideBox").slide({mainCell:".bd ul",autoPlay:true});//首页焦点图轮播图
	}
	});