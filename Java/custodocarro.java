/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.techcoreschool.teste;
import javax.swing.JOptionPane;

/*
 * Função : O custo de compra de um carro, é a soma do preço do carro com
 * o custo dos impostos (aplicados ao preço do carro). Supondo que o preço
 *  do carro seja 1,500,000,00Mt e que os impostos custam 25% do preço do 
 *  carro, faça um algoritmo que leia o preço do carro e determine o preço
 *  final do automóvel (O custo de compra de um carro).
 *
 * @author Emeldito Covane
 * Data: 27/09/2022
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

