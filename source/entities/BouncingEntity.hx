package entities;

/**
 * ...
 * @author Oliver Ross
 */
class BouncingEntity extends Entity
{

	public function new(xp, yp) 
	{
		super(xp, yp);
		makeGraphic(32, 32, 0xff0000ff);
		type = "BouncingEntity";
	}
	
}