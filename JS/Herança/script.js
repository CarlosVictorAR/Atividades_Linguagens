class Maquina {
    constructor(maquina) {
        this.maquina = maquina;
    }
    parar (){
        console.log(`${this.maquina} parou\n`);
    }

    iniciar (){
        console.log(`${this.maquina} iniciou\n`);
    }

    reiniciar (){
        console.log(`${this.maquina} reiniciou\n`);
    }
}

class MeuRobo extends Maquina {
}

let robo1 = new MeuRobo("AJKL");
    robo1.iniciar();
    robo1.reiniciar();
    robo1.parar();
