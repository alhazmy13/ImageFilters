package net.alhazmy13.example;

import android.graphics.Bitmap;
import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;

import net.alhazmy13.imagefilter.ImageFilter;

public class MainActivity extends AppCompatActivity {
    Bitmap bitmap;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        ImageFilter.applyFilter(bitmap, ImageFilter.Filter.GRAY);
    }
}
