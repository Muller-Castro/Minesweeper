uniform sampler2D in_texture;

uniform float in_time;

float rand(in vec2 co)
{
	return fract(sin(dot(co.xy ,vec2(12.9898,78.233))) * 43758.5453);
}

void main()
{
	vec4 pixel = texture2D(in_texture, gl_TexCoord[0].xy);
	
	if(pixel.a <= 0.0) {
		
		if(rand(vec2(gl_TexCoord[0].x * in_time, gl_TexCoord[0].y * in_time)) < 0.8) {
			
			gl_FragColor = vec4(.3, .0, .6, 1.0);
			
		}else {
			
			gl_FragColor = vec4(.8, .0, 1.0, 1.0);
			
		}
		
	}else if((pixel.r >= 1.0) && (pixel.g >= 1.0)) {
		
		if(rand(vec2(gl_TexCoord[0].y * in_time, gl_TexCoord[0].x * in_time)) < 0.5) {
			
			gl_FragColor = vec4(1.0, 1.0, 1.0, 1.0);
			
		}else {
			
			gl_FragColor = vec4(.6, .6, .6, 1.0);
			
		}
	
	}else {
		
		gl_FragColor = vec4(0, 0, 0, 0);
		
	}
}
