/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.techcoreschool.teste;
import java.text.DateFormat;
import java.util.Date;
/**
 * Ler e imprimir na tela a data actual
 * 
 * @author Emeldito Covane
 * Data: 27/09/2022
 */
public class Data_actual {
    
	public static void main(String[] args) {
		Date data = new Date();
                
                //Formata a data
		DateFormat formataData = DateFormat.getDateInstance();
                
		System.out.println("Data Actual: " +formataData.format(data));
	}
}