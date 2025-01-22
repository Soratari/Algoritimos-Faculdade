package JogoDaVelha;

import java.util.Scanner;

public class Computador extends Jogador // Essa classe herda tudo da classe jogador 

{ public static Scanner entrada; public Computador(int jogador){
	
	super(jogador); System.out.println("Jogador 'Computador' criado!"); } // essa mensagem mostra que o jogador computador foi criada

	public void jogar(Tabuleiro tabuleiro){ Tentativa(tabuleiro); tabuleiro.setPosicao(tentativa, jogador); }

	public void Tentativa(Tabuleiro tabuleiro)

		{ do
			{ do{ tentativa[0] =(int)(Math.random()*3); 
		
				if( tentativa[0] > 3 ||tentativa[0] < 1) System.out.print(""); }

			while( tentativa[0] > 3 ||tentativa[0] < 1);

			do{ tentativa[1] = (int)(Math.random()*3); 
			
				if(tentativa[1] > 3 ||tentativa[1] < 1) System.out.print(""); }

			while(tentativa[1] > 3 ||tentativa[1] < 1);

			tentativa[0]--; 
			tentativa[1]--;

			if(!checaTentativa(tentativa, tabuleiro)) System.out.print(""); }
		while( !checaTentativa(tentativa, tabuleiro) ); }

}

