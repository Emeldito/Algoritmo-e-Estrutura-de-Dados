/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.techcoreschool.teste;
import java.text.SimpleDateFormat;
import java.util.Calendar;

/**
 * Ler e imprimir na tela a data e hora actual
 * 
 * @author Emeldito Covane
 * Data: 27/09/2022
 */
public class data_hora_actual {
    
    public static void main(String[] args) {
      
 String timeStamp = new SimpleDateFormat("yyyy/MM/dd HH:mm:ss").format(Calendar.getInstance().getTime());

        System.out.println(timeStamp);
    }
}