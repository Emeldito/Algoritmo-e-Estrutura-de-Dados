/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.techcoreschool.teste;
import javax.swing.JOptionPane;
/**
 *
 * @author ecovany
 */
public class custodocarro {
    
    
    public static void main(String[] args) {
        
       float pre_carro, custo_compra, imposto;
       
       pre_carro = Float.parseFloat(JOptionPane.showInputDialog("Digite o preço do carro: "));
       
       imposto = (pre_carro * 25) / 100;

       custo_compra = pre_carro + imposto;

       System.out.println("O valor dos impostos é : " + imposto);
       System.out.println("O custo de compra de um carro é : " + custo_compra);

        
    }
}


