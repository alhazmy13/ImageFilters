package net.alhazmy13.imagefilter;

import android.graphics.Bitmap;

public class ImageFilter {
	public enum Filter{
		GRAY (1),RELIEF(2),AVERAGE_BLUR(3),
		OIL(4),NEON(5),PIXELATE(6),
		TV(7),INVERT(8),BLOCK(9),OLD(10),
		SHARPEN(11),LIGHT(12),LOMO(13),
		HDR(14),GAUSSIAN_BLUR(15),SOFT_GLOW(16),
		SKETCH(17),MOTION_BLUR(18),GOTHAM(19);

		private final int value;

		Filter(int value){

			this.value = value;
		}

		public int getValue() {
			return value;
		}
	}


	public static Bitmap applyFilter(Bitmap bitmap, Filter filter, Object... options) {
		switch (filter){
			case GRAY:
				return GrayFilter.changeToGray(bitmap);
			case RELIEF:
				return ReliefFilter.changeToRelief(bitmap);
			case AVERAGE_BLUR:
				if (options.length < 1) {
					return BlurFilter.changeToAverageBlur(bitmap, 5);
				}
				return BlurFilter.changeToAverageBlur(bitmap, (Integer)options[0]); // maskSize
			case OIL:
				if (options.length < 1) {
					return OilFilter.changeToOil(bitmap, 5);
				}
				return OilFilter.changeToOil(bitmap, (Integer)options[0]);
			case NEON:
				if (options.length < 3) {
					return NeonFilter.changeToNeon(bitmap, 200, 50, 100);
				}
				return NeonFilter.changeToNeon(bitmap, (Integer)options[0], (Integer)options[1], (Integer)options[2]);
			case PIXELATE:
				if (options.length < 1) {
					return PixelateFilter.changeToPixelate(bitmap, 10);
				}
				return PixelateFilter.changeToPixelate(bitmap, (Integer)options[0]);
			case TV:
				return TvFilter.changeToTV(bitmap);
			case INVERT:
				return InvertFilter.chageToInvert(bitmap);
			case BLOCK:
				return BlockFilter.changeToBrick(bitmap);
			case OLD:
				return OldFilter.changeToOld(bitmap);
			case SHARPEN:
				return SharpenFilter.changeToSharpen(bitmap);
			case LIGHT:
				if (options.length < 3) {
					int width = bitmap.getWidth();
					int height = bitmap.getHeight();
					return LightFilter.changeToLight(bitmap, width / 2, height / 2, Math.min(width / 2, height / 2));
				}
				return LightFilter.changeToLight(bitmap, (Integer)options[0],
						(Integer)options[1], (Integer)options[2]); // centerX, centerY, radius
			case LOMO:
				if (options.length < 1) {
					double radius = (bitmap.getWidth() / 2) * 95 / 100;
					return LomoFilter.changeToLomo(bitmap, radius);
				}
				return LomoFilter.changeToLomo(bitmap, (Double)options[0]);
			case HDR:
				return HDRFilter.changeToHDR(bitmap);
			case GAUSSIAN_BLUR:
				if (options.length < 1) {
					return GaussianBlurFilter.changeToGaussianBlur(bitmap, 1.2);
				}
				return GaussianBlurFilter.changeToGaussianBlur(bitmap, (Double)options[0]); // sigma
			case SOFT_GLOW:
				if (options.length < 1) {
					return SoftGlowFilter.softGlowFilter(bitmap, 0.6);
				}
				return SoftGlowFilter.softGlowFilter(bitmap, (Double)options[0]);
			case SKETCH:
				return SketchFilter.changeToSketch(bitmap);
			case MOTION_BLUR:
				if (options.length < 2) {
					return MotionBlurFilter.changeToMotionBlur(bitmap, 5, 1);
				}
				return MotionBlurFilter.changeToMotionBlur(bitmap, (Integer)options[0], (Integer)options[1]);
			case GOTHAM:
				return GothamFilter.changeToGotham(bitmap);
			default:
				return bitmap;
		}
	}

}