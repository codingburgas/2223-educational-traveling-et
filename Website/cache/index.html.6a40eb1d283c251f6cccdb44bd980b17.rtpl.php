<?php if(!class_exists('raintpl')){exit;}?><?php $tpl = new RainTPL;$tpl_dir_temp = self::$tpl_dir;$tpl->assign( $this->var );$tpl->display( dirname("header.html") . ( substr("header.html",-1,1) != "/" ? "/" : "" ) . basename("header.html") );?>

<h1>Scoreboard</h1>

<ol>
<?php $counter1=-1; if( isset($scores) && is_array($scores) && sizeof($scores) ) foreach( $scores as $key1 => $value1 ){ $counter1++; ?>
	<li><?php echo $value1["name"];?> - <?php echo $value1["score"];?></li>
<?php } ?>   
</ol> 


<?php $tpl = new RainTPL;$tpl_dir_temp = self::$tpl_dir;$tpl->assign( $this->var );$tpl->display( dirname("footer.html") . ( substr("footer.html",-1,1) != "/" ? "/" : "" ) . basename("footer.html") );?>