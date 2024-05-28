extends Player


# Called when the node enters the scene tree for the first time.
func _ready():
	pass # Replace with function body.


#We override _physics_process in the C++ portion
#func _physics_process(delta):
	#pass
	
	
# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta):
	var x:float = GetX()#cpp func
	var y:float = GetY()#cpp func
	
	position.x = x;
	position.y = y;
	pass
