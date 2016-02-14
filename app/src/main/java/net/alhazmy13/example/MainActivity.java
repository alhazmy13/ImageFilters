/*
 *
 *  Written by Alhazmy13  <http://alhazmy13.net>, 2016/2
 *
 *  MainActivity.java / MainActivity is part of ImageFilter
 *  Licensed under the Apache License, Version 2.0
 *
 */

package net.alhazmy13.example;

import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ImageView;
import android.widget.Spinner;
import net.alhazmy13.imagefilter.ImageFilter;


public class MainActivity extends AppCompatActivity implements AdapterView.OnItemSelectedListener{
    private Bitmap bitmap;
    private ImageView originalImage,filteredImage;
    private Spinner filterSpiner;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        initView();
    }

    private void initView() {
        originalImage = (ImageView) findViewById(R.id.originalImageView);
        filteredImage = (ImageView) findViewById(R.id.filteredImageView);
        filterSpiner = (Spinner) findViewById(R.id.filtersSpiner);
        bitmap = BitmapFactory.decodeResource(getResources(),R.drawable.image);
        originalImage.setImageBitmap(bitmap);
        filteredImage.setImageBitmap(ImageFilter.applyFilter(bitmap, ImageFilter.Filter.GRAY));
        filterSpiner.setOnItemSelectedListener(this);

    }

    private Bitmap updateFilter(Bitmap bitmap,int value) {
        switch (value) {
            case 1:
                return ImageFilter.applyFilter(bitmap, ImageFilter.Filter.GRAY);
            case 2:
                return ImageFilter.applyFilter(bitmap, ImageFilter.Filter.RELIEF);
            case 3:
                return ImageFilter.applyFilter(bitmap, ImageFilter.Filter.AVERAGE_BLUR,4);
            case 4:
                return ImageFilter.applyFilter(bitmap, ImageFilter.Filter.OIL,3);
            case 5:
                return ImageFilter.applyFilter(bitmap, ImageFilter.Filter.NEON,200, 50, 100);
            case 6:
                return ImageFilter.applyFilter(bitmap, ImageFilter.Filter.PIXELATE,6);
            case 7:
                return ImageFilter.applyFilter(bitmap, ImageFilter.Filter.TV);
            case 8:
                return ImageFilter.applyFilter(bitmap, ImageFilter.Filter.INVERT);
            case 9:
                return ImageFilter.applyFilter(bitmap, ImageFilter.Filter.BLOCK);
            case 10:
                return ImageFilter.applyFilter(bitmap, ImageFilter.Filter.OLD);
            case 11:
                return ImageFilter.applyFilter(bitmap, ImageFilter.Filter.SHARPEN);
            case 12:
                int width = bitmap.getWidth();
                int height = bitmap.getHeight();
                return ImageFilter.applyFilter(bitmap, ImageFilter.Filter.LIGHT,width / 2, height / 2, Math.min(width / 2, height / 2));
            case 13:
                double radius = (bitmap.getWidth() / 2) * 95 / 100;
                return ImageFilter.applyFilter(bitmap, ImageFilter.Filter.LOMO,radius);
            case 14:
                return ImageFilter.applyFilter(bitmap, ImageFilter.Filter.HDR);
            case 15:
                return ImageFilter.applyFilter(bitmap, ImageFilter.Filter.GAUSSIAN_BLUR,1.2);
            case 16:
                return ImageFilter.applyFilter(bitmap, ImageFilter.Filter.SOFT_GLOW,0.6);
            case 17:
                return ImageFilter.applyFilter(bitmap, ImageFilter.Filter.SKETCH);
            case 18:
                return ImageFilter.applyFilter(bitmap, ImageFilter.Filter.MOTION_BLUR,5,1);
            case 19:
                return ImageFilter.applyFilter(bitmap, ImageFilter.Filter.GOTHAM);
            default:
                return bitmap;
        }
    }

    @Override
    public void onItemSelected(AdapterView<?> adapterView, View view, int i, long l) {
        filteredImage.setImageBitmap(updateFilter(bitmap,i));
    }

    @Override
    public void onNothingSelected(AdapterView<?> adapterView) {

    }
}
