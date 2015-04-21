package scripts;

import com.stencyl.behavior.Script;
import scripts.Design_0_0_StomponEnemies;
import scripts.Design_1_1_Stompable;
import scripts.Design_2_2_Walking;
import scripts.Design_3_3_DieinPitandReload;
import scripts.Design_4_4_Jumping;
import scripts.ActorEvents_0;
import scripts.ActorEvents_2;
import scripts.SceneEvents_0;


//Force all classes to compile since they aren't statically used.
class MyScripts
{
	var s:Script;
	var a:MyAssets;
	
	#if(mobile && !air)
	var stencylPreloader:scripts.StencylPreloader;
	#end
}