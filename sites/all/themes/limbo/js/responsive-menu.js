(function($) {
	$(function(){
		$("#block-system-main-menu li").click(function(e){
			$(this).toggleClass("open");
			e.stopPropagation();
		});
	});
}(jQuery));
