/*
	RadialClipping fragment shader by Muller Castro

	MIT License
*/

uniform float in_radius;
uniform float in_angle;

void main()
{
	float diameter = in_radius * 2.0;
	
	vec2 uv = gl_TexCoord[0].xy;
	vec2 v2 = vec2(0.0, 1.0);
	
	float dot_product = uv.x * v2.x + uv.y * v2.y;
	
	float magnitude   = sqrt(uv.x * uv.x + uv.y * uv.y) * sqrt(v2.x * v2.x + v2.y * v2.y);
	
	float angle       = dot_product / magnitude;
	
	float degrees     = degrees(acos(angle));

	if(degrees <= abs(in_angle)) gl_FragColor = vec4(0.9, 0.0, 0.0, 1.0);
	else                         gl_FragColor = vec4(0.0, 1.0, 1.0, 1.0);
}