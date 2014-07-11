(function($) {
	$(function(){
		var $body = $("body");
		var $tabs = $("#content ul.tabs.primary");

		if ($body.hasClass("logged-in"))
		{
			if ($body.hasClass("appetizers"))
			{
				$tabs.append("<li><a href='/node/add/appetizer-menu-item'>Add Appetizer Item</a></li>");
			}
			if ($body.hasClass("lunch"))
			{
				$tabs.append("<li><a href='/node/add/lunch-menu-item'>Add Lunch Item</a></li>");
			}
			else if ($body.hasClass("dinner"))
			{
				$tabs.append("<li><a href='/node/add/dinner-menu-item'>Add Dinner Item</a></li>");
			}
			else if ($body.hasClass("drinks"))
			{
				$tabs.append("<li><a href='/node/add/drinks-menu-item'>Add Drink Item</a></li>");
			}
			else if ($body.hasClass("events"))
			{
				$tabs.append("<li><a href='/node/add/event'>Add Event</a></li>");
			}
			else if ($body.hasClass("photos"))
			{
				$tabs.append("<li><a href='/node/add/photos'>Add Photos</a></li>");
			}
			else if ($body.hasClass("features"))
			{
				$tabs.append("<li><a href='/node/add/weekly-feature'>Add Weekly Feature</a></li>");
				$tabs.append("<li><a href='/node/add/single-promo'>Add Single Promo</a></li>");
			}
		}
	});
}(jQuery));
