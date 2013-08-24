package ;
import entities.Entity;

/**
 * ...
 * @author Oliver Ross
 */
class StunningEntity extends Entity
{
	public function new(xp, yp) 
	{
		super(xp, yp);
		makeGraphic(32, 32, 0xffffff00);
		type = "StunningEntity";
	}	
}