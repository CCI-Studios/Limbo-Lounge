(function($) {
	$(function(){
		$.ajax({
			"type":"GET",
			"url":"https://api.instagram.com/v1/users/578209098/media/recent?count=4&client_id=78088912e63e4e4f9e573f5dd552bbf1",
			"success":success,
			"dataType":"jsonp"
		});
	});

	function success(json)
	{
		if (json && json.data)
		{
			for (var i=0; i<4; i++)
			{
				if (json.data[i] && json.data[i].images && json.data[i].images.low_resolution && json.data[i].images.low_resolution.url)
				{
					$("#block-block-5 .content a img.default").remove();
					var url = json.data[i].images.low_resolution.url;
					$("#block-block-5 .content a").append("<img src='"+url+"' />");
				}
			}
		}
	}
}(jQuery));
