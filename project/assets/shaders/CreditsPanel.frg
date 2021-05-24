uniform float in_time;

void main()
{
	float x = gl_FragCoord.x;
	float y = gl_FragCoord.y;
	
	float speed = 1.5;
	
	gl_FragColor = vec4(
	
		y * 0.02 * cos(in_time * speed) + 0.4,
		x * 0.002 * sin(in_time * speed) + 0.8,
		y * 0.002 * sin(in_time * speed / 0.5) + 0.4,
		.5
		
	);
}
