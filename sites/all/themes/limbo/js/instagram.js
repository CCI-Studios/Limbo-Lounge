(function($) {
	$(function(){
		$.ajax({
			"type":"GET",
			"url":"https://api.instagram.com/v1/users/578209098/media/recent?count=1&client_id=78088912e63e4e4f9e573f5dd552bbf1",
			"success":success,
			"dataType":"jsonp"
		});
	});

	function success(json)
	{
		if (json && json.data[0] && json.data[0].images && json.data[0].images.low_resolution && json.data[0].images.low_resolution.url)
		{
			var url = json.data[0].images.low_resolution.url;
			$("#block-block-5 img").attr("src", url);
		}
	}
}(jQuery));
