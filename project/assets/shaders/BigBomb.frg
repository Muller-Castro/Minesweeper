uniform sampler2D texture;
uniform int time;
uniform bool is_stroke;

void main()
{
    // lookup the pixel in the texture
    vec4 pixel = texture2D(texture, gl_TexCoord[0].xy);

	if(is_stroke) {
	
		if(pixel.a <= 0) gl_FragColor = pixel;
		else {
		
			gl_FragColor = vec4(1.0, 1.0, 1.0, 0.5);
			
			gl_FragColor.r = sin(time) * 5.5;
			gl_FragColor.g = cos(time) * 5.5;
			
		}
		
	}else {
	
		// multiply it by the color
		gl_FragColor = gl_Color * pixel;
	
	}
	
	// multiply it by the color
    //gl_FragColor = gl_Color * pixel;
	
    // multiply it by the color
    //gl_FragColor = vec4(cos(time) + 0.002, sin(time) + 0.008, cos(time) + 0.004, 1.0);
	
	//gl_FragColor = vec4(1.0, 1.0, 1.0, 1.0);
}