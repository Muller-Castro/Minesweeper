uniform sampler2D in_texture;
uniform vec2      in_resolution;
uniform float     in_width;
uniform float     in_time;

float rand(in vec2 co)
{
	return fract(sin(dot(co.xy ,vec2(12.9898,78.233))) * 43758.5453);
}

void main()
{
    float angle = in_time;
	
    vec2 red_offset = vec2(cos(angle), sin(angle));
    angle += radians(120.0);
	
    vec2 green_offset = vec2(cos(angle), sin(angle));
    angle += radians(120.0);
	
    vec2 blue_offset = vec2(cos(angle), sin(angle));

    float offset_size = 0.1 * length(gl_FragCoord.xy - 0.5 * in_resolution);

    offset_size *= in_width / in_resolution.x;

    gl_FragColor = vec4(
	
		texture2D(in_texture, offset_size * red_offset   / in_resolution).r - cos(in_time + rand(vec2(.0, 10.0))),
		texture2D(in_texture, offset_size * green_offset / in_resolution).g + sin(in_time + rand(vec2(.0, 5.0))) ,
		texture2D(in_texture, offset_size * blue_offset  / in_resolution).b + sin(in_time + rand(vec2(.0, 10.0))),
		1.0
		
	);
}
