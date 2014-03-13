(function($) {
	$(function(){
		leftArrow().click(previous).hide();
		rightArrow().click(next);
	});

	function getContainer()
	{
		return $(".view-private-parties-photos .grouping");
	}

	function getRowWidth()
	{
		return 272;
	}

	function getMaxRows($container)
	{
		return Math.floor($container.parent().width() / getRowWidth()) || 1;
	}

	function leftArrow()
	{
		return $(".view-private-parties-photos a.previous");
	}
	function rightArrow()
	{
		return $(".view-private-parties-photos a.next");
	}

	function previous()
	{
		var rowWidth = getRowWidth();
		var $container = getContainer();
		$container.stop(true, true);
		var leftMax = 0;
		var left = parseInt($container.css("left"));

		if (left < leftMax)
		{
			left += rowWidth;
			$container.animate({
				"left":left+"px"
			});

			rightArrow().show();
			if (left >= leftMax) leftArrow().hide();
		}
		
		return false;
	}

	function next()
	{
		var rowWidth = getRowWidth();
		var $container = getContainer();
		$container.stop(true, true);
		var leftMin = ($container.find(".views-row").length - getMaxRows($container)) * rowWidth * -1;
		var left = parseInt($container.css("left"));

		if (left > leftMin)
		{
			left -= rowWidth;
			$container.animate({
				"left":left+"px"
			});

			leftArrow().show();
			if (left <= leftMin) rightArrow().hide();
		}

		return false;
	}
}(jQuery));
