package JogoDaVelha;

public class Tabuleiro { // Essa classe vai controlar tudo sobre o Tabuleiro desde o desenho até onde é preenchido o tabuleiro durante a partida
    private int[][] tabuleiro= new int[3][3]; // aqui denominei que o tabuleiro tem 3 linha e 3 colunas
    
    public Tabuleiro(){ 
        zerarTabuleiro();   // Esse comando é para limpar o tabuleiro 
    }
    
    public void zerarTabuleiro(){
        for(int linha=0 ; linha<3 ; linha++)
            for(int coluna=0 ; coluna<3 ; coluna++)
                tabuleiro[linha][coluna]=0;
    }
    
    public void exibeTabuleiro(){   // aqui está configurado oque e como será exibido o tabuleiro
        System.out.println();
        for(int linha=0 ; linha<3 ; linha++){
        
            for(int coluna=0 ; coluna<3 ; coluna++){
                
                if(tabuleiro[linha][coluna]==-1){
                    System.out.print(" X "); // X sempre sera para o jogador 1
                }
                if(tabuleiro[linha][coluna]==1){
                    System.out.print(" O "); // O sempre sera para o jogador 2 
                }
                if(tabuleiro[linha][coluna]==0){ // não existem uma coluna zero então não tera uma resposta 
                    System.out.print("   ");
                }
                
                if(coluna==0 || coluna==1)
                    System.out.print("|");
            }
            System.out.println();
        }
                
    }

    public int getPosicao(int[] tentativa){ // aqui são guadado as posições 
        return tabuleiro[tentativa[0]][tentativa[1]];
    }
    
    public void setPosicao(int[] tentativa, int jogador){ //aqui será exibido a posição 
        if(jogador == 1)
            tabuleiro[tentativa[0]][tentativa[1]] = -1;
        else
            tabuleiro[tentativa[0]][tentativa[1]] = 1;
        
        exibeTabuleiro();
    }

    public int checaLinhas(){  // aqui faz a checagem das linhas 
        for(int linha=0 ; linha<3 ; linha++){

            if( (tabuleiro[linha][0] + tabuleiro[linha][1] + tabuleiro[linha][2]) == -3)
                return -1;
            if( (tabuleiro[linha][0] + tabuleiro[linha][1] + tabuleiro[linha][2]) == 3)
                return 1;
        }
        
        return 0;
                
    }
    
    public int checaColunas(){ // aqui faz a chegagem das colunas
        for(int coluna=0 ; coluna<3 ; coluna++){

            if( (tabuleiro[0][coluna] + tabuleiro[1][coluna] + tabuleiro[2][coluna]) == -3)
                return -1;
            if( (tabuleiro[0][coluna] + tabuleiro[1][coluna] + tabuleiro[2][coluna]) == 3)
                return 1;
        }
        
        return 0;
                
    }
    
    public int checaDiagonais(){   // aqui fazemos a checagem das variaveis nas diagonais do tabuleiro
        if( (tabuleiro[0][0] + tabuleiro[1][1] + tabuleiro[2][2]) == -3)
            return -1;
        if( (tabuleiro[0][0] + tabuleiro[1][1] + tabuleiro[2][2]) == 3)
            return 1;
        if( (tabuleiro[0][2] + tabuleiro[1][1] + tabuleiro[2][0]) == -3)
            return -1;
        if( (tabuleiro[0][2] + tabuleiro[1][1] + tabuleiro[2][0]) == 3)
            return 1;
        
        return 0;
    }

    public boolean tabuleiroCompleto(){  // aqui fazemos chegagem de variavei dentro do tabuleiro completo ao fim da partida 
        for(int linha=0 ; linha<3 ; linha++)
            for(int coluna=0 ; coluna<3 ; coluna++)
                if( tabuleiro[linha][coluna]==0 )
                    return false;
        return true;
    }
}
