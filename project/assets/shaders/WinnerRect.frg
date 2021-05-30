/*
	WinnerRect fragment shader by Muller Castro

	MIT License
*/

uniform float in_time;

uniform float speed        = 0.2;
uniform float ring_scale   = 1.4;
uniform float wave_scale   = 2.454;
uniform float random_scale = 4.6;
uniform float noise_scale  = 0.07;

vec3 hsv2rgb(float h, float s, float v)
{
	return (
		(
			clamp(
				abs(fract(h + vec3(0.0, 2.0, 1.0) / 3.0) * 6.0 - 3.0) - 1.0
			,	0.0
			,	1.0
			) - 1.0
		) * s + 1.0
	) * v;
}

vec2 random(vec2 pos)
{ 
	return fract(
		sin(
			vec2(
				dot(pos, vec2(12.9898,78.233))
			,	dot(pos, vec2(-148.998,-65.233))
			)
		) * 43758.5453
	);
}

float value_noise(vec2 pos)
{
	vec2 p = floor(pos);
	vec2 f = fract(pos);

	float v00 = random(p + vec2(0.0, 0.0)).x;
	float v10 = random(p + vec2(1.0, 0.0)).x;
	float v01 = random(p + vec2(0.0, 1.0)).x;
	float v11 = random(p + vec2(1.0, 1.0)).x;

	vec2 u = f * f * (3.0 - 2.0 * f);

	return mix(mix(v00, v10, u.x), mix(v01, v11, u.x), u.y);
}

void main()
{
	if(gl_Color.a > 0.0) {
		
		vec2 UV = gl_FragCoord.xy / (800 * 600);
		
		vec2 shift_uv = UV;
		shift_uv.x   += value_noise(UV * random_scale + sin(in_time * speed));
		shift_uv.y   += sin(cos(in_time) * speed);
		float x       = shift_uv.x + sin(shift_uv.y * wave_scale);
		float f       = mod(x * ring_scale + random(UV).x * noise_scale, 1.0);

		vec3 output_color = hsv2rgb(f, 1.0, 1.0);

		gl_FragColor = vec4(output_color.r, output_color.g, output_color.b, 1.0);
		
	}else {
		
		gl_FragColor = gl_Color;
		
	}
}
