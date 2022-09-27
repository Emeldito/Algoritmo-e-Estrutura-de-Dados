/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.techcoreschool.teste;
import java.util.Calendar;
import java.util.GregorianCalendar;
import java.util.Scanner;

/**
 * leia pelo teclado o nome e o ano de nascimento de um estudante e em seguida
 * calcule a idade tendo em conta o ano actual.
 * imprimir os dados lidos no seguinte formato: 
 * NOME tem IDADE anos de idade.
 * 
 * @author Emeldito Covane
 * Data: 27/09/2022
 */
public class idade {
    
public static void main(String[]args){

    Calendar cal = GregorianCalendar.getInstance();
    int anoAtual = cal.get(Calendar.YEAR);
    Scanner in = new Scanner(System.in);
        //1) Nome completo
        System.out.println("Nome do Estudante: ");
        String nomeEstudante = in.nextLine();

        //1) Ano de nascimento 
        System.out.println("Ano de nascimento: ");
        int anoNasc = in.nextInt();
        int ano = anoAtual - anoNasc;

        System.out.println(" "+nomeEstudante+ " tem "+ano);
    }
}