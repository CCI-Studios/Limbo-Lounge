<?php

$aliases['dev'] = array(
	'uri'=> 'limbo.ccistaging.com',
	'root' => '/home/staging/subdomains/limbo/public_html',
	'remote-host'=> 'host.ccistudios.com',
	'remote-user'=> 'staging',
	'path-aliases'=> array(
		'%files'=> 'sites/default/files',
	),
	'ssh-options'=>'-p 37241'
);


$aliases['live'] = array(
	'uri'=> 'live.limbolounge.ca',
	'root' => '/home/limbo/subdomains/live/public_html',
	'remote-host'=> 'host.lambtonshield.com',
	'remote-user'=> 'limbo',
	'path-aliases'=> array(
		'%files'=> 'sites/default/files',
	)
);

