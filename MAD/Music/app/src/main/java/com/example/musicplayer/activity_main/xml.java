<?xml version="1.0" encoding="utf-8"?>
<RelativeLayout xmlns:android="http://schemas.android.com/apk/res/android"
        xmlns:app="http://schemas.android.com/apk/res-auto"
        xmlns:tools="http://schemas.android.com/tools"
        android:layout_width="match_parent"
        android:layout_height="match_parent"
        tools:context=".MainActivity">

<TextView
        android:layout_width="wrap_content"
                android:layout_height="wrap_content"
                android:id="@+id/songs_text"
                android:textColor="@color/black"
                android:text="SONGS"
                android:textSize="20dp"
                android:textStyle="bold"
                android:padding="10dp"
                android:layout_centerHorizontal="true"/>

<TextView
        android:layout_width="wrap_content"
                android:layout_height="wrap_content"
                android:id="@+id/no_songs_text"
                android:text="NO SONGS FOUND"
                android:layout_centerInParent="true"
                android:visibility="gone"/>

<androidx.recyclerview.widget.RecyclerView
        android:layout_width="match_parent"
        android:layout_height="wrap_content"
        android:id="@+id/recycler_view"
        android:layout_below="@id/songs_text"/>



</RelativeLayout>