var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

let qtd = lines.shift()

while (qtd != 0) {
    let tam = 0
    let arrayPalavras = []

    for(let i = 0; i < qtd; i++) {
        let palavra = lines.shift()
        arrayPalavras.push(palavra)
        if(palavra.length > tam){
            tam = palavra.length
        }
    }
    arrayPalavras.forEach((item, index) => {
        let sizeJustify = tam - item.length

        for(let i = 0; i < sizeJustify; i++){
            arrayPalavras[index] = ' ' + arrayPalavras[index]
        }
        console.log(arrayPalavras[index]);
    })

    qtd = lines.shift()

    if(qtd > 0){
        console.log();
    }
}